#region Static Var
	var Static_0 = 0;
	var Static_1 = 0;
	int Static_2 = 0;
	int Static_3 = 0;
	int Static_4 = 0;
	int Static_5 = 0;
	int Static_6 = 0;
	int Static_7 = 0;
	int Static_8 = 0;
	int Static_9 = 0;
	int Static_10 = 0;
	int Static_11 = 0;
	float Static_12 = 0f;
	var Static_13 = 0;
	var Static_14 = 0;
	int Static_15 = 0;
	char* Static_16 = 0;
	var Static_17 = 0;
	var Static_18 = 0;
	float Static_19 = 0f;
	var Static_20 = 0;
	var Static_21 = 0;
	var Static_22 = 0;
	float Static_23 = 0f;
	float Static_24 = 0f;
	var Static_25 = 0;
	int Static_26 = 0;
	var Static_27 = 0;
	var Static_28 = 0;
	float Static_29 = 0f;
	float Static_30 = 0f;
	float Static_31 = 0f;
	var Static_32 = 0;
	var Static_33 = 0;
	var Static_34 = 0;
	var Static_35 = 0;
	var Static_36 = 0;
	int Static_37 = 0;
	int Static_38 = 0;
	int Static_39 = 0;
	int Static_40 = 0;
	var Static_41 = 0;
	var Static_42 = 0;
	var Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = -1082130432;
	int Static_47 = 0;
	int Static_48 = 0;
	bool Static_49 = 0;
	bool Static_50 = 0;
	float Static_51 = 0f;
	float Static_52 = 0f;
	char* Static_53 = 0;
	int Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	int Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	int Static_62 = 0;
	int Static_63 = 0;
	bool Static_64 = 0;
	var ScriptArg_0 = 0;
	var ScriptArg_1 = 0;
	var ScriptArg_2 = 0;
	var ScriptArg_3 = 0;
	var ScriptArg_4 = 0;
	var ScriptArg_5 = -1082130432;
#endregion

void main() // Position - 0x0
{
	Static_2 = 1;
	Static_3 = 134;
	Static_4 = 134;
	Static_5 = 1;
	Static_6 = 1;
	Static_7 = 1;
	Static_8 = 134;
	Static_9 = 1;
	Static_10 = 12;
	Static_11 = 12;
	Static_12 = 0.001f;
	Static_15 = -1;
	Static_16 = "NULL";
	Static_19 = 0f;
	Static_23 = -0.0375f;
	Static_24 = 0.17f;
	Static_26 = 3;
	Static_29 = 80f;
	Static_30 = 140f;
	Static_31 = 180f;
	Static_37 = 1;
	Static_38 = 65;
	Static_39 = 49;
	Static_40 = 64;
	Static_47 = -1;
	Static_48 = -1;
	Static_51 = 1.7f;
	Static_52 = 0f;
	Static_53 = "";
	Static_62 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_187();

	Static_41 = { ScriptArg_0 };
	func_186();
	func_185();
	func_180(Static_47, 0, 0);
	BUILTIN::SETTIMERA(0);
	func_179();
	func_175();

	while (true)
	{
		BUILTIN::WAIT(0);
		func_174(Static_47);
		func_173();
		func_171();
		func_164();
		func_180(Static_47, 0, 0);
		func_186();
		func_9();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_8())
			func_1();
	}
}

void func_1() // Position - 0x106
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2() // Position - 0x127
{
	if (!func_4() && !func_3() && Global_2686094)
		Global_4718592.f_139000 = 0;
}

bool func_3() // Position - 0x155
{
	return Global_2685153.f_693;
}

bool func_4() // Position - 0x164
{
	return Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_185 != 0;
}

void func_5() // Position - 0x17B
{
	Global_2685153.f_758 = 1;
}

bool func_6() // Position - 0x18B
{
	return Global_2685153.f_737;
}

bool func_7() // Position - 0x19A
{
	return IS_BIT_SET(Global_2685153.f_2, 11);
}

bool func_8() // Position - 0x1AB
{
	return IS_BIT_SET(Global_2686095.f_1.f_2810, 3);
}

void func_9() // Position - 0x1BE
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(Static_41.f_1, 0))
		func_187();

	if (Static_49)
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			func_187();

	func_163();
	bVar0 = true;

	switch (Static_59)
	{
		case 4:
			func_162();
			return;
	
		case 5:
			func_159();
			return;
	
		case 6:
			func_157();
			return;
	
		case 7:
			func_156();
			return;
	
		case 8:
			func_155();
			return;
	
		case 9:
			func_153();
			return;
	
		case 10:
			func_152();
			func_149();
			func_148();
			return;
	
		case 11:
			func_147();
			return;
	
		case 12:
			break;
	
		default:
			bVar0 = false;
			break;
	}

	if (!bVar0)
		return;

	if (!(Static_59 == 12))
		return;

	switch (Static_59.f_1)
	{
		case 1:
			if (!func_146())
			{
				func_128();
				func_149();
			}
			break;
	
		case 2:
			func_126();
			break;
	
		case 12:
			func_113();
			break;
	
		case 3:
			func_10();
			break;
	
		default:
			break;
	}
}

void func_10() // Position - 0x2D9
{
	var uVar0;
	char* sVar2;
	char* sVar3;
	int iVar61;

	if (!IS_BIT_SET(Global_1950714.f_3, 27))
		PED::SET_PED_TO_RAGDOLL(Static_41.f_1, 3000, 3500, 0, 1, 1, 0);

	Global_1944727 = true;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
	
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			BUILTIN::WAIT(0);
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_112(&uVar0, false, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 1);
	
		while (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_ENTITY_FADING(PLAYER::PLAYER_PED_ID()))
		{
			BUILTIN::WAIT(0);
		}
	
		if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PLAYER::PLAYER_PED_ID()))
			func_187();
	
		MISC::CLEAR_BIT(&(Global_1950714.f_3), 27);
		func_94(PLAYER::PLAYER_ID(), false, 57344, 0);
		Global_2635562.f_2982 = 1;
	
		if (IS_BIT_SET(Global_1950714, 15))
			MISC::CLEAR_BIT(&Global_1950714, 15);
	
		if (IS_BIT_SET(Global_1950714.f_2, 6))
			MISC::CLEAR_BIT(&(Global_1950714.f_2), 6);
	
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			Global_2635562.f_2983 = 1;
		else
			Global_2635562.f_2983 = 0;
	
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	
		if (func_89(true))
			func_76(0);
	
		func_74(true);
		func_187();
	}

	if (Static_64)
		func_187();

	sVar2 = "";
	sVar3.f_3 = 1064514355;
	sVar3.f_30 = 1148829696;
	sVar3.f_31 = 1148829696;
	sVar3.f_52 = 1148829696;
	iVar61 = 7;

	switch (func_68())
	{
		case 0:
			if (func_66() != 2)
				iVar61 = 0;
			else
				iVar61 = 1;
			break;
	
		case 1:
			if (!func_65(126))
				iVar61 = 2;
			else
				iVar61 = 3;
			break;
	
		case 2:
			if (!func_64(4))
			{
				if (func_65(58))
					iVar61 = 4;
			
				if (func_65(59))
					iVar61 = 5;
			
				if (iVar61 == 7)
					if (!func_63())
						iVar61 = 4;
					else
						iVar61 = 5;
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}

	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			sVar3 = "SAVEM_Default@";
			sVar3.f_1 = "M_GetOut_R";
			sVar3.f_2 = "M_GetOut_R_CAM";
			sVar3.f_5 = { -814.181f, 181.1f, 75.74f };
			sVar3.f_8 = { 0f, 0f, 21.1994f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			sVar3 = "SAVECountryside@";
			sVar3.f_1 = "M_GetOut_countryside";
			sVar3.f_2 = "M_GetOut_countryside_CAM";
			sVar3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			sVar3.f_8 = { 0f, 0f, 29.7938f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			sVar3 = "SWITCH@FRANKLIN@BED";
			sVar3.f_1 = "Sleep_GetUp_RubEyes";
			sVar3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			sVar3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			sVar3.f_8 = { 0f, 0f, -179.653f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			sVar3 = "SAVEBighouse@";
			sVar3.f_1 = "F_GetOut_r_bighouse";
			sVar3.f_2 = "F_GetOut_r_bighouse_CAM";
			sVar3.f_5 = { -1.049f, 524.283f, 170.064f };
			sVar3.f_8 = { 0f, 0f, 24f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			sVar3 = "SAVECountryside@";
			sVar3.f_1 = "T_GetOut_countryside";
			sVar3.f_2 = "T_GetOut_countryside_CAM";
			sVar3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			sVar3.f_8 = { 0f, 0f, 29.7938f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			sVar3 = "SAVEVeniceB@";
			sVar3.f_1 = "T_GetOut_r_veniceB";
			sVar3.f_2 = "T_GetOut_r_veniceB_CAM";
			sVar3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			sVar3.f_8 = { 0f, 0f, 36.25f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			sVar3 = "SAVECouch@";
			sVar3.f_1 = "T_GetOut_couch";
			sVar3.f_2 = "T_GetOut_couch_CAM";
			sVar3.f_5 = { 94.53f, -1289.86f, 28.27f };
			sVar3.f_8 = { 0f, 0f, 29.7938f };
			sVar3.f_4 = joaat("MOTIONSTATE_IDLE");
			break;
	}

	if (!ENTITY::IS_ENTITY_DEAD(Static_41.f_1, 0))
		ENTITY::SET_ENTITY_COORDS(Static_41.f_1, sVar3.f_5, 1, 0, 0, 1);

	BUILTIN::WAIT(500);
	TEXT_LABEL_ASSIGN_STRING(&(sVar3.f_11), "", 16);
	sVar3.f_15 = -1f;
	func_12(sVar2, &sVar3, "");
	func_11(126, 1);
	func_187();
}

void func_11(int iParam0, int iParam1) // Position - 0x760
{
	int iVar0;

	if (iParam1 < 1)
		return;

	if (Global_60769[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_60769[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_60769[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = iVar0 + iParam1;
		STATS::STAT_SET_INT(Global_60769[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2) // Position - 0x7BD
{
	float fVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	var uVar186;
	var uVar189;
	float fVar192;
	var uVar193;
	var uVar194;
	var uVar195;
	var uVar198;
	float fVar199;
	var uVar200;
	var uVar201;
	var uVar204;
	float fVar207;
	var uVar208;
	var uVar209;
	var uVar210;
	var uVar211;
	var uVar214;
	float fVar215;
	var uVar216;
	var uVar217;
	var uVar220;
	float fVar223;
	var uVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;

	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);

	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, 1, 0, 0, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
	BUILTIN::WAIT(0);
	MISC::SET_GAME_PAUSED(1);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	func_58(uParam1->f_5, uParam1->f_8.f_2, 0, 1);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;

	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
			bVar2 = false;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
				bVar2 = false;
		}
	
		if (!CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_OUT(0);
	
		BUILTIN::WAIT(0);
	}

	func_55();

	if (!func_54(uParam1->f_22, 0f, 0f, 0f, false))
	{
		PATHFIND::SET_ROADS_IN_AREA((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, BUILTIN::VMAG(uParam1->f_22) + 25f, 0, 0, 0, 0, 0, 0, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, BUILTIN::VMAG(uParam1->f_22) + 25f, 1, 0, 0, 0);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}

	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	MISC::SET_GAME_PAUSED(0);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, 0);
	PED::INSTANTLY_FILL_PED_POPULATION();
	VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
	func_52();

	while (func_51())
	{
		BUILTIN::WAIT(0);
	}

	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		CAM::DO_SCREEN_FADE_IN(250);

	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar4, 0);
		uVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
	
		if (uParam1->f_4 != joaat("MOTIONSTATE_IDLE"))
			iVar6 = iVar6 | 2;
	
		func_49(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		uVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, 1);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
	}
	else
	{
		iVar4 = -1;
	}

	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_48(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}

	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = func_68();
		iVar175 = -1;
		sVar176 = "";
	
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL" /* GXT: Michael */;
				break;
		
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN" /* GXT: Franklin */;
				break;
		
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR" /* GXT: Trevor */;
				break;
		
			default:
				break;
		}
	
		func_47(&uVar9, iVar175, PLAYER::PLAYER_PED_ID(), sVar176, 0, 1);
	}

	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
	
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
		
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_41(0);
			iVar179 = MISC::GET_GAME_TIMER();
		
			if (iVar179 >= Global_45437 - 500)
				func_40(4000);
		
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
				if (!bVar7)
					if (fVar0 >= uParam1->f_15)
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
							bVar7 = true;
		
			iVar182 = 0;
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar177)))
			{
				iVar183 = PAD::GET_CONTROL_VALUE(2, 195) - 128;
				iVar184 = PAD::GET_CONTROL_VALUE(2, 196) - 128;
			
				if (iVar183 < 64 && iVar183 > -64 && iVar184 < 64 && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
		
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						uVar186 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						uVar189 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar186, uVar189, 1);
						fVar185 = func_21(fVar185, 0.001f, fVar192 - 0.75f);
					
						if (fVar185 < 0f)
							fVar185 = 0.001f;
					
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), func_68(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
					
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
					
						if (uParam1->f_57 == 999f)
							uParam1->f_56 = 0f;
					
						if (uParam1->f_57 == 999f)
						{
							uVar195 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
							uVar198 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar199 = uVar195.f_2;
							uVar200 = uVar198;
							uParam1->f_57 = fVar199 - uVar200;
						
							if (uParam1->f_57 < 360f)
								uParam1->f_57 = uParam1->f_57 + 360f;
						
							if (uParam1->f_57 > 360f)
								uParam1->f_57 = uParam1->f_57 - 360f;
						}
					
						uVar193 = uParam1->f_56;
						uVar194 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(uVar193, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uVar194);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(uVar193);
						CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(uVar194);
						uVar201 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						uVar204 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar207 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar201, uVar204, 1);
						uVar208 = BUILTIN::ROUND(fVar207 * 1000f);
						uParam1->f_32 = 1;
					}
				
					if (uParam1->f_32)
					{
						CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
						func_16(&(uParam1->f_34), true, true, true, false, false, 0);
					}
				}
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar178)) || iVar182)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				
					switch (uParam1->f_4)
					{
						case joaat("MOTIONSTATE_IDLE"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MOTIONSTATE_IDLE"), 1, 0, 0);
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
							break;
					
						case joaat("MOTIONSTATE_WALK"):
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MOTIONSTATE_WALK"), 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0, 0);
						
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
									uParam1->f_30 = 0f;
							
								if (uParam1->f_31 == 999f)
								{
									uVar211 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
									uVar214 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar215 = uVar211.f_2;
									uVar216 = uVar214;
									uParam1->f_31 = fVar215 - uVar216;
								
									if (uParam1->f_31 < 360f)
										uParam1->f_31 = uParam1->f_31 + 360f;
								
									if (uParam1->f_31 > 360f)
										uParam1->f_31 = uParam1->f_31 - 360f;
								}
							
								uVar209 = uParam1->f_30;
								uVar210 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(uVar209, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uVar210);
								uVar217 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
								uVar220 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar223 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar217, uVar220, 1);
								uVar224 = BUILTIN::ROUND(fVar223 * 1000f);
								CAM::RENDER_SCRIPT_CAMS(0, 1, uVar224, 0, 0, 0);
							}
							break;
					
						default:
							break;
					}
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
		
			BUILTIN::WAIT(0);
		}
	}

	if (!func_54(uParam1->f_22, 0f, 0f, 0f, false))
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL((uParam1->f_5 + uParam1->f_19) - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());

	bVar225 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
	bVar226 = 0;

	if (uParam1->f_32)
	{
		CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	
		if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
			bVar226 = 1;
	}

	if (bVar225 || bVar226)
	{
		while (bVar225 || bVar226 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bVar225;
			bVar226;
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 300, &iVar227);
			func_15(0, 301, &iVar227);
			BUILTIN::WAIT(0);
			bVar225 = CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS();
			bVar226 = false;
		
			if (uParam1->f_32)
			{
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			
				if (!func_16(&(uParam1->f_34), true, true, true, false, true, 0))
					bVar226 = true;
			}
		}
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);

	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(uVar5, 0);
	func_13(&(uParam1->f_34));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, uVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	}

	sParam0 = sParam0;
}

