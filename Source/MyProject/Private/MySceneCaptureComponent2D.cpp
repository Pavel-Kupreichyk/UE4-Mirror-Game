// Fill out your copyright notice in the Description page of Project Settings.


#include "MySceneCaptureComponent2D.h"

void UMySceneCaptureComponent2D::BeginPlay()
{
	Super::BeginPlay();

	float Width = 2000.0F;//1.92F;
	float Height = 1000.0F;//1.09F;
	float MinZ = -100.0F;
	float MaxZ = 100.0F;
	float HalfFOV = PI/4;
	bUseCustomProjectionMatrix = true;
	FMatrix ProjectionMatrix = FReversedZPerspectiveMatrix(HalfFOV, 16.0f, 9.0f, GNearClippingPlane);
	//FMatrix out(
	//	FPlane(1.0f / FMath::Tan(HalfFOV), 0.0f, 0.0f, 0.0f),
	//	FPlane(0.0f, Width / FMath::Tan(HalfFOV) / Height, 0.0f, 0.0f),
	//	FPlane(0.0f, 0.0f, MaxZ / (MaxZ - MinZ), 1.0f),// ((MinZ == MaxZ) ? (1.0f - Z_PRECISION) : MaxZ / (MaxZ - MinZ))
	//	FPlane(0.0f, 0.0f, -MinZ * MaxZ / (MaxZ - MinZ), 0.0f));//-MinZ * ((MinZ == MaxZ) ? (1.0f - Z_PRECISION) : MaxZ / (MaxZ - MinZ))
	//FMatrix transform(
	//	FPlane(1.0f, 0.0f, 0.0f, 0.0f),
	//	FPlane(0.0f, 2.0f, 0.0f, 0.0f),
	//	FPlane(0.0f, 0.0f, -0.5f, 1.0f),
	//	FPlane(0.0f, 0.0f, 0.5f, 0.0f));
	//ProjectionMatrix.Mirror(EAxis::X, EAxis::Z);
	//FMatrix res = out*transform;
	//ProjectionMatrix.M[1][1] *= -1.0F;
	ProjectionMatrix.M[0][0] *= -1.0F;
	//ProjectionMatrix.M[2][2] *= -1.0F;
	//ProjectionMatrix.M[2][2] *= -1.0F;
	CustomProjectionMatrix = ProjectionMatrix;// *transform;
}