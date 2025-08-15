// Copyright Narrative Tools 2025.


#include "Widgets/NarrativeGameplayHUD.h"
#include "UnrealFramework/NarrativePlayerController.h"

UNarrativeGameplayHUD::UNarrativeGameplayHUD()
{

}

void UNarrativeGameplayHUD::NativeConstruct()
{
	Super::NativeConstruct();

	OwnerPC = Cast<ANarrativePlayerController>(GetOwningPlayer());
}

UNarrativeMenu* UNarrativeGameplayHUD::OpenMenu(TSubclassOf<UNarrativeMenu> MenuClass)
{
	if (IsValid(MenuClass) && IsValid(WidgetStack) && IsValid(OwnerPC))
	{
		if (const UNarrativeMenu* MenuCDO = GetDefault<UNarrativeMenu>(MenuClass))
		{
			if (OwnerPC->HasAnyMatchingGameplayTags(MenuCDO->BlockTags))
			{
				return nullptr;
			}
		}

		//None of the menus in narrative ever add themselves to the screen multiple times, but we may want config for this in future 
		if (UCommonActivatableWidget* CurrentWidget = WidgetStack->GetActiveWidget())
		{
			if (CurrentWidget->GetClass() == MenuClass)
			{
				return nullptr;
			}
		}

		return WidgetStack->AddWidget<UNarrativeMenu>(MenuClass);
	}

	return nullptr; 
}