void func_13(var uParam0) // Position - 0x11FC
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0) // Position - 0x1217
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
		CAM::DESTROY_CAM(uParam0->f_1, 0);

	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
		CAM::DESTROY_CAM(uParam0->f_2, 0);

	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
		CAM::DESTROY_CAM(uParam0->f_3, 0);

	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		CAM::DESTROY_CAM(uParam0->f_4, 0);
}

void func_15(int iParam0, int iParam1, var uParam2) // Position - 0x126F
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*uParam2 = *uParam2 + 1;
}

bool func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6) // Position - 0x1288
{
	var uVar0;
	var uVar3;
	var uVar6;
	var uVar9;
	var uVar12;
	var uVar15;
	var uVar18;
	var uVar21;

	switch (*uParam0)
	{
		case 0:
			func_17();
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				uVar0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
			
				if (bParam1)
					uVar0 = { uVar0 + (ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * F2V(MISC::GET_FRAME_TIME())) };
			
				uVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, uVar0) };
				uVar6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				uVar9 = { uVar6 + uParam0->f_9 };
				uVar12 = { uVar9 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				uVar15 = { -BUILTIN::SIN(uVar9.f_2) * BUILTIN::COS(uVar9), BUILTIN::COS(uVar9.f_2) * BUILTIN::COS(uVar9), BUILTIN::SIN(uVar9) };
				uVar18 = { -BUILTIN::SIN(uVar12.f_2) * BUILTIN::COS(uVar12), BUILTIN::COS(uVar12.f_2) * BUILTIN::COS(uVar12), BUILTIN::SIN(uVar12) };
				uVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
					uParam0->f_3 = CAM::CREATE_CAMERA(joaat("TIMED_SPLINE_CAMERA"), 0);
			
				uParam0->f_1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1)
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, uVar3, 1);
				else
					CAM::SET_CAM_COORD(uParam0->f_1, uVar0);
			
				CAM::SET_CAM_ROT(uParam0->f_1, uVar6, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, uVar21);
				uParam0->f_2 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
			
				if (bParam1 && !bParam4)
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, uVar3 + (uVar18 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }), 1);
				else
					CAM::SET_CAM_COORD(uParam0->f_2, uVar0 + (uVar15 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 }));
			
				CAM::SET_CAM_ROT(uParam0->f_2, uVar6, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, uVar21);
			
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), 1);
				
					if (bParam1 && !bParam4)
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, uVar3 + (uVar18 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }), 1);
					else
						CAM::SET_CAM_COORD(uParam0->f_4, uVar0 + (uVar15 * { uParam0->f_12, uParam0->f_12, uParam0->f_12 } * { uParam0->f_13, uParam0->f_13, uParam0->f_13 }));
				
					CAM::SET_CAM_ROT(uParam0->f_4, uVar6, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uVar21);
				}
			
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_1, 0, 2);
				
					if (iParam6 == 0)
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
			
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
	
		case 1:
			func_17();
		
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= uParam0->f_7 + uParam0->f_16)
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
							
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
							
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
					
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
		
			if (MISC::GET_GAME_TIMER() >= uParam0->f_7 + uParam0->f_15)
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			
				return true;
			}
			break;
	
		case 2:
			return true;
	}

	return false;
}

void func_17() // Position - 0x162B
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_18();
}

void func_18() // Position - 0x163B
{
	Global_24407.f_134 = 1;
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1649
{
	uParam0->f_9 = { uParam1 };
}

void func_20(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x165B
{
	uParam0->f_5 = uParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2) // Position - 0x1693
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16BA
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_23007 = false;
	Global_23009 = false;
	Global_23014 = false;
	Global_23991 = 0;
	Global_23993 = false;
	Global_23997 = 0;
	Global_2883585 = 0;
	return func_23(sParam2, iParam3, false);
}

bool func_23(char* sParam0, int iParam1, bool bParam2) // Position - 0x1708
{
	Global_23001 = 0;

	if (Global_23000 == 0 || Global_23002 == 2)
	{
		if (Global_23000 != 0)
		{
			if (iParam1 > Global_23002)
			{
				if (Global_23007 == false)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_21627.f_1 = 3;
					Global_23000 = 0;
					Global_23001 = 1;
					Global_23053 = false;
					Global_22996 = 0;
					Global_22997 = 0;
					Global_23011 = false;
					Global_23010 = false;
					Global_21626 = 0;
				}
				else
				{
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_37(8, -1))
			return 0;
	
		Global_23076 = { Global_23070 };
		func_36();
		Global_22289 = { Global_22454 };
		Global_23006 = Global_23007;
		Global_23013 = Global_23014;
		Global_2883586 = Global_2883585;
		Global_23015 = { Global_23031 };
		Global_23008 = Global_23009;
		Global_23990 = Global_23991;
		Global_23998 = { Global_24004 };
		Global_23992 = Global_23993;
		Global_23994 = Global_23995;
		Global_23996 = Global_23997;
		Global_22619.f_370 = Global_23989;
		Global_22619.f_368 = Global_23987;
		Global_22619.f_369 = Global_23988;
		Global_22996 = Global_22997;
	
		if (Global_23006)
		{
			MISC::CLEAR_BIT(&Global_9463, 20);
			MISC::CLEAR_BIT(&Global_9464, 17);
			MISC::CLEAR_BIT(&Global_9465, 0);
		
			if (bParam2)
			{
				func_34();
			
				if (Global_10302[Global_21627 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_21627.f_1 > 3)
					return 0;
			}
		
			if (Global_21593 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_33())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_80305)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_32())
			{
				return 0;
			}
			else
			{
				switch (Global_21627.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_9463, 9))
					return 0;
			}
		
			func_31();
			Global_23010 = bParam2;
		}
	
		Global_23002 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_22619, sParam0, 24);
		Global_21866 = 0;
		func_30();
		func_24();
		return 1;
	}

	if (Global_23000 == 5)
		return 0;

	if (iParam1 < Global_23002 || iParam1 == Global_23002)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_38();
	}

	return 0;
}

