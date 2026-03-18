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
	int Static_19 = 0;
	bool Static_20 = 0;
	bool Static_21 = 0;
	int Static_22 = 0;
	bool Static_23 = 0;
	var Static_24 = 0;
	var Static_25 = 0;
	var Static_26 = 0;
	int Static_27 = 0;
	float Static_28 = 0f;
	var Static_29 = 0;
	var Static_30 = 0;
	var Static_31 = 0;
	var Static_32 = 0;
	int Static_33 = 0;
	bool Static_34 = 0;
	int Static_35 = 0;
	var Static_36 = 0;
	int Static_37 = 0;
	var Static_38 = 0;
	var Static_39 = 0;
	int Static_40 = 0;
	int Static_41 = 0;
	int Static_42 = 0;
	int Static_43 = 0;
	var Static_44 = 0;
	var Static_45 = 0;
	var Static_46 = 0;
	var Static_47 = 0;
	var Static_48 = 0;
	var Static_49 = 0;
	var Static_50 = 0;
	var Static_51 = 0;
	var Static_52 = 0;
	var Static_53 = 0;
	var Static_54 = 0;
	var Static_55 = 0;
	var Static_56 = 0;
	var Static_57 = 0;
	var Static_58 = 0;
	var Static_59 = 0;
	var Static_60 = 0;
	var Static_61 = 0;
	var Static_62 = 0;
	var Static_63 = 0;
	var Static_64 = 0;
	var Static_65 = 0;
	var Static_66 = 0;
	var Static_67 = 0;
	var Static_68 = 0;
	var Static_69 = 0;
	var Static_70 = 0;
	var Static_71 = 0;
	var Static_72 = 0;
	var Static_73 = 0;
	var Static_74 = 0;
	var Static_75 = 0;
	var Static_76 = 0;
	var Static_77 = 0;
	var Static_78 = 0;
	var Static_79 = 0;
	var Static_80 = 0;
	var Static_81 = 0;
	var Static_82 = 0;
	bool Static_83 = 0;
	int Static_84 = 0;
	int Static_85 = 0;
	var Static_86 = 0;
	var Static_87 = 0;
	var Static_88 = 0;
	var ScriptArg_0 = 0;
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
	Static_19 = 3;
	Static_23 = true;
	Static_33 = -1;
	Static_40 = -1;
	Static_41 = -1;
	Static_42 = -1;
	TEXT_LABEL_ASSIGN_STRING(&Static_44, "NULL", 64);
	TEXT_LABEL_ASSIGN_STRING(&Static_60, "NULL", 64);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_69();

	if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
	{
		Static_35 = ScriptArg_0;
		Static_38 = ScriptArg_0;
	}

	while (true)
	{
		BUILTIN::WAIT(0);
		func_68();
	
		if (ENTITY::DOES_ENTITY_EXIST(ScriptArg_0))
		{
			if (Static_41 != -1 && func_67() && !func_66() && !func_65(Static_41))
				func_69();
		
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
				func_69();
		
			if (func_64(13) || func_64(14))
				func_69();
		
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(ScriptArg_0, 0))
				func_69();
		
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(ScriptArg_0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					func_63();
				
					if (ENTITY::GET_ENTITY_HEALTH(ScriptArg_0) < 950)
						func_69();
				
					switch (Static_27)
					{
						case 0:
							func_60();
						
							if (Static_41 == 5)
							{
								if (func_59(18) == true && func_59(20) == false)
								{
									Static_39 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								
									if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Static_39))
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Static_39, 9);
								
									SCRIPT::TERMINATE_THIS_THREAD();
								}
							}
						
							if (Static_41 == -1)
							{
								func_69();
							}
							else
							{
								func_58();
								AUDIO::HINT_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
								AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
								Global_33853[Static_41 /*11*/].f_2 = 0;
								Global_33853[Static_41 /*11*/].f_6 = 1;
								Global_33853[Static_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								Global_33853[Static_41 /*11*/].f_1 = 0;
								Global_33853[Static_41 /*11*/].f_4 = 0;
								Global_33853[Static_41 /*11*/].f_7 = 0;
								Global_33853[Static_41 /*11*/].f_8 = 0;
								Global_33853[Static_41 /*11*/].f_10 = 0;
								Static_28 = -4f;
								func_56(&Static_24);
								func_54();
								func_53();
								BUILTIN::WAIT(0);
								Static_27 = 1;
							}
							break;
					
						case 1:
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
								BUILTIN::WAIT(0);
							else if (ENTITY::IS_ENTITY_STATIC(Static_35) && ENTITY::IS_ENTITY_UPRIGHT(Static_35, 1119092736))
								if (func_45() || Global_33853[Static_41 /*11*/].f_5)
									Static_27 = 2;
							else
								func_44(&Static_40);
							break;
					
						case 2:
							func_54();
						
							if (!func_65(Static_41))
							{
								func_44(&Static_40);
							
								if (func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */))
									HUD::CLEAR_HELP(1);
							}
						
							if (ENTITY::DOES_ENTITY_EXIST(Static_35))
								if (!ENTITY::IS_ENTITY_VISIBLE(Static_35))
									ENTITY::SET_ENTITY_VISIBLE(Static_35, 1, 0);
						
							if (ENTITY::DOES_ENTITY_EXIST(Static_37))
								if (!ENTITY::IS_ENTITY_VISIBLE(Static_37))
									ENTITY::SET_ENTITY_VISIBLE(Static_37, 1, 0);
						
							if (ENTITY::DOES_ENTITY_EXIST(Static_36))
								if (ENTITY::IS_ENTITY_VISIBLE(Static_36))
									ENTITY::SET_ENTITY_VISIBLE(Static_36, 0, 0);
						
							if (!MISC::ARE_STRINGS_EQUAL(&Static_44, "NULL"))
								AUDIO::SET_STATIC_EMITTER_ENABLED(&Static_44, 0);
						
							GRAPHICS::SET_TV_AUDIO_FRONTEND(0);
							BUILTIN::WAIT(0);
						
							if (ENTITY::DOES_ENTITY_EXIST(Static_38))
								GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(Static_38);
						
							if (!func_65(Static_41))
							{
								if (Global_33853[Static_41 /*11*/] == 3 || Global_33853[Static_41 /*11*/] == 2 || Global_33853[Static_41 /*11*/] == -1)
									Global_33853[Static_41 /*11*/] = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							
								GRAPHICS::SET_TV_CHANNEL(Global_33853[Static_41 /*11*/]);
								GRAPHICS::SET_TV_VOLUME(Static_28);
							}
							else
							{
								Static_42 = Global_33853[Static_41 /*11*/];
								Static_43 = Global_33853[Static_41 /*11*/].f_1;
								GRAPHICS::SET_TV_CHANNEL_PLAYLIST(Static_42, func_42(Static_43), Global_33853[Static_41 /*11*/].f_9);
								GRAPHICS::SET_TV_CHANNEL(Static_42);
							
								if (Global_33853[Static_41 /*11*/].f_7)
								{
									Global_33853[Static_41 /*11*/].f_5 = 0;
									Global_33853[Static_41 /*11*/].f_7 = 0;
								}
							}
						
							Global_33853[Static_41 /*11*/].f_2 = 1;
							func_41(133, 1);
							func_41(131, 1);
							func_41(132, 1);
							Static_27 = 3;
							break;
					
						case 3:
							if (Global_33853[Static_41 /*11*/].f_4)
								Static_27 = 6;
						
							if (Global_33853[Static_41 /*11*/].f_7 && func_65(Static_41))
							{
								Global_33853[Static_41 /*11*/].f_7 = 0;
								Static_27 = 6;
							}
						
							if (!func_39(Static_41))
							{
								func_38();
								Static_27 = 5;
							}
							else
							{
								func_36();
							
								if (GRAPHICS::GET_TV_CHANNEL() == -1)
									GRAPHICS::SET_TV_CHANNEL(Global_33853[Static_41 /*11*/]);
							
								if (func_16())
									Static_27 = 6;
							}
							break;
					
						case 5:
							if (func_39(Static_41))
								Static_27 = 2;
						
							if (Global_33853[Static_41 /*11*/].f_4)
								Static_27 = 6;
							break;
					
						case 6:
							func_1();
						
							if (Static_40 != -1)
								func_44(&Static_40);
						
							Global_33853[Static_41 /*11*/].f_5 = 0;
							Global_33853[Static_41 /*11*/].f_4 = 0;
							Global_33853[Static_41 /*11*/].f_1 = 0;
							Global_33853[Static_41 /*11*/].f_2 = 0;
							Global_33853[Static_41 /*11*/].f_7 = 0;
							Global_33853[Static_41 /*11*/].f_8 = 0;
							Global_33853[Static_41 /*11*/].f_10 = 0;
							Static_27 = 1;
							break;
					}
				}
			}
		}
		else
		{
			func_69();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}

	func_69();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1() // Position - 0x4E6
{
	if (Static_41 != -1)
		Global_33853[Static_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();

	Static_28 = GRAPHICS::GET_TV_VOLUME();
	GRAPHICS::SET_TV_CHANNEL(-1);
	func_4();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FAMILY5")) == 0)
		if (!MISC::ARE_STRINGS_EQUAL(&Static_44, "NULL"))
			AUDIO::SET_STATIC_EMITTER_ENABLED(&Static_44, 1);

	if (func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || func_43("TV_HLP2" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~ */) || func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */) || func_43("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
		HUD::CLEAR_HELP(1);

	func_3();
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(Static_36))
		if (!ENTITY::IS_ENTITY_VISIBLE(Static_36))
			ENTITY::SET_ENTITY_VISIBLE(Static_36, 1, 0);

	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	func_2();
}

void func_2() // Position - 0x590
{
	if (MISC::IS_PC_VERSION())
	{
		if (Static_85 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			Static_85 = 0;
		}
	}
}

void func_3() // Position - 0x5AC
{
	if (!(Static_33 == -1))
	{
		HUD::SET_TEXT_RENDER_ID(Static_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_35))
		{
			if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCREEN2") || ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCRE_OFF"))
			{
				ENTITY::SET_ENTITY_VISIBLE(Static_35, 0, 0);
			
				if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCRE_OFF"))
					GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
			}
			else
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Static_37))
		ENTITY::SET_ENTITY_VISIBLE(Static_37, 0, 0);
}

