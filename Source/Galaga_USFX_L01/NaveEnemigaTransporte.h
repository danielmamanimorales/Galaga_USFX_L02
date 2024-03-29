// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaTransporte.generated.h"






UCLASS()
class GALAGA_USFX_L01_API ANaveEnemigaTransporte : public ANaveEnemiga
{
	GENERATED_BODY()
	
private: 
	float capacidadCargaPeso;
	float capacidadCargaVolumen;

public:
	ANaveEnemigaTransporte();
	FORCEINLINE float GetCapacidadCargaPeso() const { return capacidadCargaPeso; }
	FORCEINLINE float GetCapacidadCargaVolumen() const { return capacidadCargaVolumen; }

	FORCEINLINE void SetCapacidadCargaPeso(float _capacidadCargaPeso) { capacidadCargaPeso = _capacidadCargaPeso; }
	FORCEINLINE void SetCapacidadCargaVolumen(float _capacidadCargaVolumen) { capacidadCargaVolumen = _capacidadCargaVolumen; }

protected:
	virtual void Mover();
	virtual void Disparar();
	virtual void Destruirse();
	virtual void Escapar();

};