void func_24() // Position - 0x19D6
{
	if (!func_25())
		return;

	if (Global_23006)
	{
		TEXT_LABEL_COPY(&(Global_1979847.f_1), { Global_22619 }, 4);
		Global_1979847 = Global_8778;
		Global_1979847.f_6 = Global_23010;
	}
}

bool func_25() // Position - 0x1A0D
{
	if (!Global_262145.f_28523 /* Tunable: NPC_PHONE_TELEMETRY_TRACKING_ENABLED */)
		return false;

	if (!Global_80305)
		return false;

	if (PLAYER::PLAYER_ID() == func_29())
		return false;

	if (func_26(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

bool func_26(int iParam0) // Position - 0x1A70
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_28(8))
			return true;
	
		if (Global_2733138.f_6061.f_1 > 0)
			return true;
	}

	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1) // Position - 0x1AA7
{
	return IS_BIT_SET(Global_1892798[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_28(int iParam0) // Position - 0x1ABF
{
	return IS_BIT_SET(Global_2733138.f_6050, iParam0);
}

bool func_29() // Position - 0x1AD1
{
	return -1;
}

void func_30() // Position - 0x1ADA
{
	int iVar0;

	for (iVar0 = 0; iVar0 <= 69; iVar0 = iVar0 + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_21868[iVar0 /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_23000 = 1;
}

void func_31() // Position - 0x1B0A
{
	Global_23053 = Global_23052;
	Global_23047 = Global_23048;
	Global_23094 = { Global_23082 };
	Global_23100 = { Global_23088 };
	Global_23055 = Global_23054;
	Global_23124 = { Global_23106 };
	Global_23130 = { Global_23112 };
	Global_23136 = { Global_23118 };
	Global_23142 = { Global_23148 };
	Global_8778 = Global_8779;
	Global_8780 = Global_8781;
	Global_23011 = Global_23012;
	Global_23013 = Global_23014;
	Global_23015 = { Global_23031 };
	Global_23004 = Global_23005;
	Global_24016 = false;
	Global_23049 = 0;
	Global_23050 = false;
	MISC::CLEAR_BIT(&Global_9464, 16);
}

bool func_32() // Position - 0x1B9F
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

bool func_33() // Position - 0x1BC6
{
	int iVar0;
	int iVar1;

	if (Global_80305)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER") || iVar1 == joaat("WEAPON_REMOTESNIPER"))
				iVar0 = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
			return true;
		else
			return false;

	return true;
}

void func_34() // Position - 0x1C5F
{
	if (func_35(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[0 /*29*/])
				Global_21627 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[1 /*29*/])
				Global_21627 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114931.f_28058[2 /*29*/])
				Global_21627 = 2;
			else
				Global_21627 = 0;
	}
	else
	{
		Global_21627 = func_68();
	
		if (Global_21627 == 145)
			Global_21627 = 3;
	
		if (Global_80305)
			Global_21627 = 3;
	
		if (Global_21627 > 3)
			Global_21627 = 3;
	}
}

bool func_35(int iParam0) // Position - 0x1D01
{
	return Global_44886 == iParam0;
}

void func_36() // Position - 0x1D0F
{
	int iVar0;

	for (iVar0 = 0; iVar0 <= 15; iVar0 = iVar0 + 1)
	{
		Global_22289[iVar0 /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_22289[iVar0 /*10*/].f_1), "", 24);
		Global_22289[iVar0 /*10*/].f_7 = 0;
		Global_22289[iVar0 /*10*/].f_8 = 0;
	}

	Global_22289.f_161 = -99;
	Global_22289.f_162 = { 0f, 0f, 0f };
}

bool func_37(int iParam0, int iParam1) // Position - 0x1D65
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1677594.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1677594.f_1048, iParam0);
}

void func_38() // Position - 0x1D9D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24011 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21627.f_1 == 9 || Global_21626 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_23000 = 6;
		Global_21627.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_23000 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1DF4
{
	Global_22454 = { *uParam0 };
	Global_8779 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_23070, sParam2, 24);
	Global_23989 = iParam5;

	if (iParam3 == 0)
	{
		Global_23987 = 1;
		Global_23985 = 0;
	}
	else
	{
		Global_23987 = 0;
		Global_23985 = 1;
	}

	if (iParam4 == 0)
	{
		Global_23988 = 1;
		Global_23986 = 0;
	}
	else
	{
		Global_23988 = 0;
		Global_23986 = 1;
	}
}

void func_40(int iParam0) // Position - 0x1E4A
{
	Global_45437 = MISC::GET_GAME_TIMER() + iParam0;
}

void func_41(int iParam0) // Position - 0x1E5C
{
	if (func_46())
		return;

	if (!(Global_21627.f_1 == 1))
	{
		if (func_45(0))
			func_42(iParam0);
	
		MISC::SET_BIT(&Global_9464, 2);
	}
}

void func_42(int iParam0) // Position - 0x1E8F
{
	if (func_46())
		return;

	if (Global_21859)
		if (func_44())
			func_43(true, true);
		else
			func_43(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_32())
		Global_21627.f_1 = 3;
}

void func_43(bool bParam0, bool bParam1) // Position - 0x1F19
{
	if (bParam0)
	{
		if (func_45(0))
		{
			Global_21859 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21564);
		
			Global_21555 = { Global_21573[Global_21572 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
		}
	}
	else if (Global_21859 == true)
	{
		Global_21859 = false;
		Global_21555 = { Global_21580[Global_21572 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21564);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21555);
	}
}

bool func_44() // Position - 0x1F8D
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_45(int iParam0) // Position - 0x1F9B
{
	if (iParam0 == 1)
		if (Global_21627.f_1 > 3)
			if (IS_BIT_SET(Global_9463, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_21627.f_1 > 3)
		return true;

	return false;
}

bool func_46() // Position - 0x1FF2
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_47(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x2001
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = uParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_80305)
	{
		if (!PED::IS_PED_INJURED(uParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
	
		if (!PED::IS_PED_INJURED(uParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
	}
}

void func_48(char* sParam0, int iParam1) // Position - 0x209C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_49(var uParam0, int iParam1) // Position - 0x20B3
{
	if (func_50(iParam1, 1))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_0", 0f, 1f);

	if (func_50(iParam1, 2))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_1", 0f, 1f);

	if (func_50(iParam1, 4))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_2", 0f, 1f);

	if (func_50(iParam1, 8))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_3", 0f, 1f);

	if (func_50(iParam1, 16))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_4", 0f, 1f);

	if (func_50(iParam1, 32))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_5", 0f, 1f);

	if (func_50(iParam1, 64))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_6", 0f, 1f);

	if (func_50(iParam1, 128))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_7", 0f, 1f);

	if (func_50(iParam1, 256))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_8", 0f, 1f);

	if (func_50(iParam1, 512))
		PED::APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_9", 0f, 1f);

	func_50(iParam1, 0);
}

bool func_50(int iParam0, int iParam1) // Position - 0x21AA
{
	return iParam0 && iParam1 != false;
}

bool func_51() // Position - 0x21B9
{
	if (Global_102454 == 13 || Global_102454 == 10 || Global_102454 == 11 || Global_102454 == 12)
		return false;

	return true;
}

void func_52() // Position - 0x21F7
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 8; iVar0 = iVar0 + 1)
	{
		if (Global_99362[iVar0 /*17*/] && !Global_99362[iVar0 /*17*/].f_1)
			if (Global_99362[iVar0 /*17*/].f_3 == 0)
				if (Global_99362[iVar0 /*17*/].f_5 != 88 && Global_99362[iVar0 /*17*/].f_5 != 89 && Global_99362[iVar0 /*17*/].f_5 != 92)
					func_53(Global_99362[iVar0 /*17*/].f_5, true);
	}
}

void func_53(int iParam0, bool bParam1) // Position - 0x227E
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_96414[iParam0 /*2*/] = true;
	else
		Global_96414[iParam0 /*2*/] = false;
}

bool func_54(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, bool bParam6) // Position - 0x22BC
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_55() // Position - 0x2303
{
	func_56();
	func_74(true);
}

void func_56() // Position - 0x2314
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		iVar1 = Global_45897[iVar0 /*5*/];
	
		if (!(iVar1 == -1))
			func_180(1, iVar1, 1);
	}

	iVar2 = 0;

	for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1)
	{
		if (Global_45866[iVar2 /*6*/] == 0)
			func_57(iVar2);
	}
}

void func_57(int iParam0) // Position - 0x2374
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_45866[iParam0 /*6*/].f_1 == 0))
		if (Global_45866[iParam0 /*6*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_46109 = 0;

	Global_45866[iParam0 /*6*/] = 13;
	Global_45866[iParam0 /*6*/].f_1 = 0;
	Global_45866[iParam0 /*6*/].f_2 = 0;
	Global_45866[iParam0 /*6*/].f_3 = 0;
	Global_45866[iParam0 /*6*/].f_4 = 0;
	Global_45864 = Global_45864 - 1;

	if (Global_45864 < 0)
		Global_45864 = 0;
}

int func_58(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x23F7
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_62(0);
		MISC::CLEAR_AREA(uParam0, 5f, 1, 0, 0, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
	
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0, 4500f, 0);
		BUILTIN::WAIT(0);
		MISC::CLEAR_AREA(uParam0, 5000f, 1, 0, 0, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(uParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam0, 5000f);
		func_61();
		func_60();
		BUILTIN::SETTIMERA(0);
		func_62(1);
	
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0, 4500f, 0))
			{
				BUILTIN::WAIT(0);
			
				if (BUILTIN::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
	
		BUILTIN::SETTIMERA(0);
	
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			BUILTIN::WAIT(0);
		
			if (BUILTIN::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(0);
			
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				return 0;
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					STREAMING::NEW_LOAD_SCENE_STOP();
			
				MISC::SET_GAME_PAUSED(0);
				BUILTIN::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
			
				if (iParam5 == 1)
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				else
					BUILTIN::SETTIMERA(5000);
			
				MISC::POPULATE_NOW();
			}
		}
	
		while (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !func_59() && BUILTIN::TIMERA() < 1500)
		{
			BUILTIN::WAIT(0);
		}
	
		if (BUILTIN::TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
	
		if (iParam4 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0, &(uParam0.f_2), 0, 0);
			MISC::CLEAR_AREA(uParam0, 5f, 1, 0, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3);
				}
			}
		}
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_62(0);
		return 1;
	}

	func_62(0);
	return 0;
}

bool func_59() // Position - 0x2616
{
	return !Global_79095.f_553;
}

void func_60() // Position - 0x2626
{
	Global_79095.f_553 = 1;
	Global_79095.f_554 = 0;
}