void func_4() // Position - 0x643
{
	if (Static_83)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	
		if (CAM::IS_CAM_ACTIVE(Static_76))
			CAM::SET_CAM_ACTIVE(Static_76, 0);
	
		CAM::DESTROY_CAM(Static_76, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_29, 1, 0, 2);
		
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (Static_34 == true)
				{
					Static_34 = false;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
			}
		
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&Static_60, "NULL"))
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Static_60))
				AUDIO::STOP_AUDIO_SCENE(&Static_60);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_37))
			ENTITY::SET_ENTITY_VISIBLE(Static_37, 1, 0);
	
		func_5(false, true, false, 0, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
		Static_83 = false;
	}
}

void func_5(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6) // Position - 0x70F
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_15(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_21627.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		
			if (!func_14())
				Global_21627.f_1 = 3;
		
			Global_23000 = 5;
		}
	
		func_13(1, iParam3, bParam2, 0);
		Global_65033 = true;
		Global_77362 = true;
		Global_80303 = true;
	}
	else
	{
		func_15(0);
		HUD::THEFEED_RESUME();
		Global_65033 = false;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_13(0, iParam3, bParam2, 0);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !func_7(PLAYER::PLAYER_ID(), 0) && !func_6() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_11(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	
		Global_80303 = false;
	}
}

