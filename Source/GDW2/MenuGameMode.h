#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MenuGameMode.generated.h"

UCLASS()
class GDW2_API AMenuGameMode : public AGameModeBase
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

public:
    // Expose to editor so you can assign your WBP_MainMenu
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UUserWidget> MainMenuWidgetClass;

private:
    UPROPERTY()
    UUserWidget* MainMenuWidget;
};