void func_61() // Position - 0x263E
{
	int iVar0;

	for (iVar0 = 0; iVar0 < 68; iVar0 = iVar0 + 1)
	{
		Global_79095[iVar0] = 0;
	}
}

void func_62(int iParam0) // Position - 0x2662
{
	int iVar0;

	iVar0 = 0;

	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_102454.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&(Global_102454.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_102454.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&(Global_102454.f_20), 2);
		}
	}
}

bool func_63() // Position - 0x26B3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

bool func_64(int iParam0) // Position - 0x26D1
{
	return IS_BIT_SET(Global_114931.f_7236[iParam0], 0);
}

bool func_65(int iParam0) // Position - 0x26E6
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_99.f_58[iParam0];
}

int func_66() // Position - 0x2713
{
	if (Global_41824[11] == 1)
		return 4;

	if (!func_67(21))
		return 0;

	if (!func_65(130))
		return 1;

	if (!func_65(131))
		return 2;

	if (!func_67(22))
		return 1;

	if (!func_67(49))
		return 3;

	if (!func_67(28))
		return 1;

	return 3;
}

bool func_67(int iParam0) // Position - 0x2791
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

int func_68() // Position - 0x27BD
{
	func_69();
	return Global_114931.f_2370.f_539.f_4321;
}

void func_69() // Position - 0x27D6
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_72(Global_114931.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_71(PLAYER::PLAYER_PED_ID());
		
			if (func_70(iVar0) && !func_35(14) || Global_113879)
			{
				if (Global_114931.f_2370.f_539.f_4321 != iVar0 && func_70(Global_114931.f_2370.f_539.f_4321))
					Global_114931.f_2370.f_539.f_4322 = Global_114931.f_2370.f_539.f_4321;
			
				Global_114931.f_2370.f_539.f_4323 = iVar0;
				Global_114931.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114931.f_2370.f_539.f_4321 != 145)
				Global_114931.f_2370.f_539.f_4323 = Global_114931.f_2370.f_539.f_4321;
		
			return;
		}
	}

	Global_114931.f_2370.f_539.f_4321 = 145;
}

bool func_70(int iParam0) // Position - 0x28D3
{
	return iParam0 < 3;
}

int func_71(var uParam0) // Position - 0x28DF
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		for (iVar0 = 0; iVar0 <= 2; iVar0 = iVar0 + 1)
		{
			if (func_72(iVar0) == iVar1)
				return iVar0;
		}
	}

	return 145;
}

int func_72(int iParam0) // Position - 0x291C
{
	if (func_70(iParam0))
		return func_73(iParam0);
	else
		iParam0 != 145;

	return 0;
}

int func_73(int iParam0) // Position - 0x2941
{
	return Global_2339[iParam0 /*29*/];
}

void func_74(bool bParam0) // Position - 0x2950
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_46089))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_46089))
			AUDIO::STOP_AUDIO_SCENE(&Global_46089);

	if (CAM::DOES_CAM_EXIST(Global_46077))
	{
		if (CAM::IS_CAM_SHAKING(Global_46077))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_46077, 0f);
			CAM::STOP_CAM_SHAKING(Global_46077, 1);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_46089, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_46105, "", 16);
	func_75();
}

void func_75() // Position - 0x2A29
{
	Global_46076 = false;
	Global_46077 = 0;
	Global_46078 = 0;
	Global_46079 = 30000;
	Global_46080 = 0f;
	Global_46082 = 0f;
	Global_46081 = 0f;
	Global_46083 = 1f;
	Global_46084 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_46085, "", 16);
}

void func_76(int iParam0) // Position - 0x2A5E
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18102 /* Tunable: BIKER_MC_POINTS_PASS_OUT_DRUNK */;
			break;
	
		case 1:
			iVar0 = Global_262145.f_18092 /* Tunable: BIKER_MC_POINTS_WIN_MINIGAME */;
			break;
	
		case 2:
			iVar0 = Global_262145.f_18103 /* Tunable: BIKER_MC_POINTS_RIDE_IN_FORMATION */;
			break;
	
		case 3:
			iVar0 = Global_262145.f_18095 /* Tunable: BIKER_MC_POINTS_DESTROY_PRODUCT */;
			break;
	
		case 4:
			iVar0 = Global_262145.f_18091 /* Tunable: BIKER_MC_POINTS_ROB_SHOP */;
			break;
	
		case 6:
			iVar0 = 3;
			break;
	
		case 7:
			iVar0 = Global_262145.f_18106 /* Tunable: BIKER_MC_POINTS_DESTROY_MEMBERS_PV */;
			break;
	
		case 8:
			iVar0 = Global_262145.f_18107 /* Tunable: BIKER_MC_POINTS_NOT_IN_MC */;
			break;
	
		case 9:
			iVar0 = Global_262145.f_18110 /* Tunable: BIKER_MC_POINTS_KILLED_BY_RIVAL_MC */;
			break;
	
		case 22:
			iVar0 = Global_262145.f_18111 /* Tunable: BIKER_MC_POINTS_DRIVE_CAR */;
			break;
	
		case 23:
			iVar0 = Global_262145.f_18104 /* Tunable: BIKER_MC_POINTS_RIDE_BIKE_IN_MC */;
			break;
	
		case 25:
			iVar0 = Global_262145.f_18956 /* Tunable: BIKER_MC_POINTS_STEAL_MC_BIKER */;
			break;
	
		case 26:
			iVar0 = Global_262145.f_18955 /* Tunable: BIKER_MC_POINTS_STEAL_PRESIDENT_BIKE */;
			break;
	}

	if (iVar0 != 0)
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_87(func_88()), func_86(func_88()), func_85(), func_84(), iParam0, iVar0);

	func_83(iVar0);
	func_77(iVar0);
}

void func_77(int iParam0) // Position - 0x2B83
{
	int iVar0;

	iVar0 = func_82(3971, -1);
	iVar0 = iVar0 + iParam0;

	if (iVar0 < 0)
		iVar0 = 0;

	if (iVar0 > 9999)
		iVar0 = 9999;

	Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_10.f_473 = iVar0;
	func_78(3971, iVar0, -1, 1);
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2BCF
{
	int iVar0;

	if (iParam0 != 18486)
	{
		iVar0 = func_79(iParam0, iParam2);
	
		if (iVar0 != 0)
			STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_79(int iParam0, int iParam1) // Position - 0x2BFD
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_80(iParam1));
}

int func_80(int iParam0) // Position - 0x2C12
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;

	if (iVar0 == -1)
	{
		iVar1 = func_81();
	
		if (iVar1 > -1)
		{
			Global_2741524 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741524 = 1;
		}
	}

	return iVar0;
}

int func_81() // Position - 0x2C46
{
	return Global_1574927;
}

int func_82(int iParam0, int iParam1) // Position - 0x2C52
{
	var uVar0;
	int iVar1;

	if (iParam0 != 18486)
	{
		uVar0 = func_79(iParam0, iParam1);
	
		if (STATS::STAT_GET_INT(uVar0, &iVar1, -1))
			return iVar1;
	}

	return 0;
}

void func_83(int iParam0) // Position - 0x2C81
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1892798[iVar0 /*615*/].f_10.f_472 = Global_1892798[iVar0 /*615*/].f_10.f_472 + iParam0;

	if (Global_1892798[iVar0 /*615*/].f_10.f_472 < -9999)
		Global_1892798[iVar0 /*615*/].f_10.f_472 = 9999;
	else if (Global_1892798[iVar0 /*615*/].f_10.f_472 > 9999)
		Global_1892798[iVar0 /*615*/].f_10.f_472 = 9999;
}

int func_84() // Position - 0x2CFB
{
	if (Global_1948263.f_3 != 0)
		return Global_1948263.f_3;

	return -1;
}

int func_85() // Position - 0x2D17
{
	if (Global_1948263.f_2 != 0)
		return Global_1948263.f_2;

	return -1;
}

int func_86(bool bParam0) // Position - 0x2D33
{
	if (bParam0 == func_29())
		return -1;

	return Global_1892798[bParam0 /*615*/].f_10.f_9[1];
}

int func_87(bool bParam0) // Position - 0x2D58
{
	if (bParam0 == func_29())
		return -1;

	return Global_1892798[bParam0 /*615*/].f_10.f_9[0];
}

bool func_88() // Position - 0x2D7D
{
	return Global_1892798[PLAYER::PLAYER_ID() /*615*/].f_10;
}

bool func_89(bool bParam0) // Position - 0x2D92
{
	return func_90(PLAYER::PLAYER_ID(), bParam0);
}

bool func_90(int iParam0, bool bParam1) // Position - 0x2DA4
{
	return func_91(iParam0, bParam1, 1);
}

int func_91(int iParam0, bool bParam1, int iParam2) // Position - 0x2DB5
{
	bool bVar0;

	if (!func_93(iParam0))
		return 0;

	if (!bParam1)
		if (func_92(iParam0, iParam2))
			return 0;

	bVar0 = Global_1892798[iParam0 /*615*/].f_10;

	if (func_93(bVar0) && Global_1892798[bVar0 /*615*/].f_10.f_433 == iParam2)
		return 1;

	return 0;
}

bool func_92(bool bParam0, int iParam1) // Position - 0x2E11
{
	if (func_93(bParam0))
		if (func_93(Global_1892798[bParam0 /*615*/].f_10))
			if (Global_1892798[bParam0 /*615*/].f_10 == bParam0 && Global_1892798[bParam0 /*615*/].f_10.f_433 == iParam1)
				return true;

	return false;
}

