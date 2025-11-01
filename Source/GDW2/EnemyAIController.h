#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyAIController.generated.h"

UCLASS()
class GDW2_API AEnemyAIController : public AAIController
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY()
    TArray<AActor*> Waypoints;

    int32 CurrentWaypointIndex = 0;

    void MoveToNextWaypoint();
};
