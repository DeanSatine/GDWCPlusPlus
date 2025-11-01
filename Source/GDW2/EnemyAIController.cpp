#include "EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "AI/NavigationSystemBase.h"
#include "NavigationSystem.h"
#include "GameFramework/Character.h"

void AEnemyAIController::BeginPlay()
{
    Super::BeginPlay();

    // Find all actors tagged "Waypoint"
    UGameplayStatics::GetAllActorsWithTag(GetWorld(), FName("Waypoint"), Waypoints);

    CurrentWaypointIndex = 0;
    MoveToNextWaypoint();
}

void AEnemyAIController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn || Waypoints.Num() == 0) return;

    FVector Distance = ControlledPawn->GetActorLocation() - Waypoints[CurrentWaypointIndex]->GetActorLocation();

    if (Distance.Size() < 100.f)
    {
        CurrentWaypointIndex = (CurrentWaypointIndex + 1) % Waypoints.Num();
        MoveToNextWaypoint();
    }
}

void AEnemyAIController::MoveToNextWaypoint()
{
    if (Waypoints.Num() == 0) return;

    MoveToActor(Waypoints[CurrentWaypointIndex]);
}