bool func_6() // Position - 0x85E
{
	return IS_BIT_SET(Global_1845299[PLAYER::PLAYER_ID() /*883*/].f_36.f_18, 14);
}

bool func_7(int iParam0, int iParam1) // Position - 0x878
{
	bool bVar0;

	if (!func_10(iParam0))
		return false;

	if (iParam0 == PLAYER::PLAYER_ID())
		bVar0 = func_8(-1, false) == 8;
	else
		bVar0 = Global_1845299[iParam0 /*883*/].f_198 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;

	return bVar0;
}

bool func_8(bool bParam0, bool bParam1) // Position - 0x8D1
{
	bool bVar0;
	bool bVar1;

	bVar1 = bParam0;

	if (bVar1 == -1)
		bVar1 = func_9();

	if (Global_1575072[bVar1] == true)
	{
		bParam1;
		bVar0 = 8;
	}
	else
	{
		bVar0 = Global_1574921[bVar1];
		bParam1;
	}

	return bVar0;
}

bool func_9() // Position - 0x912
{
	return Global_1574927;
}

bool func_10(int iParam0) // Position - 0x91E
{
	int iVar0;

	iVar0 = iParam0;

	if (iVar0 < 0)
		return false;

	if (iVar0 >= 32)
		return false;

	return true;
}

bool func_11(int iParam0) // Position - 0x940
{
	if (func_7(iParam0, 0))
		return true;

	if (func_12())
		if (iParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2658294[iParam0 /*468*/].f_203, 2))
		return true;

	return false;
}

bool func_12() // Position - 0x97F
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_13(int iParam0, int iParam1, bool bParam2, int iParam3) // Position - 0x98D
{
	int iVar0;

	iVar0 = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != iParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}

	return iVar0;
}

bool func_14() // Position - 0x9C0
{
	if (Global_21627.f_1 == 1 || Global_21627.f_1 == 0)
		return true;

	return false;
}

void func_15(int iParam0) // Position - 0x9E7
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 13);
	else
		MISC::CLEAR_BIT(&Global_9463, 13);
}

bool func_16() // Position - 0xA0A
{
	if (!func_65(Static_41))
	{
		if (func_32(&Static_24) >= 1f && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_86, 1f, 1f, 1.5f, 0, 1, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(Static_35) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) && !func_31(8, -1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Static_29, 90f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (Static_40 == -1)
			{
				func_30();
				func_29(&Static_40, 3, "TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */, 0, 0, 0, 0);
			}
			else if (func_27(Static_40, true))
			{
				func_44(&Static_40);
				func_56(&Static_24);
				Global_33853[Static_41 /*11*/].f_7 = 0;
			
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
			
				return true;
			}
		
			func_17();
		}
		else
		{
			if (func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
				HUD::CLEAR_HELP(1);
		
			func_2();
			func_44(&Static_40);
		}
	}

	return false;
}

void func_17() // Position - 0xB16
{
	if (Static_83 == false)
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
		{
			func_44(&Static_40);
			func_29(&Static_40, 3, "TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */, 0, 0, 0, 0);
			func_26();
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	
		if (ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
	
		if (Static_34)
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		GRAPHICS::SET_TV_PLAYER_WATCHING_THIS_FRAME(PLAYER::PLAYER_PED_ID());
		func_24(true, true);
		PAD::SET_INPUT_EXCLUSIVE(2, 222);
		func_18(0);
	
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 222) || PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 200))
		{
			func_44(&Static_40);
			func_4();
		}
	}
}

void func_18(int iParam0) // Position - 0xBD0
{
	if (func_23())
		return;

	if (!(Global_21627.f_1 == 1))
	{
		if (func_22(0))
			func_19(iParam0);
	
		MISC::SET_BIT(&Global_9464, 2);
	}
}

void func_19(int iParam0) // Position - 0xC03
{
	if (func_23())
		return;

	if (Global_21859)
		if (func_21())
			func_20(true, true);
		else
			func_20(false, false);

	if (Global_21627.f_1 == 10 || Global_21627.f_1 == 9)
		MISC::SET_BIT(&Global_9464, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);

	Global_23000 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_9463, 30);
	else
		MISC::CLEAR_BIT(&Global_9463, 30);

	if (!func_14())
		Global_21627.f_1 = 3;
}