bool func_93(bool bParam0) // Position - 0x2E60
{
	int iVar0;

	iVar0 = bParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

void func_94(int iParam0, bool bParam1, int iParam2, int iParam3) // Position - 0x2E82
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(0);

	if (func_111())
		if (bParam1)
			return;
		else
			iParam3 = 1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != 0;
		bVar3 = iParam2 & 4 != 0;
		bVar4 = iParam2 & 8 != 0;
		bVar5 = iParam2 & 16 != 0;
		bVar6 = iParam2 & 32 != 0;
		bVar7 = iParam2 & 64 != 0;
		bVar8 = iParam2 & 128 != 0;
		bVar9 = iParam2 & 256 != 0;
		bVar10 = iParam2 & 512 != 0;
		bVar11 = iParam2 & 1024 != 0;
		bVar12 = iParam2 & 2048 != 0;
		bVar13 = iParam2 & 4096 != 0;
		bVar14 = iParam2 & 8192 != 0;
		bVar15 = iParam2 & 16384 != 0;
		bVar16 = iParam2 & 32768 != 0;
		bVar17 = iParam2 & 65536 != 0;
		bVar18 = iParam2 & 131072 != 0;
		bVar19 = iParam2 & 262144 != 0;
		bVar20 = iParam2 & 524288 != 0;
		bVar21 = iParam2 & 1048576 != 0;
		bVar22 = iParam2 & 2097152 != 0;
		bVar23 = iParam2 & 4194304 != 0;
		bVar24 = iParam2 & 8388608 != 0;
		bVar25 = iParam2 & 16777216 != 0;
	
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			bVar1 = false;
	
		if (!func_109())
		{
			bVar26 = false;
		
			if (bParam1 == true)
				bVar26 = true;
		
			if (bVar16 == false && !bVar21)
				bVar26 = true;
		
			if (bVar10 == true)
				bVar26 = true;
		
			if (bVar26)
				return;
		}
	
		bVar18;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1)
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
				return;
		
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
		
			if (!bVar20)
			{
				if (bVar19 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				else if (bVar14 || !func_107(PLAYER::PLAYER_ID(), 0) && !func_106() && !func_105(PLAYER::PLAYER_ID()))
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
			
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
				
					Global_2658294[iParam0 /*468*/].f_258 = 0;
				}
			}
		
			if (bParam1)
			{
				if (bVar1)
				{
					func_102(0, 0, 0);
				
					if (bVar25)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_101(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
					if (!bVar22)
						ENTITY::SET_ENTITY_COLLISION(uVar27, 1, 0);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, 0);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, 0);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, 1);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, 0);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uVar27))
					PED::FINALIZE_HEAD_BLEND(uVar27);
			
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_100();
					func_99();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!bVar23;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2658294[iParam0 /*468*/].f_259 = 0;
			
				if (!bVar24)
					bVar3 = true;
			
				if (Global_2698364)
				{
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(1);
					Global_2698364 = false;
				}
			
				if (Global_2635562.f_2982)
					Global_2635562.f_2982 = 0;
			}
			else
			{
				if (!func_101(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
					
						if (!bVar16)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uVar27, 1);
					}
				
					if (func_98(*Global_4718592.f_199277))
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, 1);
				}
			
				if (func_95(true))
					bVar10 = false;
			
				if (bVar10)
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
			
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
			
				if (bVar3)
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar27);
			}
		
			iVar28 = 0;
		
			if (bVar2)
				iVar28 = iVar28 | 2;
		
			if (bVar3)
				iVar28 = iVar28 | 4;
		
			if (bVar4)
				iVar28 = iVar28 | 8;
		
			if (bVar5)
				iVar28 = iVar28 | 16;
		
			if (bVar6)
				iVar28 = iVar28 | 32;
		
			if (bVar7)
				iVar28 = iVar28 | 64;
		
			if (bVar8)
				iVar28 = iVar28 | 128;
		
			if (bVar9)
				iVar28 = iVar28 | 256;
		
			if (bVar10)
				iVar28 = iVar28 | 512;
		
			if (bVar11)
				iVar28 = iVar28 | 1024;
		
			if (bVar12)
				iVar28 = iVar28 | 2048;
		
			if (bVar13)
				iVar28 = iVar28 | 4096;
		
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_95(bool bParam0) // Position - 0x3337
{
	if (bParam0 && Global_1575064)
		if (func_96())
			return false;
		else
			return true;

	return Global_1575064;
}

bool func_96() // Position - 0x3363
{
	if (func_97())
		return true;

	return Global_1575067;
}

bool func_97() // Position - 0x337E
{
	if (Global_1575064 || Global_1575070)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_DEATHMATCH_CONTROLER")) != 0)
			return true;

	return false;
}

bool func_98(int iParam0) // Position - 0x33A9
{
	return iParam0 == 17;
}

void func_99() // Position - 0x33B6
{
	var uVar0;

	Global_2673274.f_1101 = 0;
	Global_2673274.f_1102 = 0;
	Global_2673274.f_1103 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2673274.f_1108 = -1;
	Global_2673274.f_1109 = 0;
	Global_2635562.f_2993 = { uVar0 };
}

void func_100() // Position - 0x3403
{
	Global_2635562.f_703 = 0;
	Global_2635562.f_3036 = 0;
	Global_2635562.f_516 = 0;
	Global_2635562.f_607 = 0;
	Global_2658294[PLAYER::PLAYER_ID() /*468*/].f_221 = 0;
	Global_2635562.f_2991 = 0;
}

bool func_101(var uParam0) // Position - 0x3441
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (iVar0 == 0)
			return true;
	}

	return false;
}

void func_102(int iParam0, int iParam1, int iParam2) // Position - 0x3472
{
	int iVar0;
	int iVar1;

	ENTITY::IS_ENTITY_DEAD(iParam1, 0);

	if (iParam0 == 1)
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			if (PED::IS_PED_A_PLAYER(iParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
					iVar0 = 1;

	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_104();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_107(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(iParam0, iParam1, 1);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(iParam0, iParam1);
		func_103(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}
}

void func_103(int iParam0, int iParam1) // Position - 0x3542
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 != 0)
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
}

void func_104() // Position - 0x355E
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (iVar0 = 0; iVar0 < 8; iVar0 = iVar0 + 1)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_105(int iParam0) // Position - 0x35B6
{
	if (func_107(iParam0, 0))
		return true;

	if (func_106())
		if (iParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_106() // Position - 0x35F5
{
	return IS_BIT_SET(Global_2621446, 3);
}

bool func_107(int iParam0, int iParam1) // Position - 0x3603
{
	bool bVar0;

	if (!func_93(iParam0))
		return false;

	if (iParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_108(-1, false) == 8;
	else
		bVar0 = Global_1845299[iParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;

	return bVar0;
}

int func_108(int iParam0, bool bParam1) // Position - 0x365C
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;

	if (iVar1 == -1)
		iVar1 = func_81();

	if (Global_1575072[iVar1] == 1)
	{
		bParam1;
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574921[iVar1];
		bParam1;
	}

	return iVar0;
}

bool func_109() // Position - 0x369D
{
	if (func_110() == 0)
		return true;

	return false;
}

int func_110() // Position - 0x36B2
{
	return Global_1574634.f_18;
}

bool func_111() // Position - 0x36C0
{
	if (IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_882, 2) && !(Global_2686095.f_2847.f_220 == -1))
		return true;

	return false;
}

void func_112(var uParam0, bool bParam1, bool bParam2) // Position - 0x36F1
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
			if (!bParam2)
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			else
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*uParam0 = MISC::GET_GAME_TIMER();
	
		uParam0->f_1 = 1;
	}
}

void func_113() // Position - 0x3736
{
	var uVar0;

	if (Static_49)
		return;

	Static_41.f_4 = 0;

	if (!func_114(Global_45897[Static_63 /*5*/].f_2))
		return;

	uVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	Static_59 = 5;
	Static_54.f_2 = BUILTIN::TIMERA() + uVar0;
}

bool func_114(int iParam0) // Position - 0x3779
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;

	iVar0 = func_125();

	if (iVar0 == -2)
		return false;

	if (PED::IS_PED_INJURED(Static_41.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Static_41.f_1))
			return false;
	
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Static_41.f_1))
			return false;
	
		if (func_121(Static_41.f_1))
			return false;
	}

	if (Global_45897[Static_63 /*5*/].f_3 < 3 && Global_45897[Static_63 /*5*/].f_3 != 0 && Global_45897[Static_63 /*5*/].f_3 > Global_45897[Static_63 /*5*/].f_4)
		return false;

	if (Global_45897[Static_63 /*5*/].f_4 < 9 && Global_45897[Static_63 /*5*/].f_4 != 0 && Global_45897[Static_63 /*5*/].f_4 > Global_45897[Static_63 /*5*/].f_3)
		return false;

	sVar1 = func_120(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		return false;

	if (func_121(Static_41.f_1))
		return false;

	STREAMING::REQUEST_CLIP_SET(sVar1);

	if (func_117(Static_41.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
	
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
		
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
		
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
		
			default:
				break;
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
		
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				BUILTIN::WAIT(0);
			}
		
			if (!PED::IS_PED_INJURED(Static_41.f_1))
			{
				if (Static_41.f_5 == -1f)
					TASK::TASK_PLAY_ANIM(Static_41.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				else
					TASK::TASK_PLAY_ANIM(Static_41.f_1, sVar2, sVar3, Static_41.f_5, -1.5f, -1, 48, 0, 0, 0, 0);
			
				Static_53 = sVar3;
			}
		}
	}

	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
		return false;

	if (PED::IS_PED_INJURED(Static_41.f_1))
		return false;

	PED::SET_PED_MOVEMENT_CLIPSET(Static_41.f_1, sVar1, 0.75f);

	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		PED::SET_PED_STRAFE_CLIPSET(Static_41.f_1, "move_ped_strafing_firstperson@drunk");

	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Static_41.f_1, 0, sVar1, "idle", 2f, 1);
	Static_59.f_2 = sVar1;
	Static_50 = true;
	sVar4 = 0;

	switch (func_71(Static_41.f_1))
	{
		case 0:
			sVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
	
		case 1:
			sVar4 = "FACIALS@P_M_ONE@BASE";
			break;
	
		case 2:
			sVar4 = "FACIALS@P_M_TWO@BASE";
			break;
	
		default:
			if (PED::IS_PED_A_PLAYER(Static_41.f_1))
				if (!func_115())
					sVar4 = "FACIALS@GEN_MALE@BASE";
				else
					sVar4 = "FACIALS@GEN_FEMALE@BASE";
			else if (PED::IS_PED_MALE(Static_41.f_1))
				sVar4 = "FACIALS@GEN_MALE@BASE";
			else
				sVar4 = "FACIALS@GEN_FEMALE@BASE";
			break;
	}

	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Static_41.f_1, "mood_drunk_1", sVar4);
	PED::SET_PED_RESET_FLAG(Static_41.f_1, 200, 1);
	PED::SET_PED_RESET_FLAG(Static_41.f_1, 46, 1);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Static_41.f_1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Static_41.f_1, 262144, 1);
	AUDIO::SET_PED_IS_DRUNK(Static_41.f_1, 1);
	return true;
}

bool func_115() // Position - 0x3A63
{
	return func_116(PLAYER::PLAYER_ID());
}

bool func_116(var uParam0) // Position - 0x3A73
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(uParam0)) == joaat("MP_F_FREEMODE_01"))
		return 1;

	return 0;
}

bool func_117(var uParam0) // Position - 0x3A92
{
	var uVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 7)
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 7)
		return false;

	if (PED::IS_PED_SHOOTING(uParam0))
		return false;

	if (ENTITY::IS_ENTITY_IN_AIR(uParam0))
		return false;

	if (PED::IS_PED_RAGDOLL(uParam0))
		return false;

	if (PED::IS_PED_CLIMBING(uParam0))
		return false;

	if (Global_77359)
		return false;

	if (func_119())
		return false;

	if (uParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
			return false;
	
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;
	
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
			return false;
	
		if (func_118())
			return false;
	}

	uVar0 = { ENTITY::GET_ENTITY_VELOCITY(uParam0) };

	if (BUILTIN::VMAG2(uVar0) >= 1f * 1f)
		return false;

	return true;
}

bool func_118() // Position - 0x3B93
{
	return Global_102506.f_418 > 0;
}

