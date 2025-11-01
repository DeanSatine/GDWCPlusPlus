#include "EnemyAI.h"
#include "EnemyAIController.h"

AEnemyAI::AEnemyAI()
{
    PrimaryActorTick.bCanEverTick = true;

    // Let AI control itself automatically
    AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    // Assign our custom controller
    AIControllerClass = AEnemyAIController::StaticClass();
}

void AEnemyAI::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemyAI::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemyAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