void func_20(bool bParam0, bool bParam1) // Position - 0xC8D
{
	if (bParam0)
	{
		if (func_22(0))
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

bool func_21() // Position - 0xD01
{
	return IS_BIT_SET(Global_1964705, 5);
}

bool func_22(int iParam0) // Position - 0xD0F
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

bool func_23() // Position - 0xD66
{
	return IS_BIT_SET(Global_1964705, 19);
}

void func_24(bool bParam0, bool bParam1) // Position - 0xD75
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 64;

	if (bParam0)
	{
		if (func_25(false))
		{
			if (!Static_20)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
			
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
					GRAPHICS::SET_TV_CHANNEL(1);
				else
					GRAPHICS::SET_TV_CHANNEL(0);
			
				Static_20 = true;
			}
		}
		else if (Static_20)
		{
			Static_20 = false;
		}
	}

	if (bParam1)
	{
		iVar1 = PAD::GET_CONTROL_VALUE(2, 219) - 127;
	
		if (!Static_21)
		{
			if (iVar1 > 0 + iVar0)
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = fVar2 - 0.5f;
			
				if (fVar2 < -36f)
					fVar2 = -36f;
			
				GRAPHICS::SET_TV_VOLUME(fVar2);
				Static_22 = MISC::GET_GAME_TIMER();
				Static_21 = true;
			}
		
			if (iVar1 < 0 - iVar0)
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = fVar2 + 0.5f;
			
				if (fVar2 > 0f)
					fVar2 = 0f;
			
				GRAPHICS::SET_TV_VOLUME(fVar2);
				Static_22 = MISC::GET_GAME_TIMER();
				Static_21 = true;
			}
		
			if (iVar1 < 0 + iVar0 && iVar1 > 0 - iVar0)
			{
				Static_23 = true;
			}
			else if (Static_23)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
				
					Static_23 = false;
				}
			}
		}
	
		if (Static_21)
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > Static_22 + 24)
				Static_21 = false;
	}
}

bool func_25(bool bParam0) // Position - 0xEBC
{
	int iVar0;
	int iVar1;

	iVar0 = 64;
	iVar1 = PAD::GET_CONTROL_VALUE(2, 218) - 127;

	if (bParam0 || BUILTIN::TIMERA() > 300)
	{
		if (iVar1 > 0 + iVar0 || iVar1 < 0 - iVar0)
		{
			BUILTIN::SETTIMERA(0);
			return true;
		}
	}

	return false;
}

void func_26() // Position - 0xF08
{
	float fVar0;

	fVar0 = 50f;

	if (Static_83 == false)
	{
		Static_76 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Static_77, Static_80, fVar0, 0, 2);
		CAM::SET_CAM_FAR_CLIP(Static_76, 100f);
		CAM::SET_CAM_ACTIVE(Static_76, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_37))
			ENTITY::SET_ENTITY_VISIBLE(Static_37, 0, 0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				Static_34 = true;
			}
		
			TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_29, -1, 0, 2);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	
		if (!MISC::ARE_STRINGS_EQUAL(&Static_60, "NULL"))
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&Static_60))
				AUDIO::START_AUDIO_SCENE(&Static_60);
	
		func_5(true, true, false, 0, false, false, false);
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
		Static_83 = true;
	}
}

bool func_27(int iParam0, bool bParam1) // Position - 0xFDF
{
	int iVar0;

	iVar0 = func_28(iParam0);

	if (iVar0 == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_22(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45660[iVar0 /*32*/] == true && Global_45660[iVar0 /*32*/].f_4 == true)
		{
			if (bParam1)
				if (Global_45660[iVar0 /*32*/].f_29)
					return false;
		
			Global_45660[iVar0 /*32*/].f_5 = 1;
			Global_45660[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_45660[iVar0 /*32*/] == false;
			Global_45660[iVar0 /*32*/].f_7;
		}
	}

	return false;
}

int func_28(int iParam0) // Position - 0x1097
{
	int iVar0;

	if (iParam0 < 0)
		return -1;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (Global_45660[iVar0 /*32*/].f_1 == iParam0)
			return iVar0;
	}

	return -1;
}

