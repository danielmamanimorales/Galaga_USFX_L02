// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	//// Create the mesh component
	//mallaNaveEnemiga = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	NaveEnemigaMesh->SetStaticMesh(ShipMesh.Object);
    
}

void ANaveEnemigaCaza::Mover(float DeltaTime)
{
    // Obtiene la posici�n actual del actor
    FVector PosicionActual = GetActorLocation();

    // Genera un desplazamiento negativo en el eje X
    float DesplazamientoX = GetVelocidad() * DeltaTime; // Ajusta la velocidad seg�n lo necesario

    // Establece la nueva posici�n con el desplazamiento en X y mantiene las coordenadas Y y Z
    FVector NuevaPosicion = FVector(PosicionActual.X + DesplazamientoX, PosicionActual.Y, PosicionActual.Z);


    // Establece la nueva posici�n del actor
    SetActorLocation(NuevaPosicion);

}

void ANaveEnemigaCaza::Disparar()
{
}

void ANaveEnemigaCaza::Destruirse()
{
}

void ANaveEnemigaCaza::Escapar()
{
}
