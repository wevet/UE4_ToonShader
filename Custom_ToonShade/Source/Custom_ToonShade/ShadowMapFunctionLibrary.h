

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShadowMapFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CUSTOM_TOONSHADE_API UShadowMapFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "ShadowMapLibrary")
	static TArray<FLinearColor> GetInverseMatrix(const FTransform& InTransform);

};