void func_29(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6) // Position - 0x10D2
{
	int iVar0;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CONTEXT_CONTROLLER")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!(*uParam0 == -1))
			func_44(uParam0);
	
		return;
	}

	if (!(*uParam0 == -1))
		return;

	iVar0 = 0;

	for (iVar0 = 0; iVar0 < 6; iVar0 = iVar0 + 1)
	{
		if (!Global_45660[iVar0 /*32*/])
		{
			Global_45660[iVar0 /*32*/] = true;
			Global_45660[iVar0 /*32*/].f_1 = Global_45861;
			Global_45861 = Global_45861 + 1;
			Global_45660[iVar0 /*32*/].f_4 = 0;
			Global_45660[iVar0 /*32*/].f_29 = 0;
			Global_45660[iVar0 /*32*/].f_5 = 0;
			Global_45660[iVar0 /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_45660[iVar0 /*32*/].f_8), sParam2, 16);
			Global_45660[iVar0 /*32*/].f_6 = iParam3;
			Global_45660[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_45660[iVar0 /*32*/].f_7 = 0;
			Global_45660[iVar0 /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_45660[iVar0 /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_45660[iVar0 /*32*/].f_13), sParam4, 64);
				Global_45660[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_45660[iVar0 /*32*/].f_12 = 0;
				Global_45660[iVar0 /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_45660[iVar0 /*32*/].f_1;
			return;
		}
	}
}

void func_30() // Position - 0x11FD
{
	if (MISC::IS_PC_VERSION())
	{
		if (Static_85 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("TV_Controls");
			Static_85 = 1;
		}
	}
}

bool func_31(int iParam0, int iParam1) // Position - 0x121D
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

float func_32(var uParam0) // Position - 0x1255
{
	if (func_35(uParam0))
		if (func_34(uParam0))
			return uParam0->f_2;
		else
			return func_33(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return uParam0->f_1;
}

float func_33(bool bParam0) // Position - 0x1291
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;

	if (bParam0)
	{
		fVar0 = BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = BUILTIN::TO_FLOAT(uVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

bool func_34(var uParam0) // Position - 0x12E9
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_35(var uParam0) // Position - 0x12F6
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_36() // Position - 0x1303
{
	float fVar0;

	fVar0 = 1f;
	func_37(&fVar0);
	HUD::SET_TEXT_RENDER_ID(Static_33);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
}

void func_37(var uParam0) // Position - 0x1344
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = GRAPHICS::GET_ASPECT_RATIO(0);

	if (fVar0 <= 16f / 9f)
	{
		fVar1 = fVar0 / 16f / 9f;
		fVar2 = *uParam0;
		*uParam0 = fVar2 * fVar1;
	}
}

void func_38() // Position - 0x1381
{
	Global_33853[Static_41 /*11*/].f_7 = 0;
	Global_33853[Static_41 /*11*/] = GRAPHICS::GET_TV_CHANNEL();
	Static_28 = GRAPHICS::GET_TV_VOLUME();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Static_60))
		AUDIO::STOP_AUDIO_SCENE(&Static_60);

	if (func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || func_43("TV_HLP2" /* GXT: Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~Press ~INPUT_CONTEXT~ to stop watching.~n~ */) || func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */) || func_43("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
		HUD::CLEAR_HELP(1);

	func_44(&Static_40);
	GRAPHICS::SET_TV_CHANNEL(-1);
	BUILTIN::WAIT(0);
	func_3();
	func_53();
}

bool func_39(int iParam0) // Position - 0x1401
{
	var uVar0;

	uVar0 = { func_40(PLAYER::PLAYER_ID()) };

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
			return true;
	
		case 4:
			if (uVar0.f_2 < 74f)
				return true;
			break;
	
		case 5:
			if (uVar0.f_2 > 75f)
				return true;
			break;
	}

	return false;
}

Vector3 func_40(var uParam0) // Position - 0x1476
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_41(int iParam0, int iParam1) // Position - 0x1489
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

char* func_42(int iParam0) // Position - 0x14E6
{
	char* sVar0;

	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
	
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
	
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
	
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
	
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
	
		case 8:
			sVar0 = "PL_SP_INV";
			break;
	
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
	
		case 5:
			sVar0 = "PL_LO_RS";
			break;
	
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
	
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
	
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
	
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
	
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
	
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}

	return sVar0;
}

bool func_43(char* sParam0) // Position - 0x15C5
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_44(var uParam0) // Position - 0x15D8
{
	int iVar0;

	if (*uParam0 == -1)
		return;

	iVar0 = func_28(*uParam0);

	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_45660[iVar0 /*32*/])
		{
			Global_45660[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
}

bool func_45() // Position - 0x162F
{
	if (func_32(&Static_24) < 1f)
	{
		func_44(&Static_40);
		return false;
	}

	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Static_86, 1f, 1f, 1.5f, 0, 1, 0) || !PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Static_29, 90f) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&Static_40);
		return false;
	}

	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Static_35) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		func_44(&Static_40);
		return false;
	}

	if (func_31(8, -1))
	{
		func_44(&Static_40);
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_44(&Static_40);
		return false;
	}

	if (Global_99357)
	{
		func_44(&Static_40);
		return false;
	}

	if (Global_33853[Static_41 /*11*/].f_8)
	{
		func_44(&Static_40);
		return false;
	}

	if (Static_40 == -1)
	{
		func_29(&Static_40, 3, "TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */, 0, 0, 0, 0);
		return false;
	}

	if (func_27(Static_40, true))
	{
		func_44(&Static_40);
		func_56(&Static_24);
		Global_33853[Static_41 /*11*/].f_7 = 1;
	
		if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
			AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
	
		func_46(309, 0, 0);
		return true;
	}

	return false;
}

