


#include "ShadowMapFunctionLibrary.h"


/// <summary>
/// ローカル座標への射影変換行列
/// </summary>
/// <param name="InTransform"></param>
/// <returns></returns>
TArray<FLinearColor> UShadowMapFunctionLibrary::GetInverseMatrix(const FTransform& InTransform)
{
    TArray<FLinearColor> ColorArray;
    ColorArray.SetNum(4);

    const FMatrix InverseMatrix = InTransform.ToMatrixWithScale().Inverse();
    for (int i = 0; i < 4; i++) 
    {
        FLinearColor ResultColor;
        ResultColor.R = InverseMatrix.M[i][0];
        ResultColor.G = InverseMatrix.M[i][1];
        ResultColor.B = InverseMatrix.M[i][2];
        ResultColor.A = InverseMatrix.M[i][3];
        ColorArray[i] = ResultColor;
    }
    return ColorArray;
}