bool func_119() // Position - 0x3BA4
{
	return MISC::GET_GAME_TIMER() <= Global_24546.f_6481 + 100;
}

char* func_120(int iParam0) // Position - 0x3BB9
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
	
		case 1:
			return "move_m@drunk@slightlydrunk";
	
		case 2:
			return "move_m@drunk@moderatedrunk";
	}

	return "";
}

bool func_121(int iParam0) // Position - 0x3BFA
{
	int iVar0;
	char* sVar1;

	iVar0 = func_122(iParam0);
	sVar1 = func_120(iVar0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(Static_59.f_2))
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			return true;
		else
			return false;

	return MISC::ARE_STRINGS_EQUAL(Static_59.f_2, sVar1);
}

int func_122(int iParam0) // Position - 0x3C3B
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		return -1;

	iVar0 = func_124(iParam0);
	iVar1 = func_123(iVar0);

	if (iVar1 == -1)
		return -1;

	return Global_45897[iVar1 /*5*/].f_2;
}

int func_123(int iParam0) // Position - 0x3C7E
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (Global_45897[iVar0 /*5*/] == iParam0)
			return iVar0;
	}

	return -1;
}

int func_124(int iParam0) // Position - 0x3CAE
{
	int iVar0;

	if (iParam0 == 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_45897[iVar0 /*5*/].f_1)
			return Global_45897[iVar0 /*5*/];
	}

	return -1;
}

int func_125() // Position - 0x3CEF
{
	int iVar0;

	if (Static_54 == -2)
		return -2;

	if (Static_54 == -1)
		return -1;

	iVar0 = Static_54 - BUILTIN::TIMERA();

	if (iVar0 < 0)
		return -2;

	if (iVar0 > 65534)
		iVar0 = 65534;

	return iVar0;
}

void func_126() // Position - 0x3D35
{
	if (Static_49)
		return;

	if (!func_127())
	{
		Static_59 = 5;
		Static_54.f_2 = BUILTIN::TIMERA() + 5000;
		return;
	}

	Static_59 = 6;
}

bool func_127() // Position - 0x3D61
{
	var uVar0;
	var uVar3;
	float fVar6;

	if (Static_41.f_4 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(Static_41.f_4, 0))
		return false;

	uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_41.f_1, 1) };
	uVar3 = { ENTITY::GET_ENTITY_COORDS(Static_41.f_4, 1) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uVar3, 1);
	return fVar6 < 7f;
}

void func_128() // Position - 0x3DB2
{
	int iVar0;
	char* sVar1;

	if (Static_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	
		if (PED::GET_PED_STEALTH_MOVEMENT(Static_41.f_1))
			if (Global_45897[Static_63 /*5*/].f_2 == 0 || Global_45897[Static_63 /*5*/].f_2 == 2)
				PED::SET_PED_STEALTH_MOVEMENT(Static_41.f_1, 0, 0);
	
		if (PED::IS_PED_DUCKING(Static_41.f_1))
			PED::SET_PED_DUCKING(Static_41.f_1, 0);
	}

	if (Static_54 != -2)
	{
		if (Static_54 == -1)
		{
			if (Global_45897[Static_63 /*5*/].f_2 != 0)
				Global_45897[Static_63 /*5*/].f_2 = 0;
		}
		else
		{
			iVar0 = Static_54 - BUILTIN::TIMERA();
		
			if (iVar0 <= 0)
				iVar0 = 0;
		
			iVar0 = (iVar0 / 1000) + 1;
		
			if (Global_45897[Static_63 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_45897[Static_63 /*5*/].f_2 = 2;
				
					if (!func_114(2))
					{
						Global_45897[Static_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
		
			if (Global_45897[Static_63 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_45897[Static_63 /*5*/].f_2 = 1;
				
					if (!func_114(2))
					{
						Global_45897[Static_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
		
			Global_45897[Static_63 /*5*/].f_2 == 1;
		}
	}
	else
	{
		return;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(Static_53))
	{
		if (!func_117(Static_41.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Static_41.f_1, sVar1, Static_53, 3))
				TASK::STOP_ANIM_TASK(Static_41.f_1, sVar1, Static_53, -4f);
		
			Static_53 = "";
			return;
		}
	}

	if (Global_45897[Static_63 /*5*/].f_3 >= 10 || Global_45897[Static_63 /*5*/].f_4 >= 15 || IS_BIT_SET(Global_46114, 9))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(Static_41.f_1, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && !IS_BIT_SET(Global_1950714.f_3, 27))
			return;
	
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Static_41.f_1))
			return;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 1))
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Static_41.f_1 == PLAYER::PLAYER_PED_ID() && func_145(PLAYER::PLAYER_ID()) && Global_262145.f_24026 /* Tunable: BB_NIGHTCLUB_DISABLE_NIGHTCLUB_PASS_OUT_DISABLE */)
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Static_41.f_1 == PLAYER::PLAYER_PED_ID() && func_144())
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (func_141(PLAYER::PLAYER_ID()))
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Static_41.f_1 == PLAYER::PLAYER_PED_ID() && func_140(PLAYER::PLAYER_ID()) && Global_262145.f_26696 /* Tunable: VC_CASINO_DISABLE_PASSOUT */)
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Static_41.f_1 == PLAYER::PLAYER_PED_ID() && func_137(PLAYER::PLAYER_ID()) && Global_262145.f_26727 /* Tunable: VC_PENTHOUSE_DISABLE_PASSOUT */)
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Static_41.f_1 == PLAYER::PLAYER_PED_ID() && func_133(PLAYER::PLAYER_ID()) == 15)
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Static_41.f_1 == PLAYER::PLAYER_PED_ID() && Global_77359 && !Global_45865)
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_131(PLAYER::PLAYER_ID()) && !func_129())
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		
			return;
		}
	
		Static_59.f_1 = 3;
		return;
	}

	if (!Static_50)
		return;

	if (!func_121(Static_41.f_1))
		return;
}

bool func_129() // Position - 0x42E7
{
	return func_130() == 6;
}

int func_130() // Position - 0x42F5
{
	return Global_1912540[PLAYER::PLAYER_ID() /*319*/].f_279;
}

int func_131(int iParam0) // Position - 0x430B
{
	if (func_132(Global_1845299[iParam0 /*883*/].f_260.f_39))
		return 1;

	return 0;
}

bool func_132(bool bParam0) // Position - 0x432D
{
	switch (bParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return true;
	}

	return false;
}

int func_133(int iParam0) // Position - 0x435C
{
	if (func_136(iParam0) == 243)
		return func_134(iParam0);

	return -1;
}

int func_134(int iParam0) // Position - 0x4379
{
	if (func_135(iParam0, false))
		return Global_1892798[iParam0 /*615*/].f_10.f_183;

	return -1;
}

bool func_135(int iParam0, bool bParam1) // Position - 0x439C
{
	if (func_93(iParam0))
		if (Global_1892798[iParam0 /*615*/].f_10.f_34 != -1 || bParam1 && Global_1892798[iParam0 /*615*/].f_10.f_33 != -1)
			return true;

	return false;
}

int func_136(int iParam0) // Position - 0x43E0
{
	if (func_93(iParam0))
		if (func_135(iParam0, false))
			return Global_1892798[iParam0 /*615*/].f_10.f_34;

	return -1;
}

bool func_137(bool bParam0) // Position - 0x440C
{
	if (bParam0 != func_29())
		if (func_139(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_138(Global_2658294[bParam0 /*468*/].f_325.f_8) == 15;

	return false;
}

int func_138(bool bParam0) // Position - 0x4453
{
	switch (bParam0)
	{
		case false:
		case true:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	
		case 180:
			return 28;
	
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 29;
	
		case 181:
			return 30;
	
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 31;
	
		case 172:
			return 32;
	
		case 173:
			return 33;
	
		case 174:
		case 175:
		case 176:
			return 34;
	
		case 177:
		case 178:
		case 179:
			return 35;
	}

	return -1;
}

bool func_139(bool bParam0, bool bParam1, bool bParam2) // Position - 0x49BC
{
	bool bVar0;

	bVar0 = bParam0;

	if (bVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
					return false;
		
			if (bParam2)
				if (bVar0 == Global_2673274.f_3)
					return Global_2673274.f_2;
				else if (Global_2658294[bVar0 /*468*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

bool func_140(bool bParam0) // Position - 0x4A1C
{
	if (bParam0 != func_29())
		if (func_139(bParam0, true, true))
			if (Global_2658294[bParam0 /*468*/].f_325.f_8 != -1)
				return func_138(Global_2658294[bParam0 /*468*/].f_325.f_8) == 14;

	return false;
}

bool func_141(int iParam0) // Position - 0x4A63
{
	return func_142(func_143(iParam0));
}

bool func_142(int iParam0) // Position - 0x4A75
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_143(int iParam0) // Position - 0x4AA7
{
	if (func_136(iParam0) == 256)
		return func_134(iParam0);

	return -1;
}

bool func_144() // Position - 0x4AC5
{
	return Global_2709114;
}

bool func_145(int iParam0) // Position - 0x4AD1
{
	if (iParam0 != func_29())
		if (func_139(iParam0, true, true))
			if (Global_2658294[iParam0 /*468*/].f_325.f_8 != -1)
				return func_138(Global_2658294[iParam0 /*468*/].f_325.f_8) == 11;

	return false;
}

bool func_146() // Position - 0x4B18
{
	int iVar0;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Static_41.f_1))
		return false;

	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Static_41.f_1, 0);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		return false;

	if (!(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == Static_41.f_1))
		return false;

	Static_41.f_4 = iVar0;
	Static_59 = 7;
	return true;
}

void func_147() // Position - 0x4B6C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
	{
		Static_59 = 4;
		return;
	}
}

void func_148() // Position - 0x4B87
{
	var uVar0;
	float fVar1;
	var uVar2;
	var uVar5;
	var uVar8;

	if (!Static_49)
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return;

	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return;

	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return;

	uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(uVar0);

	if (fVar1 < 5f)
		return;

	uVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uVar5 = { uVar2 - { 3f, 30f, 30f } };
	uVar8 = { uVar2 + { 3f, 30f, 30f } };

	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(uVar5, uVar8) && !PED::IS_COP_PED_IN_AREA_3D(uVar5, uVar8))
		return;

	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	func_11(73, 1);
}