void func_46(int iParam0, int iParam1, int iParam2) // Position - 0x175E
{
	bool bVar0;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_52(891 + iParam0, 1, -1);
	}

	bVar0 = true;

	if (Global_114931.f_10201[iParam0 /*12*/].f_5 == true)
	{
		if (Global_114931.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114931.f_10201[iParam0 /*12*/].f_6 == 12)
			bVar0 = false;
	}
	else
	{
		Global_114931.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114931.f_10201[iParam0 /*12*/].f_10 = iParam1;
		Global_114931.f_10201[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (bVar0)
		func_47();
}

void func_47() // Position - 0x1844
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_114667 = 0;
	Global_114668 = 0;
	Global_114669 = 0;
	Global_114670 = 0;
	Global_114671 = 0;
	Global_114672 = 0;
	Global_114673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114931.f_10201.f_3853;
	Global_114931.f_10201.f_3853 = 0f;

	while (iVar0 < 321)
	{
		if (Global_114931.f_10201[iVar0 /*12*/].f_5 == true)
		{
			switch (Global_114931.f_10201[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114667 = Global_114667 + 1;
					fVar1 = fVar1 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 3:
					Global_114668 = Global_114668 + 1;
					fVar2 = fVar2 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 5:
					Global_114669 = Global_114669 + 1;
					fVar3 = fVar3 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 7:
					Global_114670 = Global_114670 + 1;
					fVar4 = fVar4 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 9:
					Global_114671 = Global_114671 + 1;
					fVar5 = fVar5 + (Global_114931.f_10201[iVar0 /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_114672 = Global_114672 + 1;
					fVar6 = fVar6 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				case 13:
					Global_114673 = Global_114673 + 1;
					fVar7 = fVar7 + Global_114931.f_10201[iVar0 /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		iVar0 = iVar0 + 1;
	}

	if (Global_114650 > 0)
		if (Global_114667 == Global_114650)
			fVar1 = 55f;

	if (Global_114651 > 0)
		if (Global_114668 == Global_114651)
			fVar2 = 10f;

	if (Global_114652 > 0)
		if (Global_114669 == Global_114652)
			fVar3 = 0f;

	if (Global_114653 > 0)
		if (Global_114670 == Global_114653)
			fVar4 = 10f;

	if (Global_114654 > 0)
	{
		if (Global_114671 == Global_114654 || (Global_114654 * 10) / Global_114671 < 41 || Global_114671 > Global_114657 || Global_114671 == Global_114657)
		{
			if (!IS_BIT_SET(Global_114931.f_10201.f_3856, 14))
			{
				if (Global_114671 == Global_114654)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_114654, 0);
					MISC::SET_BIT(&(Global_114931.f_10201.f_3856), 14);
				}
			}
		
			fVar5 = 5f;
		}
	}

	if (Global_114655 > 0)
		if (Global_114672 == Global_114655)
			fVar6 = 15f;

	if (Global_114656 > 0)
		if (Global_114673 == Global_114656)
			fVar7 = 5f;

	Global_114931.f_10201.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;

	if (Global_114671 > Global_114657 || Global_114671 == Global_114657)
		iVar9 = Global_114657;
	else
		iVar9 = Global_114671;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_114667, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_114650, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_114668, 1);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_114651, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_114669, 1);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_114652, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_114670, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_114653, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_114657, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_114673 + Global_114672, 1);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_114656 + Global_114655, 1);
	Global_114674 = (Global_114667 * 100) / Global_114650;
	Global_114676 = ((Global_114669 + Global_114668) * 100) / (Global_114652 + Global_114651);
	Global_114675 = ((Global_114670 + iVar9) * 100) / (Global_114653 + Global_114657);
	Global_114677 = ((Global_114672 + Global_114673) * 100) / (Global_114655 + Global_114656);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_114931.f_10201.f_3853, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_114674, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_114675, 1);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_114676, 1);

	if (fVar8 > 0f && BUILTIN::FLOOR(fVar8) < BUILTIN::FLOOR(Global_114931.f_10201.f_3853))
		func_51(13, BUILTIN::FLOOR(Global_114931.f_10201.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80305)
		{
			if (func_50() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_114665 = false;
			
				if (!Global_65027)
					func_48();
			}
		}
	}
}

int func_48() // Position - 0x1D02
{
	if (func_49(false))
		return 0;

	if (Global_102493.f_8)
		if (Global_102493.f_10 > 0)
			return 0;
	else if (Global_102493.f_10 > 1)
		return 0;

	Global_102493.f_10 = Global_102493.f_10 + 1;
	return 1;
}

bool func_49(bool bParam0) // Position - 0x1D4D
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_80554, 0);
}

int func_50() // Position - 0x1D75
{
	return Global_33792;
}

int func_51(int iParam0, int iParam1) // Position - 0x1D80
{
	int iVar0;

	if (iParam0 < 0)
		return 0;

	if (iParam0 > 78)
		return 0;

	if (iParam1 <= 0 || iParam1 > 100)
		return 0;

	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > iVar0)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return 0;
}

void func_52(int iParam0, int iParam1, bool bParam2) // Position - 0x1DD1
{
	if (bParam2 == -1)
		bParam2 = func_9();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, iParam1, bParam2);
}

void func_53() // Position - 0x1DEF
{
	BUILTIN::WAIT(0);

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");
		Static_33 = -1;
		HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	}
}

