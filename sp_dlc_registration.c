// Program registers 537 globals at index 11 starting from Global_2883584
void main() // Position - 0x0
{
	int iVar0;
	int iVar1;

	MISC::START_SAVE_DATA(&Global_2883692, 1, 1);
	MISC::REGISTER_INT_TO_SAVE(&Global_2883692, "aFakeSavedInt");
	MISC::STOP_SAVE_DATA();
	MISC::SET_BIT(&Global_4525702, 0);
	iVar0 = 1;
	iVar1 = MISC::GET_SIZE_OF_SAVE_DATA(1);
	iVar0 != iVar1;
}

