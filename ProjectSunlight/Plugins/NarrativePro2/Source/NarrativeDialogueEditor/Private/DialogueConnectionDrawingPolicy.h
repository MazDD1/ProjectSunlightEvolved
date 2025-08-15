// Copyright Narrative Tools 2022. 

#pragma once

#include "CoreMinimal.h"
#include "ConnectionDrawingPolicy.h"

class FNarrativeGeometryHelper
{

public: 

	static FVector2D HorizontalBottomOf(const FGeometry& SomeGeometry)
	{
		const FVector2D GeometryDrawSize = SomeGeometry.GetDrawSize();
		return FVector2D(
			SomeGeometry.AbsolutePosition.X + (GeometryDrawSize.X / 2.f),
			SomeGeometry.AbsolutePosition.Y + GeometryDrawSize.Y);
	};

	static FVector2D HorizontalTopOf(const FGeometry& SomeGeometry)
	{
		const FVector2D GeometryDrawSize = SomeGeometry.GetDrawSize();
		return FVector2D(
			SomeGeometry.AbsolutePosition.X + (GeometryDrawSize.X / 2.f),
			SomeGeometry.AbsolutePosition.Y);
	};
};

class FDialogueGraphConnectionDrawingPolicy : public FConnectionDrawingPolicy
{

public:
	FDialogueGraphConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float InZoomFactor, const FSlateRect& InClippingRect, FSlateWindowElementList& InDrawElements, UEdGraph* InGraphObj)
		: FConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, InZoomFactor, InClippingRect, InDrawElements)
	{
		TransitionColor = FLinearColor(0.92f, 0.72f, 0.2f, 1.f);
		TransitionTime = 1000.f;
		BacklinkImage = ArrowImage;
		ArrowImage = nullptr; // dont draw arrows
		
	}

	virtual FVector2D ComputeSplineTangent(const FVector2D& Start, const FVector2D& End) const override;
	void DetermineWiringStyle(UEdGraphPin* OutputPin, UEdGraphPin* InputPin, /*inout*/ FConnectionParams& Params);
	virtual void DrawConnection(int32 LayerId, const FVector2D& Start, const FVector2D& End, const FConnectionParams& Params) override;
	virtual void DrawPreviewConnector(const FGeometry& PinGeometry, const FVector2D& StartPoint, const FVector2D& EndPoint, UEdGraphPin* Pin) override;

	virtual void DrawSplineWithArrow(const FGeometry& StartGeom, const FGeometry& EndGeom, const FConnectionParams& Params);

	const FSlateBrush* BacklinkImage;

	FLinearColor TransitionColor;
	float TransitionTime; //in ms
};