void func_54() // Position - 0x1E1B
{
	var uVar0;

	if (Static_41 == 4)
		func_55();

	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
		HUD::RELEASE_NAMED_RENDERTARGET("tvscreen");

	BUILTIN::WAIT(0);

	if (!ENTITY::DOES_ENTITY_EXIST(Static_35))
		func_69();

	uVar0 = ENTITY::GET_ENTITY_MODEL(Static_35);
	HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
	HUD::LINK_NAMED_RENDERTARGET(uVar0);
	BUILTIN::WAIT(0);

	if (Static_41 != 4)
	{
		while (!HUD::IS_NAMED_RENDERTARGET_LINKED(uVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Static_35))
				func_69();
		
			if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Static_35))
				func_69();
		
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("tvscreen"))
				HUD::REGISTER_NAMED_RENDERTARGET("tvscreen", 0);
		
			if (!HUD::IS_NAMED_RENDERTARGET_LINKED(uVar0))
				HUD::LINK_NAMED_RENDERTARGET(uVar0);
		
			BUILTIN::WAIT(0);
		}
	}

	Static_33 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("tvscreen");
	func_3();
}

void func_55() // Position - 0x1ED9
{
	if (ENTITY::DOES_ENTITY_EXIST(Static_35))
		if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCREEN2"))
			return;

	Static_35 = 0;
	Static_35 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("V_ILEV_MM_SCREEN2"), Static_29, 1, 1, 0, 0);
	ENTITY::SET_ENTITY_HEADING(Static_35, Static_32);
	ENTITY::FREEZE_ENTITY_POSITION(Static_35, 1);
	ENTITY::SET_ENTITY_VISIBLE(Static_35, 0, 0);
	Static_37 = 0;
	Static_37 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("V_ILEV_MM_SCREEN2_VL"), Static_29, 1, 1, 0, 0);
	ENTITY::SET_ENTITY_HEADING(Static_37, Static_32);
	ENTITY::FREEZE_ENTITY_POSITION(Static_37, 1);
	ENTITY::SET_ENTITY_VISIBLE(Static_37, 0, 0);
}

void func_56(var uParam0) // Position - 0x1F58
{
	func_57(uParam0, 0f);
}

void func_57(var uParam0, float fParam1) // Position - 0x1F67
{
	uParam0->f_1 = func_33(IS_BIT_SET(*uParam0, 4)) - fParam1;
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_58() // Position - 0x1F92
{
}

bool func_59(int iParam0) // Position - 0x1F9A
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_114931.f_9092.f_330[iParam0 /*6*/];
}

