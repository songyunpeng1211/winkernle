#include<ntddk.h>
#include<ntstrsafe.h>

VOID DriverUnload(PDRIVER_OBJECT pDriverObject)
{
	DbgPrint("Goodbye!\n");
}

NTSTATUS 
DriverEntry(
	IN PDRIVER_OBJECT pDriverObject,
	IN PUNICODE_STRING pRegistryPath)
{
	NTSTATUS status;

	DbgPrint("Hello\n");
	pDriverObject->DriverUnload = DriverUnload;
	return STATUS_SUCCESS;
}