void func_149() // Position - 0x4C56
{
	var uVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	int iVar4;

	uVar0 = Static_41.f_1;

	if (PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(Static_41.f_1, 0);
		uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1, 0);
	
		if (!(uVar2 == Static_41.f_1))
			return;
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1))
			return;
	
		uVar0 = uVar1;
	}
	else if (!(PLAYER::PLAYER_PED_ID() == Static_41.f_1))
	{
		return;
	}
	else if (!(CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4))
	{
		Static_52 = 0f;
		func_151(uVar0, 0f);
		return;
	}

	if (BUILTIN::TIMERA() < Static_54.f_4)
	{
		func_151(uVar0, Static_52);
		return;
	}

	if (ENTITY::IS_ENTITY_A_PED(uVar0))
		Static_54.f_4 = BUILTIN::TIMERA() + 2000;
	else
		Static_54.f_4 = BUILTIN::TIMERA() + 1000;

	fVar3 = ENTITY::GET_ENTITY_SPEED(uVar0);

	if (fVar3 < 0.04f)
	{
		Static_52 = 0f;
		func_151(uVar0, 0f);
		return;
	}

	if (Static_54.f_1 == -1)
	{
		Static_52 = func_150(uVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = Static_54.f_1 - BUILTIN::TIMERA();
	
		if (iVar4 < 5000)
			Static_52 = 0f;
		else if (iVar4 < 15000)
			Static_52 = func_150(uVar0, 0.05f, 0.02f);
		else if (iVar4 < 30000)
			Static_52 = func_150(uVar0, 0.07f, 0.03f);
		else if (iVar4 < 45000)
			Static_52 = func_150(uVar0, 0.09f, 0.04f);
		else if (iVar4 < 600000)
			Static_52 = func_150(uVar0, 0.1f, 0.05f);
		else
			Static_52 = func_150(uVar0, 0.13f, 0.06f);
	}

	func_151(uVar0, Static_52);
}

float func_150(var uParam0, float fParam1, float fParam2) // Position - 0x4DF8
{
	float fVar0;
	var uVar1;
	var uVar2;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	uVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);

	if (fVar0 < 0f)
		fVar0 = fVar0 - uVar1;
	else
		fVar0 = fVar0 + uVar1;

	if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		if (TASK::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0)))
			fVar0 = fVar0 * 4.5f;
		else
			fVar0 = fVar0 * 3f;
	}
	else
	{
		uVar2 = ENTITY::GET_ENTITY_MODEL(uParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(uVar2))
			fVar0 = fVar0 * 1.5f;
		else
			fVar0 = fVar0 * 0.5f;
	}

	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_151(var uParam0, float fParam1) // Position - 0x4E8C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
		return;

	if (ENTITY::IS_ENTITY_A_PED(uParam0))
		PED::SET_PED_STEER_BIAS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0), fParam1);
	else if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0), fParam1);
}

void func_152() // Position - 0x4ED7
{
	var uVar0;

	if (!PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
	{
		Static_59 = 4;
		return;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_45897[Static_63 /*5*/].f_3 >= 10 || Global_45897[Static_63 /*5*/].f_4 >= 15)
		{
			if (Global_45897[Static_63 /*5*/].f_3 >= 10)
				Global_45897[Static_63 /*5*/].f_3 = 9;
		
			if (Global_45897[Static_63 /*5*/].f_4 >= 15)
				Global_45897[Static_63 /*5*/].f_4 = 14;
		}
	}

	if (Static_49)
		return;

	uVar0 = PED::GET_VEHICLE_PED_IS_IN(Static_41.f_1, 0);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Static_41.f_1, 0, 0);
		Static_59 = 11;
		return;
	}
}

void func_153() // Position - 0x4F7B
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (BUILTIN::TIMERA() <= Static_54.f_3)
		return;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT"));

	if (!(iVar0 == 7))
	{
		Static_54.f_3 = BUILTIN::TIMERA() + 1000;
		return;
	}

	if (!PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
	{
		Static_59 = 4;
		Static_54.f_3 = -2;
		return;
	}

	uVar1 = PED::GET_VEHICLE_PED_IS_IN(Static_41.f_1, 0);
	uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1, 0);

	if (uVar2 == Static_41.f_1)
	{
		func_154();
		Static_54.f_3 = -2;
		return;
	}

	TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Static_41.f_1, uVar1, 0);
	Static_59 = 9;
	Static_54.f_3 = BUILTIN::TIMERA() + 1000;
}

void func_154() // Position - 0x5016
{
	if (Static_59 == 10)
		return;

	Static_59 = 10;

	if (Static_47 == -1)
		return;

	func_180(Static_47, 2, 5);
	Static_54.f_4 = BUILTIN::TIMERA();
	Static_52 = 0f;
}

void func_155() // Position - 0x5048
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Static_41.f_1))
	{
		Static_59 = 10;
		return;
	}

	if (BUILTIN::TIMERA() < Static_54.f_3)
		return;

	Static_59 = 4;
	Static_54.f_3 = -2;
}

void func_156() // Position - 0x507A
{
	int iVar0;
	bool bVar1;
	var uVar2;
	int iVar3;

	!Static_49;
	iVar0 = 0;
	bVar1 = false;

	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Static_41.f_1))
	{
		!Static_49;
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Static_41.f_1, 0);
	
		if (!(iVar0 == Static_41.f_4))
		{
			!Static_49;
		
			if (!Static_49)
			{
				!Static_49;
				TASK::TASK_LEAVE_ANY_VEHICLE(Static_41.f_1, 0, 0);
				Static_59 = 11;
				return;
			}
		
			Static_41.f_4 = iVar0;
		}
	
		if (bVar1)
		{
			!Static_49;
			func_154();
			return;
		}
	
		if (!Static_49)
		{
			!Static_49;
			func_154();
			return;
		}
	
		!Static_49;
		uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Static_41.f_4, -1, 0);
	
		if (uVar2 == Static_41.f_1)
		{
			func_154();
			return;
		}
	
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Static_41.f_1, iVar0, 0);
		Static_59 = 9;
		Static_54.f_3 = BUILTIN::TIMERA() + 1000;
		return;
	}

	if (!func_127())
	{
		TASK::CLEAR_PED_TASKS(Static_41.f_1);
		Static_59 = 4;
		return;
	}

	if (!Static_49)
	{
		iVar3 = TASK::GET_SCRIPT_TASK_STATUS(Static_41.f_1, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
	
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
			{
				TASK::CLEAR_PED_TASKS(Static_41.f_1);
				Static_59 = 4;
				return;
			}
		}
	}
}

void func_157() // Position - 0x5196
{
	var uVar0;
	var uVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;

	if (Static_49)
		return;

	if (Static_41.f_4 == 0)
	{
		Static_59 = 4;
		return;
	}

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Static_41.f_4, 0))
	{
		Static_41.f_4 = 0;
		Static_59 = 4;
		return;
	}

	uVar0 = { ENTITY::GET_ENTITY_COORDS(Static_41.f_1, 1) };
	uVar3 = { ENTITY::GET_ENTITY_COORDS(Static_41.f_4, 1) };
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(uVar0, uVar3, 1);

	if (fVar6 > 3f)
	{
		if (!func_114(Global_45897[Static_63 /*5*/].f_2))
		{
			Static_59 = 12;
			return;
		}
	
		Static_59 = 5;
		Static_54.f_2 = BUILTIN::TIMERA() + 2000;
		return;
	}

	iVar7 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Static_41.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;

	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Static_41.f_4, iVar8, 0))
				bVar9 = false;
			else
				iVar8 = iVar8 + 1;
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}

	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			Static_59 = 4;
			return;
		}
	}

	func_158();
	TASK::TASK_ENTER_VEHICLE(Static_41.f_1, Static_41.f_4, -1, iVar8, 1073741824, 1, 0);
	Static_59 = 7;
}

void func_158() // Position - 0x5299
{
	if (!ENTITY::DOES_ENTITY_EXIST(Static_41.f_1))
		return;

	if (!PED::IS_PED_INJURED(Static_41.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Static_41.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(Static_41.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Static_41.f_1, 0, -1056964608);
		Static_59.f_2 = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Static_41.f_1);
		PED::SET_PED_RESET_FLAG(Static_41.f_1, 200, 0);
		PED::SET_PED_RESET_FLAG(Static_41.f_1, 46, 0);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Static_41.f_1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Static_41.f_1, 262144, 0);
		AUDIO::SET_PED_IS_DRUNK(Static_41.f_1, 0);
	}

	if (!Static_50)
		return;

	Static_50 = false;
}

void func_159() // Position - 0x532E
{
	if (BUILTIN::TIMERA() < Static_54.f_2)
	{
		func_128();
		return;
	}

	func_160();
	Static_54.f_2 = -2;
	Static_59 = 12;
}

int func_160() // Position - 0x5358
{
	if (!func_121(Static_41.f_1))
		return 0;

	if (!Static_50)
		return 0;

	func_161(Static_41.f_1);
	Static_59.f_2 = "";
	Global_2733138.f_3734 = 1;
	return 1;
}