void func_60() // Position - 0x1FC6
{
	Static_29 = { ENTITY::GET_ENTITY_COORDS(Static_35, 1) };
	Static_32 = ENTITY::GET_ENTITY_HEADING(Static_35);
	func_62();

	if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("PROP_TV_03"))
	{
		if (BUILTIN::VDIST(Static_29, -9.541955f, -1440.9166f, 31.346916f) < 3f)
		{
			Static_41 = 0;
			Static_77 = { -9.8135f, -1440.9128f, 31.3654f };
			Static_80 = { 0f, 0f, -134.3211f };
			Static_86 = { -9.3078f, -1440.931f, 30.1015f };
			TEXT_LABEL_ASSIGN_STRING(&Static_44, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&Static_60, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("PROP_TREV_TV_01"))
	{
		if (BUILTIN::VDIST(Static_29, 1978.425f, 3819.6572f, 34.26763f) < 3f)
		{
			Static_41 = 2;
			Static_77 = { 1978.2303f, 3819.6504f, 34.2724f };
			Static_80 = { 0f, 0f, -105.15f };
			Static_86 = { 1978.3303f, 3819.717f, 32.4501f };
			func_61();
			TEXT_LABEL_ASSIGN_STRING(&Static_44, "SE_TREVOR_TRAILER_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&Static_60, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("PROP_TV_FLAT_01"))
	{
		if (BUILTIN::VDIST(Static_29, 3.6654f, 529.8486f, 173.6281f) < 3f)
		{
			Static_41 = 1;
			Static_77 = { 2.5724f, 527.9989f, 176.1619f };
			Static_80 = { 0f, 0f, -29.9488f };
			Static_86 = { 3.6654f, 529.8486f, 173.6281f };
			TEXT_LABEL_ASSIGN_STRING(&Static_44, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			TEXT_LABEL_ASSIGN_STRING(&Static_60, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("PROP_TV_FLAT_02"))
	{
		if (BUILTIN::VDIST(Static_29, -1160.6947f, -1520.7448f, 10.49168f) < 3f)
		{
			Static_41 = 3;
			Static_77 = { -1160.5024f, -1520.7598f, 10.7393f };
			Static_80 = { 0f, 0f, 60.061f };
			Static_86 = { -1160.143f, -1520.4946f, 9.6555f };
			TEXT_LABEL_ASSIGN_STRING(&Static_44, "TREVOR_APARTMENT_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&Static_60, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCREEN2") || ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCRE_OFF"))
	{
		if (BUILTIN::VDIST(Static_29, -802.25275f, 173.03743f, 74.35708f) < 3f)
		{
			Static_41 = 4;
			Static_77 = { -802.8972f, 172.537f, 74.5801f };
			Static_80 = { 0f, 0f, -69.0273f };
			Static_86 = { -800.7292f, 173.2194f, 71.8348f };
			TEXT_LABEL_ASSIGN_STRING(&Static_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&Static_60, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("DES_TVSMASH_START"))
	{
		if (BUILTIN::VDIST(Static_29, -809.962f, 170.919f, 75.7407f) < 3f)
		{
			Static_41 = 5;
			Static_77 = { -808.3051f, 171.2623f, 77.2822f };
			Static_80 = { 1.8886f, 0f, 110.9232f };
			Static_86 = { -809.962f, 170.919f, 75.7407f };
			TEXT_LABEL_ASSIGN_STRING(&Static_44, "SE_MICHAELS_HOUSE_RADIO", 64);
			TEXT_LABEL_ASSIGN_STRING(&Static_60, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

void func_61() // Position - 0x22B5
{
	Static_36 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("PROP_TT_SCREENSTATIC"), Static_29, 1, 1, 0, 0);
	ENTITY::SET_ENTITY_HEADING(Static_36, Static_32);
	ENTITY::SET_ENTITY_VISIBLE(Static_36, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Static_36, 1);
}

void func_62() // Position - 0x22E7
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_42(1), 0);

	if (func_59(22))
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(12), 0);
	else
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_42(2), 0);
}

void func_63() // Position - 0x231D
{
	if (Static_41 == -1)
		return;

	if (Global_33853[Static_41 /*11*/].f_10 == 0)
	{
		if (Static_84 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Static_38))
				ENTITY::SET_ENTITY_INVINCIBLE(Static_38, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_35))
				ENTITY::SET_ENTITY_INVINCIBLE(Static_35, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_37))
				ENTITY::SET_ENTITY_INVINCIBLE(Static_37, 0, 0);
		
			if (ENTITY::DOES_ENTITY_EXIST(Static_36))
				ENTITY::SET_ENTITY_INVINCIBLE(Static_36, 0, 0);
		
			Static_84 = 0;
		}
	}
	else if (Static_84 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Static_38))
			ENTITY::SET_ENTITY_INVINCIBLE(Static_38, 1, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_35))
			ENTITY::SET_ENTITY_INVINCIBLE(Static_35, 1, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_37))
			ENTITY::SET_ENTITY_INVINCIBLE(Static_37, 1, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(Static_36))
			ENTITY::SET_ENTITY_INVINCIBLE(Static_36, 1, 0);
	
		Static_84 = 1;
	}
}

bool func_64(int iParam0) // Position - 0x23D8
{
	return Global_44886 == iParam0;
}

bool func_65(int iParam0) // Position - 0x23E6
{
	if (iParam0 != -1)
		if (Global_33853[iParam0 /*11*/].f_5)
			return true;

	return false;
}

bool func_66() // Position - 0x2405
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

bool func_67() // Position - 0x2422
{
	if (Global_99351 != -1)
		return IS_BIT_SET(Global_93217[Global_99351 /*34*/].f_15, 20);

	return false;
}

void func_68() // Position - 0x2445
{
}

void func_69() // Position - 0x244D
{
	if (Static_41 == -1)
		SCRIPT::TERMINATE_THIS_THREAD();

	func_44(&Static_40);

	if (Static_41 != -1)
	{
		func_1();
		Global_33853[Static_41 /*11*/].f_6 = 0;
		Global_33853[Static_41 /*11*/].f_7 = 0;
		Global_33853[Static_41 /*11*/].f_8 = 0;
		Global_33853[Static_41 /*11*/].f_4 = 0;
		Global_33853[Static_41 /*11*/].f_5 = 0;
		Global_33853[Static_41 /*11*/].f_2 = 0;
		Global_33853[Static_41 /*11*/] = -1;
		Global_33853[Static_41 /*11*/].f_1 = 0;
		Global_33853[Static_41 /*11*/].f_10 = 0;
	}

	if (func_43("TV_HLP1" /* GXT: Press ~INPUT_CONTEXT~ to turn on the TV. */) || func_43("TV_HLP5" /* GXT: Press ~INPUT_SCRIPT_RUP~ to use the TV controls.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */) || func_43("TV_HLP6" /* GXT: Press ~INPUT_SCRIPT_RUP~ to stop using the TV controls.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_X~ to change the channel.~n~Use ~INPUT_SCRIPT_LEFT_AXIS_Y~ to change the volume.~n~Press ~INPUT_CONTEXT~ to turn off the TV.~n~ */))
		HUD::CLEAR_HELP(1);

	BUILTIN::WAIT(0);
	func_70();

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Static_60))
		AUDIO::STOP_AUDIO_SCENE(&Static_60);

	AUDIO::UNHINT_AMBIENT_AUDIO_BANK();
	func_2();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_70() // Position - 0x2514
{
	func_53();

	if (ENTITY::DOES_ENTITY_EXIST(Static_35))
	{
		if (ENTITY::GET_ENTITY_MODEL(Static_35) == joaat("V_ILEV_MM_SCREEN2"))
		{
			OBJECT::DELETE_OBJECT(&Static_35);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("V_ILEV_MM_SCREEN2"));
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Static_37))
	{
		OBJECT::DELETE_OBJECT(&Static_37);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("V_ILEV_MM_SCREEN2_VL"));
	}

	if (ENTITY::DOES_ENTITY_EXIST(Static_36))
	{
		OBJECT::DELETE_OBJECT(&Static_36);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_TT_SCREENSTATIC"));
	}
}

