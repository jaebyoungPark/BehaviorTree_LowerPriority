// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_PrintNum.h"

EBTNodeResult::Type UBTTaskNode_PrintNum::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	TestVar += 1;
	UE_LOG(LogTemp, Warning, TEXT("Print%d : %d."), NumToSet, TestVar);

	return EBTNodeResult::Failed;
}