void func_161(var uParam0) // Position - 0x5391
{
	PED::RESET_PED_MOVEMENT_CLIPSET(uParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(uParam0, 200, 0);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(uParam0, 262144, 0);
	AUDIO::SET_PED_IS_DRUNK(uParam0, 0);
}

void func_162() // Position - 0x53D2
{
	int iVar0;

	if (Static_54 == -1)
	{
		Global_45897[Static_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[Static_63 /*5*/].f_3 < 3 && Global_45897[Static_63 /*5*/].f_3 != 0)
	{
		Global_45897[Static_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = Static_54 - BUILTIN::TIMERA();
	
		if (iVar0 <= 0)
			iVar0 = 0;
	
		iVar0 = (iVar0 / 1000) + 1;
		Global_45897[Static_63 /*5*/].f_2 = 0;
	
		if (iVar0 < 30)
			Global_45897[Static_63 /*5*/].f_2 = 2;
	
		if (iVar0 < 10)
			Global_45897[Static_63 /*5*/].f_2 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
	{
		Static_59 = 10;
		return;
	}

	if (func_121(Static_41.f_1))
	{
		Static_59 = 12;
		return;
	}

	if (Static_54 == -2)
		return;

	if (!func_114(Global_45897[Static_63 /*5*/].f_2))
		return;

	Static_59 = 12;
}

void func_163() // Position - 0x54A8
{
}

void func_164() // Position - 0x54B0
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = 0;

	for (iVar1 = 0; iVar1 < 16; iVar1 = iVar1 + 1)
	{
		iVar0 = Global_45978[iVar1 /*6*/].f_2;
	
		if (!(iVar0 == 6))
		{
			if (Global_45978[iVar1 /*6*/].f_1 == Static_47)
			{
				func_166(iVar1);
				func_165(iVar1);
			}
			else if (Global_45978[iVar1 /*6*/].f_1 == 2)
			{
				if (!(Static_48 == -1))
					if (Static_48 == Global_45978[iVar1 /*6*/])
						func_166(iVar1);
			}
		}
	}
}

void func_165(int iParam0) // Position - 0x5528
{
	if (iParam0 < 0 || iParam0 >= 16)
		return;

	Global_45978[iParam0 /*6*/] = -1;
	Global_45978[iParam0 /*6*/].f_1 = -1;
	Global_45978[iParam0 /*6*/].f_2 = 6;
	Global_45978[iParam0 /*6*/].f_3 = 0;
	Global_45978[iParam0 /*6*/].f_4 = 0;
}

void func_166(int iParam0) // Position - 0x5575
{
	int iVar0;

	iVar0 = Global_45978[iParam0 /*6*/].f_2;

	switch (iVar0)
	{
		case 1:
			func_187();
			break;
	
		case 2:
			func_170(Global_45978[iParam0 /*6*/].f_4);
			break;
	
		case 3:
			func_169(Global_45978[iParam0 /*6*/].f_5);
			break;
	
		case 4:
			func_168();
			break;
	
		case 5:
			func_167();
			break;
	
		case 0:
			break;
	
		case 6:
			break;
	
		default:
			break;
	}
}

void func_167() // Position - 0x55F7
{
	Static_59.f_1 = 2;
}

void func_168() // Position - 0x5604
{
	int iVar0;

	Global_45897[Static_63 /*5*/].f_4 = Global_45897[Static_63 /*5*/].f_4 + 1;

	if (Static_54 == -1)
	{
		Global_45897[Static_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[Static_63 /*5*/].f_4 < 9 && Global_45897[Static_63 /*5*/].f_4 != 0)
	{
		Global_45897[Static_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = Static_54 - BUILTIN::TIMERA();
	
		if (iVar0 <= 0)
			iVar0 = 0;
	
		iVar0 = (iVar0 / 1000) + 1;
		Global_45897[Static_63 /*5*/].f_2 = 0;
	
		if (iVar0 < 30)
			Global_45897[Static_63 /*5*/].f_2 = 2;
	
		if (iVar0 < 10)
			Global_45897[Static_63 /*5*/].f_2 = 1;
	
		if (!func_121(Static_41.f_1))
			func_114(Global_45897[Static_63 /*5*/].f_2);
	}
}

void func_169(var uParam0) // Position - 0x56C4
{
	int iVar0;

	Global_45897[Static_63 /*5*/].f_3 = Global_45897[Static_63 /*5*/].f_3 + uParam0;

	if (Static_54 == -1)
	{
		Global_45897[Static_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[Static_63 /*5*/].f_3 < 3 && Global_45897[Static_63 /*5*/].f_3 != 0)
	{
		Global_45897[Static_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = Static_54 - BUILTIN::TIMERA();
	
		if (iVar0 <= 0)
			iVar0 = 0;
	
		iVar0 = (iVar0 / 1000) + 1;
		Global_45897[Static_63 /*5*/].f_2 = 0;
	
		if (iVar0 < 30)
			Global_45897[Static_63 /*5*/].f_2 = 2;
	
		if (iVar0 < 10)
			Global_45897[Static_63 /*5*/].f_2 = 1;
	
		if (!func_121(Static_41.f_1))
			func_114(Global_45897[Static_63 /*5*/].f_2);
	}
}

void func_170(var uParam0) // Position - 0x5784
{
	Static_41.f_3 = Static_41.f_3 + uParam0;
	Static_41.f_2 = Static_41.f_2 + uParam0;
	Static_54.f_1 = Static_54.f_1 + uParam0;
	Static_54 = Static_54 + uParam0;
}

void func_171() // Position - 0x57B4
{
	int iVar0;

	if (!Static_49)
	{
		Static_62 = -1;
		return;
	}

	if (Static_62 < 0)
	{
		Static_62 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}

	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (iVar0 != Static_62)
	{
		if (iVar0 > Static_62)
			func_172();
	
		Static_62 = iVar0;
		return;
	}
}

void func_172() // Position - 0x57FE
{
}

void func_173() // Position - 0x5806
{
	if (!(Static_54 == -1))
	{
		if (!(Static_54 == -2))
		{
			if (BUILTIN::TIMERA() >= Static_54)
			{
				func_158();
				Static_54 = -2;
				Static_59 = 12;
			}
		}
	
		if (BUILTIN::TIMERA() > Static_54.f_1)
			func_187();
	}
}

void func_174(int iParam0) // Position - 0x5845
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam0 == Global_45978[iVar0 /*6*/])
			func_165(iVar0);
	}
}

void func_175() // Position - 0x5875
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	Static_59 = 4;

	if (!ENTITY::IS_ENTITY_DEAD(Static_41.f_1, 0))
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Static_41.f_1))
			Static_59 = 10;

	if (Static_49)
	{
		func_178();
		func_11(71, 1);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_82(2059, -1);
			iVar1 = ((iVar0 / 10) + 1) * 10;
		
			if (iVar0 + 1 >= iVar1)
				func_176(iVar1);
		
			func_78(2059, iVar0 + 1, -1, 1);
			Static_64 = true;
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), &iVar4, -1);
			iVar5 = iVar2 + iVar3 + iVar4;
			iVar6 = ((iVar5 / 10) + 1) * 10;
		
			if (iVar5 + 1 >= iVar6)
				func_176(iVar6);
		
			switch (func_68())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("SP0_SP_NUM_TIMES_DRUNK"), iVar2 + 1, 1);
					break;
			
				case 1:
					STATS::STAT_SET_INT(joaat("SP1_SP_NUM_TIMES_DRUNK"), iVar3 + 1, 1);
					break;
			
				case 2:
					STATS::STAT_SET_INT(joaat("SP2_SP_NUM_TIMES_DRUNK"), iVar4 + 1, 1);
					break;
			}
		}
	
		Static_59.f_1 = 1;
		return;
	}

	Static_59.f_1 = 12;

	if (Static_54 == -1)
	{
		Global_45897[Static_63 /*5*/].f_2 = 0;
	}
	else if (Global_45897[Static_63 /*5*/].f_3 < 3 && Global_45897[Static_63 /*5*/].f_3 != 0)
	{
		Global_45897[Static_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = Static_54 - BUILTIN::TIMERA();
	
		if (iVar7 <= 0)
			iVar7 = 0;
	
		iVar7 = (iVar7 / 1000) + 1;
		Global_45897[Static_63 /*5*/].f_2 = 0;
	
		if (iVar7 < 30)
			Global_45897[Static_63 /*5*/].f_2 = 2;
	
		if (iVar7 < 10)
			Global_45897[Static_63 /*5*/].f_2 = 1;
	}
}

void func_176(int iParam0) // Position - 0x5A23
{
	int iVar0;

	iVar0 = func_177(81);
	Global_2645624[iVar0 /*83*/] = 81;
	Global_2645624[iVar0 /*83*/].f_17 = iParam0;
	TEXT_LABEL_ASSIGN_STRING(&Global_2645624[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

int func_177(int iParam0) // Position - 0x5A5A
{
	int iVar0;
	int iVar1;

	iVar0 = 19;

	for (iVar1 = 0; iVar1 <= 19; iVar1 = iVar1 + 1)
	{
		if (Global_2645624[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645624[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
	}

	return iVar0;
}

void func_178() // Position - 0x5AA7
{
}

void func_179() // Position - 0x5AAF
{
	Static_54 = Static_41.f_2;
	Static_54.f_1 = Static_41.f_3;
	Static_54.f_2 = -2;
	Static_54.f_3 = -2;
}

void func_180(int iParam0, int iParam1, int iParam2) // Position - 0x5AD3
{
	func_181(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x5AE8
{
	int iVar0;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_183(iParam0, iParam1, iParam2))
		return;

	iVar0 = func_182();

	if (iVar0 == -1)
		return;

	Global_45978[iVar0 /*6*/] = iParam0;
	Global_45978[iVar0 /*6*/].f_1 = iParam1;
	Global_45978[iVar0 /*6*/].f_2 = iParam2;
	Global_45978[iVar0 /*6*/].f_3 = iParam3;
	Global_45978[iVar0 /*6*/].f_4 = iParam4;
	Global_45978[iVar0 /*6*/].f_5 = iParam5;
}

int func_182() // Position - 0x5B6A
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (Global_45978[iVar0 /*6*/].f_2 == 6)
			return iVar0;
	}

	return -1;
}

bool func_183(int iParam0, int iParam1, int iParam2) // Position - 0x5B9B
{
	if (func_184(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_184(int iParam0, int iParam1, int iParam2) // Position - 0x5BB6
{
	int iVar0;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 16; iVar0 = iVar0 + 1)
	{
		if (iParam2 == Global_45978[iVar0 /*6*/].f_2)
			if (iParam0 == Global_45978[iVar0 /*6*/])
				if (iParam1 == Global_45978[iVar0 /*6*/].f_1)
					return iVar0;
	}

	return -1;
}

void func_185() // Position - 0x5C02
{
	int iVar0;

	Static_49 = false;

	if (Static_41.f_1 == PLAYER::PLAYER_PED_ID())
	{
		Static_49 = true;
		Global_46110 = 1;
		Global_46112 = Global_46112 + 1;
	}

	if (!ENTITY::IS_ENTITY_DEAD(Static_41.f_1, 0))
	{
		iVar0 = func_71(Static_41.f_1);
	
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Static_41.f_1, "AMANDA_DRUNK");
				break;
		
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Static_41.f_1, "LAMAR_DRUNK");
				break;
		}
	}
}

void func_186() // Position - 0x5C6F
{
	if (!(Static_47 == -1))
		return;

	Static_47 = func_124(Static_41.f_1);

	if (Static_47 == -1)
		return;

	Static_63 = func_123(Static_47);
}

void func_187() // Position - 0x5C9D
{
	int iVar0;

	if (!func_35(0) && !func_35(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Static_41.f_1, 0))
		{
			iVar0 = func_71(Static_41.f_1);
		
			if (Global_45897[Static_63 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_189(Static_41.f_1, "POST_STONED", 24);
						break;
				
					case 1:
						func_189(Static_41.f_1, "POST_STONED", 24);
						break;
				
					case 2:
						func_189(Static_41.f_1, "POST_STONED", 24);
						break;
				}
			}
		
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Static_41.f_1, "AMANDA_NORMAL");
					break;
			
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Static_41.f_1, "LAMAR_NORMAL");
					break;
			}
		}
	}

	func_158();

	if (Static_49)
		Global_46110 = 0;

	func_188();
	STREAMING::REMOVE_ANIM_DICT(func_120(0));
	STREAMING::REMOVE_ANIM_DICT(func_120(2));
	STREAMING::REMOVE_ANIM_DICT(func_120(1));
	Global_1944727 = false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPEMAIL")) > 0)
		func_42(0);

	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_188() // Position - 0x5DA1
{
	var uVar0;
	var uVar1;
	var uVar2;

	if (ENTITY::IS_ENTITY_DEAD(Static_41.f_1, 0))
		return;

	uVar0 = Static_41.f_1;

	if (PED::IS_PED_IN_ANY_VEHICLE(Static_41.f_1, 0))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(Static_41.f_1, 0);
		uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar1, -1, 0);
	
		if (!(Static_41.f_1 == uVar2))
			return;
	
		uVar0 = uVar1;
	}
	else if (!(CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) || !(PLAYER::PLAYER_PED_ID() == Static_41.f_1))
	{
		return;
	}

	Static_52 = 0f;
	func_151(uVar0, 0f);
}

void func_189(var uParam0, char* sParam1, int iParam2) // Position - 0x5E1B
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_190(iParam2), 1);
}

char* func_190(int iParam0) // Position - 0x5E32
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	sVar0 = 0;
	return sVar0;
}

