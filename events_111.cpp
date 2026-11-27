#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_9084()
{
    // event 1928_36
    {
        if (!(group_main_engine_1)) goto event_1928_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (1))) goto event_1928_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 252, 0));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(176, 132, 0));
    }
    event_1928_36_end: ;
}
void Frames::event_func_9085()
{
    // event 1929_36
    {
        if (!(group_main_engine_1)) goto event_1929_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (2))) goto event_1929_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(248, 100, 248));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(168, 36, 168));
    }
    event_1929_36_end: ;
}
void Frames::event_func_9086()
{
    // event 1930_36
    {
        if (!(group_main_engine_1)) goto event_1930_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (3))) goto event_1930_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(96, 116, 248));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(0, 0, 248));
    }
    event_1930_36_end: ;
}
void Frames::event_func_9087()
{
    // event 1931_36
    {
        if (!(group_main_engine_1)) goto event_1931_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 22)) == (4))) goto event_1931_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(200, 0, 0), make_color_int(232, 232, 232));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(96, 0, 0), make_color_int(128, 128, 128));
    }
    event_1931_36_end: ;
}
void Frames::event_func_9088()
{
    // event 1932_36
    {
        if (!(group_main_engine_1)) goto event_1932_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (1))) goto event_1932_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(248, 140, 72));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(248, 48, 40));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(192, 16, 0));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(112, 0, 8));
    }
    event_1932_36_end: ;
}
void Frames::event_func_9089()
{
    // event 1933_36
    {
        if (!(group_main_engine_1)) goto event_1933_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (2))) goto event_1933_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(72, 252, 224));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(40, 172, 248));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(0, 112, 192));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(0, 80, 112));
    }
    event_1933_36_end: ;
}
void Frames::event_func_9090()
{
    // event 1934_36
    {
        if (!(group_main_engine_1)) goto event_1934_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (3))) goto event_1934_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(248, 188, 184));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(248, 40, 232));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(192, 0, 168));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(104, 0, 112));
    }
    event_1934_36_end: ;
}
void Frames::event_func_9091()
{
    // event 1935_36
    {
        if (!(group_main_engine_1)) goto event_1935_36_end;
        if (!((((ArrayObject*)get_instance(savedata_28_instances))->get_value(1, 24)) == (4))) goto event_1935_36_end;
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 196, 72), make_color_int(160, 140, 88));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(248, 120, 40), make_color_int(96, 72, 56));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(192, 84, 0), make_color_int(48, 28, 16));
        ((Active*)get_instance(playerassistcopilot_2219_instances))->replace_color(make_color_int(112, 28, 0), make_color_int(24, 12, 8));
    }
    event_1935_36_end: ;
}
void Frames::event_func_9092()
{
    // event 1936_36
    {
        if (!(group_main_engine_1)) goto event_1936_36_end;
        ((Active*)get_instance(guicompass_1270_instances))->alterables->values.set(1, ((Active*)get_instance(guicompass_1270_instances))->get_y());
        ((Active*)get_instance(guicompass_1270_instances))->alterables->values.set(2, ((Active*)get_instance(guicompass_1270_instances))->get_x());
    }
    event_1936_36_end: ;
}
void Frames::event_func_9093()
{
    // event 2092_36
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2092_36_end;
        ((Active*)get_instance(playerinput_19_instances))->alterables->values.set(12, 1);
        levelcardintro3_760_instances.clear_selection();
        for (ObjectIterator it(levelcardintro3_760_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        levelcardintro2_761_instances.clear_selection();
        for (ObjectIterator it(levelcardintro2_761_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(4);
        }
    }
    event_2092_36_end: ;
}
void Frames::event_func_9094()
{
    // event 2094_36
    {
        if (!(group_main_engine_1 && group_main_engine_interface_and_post_processing_methods_titlecard_1)) goto event_2094_36_end;
        if (!((global_values->get(4)) <= (0))) goto event_2094_36_end;
            group_main_engine_interface_and_post_processing_methods_titlecard_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_fly_in_1) {
            group_main_engine_level_specific_methods_cutscenes_fly_in_1 = true;
        }
        if (!group_main_engine_interface_and_post_processing_methods_timer_1) {
            group_main_engine_interface_and_post_processing_methods_timer_1 = true;
        }
    }
    event_2094_36_end: ;
}
void Frames::on_frame_37_start_events()
{
    event_func_4133();
    event_func_3265();
    event_func_9068();
    event_func_2659();
    event_func_2660();
    event_func_2661();
    event_func_2662();
    event_func_2663();
    event_func_2664();
    event_func_2665();
    event_func_2666();
    event_func_2667();
    event_func_2668();
    event_func_2669();
    event_func_2670();
    event_func_2671();
    event_func_2672();
    event_func_3267();
    event_func_9069();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_3270();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_9070();
    event_func_8575();
    event_func_9071();
    event_func_9072();
    event_func_9073();
    event_func_9074();
    event_func_2686();
    event_func_8576();
    event_func_9075();
    event_func_9076();
    event_func_9077();
    event_func_9078();
    event_func_9079();
    event_func_9080();
    event_func_9081();
    event_func_9082();
    event_func_9083();
    event_func_9084();
    event_func_9085();
    event_func_9086();
    event_func_9087();
    event_func_9088();
    event_func_9089();
    event_func_9090();
    event_func_9091();
    event_func_9092();
    event_func_3994();
    event_func_3995();
    event_func_3996();
    event_func_9093();
    event_func_4145();
    event_func_9094();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_37_init()
{
    index = 36;
    width = 12800;
    height = 2400;
    virtual_width = 12800;
    virtual_height = 2400;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.800000011921, 0.800000011921, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    layers[3].init(3, 1.0, 1.0, true, false, false);
    layers[4].init(4, 1.0, 1.0, true, false, false);
    layers[5].init(5, 1.0, 1.0, true, false, false);
    layers[6].init(6, 0.0, 0.0, true, false, false);
    layers[7].init(7, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &shipplatform2_2094_instances, &levelsbplatform1_2096_instances, &levelsbplatform3_2197_instances, NULL};
    qualifier_8.set(12, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &shipplatform2_2094_instances, &levelsbplatform1_2096_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &levelsbplatform3_2197_instances, NULL};
    qualifier_9.set(35, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyrotorbladedeath_2126_instances, &gimmickcannonbase_2198_instances, &enemyhoppermkii_2200_instances, &enemyaxleturret_2201_instances, &enemyrotorblade_2205_instances, &enemymagmeon_2208_instances, &bosschopper_2216_instances, &enemydrone_2222_instances, &bossspadehitbox_2232_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece3_468_instances, &levelparallaxpiece4_469_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, &levelparallaxpiece7_764_instances, NULL};
    qualifier_0.set(8, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &switchdoor_735_instances, &switchplatform_2100_instances, &hazardspikesup_558_instances, &hazardspikesdown_559_instances, &hazardspikesleft_560_instances, &hazardspikesright_561_instances, &gimmickcannonbase_2198_instances, &breakablefloor1_1760_instances, &breakablefloor2_1761_instances, &sbloop1_2209_instances, &sbloop2_2210_instances, &sbloop3_2211_instances, &sbloop5_2223_instances, &sbloop4_2224_instances, &sbloop6_2225_instances, NULL};
    qualifier_7.set(38, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &bossspade_2194_instances, &enemymagmeon_2208_instances, NULL};
    qualifier_4.set(36, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidlesensor_740_instances, NULL};
    qualifier_23.set(1, &qualifier_23_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &sbloop1_2209_instances, &sbloop4_2224_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &sbloop2_2210_instances, &sbloop3_2211_instances, &sbloop5_2223_instances, &sbloop6_2225_instances, NULL};
    qualifier_11.set(7, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelsbplatform1_2096_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelsbplatform1_2096_instances, &levelsbplatform3_2197_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_2039(0, -8), 0);
    add_background_object(create_levelparallaxpiece1_2041(0, 160), 0);
    add_background_object(create_levelparallaxpiece3_2043(0, 80), 0);
    add_background_object(create_levelparallaxpiece4_2044(0, 224), 0);
    add_background_object(create_levelparallaxpiece2_2045(0, 264), 0);
    add_background_object(create_levelparallaxpiece5_2046(0, 192), 0);
    add_background_object(create_levelparallaxpiece6_2047(8, 208), 0);
    add_background_object(create_levelparallaxzaoship_2121(128, 112), 0);
    add_background_object(create_levelparallaxpiece7_2048(0, 0), 0);
    add_object(create_zaoshipfalling_2129(173, 224), 0);
    add_background_object(create_sbredshipbg_2130(4048, 152), 1);
    add_background_object(create_sbredshipbg_2130(2768, 152), 1);
    add_background_object(create_sbredshipbg2_2131(2736, 152), 1);
    add_background_object(create_sbredshipbg3_2132(5328, 152), 1);
    add_background_object(create_sbredshipbg3_2132(2768, 152), 1);
    add_background_object(create_sbredshipbg2_2131(5360, 152), 1);
    add_background_object(create_sbredshipbg_2130(6552, 88), 1);
    add_background_object(create_sbredshipbg2_2131(6520, 88), 1);
    add_background_object(create_sbredshipbg3_2132(6552, 88), 1);
    add_background_object(create_sbredshipbg3_2132(7832, 88), 1);
    add_background_object(create_sbredshipbg2_2131(7864, 88), 1);
    add_object(create_levelfanblade_2133(2880, 664), 1);
    add_object(create_levelfanblade_2133(2880, 664), 1);
    add_object(create_levelfanblade_2133(2880, 664), 1);
    add_object(create_levelfanblade_2133(2880, 664), 1);
    add_object(create_levelfanblade_2133(3152, 664), 1);
    add_object(create_levelfanblade_2133(3152, 664), 1);
    add_object(create_levelfanblade_2133(3152, 664), 1);
    add_object(create_levelfanblade_2133(3152, 664), 1);
    add_object(create_levelfanblade_2133(2880, 384), 1);
    add_object(create_levelfanblade_2133(2880, 384), 1);
    add_object(create_levelfanblade_2133(2880, 384), 1);
    add_object(create_levelfanblade_2133(2880, 384), 1);
    add_object(create_levelfanblade_2133(3152, 384), 1);
    add_object(create_levelfanblade_2133(3152, 384), 1);
    add_object(create_levelfanblade_2133(3152, 384), 1);
    add_object(create_levelfanblade_2133(3152, 384), 1);
    add_object(create_levelfanblade_2133(4128, 584), 1);
    add_object(create_levelfanblade_2133(4128, 584), 1);
    add_object(create_levelfanblade_2133(4128, 584), 1);
    add_object(create_levelfanblade_2133(4128, 584), 1);
    add_object(create_levelfanblade_2133(4368, 424), 1);
    add_object(create_levelfanblade_2133(4368, 424), 1);
    add_object(create_levelfanblade_2133(4368, 424), 1);
    add_object(create_levelfanblade_2133(4368, 424), 1);
    add_object(create_levelfanblade_2133(6904, 776), 1);
    add_object(create_levelfanblade_2133(6904, 776), 1);
    add_object(create_levelfanblade_2133(6904, 776), 1);
    add_object(create_levelfanblade_2133(6904, 776), 1);
    add_object(create_levelfanblade_2133(7160, 776), 1);
    add_object(create_levelfanblade_2133(7160, 776), 1);
    add_object(create_levelfanblade_2133(7160, 776), 1);
    add_object(create_levelfanblade_2133(7160, 776), 1);
    add_object(create_levelfanblade_2133(7672, 384), 1);
    add_object(create_levelfanblade_2133(7672, 384), 1);
    add_object(create_levelfanblade_2133(7672, 384), 1);
    add_object(create_levelfanblade_2133(7672, 384), 1);
    add_object(create_levelfanblade_2133(7416, 384), 1);
    add_object(create_levelfanblade_2133(7416, 384), 1);
    add_object(create_levelfanblade_2133(7416, 384), 1);
    add_object(create_levelfanblade_2133(7416, 384), 1);
    add_object(create_levelfanblade_2133(7672, 616), 1);
    add_object(create_levelfanblade_2133(7672, 616), 1);
    add_object(create_levelfanblade_2133(7672, 616), 1);
    add_object(create_levelfanblade_2133(7672, 616), 1);
    add_object(create_levelfanblade_2133(7416, 616), 1);
    add_object(create_levelfanblade_2133(7416, 616), 1);
    add_object(create_levelfanblade_2133(7416, 616), 1);
    add_object(create_levelfanblade_2133(7416, 616), 1);
    add_object(create_levelsbbgplatform_2134(375, 356), 1);
    add_object(create_levelsbbgplatform_2134(343, 356), 1);
    add_object(create_levelsbbgplatform_2134(311, 356), 1);
    add_object(create_levelsbbgplatform_2134(279, 356), 1);
    add_background_object(create_blimpcable2_2135(11416, 760), 2);
    add_background_object(create_sbinnercurve5_2136(6784, 656), 2);
    add_background_object(create_sbinnercurve6_2137(6784, 784), 2);
    add_background_object(create_sbironwall_2138(11328, 784), 2);
    add_background_object(create_sbironwall_2138(11072, 784), 2);
    add_background_object(create_sbironwall_2138(11328, 944), 2);
    add_background_object(create_sbironwall_2138(11072, 944), 2);
    add_background_object(create_sbredsupportbeam2_2139(5400, 784), 2);
    add_background_object(create_sbredsupportbeam2_2139(5416, 848), 2);
    add_background_object(create_sbredsupportbeam1_2140(4472, 336), 2);
    add_background_object(create_sbredsupportbeam1_2140(4488, 272), 2);
    add_background_object(create_sbredsupportbeam1_2140(5008, 336), 2);
    add_background_object(create_sbredsupportbeam1_2140(5024, 272), 2);
    add_background_object(create_sbredsupportbeam2_2139(5296, 784), 2);
    add_background_object(create_sbredsupportbeam2_2139(5312, 848), 2);
    add_background_object(create_sbredsupportbeam1_2140(3344, 760), 2);
    add_background_object(create_sbredsupportbeam1_2140(3328, 824), 2);
    add_background_object(create_sbredsupportbeam1_2140(3408, 760), 2);
    add_background_object(create_sbredsupportbeam1_2140(3392, 824), 2);
    add_background_object(create_sbredsupportbeam1_2140(5936, 464), 2);
    add_background_object(create_sbredsupportbeam1_2140(5952, 400), 2);
    add_background_object(create_sbredsupportbeam1_2140(5968, 336), 2);
    add_background_object(create_sbredsupportbeam1_2140(5888, 656), 2);
    add_background_object(create_sbredsupportbeam1_2140(5904, 592), 2);
    add_background_object(create_sbredsupportbeam1_2140(5920, 528), 2);
    add_background_object(create_sbredsupportbeam1_2140(5984, 272), 2);
    add_background_object(create_sbredsupportbeam1_2140(5840, 848), 2);
    add_background_object(create_sbredsupportbeam1_2140(5856, 784), 2);
    add_background_object(create_sbredsupportbeam1_2140(5872, 720), 2);
    add_background_object(create_sbredsupportbeam2_2139(5520, 520), 2);
    add_background_object(create_sbredsupportbeam2_2139(5536, 584), 2);
    add_background_object(create_sbredsupportbeam2_2139(5488, 392), 2);
    add_background_object(create_sbredsupportbeam2_2139(5504, 456), 2);
    add_background_object(create_sbredsupportbeam2_2139(5568, 712), 2);
    add_background_object(create_sbredsupportbeam2_2139(5584, 776), 2);
    add_background_object(create_sbredsupportbeam2_2139(5552, 648), 2);
    add_background_object(create_sbredsupportbeam2_2139(5600, 840), 2);
    add_background_object(create_sbironwall_2138(7104, 976), 2);
    add_background_object(create_sbredsupportbeam1_2140(7128, 464), 2);
    add_background_object(create_sbredsupportbeam1_2140(7112, 528), 2);
    add_background_object(create_sbredsupportbeam1_2140(7096, 592), 2);
    add_background_object(create_sbchain_2141(6888, 656), 2);
    add_background_object(create_sbchain_2141(6888, 720), 2);
    add_background_object(create_sbchain_2141(6984, 656), 2);
    add_background_object(create_sbchain_2141(6984, 720), 2);
    add_background_object(create_sbironwall_2138(6672, 288), 2);
    add_background_object(create_sbironwall_2138(6672, 128), 2);
    add_background_object(create_sbironwall_2138(6416, 128), 2);
    add_background_object(create_sbredsupportbeam1_2140(7392, 664), 2);
    add_background_object(create_sbredsupportbeam1_2140(7376, 728), 2);
    add_background_object(create_sbredsupportbeam1_2140(7360, 792), 2);
    add_background_object(create_sbironwall_2138(10816, 944), 2);
    add_background_object(create_sbwallshadow_2142(11072, 944), 2);
    add_background_object(create_sbwallshadow_2142(11200, 944), 2);
    add_background_object(create_sbwallshadow_2142(10944, 944), 2);
    add_background_object(create_sbwallshadow_2142(11456, 880), 2);
    add_background_object(create_sbwallshadow_2142(11456, 1008), 2);
    add_background_object(create_sbwallshadow_2142(11200, 928), 2);
    add_background_object(create_sbwallshadow_2142(11200, 912), 2);
    add_background_object(create_sbwallshadow_2142(11200, 896), 2);
    add_background_object(create_sbwallshadow_2142(11216, 816), 2);
    add_background_object(create_sbwallshadow_2142(11232, 784), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(12872, -75), 2);
    add_object(create_link_352(88, -96), 2);
    add_object(create_objectcrystal_279(-275, 82), 2);
    add_object(create_objectcodec_354(-295, 108), 2);
    add_object(create_laddertop_357(-108, 519), 2);
    add_object(create_shieldearth_314(-140, 348), 2);
    add_object(create_shieldflameback_315(-96, 344), 2);
    add_object(create_shieldwood_313(-148, 340), 2);
    add_object(create_shieldmagnetic_317(-132, 348), 2);
    add_object(create_shieldwater_318(-84, 348), 2);
    add_object(create_shieldflamefront_316(-100, 348), 2);
    add_object(create_monitorkeystone_562(-216, 176), 2);
    add_object(create_objectjumppad_530(-104, 576), 2);
    add_object(create_objectfuel_528(-148, 524), 2);
    add_object(create_switchplatformmask_2067(2904, 512), 2);
    add_object(create_switchplatformmask_2067(5016, 600), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_blimpcable3_2143(11504, 696), 3);
    add_background_object(create_blimpcable2_2135(11400, 696), 3);
    add_background_object(create_sbironwall_2138(9800, 440), 3);
    add_background_object(create_sbwallshadow_2142(9760, 528), 3);
    add_background_object(create_sbironwall_2138(5120, 1024), 3);
    add_background_object(create_sbironwall_2138(4608, 1024), 3);
    add_background_object(create_sbironwall_2138(4864, 1024), 3);
    add_background_object(create_sbironwall_2138(9800, 120), 3);
    add_background_object(create_sbwallshadow_2142(9936, 240), 3);
    add_background_object(create_sbwallshadow_2142(9936, 256), 3);
    add_background_object(create_sbsmallwall_2144(5056, 464), 3);
    add_background_object(create_sbsmallwall_2144(5056, 528), 3);
    add_background_object(create_sbsmallwall_2144(5056, 592), 3);
    add_background_object(create_sbironwall_2138(4352, 1024), 3);
    add_background_object(create_sbbigwall2_2145(4224, 1040), 3);
    add_background_object(create_sbwall_2146(5344, 464), 3);
    add_background_object(create_sbwall_2146(5376, 400), 3);
    add_background_object(create_sbwall_2146(5248, 464), 3);
    add_background_object(create_sbwall_2146(5248, 400), 3);
    add_background_object(create_sbbigwall_2147(6144, 528), 3);
    add_background_object(create_sbwall_2146(6912, 464), 3);
    add_background_object(create_sbdeck1_2148(9024, 632), 3);
    add_background_object(create_sbdeck1_2148(10704, 320), 3);
    add_background_object(create_sbironwall_2138(10832, 248), 3);
    add_background_object(create_sbironwall_2138(10832, 88), 3);
    add_background_object(create_sbironwall_2138(10832, 408), 3);
    add_background_object(create_sbironwall_2138(10832, 568), 3);
    add_background_object(create_sbceiling2_2149(10560, 1136), 3);
    add_background_object(create_sbbrokenfloor_2150(5128, 888), 3);
    add_background_object(create_sbironwall_2138(5120, 1184), 3);
    add_background_object(create_sbredsupportbeam1_2140(4888, 1040), 3);
    add_background_object(create_sbredsupportbeam1_2140(4872, 1104), 3);
    add_background_object(create_sbredsupportbeam2_2139(5256, 1040), 3);
    add_background_object(create_sbredsupportbeam2_2139(5272, 1104), 3);
    add_background_object(create_sbredsupportbeam2_2139(5288, 1168), 3);
    add_background_object(create_sbredsupportbeam1_2140(5080, 1040), 3);
    add_background_object(create_sbredsupportbeam1_2140(5064, 1104), 3);
    add_background_object(create_sbredsupportbeam1_2140(6616, 888), 3);
    add_background_object(create_sbbigwall_2147(6784, 528), 3);
    add_background_object(create_sbbigwall_2147(1152, 688), 3);
    add_background_object(create_sbbigwall_2147(4608, 784), 3);
    add_background_object(create_sbbigwall_2147(4864, 784), 3);
    add_background_object(create_ship28_2075(5152, 1408), 3);
    add_background_object(create_sbdeck1_2148(4864, 1144), 3);
    add_background_object(create_sbdeck1_2148(4736, 1112), 3);
    add_background_object(create_sbdeck6_2151(6496, 696), 3);
    add_background_object(create_sbredsupportbeam1_2140(6496, 528), 3);
    add_background_object(create_sbdeck6_2151(6496, 568), 3);
    add_background_object(create_sbredsupportbeam1_2140(6632, 824), 3);
    add_background_object(create_sbredsupportbeam1_2140(6648, 760), 3);
    add_background_object(create_sbredsupportbeam1_2140(6496, 784), 3);
    add_background_object(create_sbredsupportbeam1_2140(6512, 720), 3);
    add_background_object(create_sbredsupportbeam1_2140(6368, 464), 3);
    add_background_object(create_sbredsupportbeam1_2140(6240, 400), 3);
    add_background_object(create_sbredsupportbeam1_2140(6256, 336), 3);
    add_background_object(create_sbredsupportbeam1_2140(6112, 328), 3);
    add_background_object(create_sbredsupportbeam1_2140(6128, 264), 3);
    add_background_object(create_blimpcable3_2143(2624, 928), 3);
    add_background_object(create_blimpcable2_2135(2808, 864), 3);
    add_background_object(create_blimpcable2_2135(2552, 928), 3);
    add_background_object(create_blimpcable3_2143(2352, 928), 3);
    add_background_object(create_sbironwall_2138(3072, 368), 3);
    add_background_object(create_ship28_2075(2080, 1088), 3);
    add_background_object(create_sbwall_2146(2048, 1040), 3);
    add_background_object(create_blimpcable2_2135(11904, 600), 3);
    add_background_object(create_blimpcable2_2135(11624, 568), 3);
    add_background_object(create_blimpcable2_2135(11352, 504), 3);
    add_background_object(create_blimpcable2_2135(11368, 568), 3);
    add_background_object(create_blimpcable3_2143(11776, 696), 3);
    add_background_object(create_blimpcable2_2135(11656, 696), 3);
    add_background_object(create_blimpcable3_2143(11248, 696), 3);
    add_background_object(create_blimpcable2_2135(1944, 792), 3);
    add_background_object(create_blimpcable3_2143(1808, 792), 3);
    add_background_object(create_blimpcable2_2135(1672, 792), 3);
    add_background_object(create_blimpcable3_2143(1536, 792), 3);
    add_background_object(create_sbshipfront_2152(11600, 816), 3);
    add_background_object(create_ship32_2153(1184, 280), 3);
    add_background_object(create_ship34_2154(1824, 280), 3);
    add_background_object(create_ship35_2155(1280, 280), 3);
    add_background_object(create_ship36_2156(1280, 440), 3);
    add_background_object(create_ship33_2157(1184, 440), 3);
    add_background_object(create_ship37_2158(1824, 440), 3);
    add_background_object(create_blimpcable1_2070(1264, 280), 3);
    add_background_object(create_sbironwall_2138(2048, 752), 3);
    add_background_object(create_quickbackdrop7_2159(1296, 440), 3);
    add_background_object(create_quickbackdrop8_2160(1296, 280), 3);
    add_background_object(create_ship35_2155(1536, 280), 3);
    add_background_object(create_ship36_2156(1536, 440), 3);
    add_background_object(create_quickbackdrop7_2159(1552, 440), 3);
    add_background_object(create_quickbackdrop8_2160(1552, 280), 3);
    add_background_object(create_ship35_2155(1808, 280), 3);
    add_background_object(create_ship36_2156(1808, 440), 3);
    add_background_object(create_blimpcable1_2070(1248, 344), 3);
    add_background_object(create_blimpcable1_2070(1232, 408), 3);
    add_background_object(create_blimpcable1_2070(1216, 472), 3);
    add_background_object(create_blimpcable1_2070(1200, 536), 3);
    add_background_object(create_blimpcable2_2135(1816, 280), 3);
    add_background_object(create_blimpcable2_2135(1832, 344), 3);
    add_background_object(create_blimpcable2_2135(1848, 408), 3);
    add_background_object(create_blimpcable2_2135(1864, 472), 3);
    add_background_object(create_blimpcable2_2135(1880, 536), 3);
    add_background_object(create_blimpcable2_2135(1288, 280), 3);
    add_background_object(create_blimpcable2_2135(1304, 344), 3);
    add_background_object(create_blimpcable2_2135(1320, 408), 3);
    add_background_object(create_blimpcable2_2135(1336, 472), 3);
    add_background_object(create_blimpcable2_2135(1352, 536), 3);
    add_background_object(create_blimpcable2_2135(1544, 280), 3);
    add_background_object(create_blimpcable2_2135(1560, 344), 3);
    add_background_object(create_blimpcable2_2135(1576, 408), 3);
    add_background_object(create_blimpcable2_2135(1592, 472), 3);
    add_background_object(create_blimpcable2_2135(1608, 536), 3);
    add_background_object(create_sbdeck1_2148(1024, 664), 3);
    add_background_object(create_sbdeck1_2148(1152, 664), 3);
    add_background_object(create_sbwall_2146(1024, 688), 3);
    add_background_object(create_sbdeck1_2148(1280, 664), 3);
    add_background_object(create_sbdeck3_2161(1536, 792), 3);
    add_background_object(create_sbdeck5_2162(4024, -64), 3);
    add_background_object(create_sbdeck2_2163(4280, -64), 3);
    add_background_object(create_sbwallslope3_2164(1536, 816), 3);
    add_background_object(create_sbdeck1_2148(4152, -64), 3);
    add_background_object(create_sbwall_2146(11728, 752), 3);
    add_background_object(create_sbwallslope6_2165(4024, -40), 3);
    add_background_object(create_sbwallslope5_2166(4280, -40), 3);
    add_background_object(create_sbdeck1_2148(1920, 824), 3);
    add_background_object(create_sbwall_2146(1920, 976), 3);
    add_background_object(create_sbdeck1_2148(2048, 824), 3);
    add_background_object(create_sbwall_2146(2048, 976), 3);
    add_background_object(create_sbdeck1_2148(2176, 824), 3);
    add_background_object(create_sbdeck7walkthru_2167(2024, 728), 3);
    add_background_object(create_sbdeck8walkthru_2168(2304, 728), 3);
    add_background_object(create_sbwall_2146(2176, 848), 3);
    add_background_object(create_sbwall_2146(2176, 912), 3);
    add_background_object(create_sbwall_2146(2176, 976), 3);
    add_background_object(create_sbwallright_2169(2304, 848), 3);
    add_background_object(create_sbironwall_2138(2048, 568), 3);
    add_background_object(create_sbdeck1walkthru_2170(2048, 728), 3);
    add_background_object(create_sbdeck8_2171(2304, 824), 3);
    add_background_object(create_blimpcable1_2070(1184, 600), 3);
    add_background_object(create_blimpcable2_2135(1368, 600), 3);
    add_background_object(create_blimpcable3_2143(1280, 600), 3);
    add_background_object(create_blimpcable2_2135(1624, 600), 3);
    add_background_object(create_blimpcable2_2135(1896, 600), 3);
    add_background_object(create_sbdeck1_2148(2304, 952), 3);
    add_background_object(create_sbwallright_2169(2304, 912), 3);
    add_background_object(create_sbdeck1_2148(2432, 952), 3);
    add_background_object(create_sbwall_2146(2560, 976), 3);
    add_background_object(create_sbdeck1_2148(2560, 952), 3);
    add_background_object(create_sbdeck1_2148(2688, 952), 3);
    add_background_object(create_sbwall_2146(11072, 752), 3);
    add_background_object(create_sbdeck1_2148(11072, 728), 3);
    add_background_object(create_sbwall_2146(11200, 752), 3);
    add_background_object(create_sbdeck1_2148(11200, 728), 3);
    add_background_object(create_sbwall_2146(11600, 752), 3);
    add_background_object(create_sbdeck1_2148(11600, 728), 3);
    add_background_object(create_sbdeck1walkthru_2170(2176, 728), 3);
    add_background_object(create_sbdeck8walkthru_2168(2304, 544), 3);
    add_background_object(create_sbdeck1walkthru_2170(2048, 544), 3);
    add_background_object(create_sbdeck1walkthru_2170(2176, 544), 3);
    add_background_object(create_blimpcable3_2143(1536, 600), 3);
    add_background_object(create_blimpcable3_2143(1808, 600), 3);
    add_background_object(create_sbwallleft_2172(1008, 688), 3);
    add_background_object(create_sbwall_2146(11472, 752), 3);
    add_background_object(create_sbdeck1_2148(11472, 728), 3);
    add_background_object(create_sbwallright_2169(1408, 688), 3);
    add_background_object(create_sbdeck8_2171(1408, 664), 3);
    add_background_object(create_sbwallslope1_2173(1408, 752), 3);
    add_background_object(create_sbdeck9_2174(1408, 728), 3);
    add_background_object(create_sbwall_2146(1280, 816), 3);
    add_background_object(create_sbwall_2146(1152, 880), 3);
    add_background_object(create_sbwall_2146(1152, 816), 3);
    add_background_object(create_sbwall_2146(1408, 816), 3);
    add_background_object(create_sbwall_2146(1536, 848), 3);
    add_background_object(create_sbwallleft_2172(1136, 752), 3);
    add_background_object(create_sbwallleft_2172(1136, 816), 3);
    add_background_object(create_sbwallleft_2172(1136, 880), 3);
    add_background_object(create_ship23_2175(1040, 752), 3);
    add_background_object(create_sbwall_2146(1152, 1008), 3);
    add_background_object(create_sbwall_2146(1152, 944), 3);
    add_background_object(create_sbwall_2146(1280, 1008), 3);
    add_background_object(create_sbwall_2146(1408, 1008), 3);
    add_background_object(create_sbwallleft_2172(1136, 944), 3);
    add_background_object(create_sbwallleft_2172(1136, 1008), 3);
    add_background_object(create_sbwall_2146(1536, 912), 3);
    add_background_object(create_sbwall_2146(1536, 976), 3);
    add_background_object(create_sbwall_2146(1664, 976), 3);
    add_background_object(create_sbdeck1_2148(1664, 824), 3);
    add_background_object(create_sbwall_2146(1792, 976), 3);
    add_background_object(create_sbdeck1_2148(1792, 824), 3);
    add_background_object(create_blimpcable3_2143(1536, 664), 3);
    add_background_object(create_blimpcable3_2143(1536, 728), 3);
    add_background_object(create_blimpcable2_2135(1640, 664), 3);
    add_background_object(create_blimpcable2_2135(1656, 728), 3);
    add_background_object(create_blimpcable3_2143(1808, 664), 3);
    add_background_object(create_blimpcable3_2143(1808, 728), 3);
    add_background_object(create_blimpcable2_2135(1912, 664), 3);
    add_background_object(create_blimpcable2_2135(1928, 728), 3);
    add_background_object(create_ship32_2153(11152, 120), 3);
    add_background_object(create_ship34_2154(11792, 120), 3);
    add_background_object(create_ship35_2155(11248, 120), 3);
    add_background_object(create_ship36_2156(11248, 280), 3);
    add_background_object(create_ship33_2157(11152, 280), 3);
    add_background_object(create_ship37_2158(11792, 280), 3);
    add_background_object(create_quickbackdrop7_2159(11264, 280), 3);
    add_background_object(create_quickbackdrop8_2160(11264, 120), 3);
    add_background_object(create_ship35_2155(11504, 120), 3);
    add_background_object(create_ship36_2156(11504, 280), 3);
    add_background_object(create_quickbackdrop7_2159(11520, 280), 3);
    add_background_object(create_quickbackdrop8_2160(11520, 120), 3);
    add_background_object(create_ship35_2155(11776, 120), 3);
    add_background_object(create_ship36_2156(11776, 280), 3);
    add_background_object(create_blimpcable2_2135(11256, 120), 3);
    add_background_object(create_blimpcable2_2135(11272, 184), 3);
    add_background_object(create_blimpcable2_2135(11288, 248), 3);
    add_background_object(create_blimpcable2_2135(11304, 312), 3);
    add_background_object(create_blimpcable2_2135(11320, 376), 3);
    add_background_object(create_blimpcable2_2135(11512, 120), 3);
    add_background_object(create_blimpcable2_2135(11528, 184), 3);
    add_background_object(create_blimpcable2_2135(11544, 248), 3);
    add_background_object(create_blimpcable2_2135(11560, 312), 3);
    add_background_object(create_blimpcable2_2135(11576, 376), 3);
    add_background_object(create_blimpcable2_2135(11336, 440), 3);
    add_background_object(create_blimpcable3_2143(11248, 440), 3);
    add_background_object(create_blimpcable2_2135(11592, 440), 3);
    add_background_object(create_blimpcable3_2143(11504, 440), 3);
    add_background_object(create_blimpcable3_2143(11776, 440), 3);
    add_background_object(create_sbdeck7_2176(1384, 728), 3);
    add_background_object(create_sbdeck7_2176(1000, 664), 3);
    add_background_object(create_blimpcable3_2143(11248, 504), 3);
    add_background_object(create_blimpcable3_2143(11248, 568), 3);
    add_background_object(create_blimpcable3_2143(11248, 632), 3);
    add_background_object(create_blimpcable2_2135(11640, 632), 3);
    add_background_object(create_sbwall_2146(1920, 1040), 3);
    add_background_object(create_sbwall_2146(2176, 1040), 3);
    add_background_object(create_sbwall_2146(2560, 1040), 3);
    add_background_object(create_sbwall_2146(11072, 816), 3);
    add_background_object(create_sbwall_2146(11200, 816), 3);
    add_background_object(create_sbwall_2146(11472, 816), 3);
    add_background_object(create_sbwall_2146(1536, 1040), 3);
    add_background_object(create_sbwall_2146(1664, 1040), 3);
    add_background_object(create_sbwall_2146(1792, 1040), 3);
    add_background_object(create_sbladder_2177(2008, 544), 3);
    add_background_object(create_sbladder_2177(2008, 576), 3);
    add_background_object(create_sbladder_2177(2008, 608), 3);
    add_background_object(create_sbladder_2177(2008, 640), 3);
    add_background_object(create_blimpcable3_2143(11776, 504), 3);
    add_background_object(create_blimpcable3_2143(11776, 568), 3);
    add_background_object(create_blimpcable3_2143(11776, 632), 3);
    add_background_object(create_blimpcable2_2135(11784, 120), 3);
    add_background_object(create_blimpcable2_2135(11800, 184), 3);
    add_background_object(create_blimpcable2_2135(11816, 248), 3);
    add_background_object(create_blimpcable2_2135(11832, 312), 3);
    add_background_object(create_blimpcable2_2135(11848, 376), 3);
    add_background_object(create_blimpcable2_2135(11864, 440), 3);
    add_background_object(create_blimpcable2_2135(11880, 504), 3);
    add_background_object(create_blimpcable2_2135(11896, 568), 3);
    add_background_object(create_shipbottomsail_2074(1328, 1208), 3);
    add_background_object(create_shipbottomsail_2074(1624, 1168), 3);
    add_background_object(create_shipbottomsail_2074(1704, 1144), 3);
    add_background_object(create_shipbottomsail_2074(1392, 1184), 3);
    add_background_object(create_shipbottomsail_2074(1136, 1184), 3);
    add_background_object(create_shipbottomsail_2074(1448, 1144), 3);
    add_background_object(create_ship26_2082(1200, 1272), 3);
    add_background_object(create_ship26_2082(1264, 1264), 3);
    add_background_object(create_ship26_2082(1328, 1256), 3);
    add_background_object(create_ship26_2082(1392, 1248), 3);
    add_background_object(create_ship26_2082(1456, 1240), 3);
    add_background_object(create_ship26_2082(1520, 1232), 3);
    add_background_object(create_ship26_2082(1584, 1224), 3);
    add_background_object(create_ship28_2075(1880, 1168), 3);
    add_background_object(create_ship27_2083(1648, 1208), 3);
    add_background_object(create_ship28_2075(1920, 1152), 3);
    add_background_object(create_ship28_2075(1960, 1136), 3);
    add_background_object(create_ship28_2075(2000, 1120), 3);
    add_background_object(create_ship28_2075(2040, 1104), 3);
    add_background_object(create_ship29_2084(2104, 1104), 3);
    add_background_object(create_ship26_2082(1136, 1280), 3);
    add_background_object(create_shipthrusterfront_2085(1392, 1216), 3);
    add_background_object(create_shipthrusterend_2086(1008, 1216), 3);
    add_background_object(create_shipthrustermid_2088(1104, 1216), 3);
    add_background_object(create_shipbottomsailshadow_2089(1336, 1104), 3);
    add_background_object(create_shipthrusterend_2086(1008, 1048), 3);
    add_background_object(create_sbwallleft_2172(1136, 1040), 3);
    add_background_object(create_sbwall_2146(1152, 1040), 3);
    add_background_object(create_sbwall_2146(1280, 1040), 3);
    add_background_object(create_sbwall_2146(1408, 1040), 3);
    add_background_object(create_shipthrustermid_2088(1104, 1048), 3);
    add_background_object(create_shipthrusterfront_2085(1392, 1048), 3);
    add_background_object(create_shipbottomsail_2074(1392, 1144), 3);
    add_background_object(create_shipbottomsail_2074(1136, 1144), 3);
    add_background_object(create_sbwall_2146(3200, 976), 3);
    add_background_object(create_sbwall_2146(3200, 1040), 3);
    add_background_object(create_sbwall_2146(2816, 912), 3);
    add_background_object(create_sbdeck1_2148(2816, 888), 3);
    add_background_object(create_sbdeck1_2148(3200, 952), 3);
    add_background_object(create_sbsigndown_2091(2880, 456), 3);
    add_background_object(create_sbdeck1_2148(5504, 888), 3);
    add_background_object(create_sbdeck1_2148(5632, 888), 3);
    add_background_object(create_sbdeck1_2148(5760, 888), 3);
    add_background_object(create_sbdeck1_2148(5888, 888), 3);
    add_background_object(create_sbwall_2146(6016, 656), 3);
    add_background_object(create_sbwall_2146(6016, 720), 3);
    add_background_object(create_sbdeck1_2148(6016, 888), 3);
    add_background_object(create_sbwall_2146(6144, 656), 3);
    add_background_object(create_sbwall_2146(6144, 720), 3);
    add_background_object(create_sbwall_2146(5376, 720), 3);
    add_background_object(create_sbwall_2146(5376, 592), 3);
    add_background_object(create_sbdeck1_2148(5376, 888), 3);
    add_background_object(create_sbwallright_2169(5488, 720), 3);
    add_background_object(create_sbwallleft_2172(6016, 720), 3);
    add_background_object(create_sbwallright_2169(5488, 592), 3);
    add_background_object(create_sbwallleft_2172(6000, 656), 3);
    add_background_object(create_sbwallleft_2172(6160, 528), 3);
    add_background_object(create_sbwallright_2169(5456, 464), 3);
    add_background_object(create_sbwallright_2169(5504, 400), 3);
    add_background_object(create_sbwall_2146(6016, 400), 3);
    add_background_object(create_sbwall_2146(6016, 464), 3);
    add_background_object(create_sbwall_2146(6144, 464), 3);
    add_background_object(create_sbwallleft_2172(6016, 464), 3);
    add_background_object(create_sbwallleft_2172(6000, 400), 3);
    add_background_object(create_sbdeck1_2148(6016, 376), 3);
    add_background_object(create_sbdeck8_2171(5504, 376), 3);
    add_background_object(create_sbdeck7_2176(5992, 376), 3);
    add_background_object(create_sbceiling2_2149(6144, 272), 3);
    add_background_object(create_sbwallleft_2172(6128, 848), 3);
    add_background_object(create_sbwallleft_2172(6128, 784), 3);
    add_background_object(create_sbdeck1_2148(6016, 632), 3);
    add_background_object(create_sbwallleft_2172(6160, 592), 3);
    add_background_object(create_sbdeck7_2176(5992, 632), 3);
    add_background_object(create_sbwall_2146(5248, 656), 3);
    add_background_object(create_sbwall_2146(5248, 528), 3);
    add_background_object(create_sbwall_2146(5248, 592), 3);
    add_background_object(create_sbwall_2146(4480, 656), 3);
    add_background_object(create_sbwall_2146(4480, 720), 3);
    add_background_object(create_sbwall_2146(4480, 400), 3);
    add_background_object(create_sbdeck1_2148(4480, 376), 3);
    add_background_object(create_sbwall_2146(5120, 208), 3);
    add_background_object(create_sbwall_2146(5248, 208), 3);
    add_background_object(create_sbwall_2146(5120, 144), 3);
    add_background_object(create_sbwall_2146(5248, 144), 3);
    add_background_object(create_sbdeck1_2148(5376, 568), 3);
    add_background_object(create_sbdeck8_2171(5504, 568), 3);
    add_background_object(create_sbdeck1_2148(5376, 696), 3);
    add_background_object(create_sbdeck8_2171(5504, 696), 3);
    add_background_object(create_sbwallright_2169(5376, 528), 3);
    add_background_object(create_sbwallright_2169(5376, 656), 3);
    add_background_object(create_sbwall_2146(5248, 912), 3);
    add_background_object(create_sbwall_2146(4480, 752), 3);
    add_background_object(create_sbdeck1_2148(3968, 888), 3);
    add_background_object(create_sbdeck1_2148(4096, 888), 3);
    add_background_object(create_sbdeck1_2148(4224, 888), 3);
    add_background_object(create_sbdeck1_2148(4352, 888), 3);
    add_background_object(create_sbdeck1_2148(3328, 888), 3);
    add_background_object(create_sbwall_2146(3328, 912), 3);
    add_background_object(create_sbwall_2146(3840, 720), 3);
    add_background_object(create_sbwallleft_2172(5248, 656), 3);
    add_background_object(create_sbwallleft_2172(5248, 592), 3);
    add_background_object(create_sbwallleft_2172(5248, 528), 3);
    add_background_object(create_sbwallleft_2172(5248, 464), 3);
    add_background_object(create_sbwallleft_2172(5248, 400), 3);
    add_background_object(create_sbdeck8_2171(5120, 376), 3);
    add_background_object(create_sbwallright_2169(5088, 464), 3);
    add_background_object(create_sbwallright_2169(5088, 528), 3);
    add_background_object(create_sbwallright_2169(5088, 592), 3);
    add_background_object(create_sbwallright_2169(5120, 656), 3);
    add_background_object(create_sbwallright_2169(5120, 720), 3);
    add_background_object(create_sbwallright_2169(5120, 784), 3);
    add_background_object(create_sbdeck7_2176(4456, 376), 3);
    add_background_object(create_sbwallleft_2172(4464, 528), 3);
    add_background_object(create_sbwallleft_2172(4496, 656), 3);
    add_background_object(create_sbwallleft_2172(4496, 720), 3);
    add_background_object(create_sbwallleft_2172(4496, 752), 3);
    add_background_object(create_sbwallright_2169(3936, 720), 3);
    add_background_object(create_sbwallright_2169(3968, 336), 3);
    add_background_object(create_sbwallright_2169(3968, 272), 3);
    add_background_object(create_sbsigndown_2091(5160, 376), 3);
    add_background_object(create_sbdeck7_2176(2792, 888), 3);
    add_background_object(create_sbwallleft_2172(2800, 912), 3);
    add_background_object(create_sbrotorbladetunnel_2178(2624, 1016), 3);
    add_background_object(create_sbwall_2146(2816, 592), 3);
    add_background_object(create_sbdeck1_2148(3200, 120), 3);
    add_background_object(create_sbdeck8_2171(11328, 728), 3);
    add_background_object(create_sbdeck7_2176(11448, 728), 3);
    add_background_object(create_sbwallright_2169(11328, 752), 3);
    add_background_object(create_sbwallright_2169(11312, 816), 3);
    add_background_object(create_sbwallleft_2172(11456, 752), 3);
    add_background_object(create_sbwallleft_2172(11456, 816), 3);
    add_background_object(create_sbwall_2146(11456, 944), 3);
    add_background_object(create_sbwallleft_2172(11456, 944), 3);
    add_background_object(create_sbwallright_2169(11584, 944), 3);
    add_background_object(create_sbwall_2146(11456, 1072), 3);
    add_background_object(create_sbwall_2146(11328, 1072), 3);
    add_background_object(create_sbwall_2146(11200, 1072), 3);
    add_background_object(create_sbwallright_2169(11584, 1072), 3);
    add_background_object(create_sbdeck8_2171(11520, 1072), 3);
    add_background_object(create_sboutercurve4_2179(11264, 880), 3);
    add_background_object(create_sbwall_2146(11072, 880), 3);
    add_background_object(create_sbsmallwall_2144(11200, 880), 3);
    add_background_object(create_sbwall_2146(11072, 1072), 3);
    add_background_object(create_sbwall_2146(11200, 1136), 3);
    add_background_object(create_sbwall_2146(11072, 1136), 3);
    add_background_object(create_sbwallleft_2172(2800, 528), 3);
    add_background_object(create_sbwall_2146(2816, 336), 3);
    add_background_object(create_sbwallleft_2172(2800, 336), 3);
    add_background_object(create_sbwallleft_2172(2800, 272), 3);
    add_background_object(create_sbwallleft_2172(2800, 208), 3);
    add_background_object(create_sbwallleft_2172(2800, 144), 3);
    add_background_object(create_sbwallleft_2172(2800, 592), 3);
    add_background_object(create_sbdeck6_2151(2816, 504), 3);
    add_background_object(create_sbdeck7_2176(2792, 504), 3);
    add_background_object(create_sbwallleft_2172(3056, 464), 3);
    add_background_object(create_sbwallleft_2172(3056, 400), 3);
    add_background_object(create_sbdeck1_2148(3072, 952), 3);
    add_background_object(create_sbdeck1_2148(2944, 952), 3);
    add_background_object(create_sbwall_2146(3072, 592), 3);
    add_background_object(create_sbwall_2146(3072, 528), 3);
    add_background_object(create_sbwall_2146(3840, 464), 3);
    add_background_object(create_sbwall_2146(3840, 400), 3);
    add_background_object(create_sbwall_2146(2944, 336), 3);
    add_background_object(create_sbwall_2146(3072, 336), 3);
    add_background_object(create_sbwall_2146(3072, 272), 3);
    add_background_object(create_sbdeck1_2148(3072, 120), 3);
    add_background_object(create_sbwall_2146(3072, 208), 3);
    add_background_object(create_sbwall_2146(3072, 144), 3);
    add_background_object(create_sbwallleft_2172(3056, 592), 3);
    add_background_object(create_sbwallleft_2172(3056, 528), 3);
    add_background_object(create_sbsmallwall_2144(2816, 528), 3);
    add_background_object(create_sbdeck6_2151(2880, 568), 3);
    add_background_object(create_sbwallright_2169(2864, 528), 3);
    add_background_object(create_sbwallleft_2172(2928, 528), 3);
    add_background_object(create_sbdeck6_2151(2928, 504), 3);
    add_background_object(create_sbsmallwall_2144(2944, 528), 3);
    add_background_object(create_sbsmallwall_2144(2944, 592), 3);
    add_background_object(create_sbwallright_2169(2992, 592), 3);
    add_background_object(create_sbwallright_2169(2992, 528), 3);
    add_background_object(create_sbdeck8_2171(2992, 504), 3);
    add_background_object(create_ship32_2153(2000, 160), 3);
    add_background_object(create_ship34_2154(2640, 160), 3);
    add_background_object(create_ship35_2155(2096, 160), 3);
    add_background_object(create_ship36_2156(2096, 320), 3);
    add_background_object(create_ship33_2157(2000, 320), 3);
    add_background_object(create_ship37_2158(2640, 320), 3);
    add_background_object(create_quickbackdrop7_2159(2112, 320), 3);
    add_background_object(create_quickbackdrop8_2160(2112, 160), 3);
    add_background_object(create_ship35_2155(2352, 160), 3);
    add_background_object(create_ship36_2156(2352, 320), 3);
    add_background_object(create_quickbackdrop7_2159(2368, 320), 3);
    add_background_object(create_quickbackdrop8_2160(2368, 160), 3);
    add_background_object(create_ship35_2155(2624, 160), 3);
    add_background_object(create_ship36_2156(2624, 320), 3);
    add_background_object(create_blimpcable2_2135(2632, 160), 3);
    add_background_object(create_blimpcable2_2135(2648, 224), 3);
    add_background_object(create_blimpcable2_2135(2664, 288), 3);
    add_background_object(create_blimpcable2_2135(2680, 352), 3);
    add_background_object(create_blimpcable2_2135(2696, 416), 3);
    add_background_object(create_blimpcable2_2135(2104, 160), 3);
    add_background_object(create_blimpcable2_2135(2120, 224), 3);
    add_background_object(create_blimpcable2_2135(2136, 288), 3);
    add_background_object(create_blimpcable2_2135(2152, 352), 3);
    add_background_object(create_blimpcable2_2135(2168, 416), 3);
    add_background_object(create_blimpcable2_2135(2360, 160), 3);
    add_background_object(create_blimpcable2_2135(2376, 224), 3);
    add_background_object(create_blimpcable2_2135(2392, 288), 3);
    add_background_object(create_blimpcable2_2135(2408, 352), 3);
    add_background_object(create_blimpcable2_2135(2424, 416), 3);
    add_background_object(create_blimpcable2_2135(2184, 480), 3);
    add_background_object(create_blimpcable3_2143(2096, 480), 3);
    add_background_object(create_blimpcable2_2135(2440, 480), 3);
    add_background_object(create_blimpcable2_2135(2712, 480), 3);
    add_background_object(create_blimpcable3_2143(2352, 480), 3);
    add_background_object(create_blimpcable3_2143(2624, 480), 3);
    add_background_object(create_blimpcable3_2143(2352, 544), 3);
    add_background_object(create_blimpcable3_2143(2352, 608), 3);
    add_background_object(create_blimpcable3_2143(2352, 672), 3);
    add_background_object(create_blimpcable3_2143(2352, 736), 3);
    add_background_object(create_blimpcable3_2143(2352, 800), 3);
    add_background_object(create_blimpcable3_2143(2352, 864), 3);
    add_background_object(create_blimpcable2_2135(2456, 544), 3);
    add_background_object(create_blimpcable2_2135(2472, 608), 3);
    add_background_object(create_blimpcable2_2135(2488, 672), 3);
    add_background_object(create_blimpcable2_2135(2504, 736), 3);
    add_background_object(create_blimpcable2_2135(2520, 800), 3);
    add_background_object(create_blimpcable2_2135(2536, 864), 3);
    add_background_object(create_blimpcable2_2135(2728, 544), 3);
    add_background_object(create_blimpcable2_2135(2744, 608), 3);
    add_background_object(create_blimpcable2_2135(2760, 672), 3);
    add_background_object(create_blimpcable2_2135(2776, 736), 3);
    add_background_object(create_blimpcable2_2135(2792, 800), 3);
    add_background_object(create_blimpcable3_2143(2624, 544), 3);
    add_background_object(create_blimpcable3_2143(2624, 608), 3);
    add_background_object(create_blimpcable3_2143(2624, 672), 3);
    add_background_object(create_blimpcable3_2143(2624, 736), 3);
    add_background_object(create_blimpcable3_2143(2624, 800), 3);
    add_background_object(create_blimpcable3_2143(2624, 864), 3);
    add_background_object(create_sbdeck1_2148(3328, 120), 3);
    add_background_object(create_sbdeck1_2148(4224, 120), 3);
    add_background_object(create_sbdeck1_2148(3968, 120), 3);
    add_background_object(create_sbdeck1_2148(4096, 120), 3);
    add_background_object(create_sbdeck1_2148(5120, 120), 3);
    add_background_object(create_sbdeck1_2148(4352, 120), 3);
    add_background_object(create_sbdeck1_2148(4480, 120), 3);
    add_background_object(create_sbdeck1_2148(5504, 120), 3);
    add_background_object(create_sbdeck1_2148(5248, 120), 3);
    add_background_object(create_sbdeck1_2148(5376, 120), 3);
    add_background_object(create_sbdeck1_2148(5760, 120), 3);
    add_background_object(create_sbdeck1_2148(5632, 120), 3);
    add_background_object(create_sbdeck1_2148(6016, 120), 3);
    add_background_object(create_sbdeck1_2148(5888, 120), 3);
    add_background_object(create_sbwallleft_2172(3312, 656), 3);
    add_background_object(create_sbwallleft_2172(3312, 720), 3);
    add_background_object(create_sbwall_2146(4096, 1040), 3);
    add_background_object(create_sbwall_2146(3968, 1040), 3);
    add_background_object(create_sbwall_2146(3328, 976), 3);
    add_background_object(create_sbwall_2146(3328, 1040), 3);
    add_background_object(create_sbwall_2146(5376, 1040), 3);
    add_background_object(create_sbwall_2146(5248, 976), 3);
    add_background_object(create_sbwall_2146(5632, 1040), 3);
    add_background_object(create_sbwall_2146(5504, 1040), 3);
    add_background_object(create_sbbigwall_2147(5376, 912), 3);
    add_background_object(create_sbwall_2146(6016, 1040), 3);
    add_background_object(create_sbwall_2146(6144, 1040), 3);
    add_background_object(create_sbwall_2146(6272, 1040), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3200, 1016), 3);
    add_background_object(create_sbwallright_2169(2944, 912), 3);
    add_background_object(create_sbdeck8_2171(2944, 888), 3);
    add_background_object(create_sbdeck7_2176(3304, 888), 3);
    add_background_object(create_sbwallleft_2172(3312, 912), 3);
    add_background_object(create_sbwall_2146(4608, 400), 3);
    add_background_object(create_sbdeck1_2148(4608, 376), 3);
    add_background_object(create_sbdeck1_2148(4608, 120), 3);
    add_background_object(create_sbwall_2146(4736, 592), 3);
    add_background_object(create_sbwall_2146(4736, 400), 3);
    add_background_object(create_sbwall_2146(4736, 464), 3);
    add_background_object(create_sbwall_2146(4736, 208), 3);
    add_background_object(create_sbwall_2146(4736, 144), 3);
    add_background_object(create_sbdeck1_2148(4736, 120), 3);
    add_background_object(create_sbwall_2146(4864, 912), 3);
    add_background_object(create_sbwall_2146(4864, 208), 3);
    add_background_object(create_sbwall_2146(4864, 144), 3);
    add_background_object(create_sbdeck1_2148(4864, 120), 3);
    add_background_object(create_sbwall_2146(4864, 976), 3);
    add_background_object(create_sbwall_2146(4992, 656), 3);
    add_background_object(create_sbwall_2146(4992, 720), 3);
    add_background_object(create_sbwall_2146(4992, 400), 3);
    add_background_object(create_sbwall_2146(4992, 912), 3);
    add_background_object(create_sbwall_2146(4992, 208), 3);
    add_background_object(create_sbwall_2146(4992, 144), 3);
    add_background_object(create_sbdeck1_2148(4992, 120), 3);
    add_background_object(create_sbwall_2146(4992, 976), 3);
    add_background_object(create_sbwallleft_2172(2800, 80), 3);
    add_background_object(create_sbwall_2146(2816, 144), 3);
    add_background_object(create_sbwallleft_2172(2800, 16), 3);
    add_background_object(create_sbwall_2146(2944, 144), 3);
    add_background_object(create_sbwall_2146(2816, -48), 3);
    add_background_object(create_sbwallleft_2172(2800, -48), 3);
    add_background_object(create_sbwall_2146(2944, -48), 3);
    add_background_object(create_sbwallright_2169(3072, 80), 3);
    add_background_object(create_sbwallright_2169(3072, 16), 3);
    add_background_object(create_sbwallright_2169(3072, -48), 3);
    add_background_object(create_teetertotteraxle_824(4640, 400), 3);
    add_background_object(create_teetertotteraxle_824(4840, 224), 3);
    add_background_object(create_sbdeck1_2148(4480, 656), 3);
    add_background_object(create_sbdeck7_2176(4456, 656), 3);
    add_background_object(create_sbdeck1_2148(4608, 784), 3);
    add_background_object(create_sbdeck1_2148(4736, 784), 3);
    add_background_object(create_sbinnercurve1_2180(4864, 656), 3);
    add_background_object(create_sbwallleft_2172(4976, 400), 3);
    add_background_object(create_sbwallleft_2172(5040, 464), 3);
    add_background_object(create_sboutercurve4_2179(4864, 592), 3);
    add_background_object(create_sbsmallwall_2144(4864, 464), 3);
    add_background_object(create_sbsmallwall_2144(4864, 400), 3);
    add_background_object(create_sbwallright_2169(4912, 400), 3);
    add_background_object(create_sbwallright_2169(4912, 464), 3);
    add_background_object(create_teetertotteraxle_824(4752, 616), 3);
    add_background_object(create_sbladder_2177(4928, 376), 3);
    add_background_object(create_sbdeck1_2148(4736, 376), 3);
    add_background_object(create_sbladder_2177(4928, 408), 3);
    add_background_object(create_sbladder_2177(4928, 440), 3);
    add_background_object(create_sbwallright_2169(4608, 656), 3);
    add_background_object(create_sbdeck8_2171(4608, 656), 3);
    add_background_object(create_sbdeck7_2176(4584, 784), 3);
    add_background_object(create_sbwallleft_2172(5040, 528), 3);
    add_background_object(create_sbsigndown_2091(4992, 464), 3);
    add_background_object(create_sbladder_2177(4928, 472), 3);
    add_background_object(create_sbdeck6_2151(4864, 376), 3);
    add_background_object(create_sbdeck1_2148(4992, 376), 3);
    add_background_object(create_sbdeck7_2176(4968, 376), 3);
    add_background_object(create_sbwallleft_2172(5040, 592), 3);
    add_background_object(create_sbladder_2177(4928, 504), 3);
    add_background_object(create_sbwallright_2169(4592, 720), 3);
    add_background_object(create_sbwall_2146(4736, 528), 3);
    add_background_object(create_sbsmallwall_2144(4864, 528), 3);
    add_background_object(create_sbwallright_2169(4912, 528), 3);
    add_background_object(create_sbwallleft_2172(4720, 592), 3);
    add_background_object(create_sbwallright_2169(5120, 848), 3);
    add_background_object(create_sbwall_2146(5248, 720), 3);
    add_background_object(create_sbwallright_2169(5120, 912), 3);
    add_background_object(create_sbdeck1_2148(5248, 888), 3);
    add_background_object(create_sbwallleft_2172(5248, 720), 3);
    add_background_object(create_sbwallslope1_2173(6144, 400), 3);
    add_background_object(create_sbwallslope1_2173(6272, 464), 3);
    add_background_object(create_sbwall_2146(6272, 272), 3);
    add_background_object(create_sbceiling2_2149(6272, 336), 3);
    add_background_object(create_sbdeck9_2174(6144, 376), 3);
    add_background_object(create_sbdeck9_2174(6272, 440), 3);
    add_background_object(create_sbredsupportbeam1_2140(6384, 400), 3);
    add_background_object(create_sbwallslope1_2173(6400, 528), 3);
    add_background_object(create_sbceiling2_2149(6400, 400), 3);
    add_background_object(create_sbdeck9_2174(6400, 504), 3);
    add_background_object(create_sbredsupportbeam1_2140(6512, 464), 3);
    add_background_object(create_sbwall_2146(6528, 400), 3);
    add_background_object(create_sbceiling2_2149(6528, 464), 3);
    add_background_object(create_sbwall_2146(6400, 208), 3);
    add_background_object(create_sbwall_2146(6656, 336), 3);
    add_background_object(create_sbceiling1_2181(6400, 592), 3);
    add_background_object(create_sbwall_2146(7040, 1040), 3);
    add_background_object(create_sbwall_2146(6912, 1040), 3);
    add_background_object(create_sbwall_2146(6656, 1040), 3);
    add_background_object(create_sbwallslope2_2182(6528, 656), 3);
    add_background_object(create_sbdeck10_2183(6528, 632), 3);
    add_background_object(create_sbwall_2146(6656, 656), 3);
    add_background_object(create_sbceiling2_2149(6528, 720), 3);
    add_background_object(create_sbwallslope1_2173(6400, 784), 3);
    add_background_object(create_sbwallslope1_2173(6528, 848), 3);
    add_background_object(create_sbdeck9_2174(6528, 824), 3);
    add_background_object(create_sbwall_2146(6400, 848), 3);
    add_background_object(create_sbdeck9_2174(6400, 760), 3);
    add_background_object(create_sbwall_2146(6400, 1040), 3);
    add_background_object(create_sbwall_2146(6528, 1040), 3);
    add_background_object(create_sbwall_2146(6656, 720), 3);
    add_background_object(create_sbwallright_2169(7008, 592), 3);
    add_background_object(create_sbwallright_2169(7008, 528), 3);
    add_background_object(create_sbwallright_2169(7008, 464), 3);
    add_background_object(create_sbwallright_2169(6272, 656), 3);
    add_background_object(create_sbdeck1_2148(6656, 632), 3);
    add_background_object(create_sbwallleft_2172(6768, 496), 3);
    add_background_object(create_sbwallleft_2172(6784, 560), 3);
    add_background_object(create_sbinnercurve1_2180(6976, 784), 3);
    add_background_object(create_sbinnercurve4_2184(6784, 656), 3);
    add_background_object(create_sbdeck1_2148(6272, 760), 3);
    add_background_object(create_sbwallright_2169(6272, 720), 3);
    add_background_object(create_sbwallleft_2172(6784, 592), 3);
    add_background_object(create_sbwallleft_2172(5248, 912), 3);
    add_background_object(create_sbwallleft_2172(5248, 976), 3);
    add_background_object(create_sbwallright_2169(5120, 976), 3);
    add_background_object(create_sbdeck8_2171(4480, 888), 3);
    add_background_object(create_sbwallleft_2172(4592, 816), 3);
    add_background_object(create_sbwallright_2169(4480, 912), 3);
    add_background_object(create_sbwallleft_2172(4592, 848), 3);
    add_background_object(create_sbwallright_2169(4480, 976), 3);
    add_background_object(create_sbwallright_2169(4480, 1040), 3);
    add_background_object(create_sbwall_2146(4352, 1168), 3);
    add_background_object(create_sbwall_2146(4224, 1168), 3);
    add_background_object(create_sbwallleft_2172(4208, 1104), 3);
    add_background_object(create_sbwallleft_2172(4208, 1168), 3);
    add_background_object(create_sbdeck1_2148(4608, 1080), 3);
    add_background_object(create_sbdeck1_2148(4480, 1080), 3);
    add_background_object(create_sbdeck7_2176(4456, 1080), 3);
    add_background_object(create_sbwall_2146(4352, 1232), 3);
    add_background_object(create_sbwall_2146(4224, 1232), 3);
    add_background_object(create_sbwall_2146(4608, 1232), 3);
    add_background_object(create_sbwall_2146(4480, 1232), 3);
    add_background_object(create_sbwallleft_2172(4208, 1232), 3);
    add_background_object(create_sbwall_2146(4992, 1232), 3);
    add_background_object(create_sbwall_2146(4992, 1200), 3);
    add_background_object(create_sbwallright_2169(4736, 1104), 3);
    add_background_object(create_sbwallright_2169(4864, 1136), 3);
    add_background_object(create_sbwall_2146(4736, 1136), 3);
    add_background_object(create_sbdeck8_2171(4736, 1080), 3);
    add_background_object(create_sbdeck8_2171(4864, 1112), 3);
    add_background_object(create_sbdeck1_2148(5248, 1208), 3);
    add_background_object(create_sbladder_2177(4504, 888), 3);
    add_background_object(create_sbladder_2177(4504, 920), 3);
    add_background_object(create_sbladder_2177(4504, 952), 3);
    add_background_object(create_sbladder_2177(4504, 984), 3);
    add_background_object(create_sbceiling2_2149(5248, 1040), 3);
    add_background_object(create_sbceiling2_2149(4736, 976), 3);
    add_background_object(create_sbceiling2_2149(4608, 912), 3);
    add_background_object(create_sbwall_2146(4736, 912), 3);
    add_background_object(create_teetertotteraxle_824(4784, 1136), 3);
    add_background_object(create_sbwall_2146(4352, 1296), 3);
    add_background_object(create_sbwall_2146(4224, 1296), 3);
    add_background_object(create_sbwall_2146(4608, 1296), 3);
    add_background_object(create_sbwall_2146(4480, 1296), 3);
    add_background_object(create_sbwallleft_2172(4208, 1296), 3);
    add_background_object(create_sbwall_2146(4736, 1296), 3);
    add_background_object(create_sbwall_2146(4864, 1296), 3);
    add_background_object(create_sbwall_2146(4992, 1296), 3);
    add_background_object(create_sbwall_2146(4352, 1360), 3);
    add_background_object(create_sbwall_2146(4224, 1360), 3);
    add_background_object(create_sbwall_2146(4608, 1360), 3);
    add_background_object(create_sbwall_2146(4480, 1360), 3);
    add_background_object(create_sbwallleft_2172(4208, 1360), 3);
    add_background_object(create_sbwall_2146(4736, 1360), 3);
    add_background_object(create_sbwall_2146(4864, 1360), 3);
    add_background_object(create_sbwall_2146(4992, 1360), 3);
    add_background_object(create_sbwall_2146(5120, 1360), 3);
    add_background_object(create_sbwall_2146(5248, 1360), 3);
    add_background_object(create_ship23_2175(4112, 1104), 3);
    add_background_object(create_shipbottomsail_2074(4400, 1528), 3);
    add_background_object(create_shipbottomsail_2074(4696, 1488), 3);
    add_background_object(create_shipbottomsail_2074(4776, 1464), 3);
    add_background_object(create_shipbottomsail_2074(4464, 1504), 3);
    add_background_object(create_shipbottomsail_2074(4208, 1504), 3);
    add_background_object(create_shipbottomsail_2074(4520, 1464), 3);
    add_background_object(create_ship26_2082(4272, 1592), 3);
    add_background_object(create_ship26_2082(4336, 1584), 3);
    add_background_object(create_ship26_2082(4400, 1576), 3);
    add_background_object(create_ship26_2082(4464, 1568), 3);
    add_background_object(create_ship26_2082(4528, 1560), 3);
    add_background_object(create_ship26_2082(4592, 1552), 3);
    add_background_object(create_ship26_2082(4656, 1544), 3);
    add_background_object(create_ship28_2075(4952, 1488), 3);
    add_background_object(create_ship27_2083(4720, 1528), 3);
    add_background_object(create_ship28_2075(4992, 1472), 3);
    add_background_object(create_ship28_2075(5032, 1456), 3);
    add_background_object(create_ship28_2075(5072, 1440), 3);
    add_background_object(create_ship28_2075(5112, 1424), 3);
    add_background_object(create_ship29_2084(5176, 1424), 3);
    add_background_object(create_ship26_2082(4208, 1600), 3);
    add_background_object(create_shipthrusterfront_2085(4464, 1536), 3);
    add_background_object(create_shipthrusterend_2086(4080, 1536), 3);
    add_background_object(create_shipthrustermid_2088(4176, 1536), 3);
    add_background_object(create_shipbottomsailshadow_2089(4408, 1424), 3);
    add_background_object(create_shipthrusterend_2086(4080, 1368), 3);
    add_background_object(create_shipthrustermid_2088(4176, 1368), 3);
    add_background_object(create_shipthrusterfront_2085(4464, 1368), 3);
    add_background_object(create_shipbottomsail_2074(4464, 1464), 3);
    add_background_object(create_shipbottomsail_2074(4208, 1464), 3);
    add_background_object(create_sbwallslope5_2166(4992, 1168), 3);
    add_background_object(create_sbdeck3_2161(5120, 1176), 3);
    add_background_object(create_sbwallslope3_2164(5120, 1200), 3);
    add_background_object(create_sbdeck2_2163(4992, 1144), 3);
    add_background_object(create_sbbigwall_2147(5888, 912), 3);
    add_background_object(create_sbbigwall_2147(5632, 912), 3);
    add_background_object(create_sbbigwall_2147(6144, 912), 3);
    add_background_object(create_sbbigwall_2147(6144, 784), 3);
    add_background_object(create_sbbigwall_2147(4480, 464), 3);
    add_background_object(create_sbbigwall_2147(4480, 144), 3);
    add_background_object(create_sbbigwall_2147(4224, 144), 3);
    add_background_object(create_sbbigwall_2147(3968, 144), 3);
    add_background_object(create_sbbigwall_2147(3712, 144), 3);
    add_background_object(create_sbbigwall_2147(3712, 272), 3);
    add_background_object(create_sbbigwall_2147(3072, 400), 3);
    add_background_object(create_sbbigwall_2147(2944, 976), 3);
    add_background_object(create_sbbigwall_2147(2688, 976), 3);
    add_background_object(create_sbbigwall_2147(2304, 976), 3);
    add_background_object(create_sbbigwall_2147(1920, 848), 3);
    add_background_object(create_sbbigwall_2147(1664, 848), 3);
    add_background_object(create_sbbigwall_2147(1280, 880), 3);
    add_background_object(create_sbbigwall_2147(3968, 912), 3);
    add_background_object(create_sbbigwall_2147(4224, 912), 3);
    add_background_object(create_sbbigwall_2147(4480, 1104), 3);
    add_background_object(create_sbbigwall_2147(4736, 1168), 3);
    add_background_object(create_sbbigwall_2147(5120, 1232), 3);
    add_background_object(create_sbbigwall_2147(6400, 912), 3);
    add_background_object(create_sbbigwall_2147(6656, 912), 3);
    add_background_object(create_sbbigwall_2147(6656, 400), 3);
    add_background_object(create_sbbigwall_2147(6400, 272), 3);
    add_background_object(create_sbbigwall_2147(6144, 144), 3);
    add_background_object(create_sbbigwall_2147(5888, 144), 3);
    add_background_object(create_sbbigwall_2147(5632, 144), 3);
    add_background_object(create_sbbigwall_2147(5376, 144), 3);
    add_background_object(create_sbbigwall_2147(6912, 912), 3);
    add_background_object(create_sbwall_2146(6784, 1040), 3);
    add_background_object(create_sbwall_2146(10944, 752), 3);
    add_background_object(create_sbdeck1_2148(10944, 728), 3);
    add_background_object(create_sbwall_2146(10944, 816), 3);
    add_background_object(create_sbwall_2146(10944, 880), 3);
    add_background_object(create_sbdeck1_2148(6768, 912), 3);
    add_background_object(create_sbdeck1_2148(6848, 912), 3);
    add_background_object(create_sbwall_2146(7104, 784), 3);
    add_background_object(create_sbwall_2146(7104, 848), 3);
    add_background_object(create_sbdeck1_2148(7104, 632), 3);
    add_background_object(create_sbsmallwall_2144(7168, 912), 3);
    add_background_object(create_sbdeck3_2161(6640, 880), 3);
    add_background_object(create_sbwallslope1_2173(6400, 144), 3);
    add_background_object(create_sbwallslope1_2173(6528, 208), 3);
    add_background_object(create_sbdeck9_2174(6528, 184), 3);
    add_background_object(create_sbwallslope1_2173(6656, 272), 3);
    add_background_object(create_sbdeck9_2174(6656, 248), 3);
    add_background_object(create_sbwallslope1_2173(6784, 336), 3);
    add_background_object(create_sbdeck9_2174(6784, 312), 3);
    add_background_object(create_sbwallslope1_2173(6912, 400), 3);
    add_background_object(create_sbdeck9_2174(6912, 376), 3);
    add_background_object(create_sbdeck8_2171(7168, 440), 3);
    add_background_object(create_sbwall_2146(6144, -48), 3);
    add_background_object(create_sbwall_2146(6272, -48), 3);
    add_background_object(create_sbwallleft_2172(6128, 80), 3);
    add_background_object(create_sbwallleft_2172(6128, 16), 3);
    add_background_object(create_sbwallleft_2172(6128, -48), 3);
    add_background_object(create_sbwallright_2169(6400, -48), 3);
    add_background_object(create_sbwallright_2169(6400, 16), 3);
    add_background_object(create_sbwallright_2169(6400, 80), 3);
    add_background_object(create_sbdeck9_2174(6400, 120), 3);
    add_background_object(create_sbwall_2146(7104, 720), 3);
    add_background_object(create_sbwall_2146(7104, 656), 3);
    add_background_object(create_sbwallright_2169(10944, 688), 3);
    add_background_object(create_sbwallright_2169(10944, 624), 3);
    add_background_object(create_sbdeck8_2171(10944, 600), 3);
    add_background_object(create_sbdeck1_2148(7040, 440), 3);
    add_background_object(create_sbdeck11_2185(4864, 656), 3);
    add_background_object(create_sbdeck11_2185(6976, 784), 3);
    add_background_object(create_sbdeck1_2148(11392, 1072), 3);
    add_background_object(create_sbshipfront_2152(11328, 1136), 3);
    add_background_object(create_sbwall_2146(7168, 1040), 3);
    add_background_object(create_sbwall_2146(7168, 976), 3);
    add_background_object(create_sbwall_2146(10944, 1136), 3);
    add_background_object(create_sbwall_2146(10944, 1072), 3);
    add_background_object(create_sbwall_2146(6976, 1104), 3);
    add_background_object(create_sbdeck7_2176(10984, 1072), 3);
    add_background_object(create_sbdeck1_2148(11008, 1072), 3);
    add_background_object(create_sbdeck1_2148(11136, 1072), 3);
    add_background_object(create_sbdeck1_2148(11264, 1072), 3);
    add_background_object(create_sbwallright_2169(11008, 944), 3);
    add_background_object(create_sbwallright_2169(11008, 1008), 3);
    add_background_object(create_sbbigwall_2147(5376, 1232), 3);
    add_background_object(create_sbbigwall_2147(5376, 1104), 3);
    add_background_object(create_sbwallleft_2172(5360, 1104), 3);
    add_background_object(create_sbwallleft_2172(5360, 1168), 3);
    add_background_object(create_sbwall_2146(5376, 1360), 3);
    add_background_object(create_sbwall_2146(5504, 1360), 3);
    add_background_object(create_sbceiling1_2181(5632, 1360), 3);
    add_background_object(create_sbceiling1_2181(5760, 1296), 3);
    add_background_object(create_sbceiling1_2181(5888, 1232), 3);
    add_background_object(create_sbbigwall_2147(5632, 1168), 3);
    add_background_object(create_sbwall_2146(5632, 1296), 3);
    add_background_object(create_sbceiling1_2181(6016, 1168), 3);
    add_background_object(create_sbwall_2146(5888, 1168), 3);
    add_background_object(create_sbwall_2146(5632, 1104), 3);
    add_background_object(create_sbbigwall_2147(5760, 1040), 3);
    add_background_object(create_sbwall_2146(6016, 1104), 3);
    add_background_object(create_sbceiling1_2181(6144, 1104), 3);
    add_background_object(create_sbwall_2146(7104, 1104), 3);
    add_background_object(create_sbceiling2_2149(6848, 1104), 3);
    add_background_object(create_sbredsupportbeam1_2140(8232, 696), 3);
    add_background_object(create_sbredsupportbeam1_2140(8216, 760), 3);
    add_background_object(create_sbredsupportbeam1_2140(8200, 824), 3);
    add_background_object(create_sbredsupportbeam1_2140(8184, 888), 3);
    add_background_object(create_sbredsupportbeam1_2140(8168, 952), 3);
    add_background_object(create_sbredsupportbeam1_2140(8472, 696), 3);
    add_background_object(create_sbredsupportbeam1_2140(8456, 760), 3);
    add_background_object(create_sbredsupportbeam1_2140(8440, 824), 3);
    add_background_object(create_sbredsupportbeam1_2140(8424, 888), 3);
    add_background_object(create_sbredsupportbeam1_2140(8408, 952), 3);
    add_background_object(create_blimpcable3_2143(7424, 544), 3);
    add_background_object(create_blimpcable3_2143(7680, 544), 3);
    add_background_object(create_blimpcable3_2143(7424, 352), 3);
    add_background_object(create_blimpcable3_2143(7680, 352), 3);
    add_background_object(create_blimpcable3_2143(7952, 352), 3);
    add_background_object(create_blimpcable3_2143(7680, 416), 3);
    add_background_object(create_blimpcable3_2143(7680, 480), 3);
    add_background_object(create_blimpcable3_2143(7424, 416), 3);
    add_background_object(create_blimpcable3_2143(7424, 480), 3);
    add_background_object(create_blimpcable2_2135(7560, 544), 3);
    add_background_object(create_blimpcable2_2135(7960, 32), 3);
    add_background_object(create_blimpcable2_2135(7976, 96), 3);
    add_background_object(create_blimpcable2_2135(7992, 160), 3);
    add_background_object(create_blimpcable2_2135(8008, 224), 3);
    add_background_object(create_blimpcable2_2135(8024, 288), 3);
    add_background_object(create_blimpcable2_2135(7432, 32), 3);
    add_background_object(create_blimpcable2_2135(7448, 96), 3);
    add_background_object(create_blimpcable2_2135(7464, 160), 3);
    add_background_object(create_blimpcable2_2135(7480, 224), 3);
    add_background_object(create_blimpcable2_2135(7496, 288), 3);
    add_background_object(create_blimpcable2_2135(7688, 32), 3);
    add_background_object(create_blimpcable2_2135(7704, 96), 3);
    add_background_object(create_blimpcable2_2135(7720, 160), 3);
    add_background_object(create_blimpcable2_2135(7736, 224), 3);
    add_background_object(create_blimpcable2_2135(7752, 288), 3);
    add_background_object(create_blimpcable2_2135(7512, 352), 3);
    add_background_object(create_blimpcable2_2135(7768, 352), 3);
    add_background_object(create_blimpcable2_2135(8040, 352), 3);
    add_background_object(create_blimpcable2_2135(7528, 416), 3);
    add_background_object(create_blimpcable2_2135(7544, 480), 3);
    add_background_object(create_blimpcable1_2070(7536, 544), 3);
    add_background_object(create_blimpcable1_2070(7408, 32), 3);
    add_background_object(create_blimpcable1_2070(7392, 96), 3);
    add_background_object(create_blimpcable1_2070(7376, 160), 3);
    add_background_object(create_blimpcable1_2070(7360, 224), 3);
    add_background_object(create_blimpcable1_2070(7344, 288), 3);
    add_background_object(create_blimpcable1_2070(7328, 352), 3);
    add_background_object(create_blimpcable1_2070(7664, 32), 3);
    add_background_object(create_blimpcable1_2070(7648, 96), 3);
    add_background_object(create_blimpcable1_2070(7632, 160), 3);
    add_background_object(create_blimpcable1_2070(7616, 224), 3);
    add_background_object(create_blimpcable1_2070(7600, 288), 3);
    add_background_object(create_blimpcable1_2070(7584, 352), 3);
    add_background_object(create_blimpcable1_2070(7936, 32), 3);
    add_background_object(create_blimpcable1_2070(7920, 96), 3);
    add_background_object(create_blimpcable1_2070(7904, 160), 3);
    add_background_object(create_blimpcable1_2070(7888, 224), 3);
    add_background_object(create_blimpcable1_2070(7872, 288), 3);
    add_background_object(create_blimpcable1_2070(7856, 352), 3);
    add_background_object(create_blimpcable1_2070(7568, 416), 3);
    add_background_object(create_blimpcable1_2070(7552, 480), 3);
    add_background_object(create_blimpcable1_2070(7312, 416), 3);
    add_background_object(create_blimpcable1_2070(7296, 480), 3);
    add_background_object(create_blimpcable1_2070(7280, 544), 3);
    add_background_object(create_blimpcable1_2070(7264, 608), 3);
    add_background_object(create_blimpcable1_2070(7248, 672), 3);
    add_background_object(create_blimpcable1_2070(7232, 736), 3);
    add_background_object(create_blimpcable1_2070(10288, 576), 3);
    add_background_object(create_sbironwall_2138(10504, 472), 3);
    add_background_object(create_sbironwall_2138(9800, 600), 3);
    add_background_object(create_sbironwall_2138(10056, 600), 3);
    add_background_object(create_sbironwall_2138(10056, 120), 3);
    add_background_object(create_sbironwall_2138(9800, 280), 3);
    add_background_object(create_sbironwall_2138(10056, 280), 3);
    add_background_object(create_sbironwall_2138(10056, 440), 3);
    add_background_object(create_sbironwall_2138(7800, 664), 3);
    add_background_object(create_sbironwall_2138(7800, 440), 3);
    add_background_object(create_sbbigwall_2147(9664, 720), 3);
    add_background_object(create_sbbigwall_2147(10176, 784), 3);
    add_background_object(create_sbbigwall_2147(9664, 912), 3);
    add_background_object(create_sbbigwall_2147(8896, 976), 3);
    add_background_object(create_sbbigwall_2147(9152, 1040), 3);
    add_background_object(create_sbbigwall_2147(9408, 1040), 3);
    add_background_object(create_sbbigwall_2147(9920, 656), 3);
    add_background_object(create_sbbigwall_2147(9664, 1040), 3);
    add_background_object(create_sbbigwall_2147(9920, 784), 3);
    add_background_object(create_sbbigwall_2147(8256, 120), 3);
    add_background_object(create_sbbigwall_2147(8512, 56), 3);
    add_background_object(create_sbbigwall_2147(8768, 120), 3);
    add_background_object(create_sbbigwall_2147(9024, 56), 3);
    add_background_object(create_sbbigwall_2147(9280, 120), 3);
    add_background_object(create_sbbigwall_2147(9536, -8), 3);
    add_background_object(create_sbbigwall_2147(9792, -8), 3);
    add_background_object(create_sbbigwall_2147(10048, -8), 3);
    add_background_object(create_sbwall_2146(9664, 592), 3);
    add_background_object(create_sbwall_2146(9664, 528), 3);
    add_background_object(create_sbwall_2146(7232, 848), 3);
    add_background_object(create_sbwall_2146(7360, 1104), 3);
    add_background_object(create_sbwall_2146(7488, 1104), 3);
    add_background_object(create_sbwall_2146(7232, 912), 3);
    add_background_object(create_sbwall_2146(7616, 848), 3);
    add_background_object(create_sbwall_2146(7744, 848), 3);
    add_background_object(create_sbwall_2146(7416, 600), 3);
    add_background_object(create_sbwall_2146(7544, 600), 3);
    add_background_object(create_sbwall_2146(7672, 600), 3);
    add_background_object(create_sbwall_2146(7800, 600), 3);
    add_background_object(create_sbwall_2146(7928, 600), 3);
    add_background_object(create_sbwall_2146(7872, 816), 3);
    add_background_object(create_sbwall_2146(8384, 1040), 3);
    add_background_object(create_sbwall_2146(8128, 1040), 3);
    add_background_object(create_sbwall_2146(8640, 1040), 3);
    add_background_object(create_sbwall_2146(8768, 1040), 3);
    add_background_object(create_sbwall_2146(8768, 976), 3);
    add_background_object(create_sbwall_2146(8768, 912), 3);
    add_background_object(create_sbwall_2146(8768, 848), 3);
    add_background_object(create_sbwall_2146(8768, 784), 3);
    add_background_object(create_sbwall_2146(8896, 912), 3);
    add_background_object(create_sbwall_2146(9024, 912), 3);
    add_background_object(create_sbwall_2146(8512, 1040), 3);
    add_background_object(create_sbwall_2146(9664, 848), 3);
    add_background_object(create_sbwall_2146(9664, 656), 3);
    add_background_object(create_sbwall_2146(10304, 656), 3);
    add_background_object(create_sbwall_2146(10304, 720), 3);
    add_background_object(create_sbwall_2146(8384, 1104), 3);
    add_background_object(create_sbwall_2146(8128, 1104), 3);
    add_background_object(create_sbwall_2146(8640, 1104), 3);
    add_background_object(create_sbwall_2146(8768, 1104), 3);
    add_background_object(create_sbwall_2146(8512, 1104), 3);
    add_background_object(create_sbwall_2146(9024, 1104), 3);
    add_background_object(create_sbwall_2146(8896, 1104), 3);
    add_background_object(create_sbwall_2146(10176, 656), 3);
    add_background_object(create_sbwall_2146(10176, 720), 3);
    add_background_object(create_sbwall_2146(10432, 784), 3);
    add_background_object(create_sbwall_2146(10432, 848), 3);
    add_background_object(create_sbwall_2146(9792, 848), 3);
    add_background_object(create_sbwall_2146(10560, 784), 3);
    add_background_object(create_sbwall_2146(10560, 848), 3);
    add_background_object(create_sbwall_2146(10560, 592), 3);
    add_background_object(create_sbwall_2146(9800, 368), 3);
    add_background_object(create_sbwall_2146(9800, 304), 3);
    add_background_object(create_sbwall_2146(9800, 240), 3);
    add_background_object(create_sbwall_2146(10056, 368), 3);
    add_background_object(create_sbwall_2146(10056, 304), 3);
    add_background_object(create_sbwall_2146(10056, 240), 3);
    add_background_object(create_sbwall_2146(10184, 368), 3);
    add_background_object(create_sbwall_2146(10184, 304), 3);
    add_background_object(create_sbwall_2146(10184, 240), 3);
    add_background_object(create_sbwall_2146(9792, 656), 3);
    add_background_object(create_sbwall_2146(10560, 408), 3);
    add_background_object(create_sbwall_2146(10432, 408), 3);
    add_background_object(create_sbwall_2146(10688, 408), 3);
    add_background_object(create_sbwall_2146(10560, 376), 3);
    add_background_object(create_sbwall_2146(8256, 632), 3);
    add_background_object(create_sbwall_2146(8256, 1040), 3);
    add_background_object(create_sbwall_2146(8256, 1104), 3);
    add_background_object(create_sbwall_2146(8384, 632), 3);
    add_background_object(create_sbwall_2146(8384, 568), 3);
    add_background_object(create_sbwall_2146(8384, 504), 3);
    add_background_object(create_sbwall_2146(8384, 440), 3);
    add_background_object(create_sbwall_2146(8384, 376), 3);
    add_background_object(create_sbwall_2146(8256, 376), 3);
    add_background_object(create_sbwall_2146(8256, 312), 3);
    add_background_object(create_sbwall_2146(8256, 248), 3);
    add_background_object(create_sbwall_2146(8256, 56), 3);
    add_background_object(create_sbwall_2146(8384, 56), 3);
    add_background_object(create_sbwall_2146(8512, 184), 3);
    add_background_object(create_sbwall_2146(8640, 184), 3);
    add_background_object(create_sbwall_2146(8768, 56), 3);
    add_background_object(create_sbwall_2146(8896, 56), 3);
    add_background_object(create_sbwall_2146(9024, 184), 3);
    add_background_object(create_sbwall_2146(9152, 184), 3);
    add_background_object(create_sbwall_2146(9280, 56), 3);
    add_background_object(create_sbwall_2146(9408, 56), 3);
    add_background_object(create_sbwall_2146(8256, -8), 3);
    add_background_object(create_sbwall_2146(8384, -8), 3);
    add_background_object(create_sbwall_2146(8768, -8), 3);
    add_background_object(create_sbwall_2146(8896, -8), 3);
    add_background_object(create_sbwall_2146(9280, -8), 3);
    add_background_object(create_sbwall_2146(9408, -8), 3);
    add_background_object(create_sbwall_2146(9024, -8), 3);
    add_background_object(create_sbwall_2146(9152, -8), 3);
    add_background_object(create_sbwall_2146(8512, -8), 3);
    add_background_object(create_sbwall_2146(8640, -8), 3);
    add_background_object(create_sbdeck1_2148(7232, 824), 3);
    add_background_object(create_sbdeck1_2148(7360, 824), 3);
    add_background_object(create_sbdeck1_2148(7488, 824), 3);
    add_background_object(create_sbdeck1_2148(7616, 824), 3);
    add_background_object(create_sbdeck1_2148(7744, 824), 3);
    add_background_object(create_sbdeck1_2148(7416, 600), 3);
    add_background_object(create_sbdeck1_2148(7544, 600), 3);
    add_background_object(create_sbdeck1_2148(7672, 600), 3);
    add_background_object(create_sbdeck1_2148(7800, 600), 3);
    add_background_object(create_sbdeck1_2148(7928, 600), 3);
    add_background_object(create_sbdeck1_2148(8768, 760), 3);
    add_background_object(create_sbdeck1_2148(9680, 504), 3);
    add_background_object(create_sbdeck1_2148(9792, 632), 3);
    add_background_object(create_sbdeck1_2148(10048, 632), 3);
    add_background_object(create_sbdeck1_2148(10304, 632), 3);
    add_background_object(create_sbdeck1_2148(10432, 632), 3);
    add_background_object(create_sbdeck1_2148(10184, 216), 3);
    add_background_object(create_sbdeck1_2148(10056, 216), 3);
    add_background_object(create_sbdeck1_2148(9800, 216), 3);
    add_background_object(create_sbdeck1_2148(10816, 600), 3);
    add_background_object(create_sbdeck1_2148(8256, 608), 3);
    add_background_object(create_sbdeck1_2148(8384, 352), 3);
    add_background_object(create_sbdeck1_2148(10176, 632), 3);
    add_background_object(create_sbwallleft_2172(7400, 600), 3);
    add_background_object(create_sbwallleft_2172(8768, 976), 3);
    add_background_object(create_sbwallleft_2172(8768, 912), 3);
    add_background_object(create_sbwallleft_2172(8768, 848), 3);
    add_background_object(create_sbwallleft_2172(8768, 784), 3);
    add_background_object(create_sbwallleft_2172(9664, 976), 3);
    add_background_object(create_sbwallleft_2172(9664, 912), 3);
    add_background_object(create_sbwallleft_2172(9696, 848), 3);
    add_background_object(create_sbwallleft_2172(9664, 528), 3);
    add_background_object(create_sbwallleft_2172(9696, 784), 3);
    add_background_object(create_sbwallleft_2172(9664, 720), 3);
    add_background_object(create_sbwallleft_2172(9696, 656), 3);
    add_background_object(create_sbwallleft_2172(9696, 592), 3);
    add_background_object(create_sbwallleft_2172(10544, 592), 3);
    add_background_object(create_sbwallleft_2172(10544, 560), 3);
    add_background_object(create_sbwallleft_2172(9784, 368), 3);
    add_background_object(create_sbwallleft_2172(9784, 304), 3);
    add_background_object(create_sbwallleft_2172(9784, 240), 3);
    add_background_object(create_sbwallleft_2172(10040, 368), 3);
    add_background_object(create_sbwallleft_2172(10072, 304), 3);
    add_background_object(create_sbwallleft_2172(10072, 240), 3);
    add_background_object(create_sbwallleft_2172(10416, 408), 3);
    add_background_object(create_sbwallleft_2172(8240, 632), 3);
    add_background_object(create_sbwallleft_2172(8368, 568), 3);
    add_background_object(create_sbwallleft_2172(8368, 504), 3);
    add_background_object(create_sbwallleft_2172(8368, 440), 3);
    add_background_object(create_sbwallleft_2172(8272, 376), 3);
    add_background_object(create_sbwallleft_2172(7856, 784), 3);
    add_background_object(create_sbwallleft_2172(8240, -8), 3);
    add_background_object(create_sbdeck7_2176(7392, 600), 3);
    add_background_object(create_sbdeck7_2176(10408, 384), 3);
    add_background_object(create_sbdeck7_2176(9776, 216), 3);
    add_background_object(create_sbdeck7_2176(9656, 504), 3);
    add_background_object(create_sbdeck7_2176(10536, 536), 3);
    add_background_object(create_sbdeck7_2176(8232, 608), 3);
    add_background_object(create_sbdeck7_2176(7848, 760), 3);
    add_background_object(create_sbwallright_2169(8056, 600), 3);
    add_background_object(create_sbwallright_2169(7232, 784), 3);
    add_background_object(create_sbwallright_2169(7232, 720), 3);
    add_background_object(create_sbwallright_2169(7232, 656), 3);
    add_background_object(create_sbwallright_2169(8880, 784), 3);
    add_background_object(create_sbwallright_2169(8880, 848), 3);
    add_background_object(create_sbwallright_2169(9136, 912), 3);
    add_background_object(create_sbwallright_2169(9136, 976), 3);
    add_background_object(create_sbwallright_2169(9760, 592), 3);
    add_background_object(create_sbwallright_2169(9760, 528), 3);
    add_background_object(create_sbwallright_2169(10312, 368), 3);
    add_background_object(create_sbwallright_2169(10312, 304), 3);
    add_background_object(create_sbwallright_2169(10312, 240), 3);
    add_background_object(create_sbwallright_2169(9896, 304), 3);
    add_background_object(create_sbwallright_2169(9896, 240), 3);
    add_background_object(create_sbwallright_2169(9928, 368), 3);
    add_background_object(create_sbwallright_2169(8512, 632), 3);
    add_background_object(create_sbwallright_2169(8480, 568), 3);
    add_background_object(create_sbwallright_2169(8480, 504), 3);
    add_background_object(create_sbwallright_2169(8480, 440), 3);
    add_background_object(create_sbwallright_2169(8512, 376), 3);
    add_background_object(create_sbwallright_2169(8384, 312), 3);
    add_background_object(create_sbwallright_2169(8384, 248), 3);
    add_background_object(create_sbwallright_2169(8128, 848), 3);
    add_background_object(create_sbwallright_2169(9536, 184), 3);
    add_background_object(create_sbwallright_2169(9504, 120), 3);
    add_background_object(create_sbwallright_2169(10304, 56), 3);
    add_background_object(create_sbwallright_2169(10304, -8), 3);
    add_background_object(create_sbwallright_2169(10816, 344), 3);
    add_background_object(create_sbdeck8_2171(8056, 600), 3);
    add_background_object(create_sbdeck8_2171(7232, 632), 3);
    add_background_object(create_sbdeck8_2171(10312, 216), 3);
    add_background_object(create_sbdeck8_2171(8512, 352), 3);
    add_background_object(create_sbdeck8_2171(8128, 824), 3);
    add_background_object(create_ship32_2153(7328, 32), 3);
    add_background_object(create_ship34_2154(7968, 32), 3);
    add_background_object(create_ship35_2155(7424, 32), 3);
    add_background_object(create_ship35_2155(7680, 32), 3);
    add_background_object(create_ship35_2155(7952, 32), 3);
    add_background_object(create_ship36_2156(7424, 192), 3);
    add_background_object(create_ship36_2156(7680, 192), 3);
    add_background_object(create_ship36_2156(7952, 192), 3);
    add_background_object(create_ship33_2157(7328, 192), 3);
    add_background_object(create_ship37_2158(7968, 192), 3);
    add_background_object(create_quickbackdrop7_2159(7440, 192), 3);
    add_background_object(create_quickbackdrop7_2159(7696, 192), 3);
    add_background_object(create_quickbackdrop8_2160(7440, 32), 3);
    add_background_object(create_quickbackdrop8_2160(7696, 32), 3);
    add_background_object(create_sbdeck7walkthru_2167(7776, 416), 3);
    add_background_object(create_sbdeck8walkthru_2168(8056, 416), 3);
    add_background_object(create_sbdeck8walkthru_2168(9872, 504), 3);
    add_background_object(create_sbdeck1walkthru_2170(7800, 416), 3);
    add_background_object(create_sbdeck1walkthru_2170(7928, 416), 3);
    add_background_object(create_sbdeck1walkthru_2170(9928, 216), 3);
    add_background_object(create_sbsignup_2186(9448, 960), 3);
    add_background_object(create_sbsignup_2186(9576, 960), 3);
    add_background_object(create_sbsignup_2186(9320, 960), 3);
    add_background_object(create_sbsignup_2186(9192, 960), 3);
    add_background_object(create_sbsignup_2186(8680, 960), 3);
    add_background_object(create_watervent_725(8640, 1008), 3);
    add_background_object(create_watervent_725(8704, 1008), 3);
    add_background_object(create_watervent_725(8896, 880), 3);
    add_background_object(create_watervent_725(8960, 880), 3);
    add_background_object(create_watervent_725(8576, 1008), 3);
    add_background_object(create_watervent_725(8512, 1008), 3);
    add_background_object(create_watervent_725(9280, 1016), 3);
    add_background_object(create_watervent_725(9344, 1016), 3);
    add_background_object(create_watervent_725(9216, 1016), 3);
    add_background_object(create_watervent_725(9152, 1016), 3);
    add_background_object(create_watervent_725(9536, 1016), 3);
    add_background_object(create_watervent_725(9600, 1016), 3);
    add_background_object(create_watervent_725(9472, 1016), 3);
    add_background_object(create_watervent_725(9408, 1016), 3);
    add_background_object(create_watervent_725(9920, 632), 3);
    add_background_object(create_watervent_725(9984, 632), 3);
    add_background_object(create_watervent_725(8320, 1008), 3);
    add_background_object(create_watervent_725(8256, 1008), 3);
    add_background_object(create_sbrotorbladetunnel_2178(10240, 720), 3);
    add_background_object(create_sbrotorbladetunnel_2178(10240, 808), 3);
    add_background_object(create_sbdeck6_2151(9808, 504), 3);
    add_background_object(create_sbwallslope4_2187(10456, 376), 3);
    add_background_object(create_sbdeck4_2188(10432, 352), 3);
    add_background_object(create_sbdeck5_2162(10560, 320), 3);
    add_background_object(create_sbwallslope6_2165(10560, 344), 3);
    add_background_object(create_sbwallslope3_2164(10688, 592), 3);
    add_background_object(create_sbwallslope5_2166(10560, 560), 3);
    add_background_object(create_sbdeck2_2163(10560, 536), 3);
    add_background_object(create_sbdeck3_2161(10688, 568), 3);
    add_background_object(create_sbwallright_2169(8128, 912), 3);
    add_background_object(create_sbdeck3_2161(8000, 792), 3);
    add_background_object(create_sbdeck2_2163(7872, 760), 3);
    add_background_object(create_sbwallslope5_2166(7872, 784), 3);
    add_background_object(create_sbwallslope3_2164(8000, 816), 3);
    add_background_object(create_sbbigwall_2147(7872, 848), 3);
    add_background_object(create_sbbigwall_2147(7872, 976), 3);
    add_background_object(create_sbwall_2146(7872, 1104), 3);
    add_background_object(create_sbwall_2146(8000, 1104), 3);
    add_background_object(create_sbbigwall_2147(7616, 1040), 3);
    add_background_object(create_sbbigwall_2147(7616, 912), 3);
    add_background_object(create_sbbigwall_2147(7360, 976), 3);
    add_background_object(create_sbbigwall_2147(7360, 848), 3);
    add_background_object(create_sbwall_2146(7232, 1104), 3);
    add_background_object(create_sbsmallwall_2144(7296, 976), 3);
    add_background_object(create_sbsmallwall_2144(7296, 1040), 3);
    add_background_object(create_sbsmallwall_2144(10944, 1008), 3);
    add_background_object(create_sbsmallwall_2144(10944, 944), 3);
    add_background_object(create_sbbigwall_2147(10432, 656), 3);
    add_background_object(create_sbbigwall_2147(10688, 624), 3);
    add_background_object(create_sbbigwall_2147(10688, 752), 3);
    add_background_object(create_sbbigwall_2147(10688, 1008), 3);
    add_background_object(create_sbwall_2146(10816, 1136), 3);
    add_background_object(create_sbwall_2146(10688, 1136), 3);
    add_background_object(create_sbbigwall_2147(9920, 912), 3);
    add_background_object(create_sbbigwall_2147(9920, 1040), 3);
    add_background_object(create_sbbigwall_2147(10176, 912), 3);
    add_background_object(create_sbbigwall_2147(10176, 1040), 3);
    add_background_object(create_sbbigwall_2147(10432, 912), 3);
    add_background_object(create_sbbigwall_2147(10432, 1040), 3);
    add_background_object(create_sbchain_2141(8688, 376), 3);
    add_background_object(create_sbchain_2141(8688, 312), 3);
    add_background_object(create_sbchain_2141(8688, 248), 3);
    add_background_object(create_sbchain_2141(8928, 376), 3);
    add_background_object(create_sbchain_2141(8928, 312), 3);
    add_background_object(create_sbchain_2141(8928, 248), 3);
    add_background_object(create_sbinnercurve1_2180(10960, 216), 3);
    add_background_object(create_sbinnercurve3_2189(10960, 88), 3);
    add_background_object(create_sbdeck11_2185(10960, 192), 3);
    add_background_object(create_sbdeck6_2151(10896, 320), 3);
    add_background_object(create_sbsmallwall_2144(11088, 280), 3);
    add_background_object(create_sbsmallwall_2144(11088, 216), 3);
    add_background_object(create_sbsmallwall_2144(11088, 152), 3);
    add_background_object(create_sbsmallwall_2144(11088, 88), 3);
    add_background_object(create_sbwallright_2169(10816, 408), 3);
    add_background_object(create_sbwallleft_2172(10752, 24), 3);
    add_background_object(create_sbwall_2146(11024, 24), 3);
    add_background_object(create_sbwallleft_2172(10752, -40), 3);
    add_background_object(create_sbwall_2146(11024, -40), 3);
    add_background_object(create_sbwall_2146(10688, 344), 3);
    add_background_object(create_sbdeck1_2148(10688, 320), 3);
    add_background_object(create_sbbigwall_2147(10768, -40), 3);
    add_background_object(create_sbwallright_2169(11136, 280), 3);
    add_background_object(create_sbwallright_2169(11136, 216), 3);
    add_background_object(create_sbwallright_2169(11136, 152), 3);
    add_background_object(create_sbwallright_2169(11136, 88), 3);
    add_background_object(create_sbwallright_2169(11136, 24), 3);
    add_background_object(create_sbwallright_2169(11136, -40), 3);
    add_background_object(create_sbwall_2146(5248, 336), 3);
    add_background_object(create_sbwall_2146(5248, 272), 3);
    add_background_object(create_sbwallleft_2172(5248, 336), 3);
    add_background_object(create_sbwallleft_2172(5248, 272), 3);
    add_background_object(create_sbwallright_2169(5360, 336), 3);
    add_background_object(create_sbwallright_2169(5360, 272), 3);
    add_background_object(create_sbdeck1_2148(5376, 376), 3);
    add_background_object(create_sbwallright_2169(10944, 688), 3);
    add_background_object(create_sbwallright_2169(10944, 624), 3);
    add_background_object(create_watervent_725(8800, 848), 3);
    add_background_object(create_sbmetaltube1_2190(9912, 368), 3);
    add_background_object(create_sbmetaltube1_2190(9912, 336), 3);
    add_background_object(create_sbmetaltube1_2190(9912, 304), 3);
    add_background_object(create_sbmetaltube1_2190(9912, 272), 3);
    add_background_object(create_sbmetaltube1_2190(9912, 240), 3);
    add_background_object(create_sbmetaltube1_2190(10040, 368), 3);
    add_background_object(create_sbmetaltube1_2190(10040, 336), 3);
    add_background_object(create_sbmetaltube1_2190(10040, 304), 3);
    add_background_object(create_sbmetaltube1_2190(10040, 272), 3);
    add_background_object(create_sbmetaltube1_2190(10040, 240), 3);
    add_background_object(create_sbmetaltube1_2190(9776, 624), 3);
    add_background_object(create_sbmetaltube1_2190(9776, 592), 3);
    add_background_object(create_sbmetaltube1_2190(9776, 560), 3);
    add_background_object(create_sbmetaltube1_2190(9776, 528), 3);
    add_background_object(create_sbwallright_2169(9896, 336), 3);
    add_background_object(create_sbwallleft_2172(10072, 336), 3);
    add_background_object(create_sbwallright_2169(9504, 152), 3);
    add_background_object(create_sbmetaltube1_2190(9520, 184), 3);
    add_background_object(create_sbmetaltube1_2190(9520, 152), 3);
    add_background_object(create_sbmetaltube1_2190(9520, 120), 3);
    add_background_object(create_sbmetaltube1_2190(9024, 632), 3);
    add_background_object(create_sbmetaltube1_2190(9120, 632), 3);
    add_background_object(create_sbwallleft_2172(8864, 784), 3);
    add_background_object(create_sbwallright_2169(8784, 784), 3);
    add_background_object(create_sbwall_2146(9024, 728), 3);
    add_background_object(create_sbwall_2146(9024, 664), 3);
    add_background_object(create_sbwallleft_2172(9024, 728), 3);
    add_background_object(create_sbwallleft_2172(9024, 664), 3);
    add_background_object(create_sbwallright_2169(9136, 664), 3);
    add_background_object(create_sbwallright_2169(9136, 728), 3);
    add_background_object(create_watervent_725(9056, 720), 3);
    add_background_object(create_sbwallleft_2172(9120, 664), 3);
    add_background_object(create_sbwallright_2169(9040, 664), 3);
    add_background_object(create_sbmetaltube2_2191(9024, 880), 3);
    add_background_object(create_sbmetaltube2_2191(9056, 880), 3);
    add_background_object(create_sbmetaltube2_2191(9088, 880), 3);
    add_background_object(create_sbmetaltube2_2191(9120, 880), 3);
    add_background_object(create_sbmetaltube2_2191(8384, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8416, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8448, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8480, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8128, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8160, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8192, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(8224, 1008), 3);
    add_background_object(create_sbwallright_2169(8128, 976), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 688), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 656), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 624), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 592), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 880), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 848), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 816), 3);
    add_background_object(create_sbmetaltube1_2190(9664, 784), 3);
    add_background_object(create_sbmetaltube1_2190(8496, 440), 3);
    add_background_object(create_sbmetaltube1_2190(8496, 472), 3);
    add_background_object(create_sbmetaltube1_2190(8496, 504), 3);
    add_background_object(create_sbmetaltube1_2190(8496, 536), 3);
    add_background_object(create_sbmetaltube1_2190(8496, 568), 3);
    add_background_object(create_sbmetaltube1_2190(8496, 600), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 184), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 216), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 248), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 280), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 312), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 344), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 88), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 120), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 152), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 56), 3);
    add_background_object(create_sbwallleft_2172(8272, 56), 3);
    add_background_object(create_sbwallleft_2172(8272, 120), 3);
    add_background_object(create_sbwallleft_2172(8272, 184), 3);
    add_background_object(create_sbwallleft_2172(8272, 248), 3);
    add_background_object(create_sbwallleft_2172(8272, 312), 3);
    add_background_object(create_sbmetaltube1_2190(7024, 464), 3);
    add_background_object(create_sbmetaltube1_2190(7024, 496), 3);
    add_background_object(create_sbmetaltube1_2190(7024, 528), 3);
    add_background_object(create_sbmetaltube1_2190(7024, 560), 3);
    add_background_object(create_sbmetaltube1_2190(7024, 592), 3);
    add_background_object(create_sbmetaltube1_2190(7024, 624), 3);
    add_background_object(create_sbmetaltube1_2190(6128, 552), 3);
    add_background_object(create_sbmetaltube1_2190(6128, 584), 3);
    add_background_object(create_sbmetaltube1_2190(6128, 600), 3);
    add_background_object(create_sbmetaltube1_2190(6128, 528), 3);
    add_background_object(create_sbdeck8_2171(6144, 632), 3);
    add_background_object(create_sbmetaltube1_2190(5472, 464), 3);
    add_background_object(create_sbmetaltube3_2192(5472, 496), 3);
    add_background_object(create_sbmetaltube2_2191(5440, 496), 3);
    add_background_object(create_sbmetaltube2_2191(5408, 496), 3);
    add_background_object(create_sbmetaltube2_2191(5376, 496), 3);
    add_background_object(create_sbwallright_2169(5376, 496), 3);
    add_background_object(create_sbbigwall2_2145(10688, 880), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 464), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 496), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 528), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 560), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 592), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 624), 3);
    add_background_object(create_sbwallright_2169(5088, 400), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 400), 3);
    add_background_object(create_sbmetaltube1_2190(5104, 432), 3);
    add_background_object(create_sbbigwall_2147(2816, 208), 3);
    add_background_object(create_sbbigwall_2147(2816, 16), 3);
    add_background_object(create_sbbigwall2_2145(6144, 16), 3);
    add_background_object(create_sbladder_2177(11416, 944), 3);
    add_background_object(create_sbladder_2177(11416, 976), 3);
    add_background_object(create_sbwallleft_2172(10304, 656), 3);
    add_background_object(create_sbwallleft_2172(10304, 720), 3);
    add_background_object(create_sbwallleft_2172(10304, 784), 3);
    add_background_object(create_sbwallleft_2172(10304, 848), 3);
    add_background_object(create_sbwallright_2169(10224, 720), 3);
    add_background_object(create_sbwallright_2169(10224, 656), 3);
    add_background_object(create_sbwallright_2169(10224, 848), 3);
    add_background_object(create_sbwallright_2169(10224, 784), 3);
    add_background_object(create_sbwallright_2169(2608, 976), 3);
    add_background_object(create_sbwallleft_2172(2688, 976), 3);
    add_background_object(create_sbwallleft_2172(2688, 1040), 3);
    add_background_object(create_sbwallright_2169(2608, 1040), 3);
    add_background_object(create_sbwallright_2169(3184, 976), 3);
    add_background_object(create_sbwallright_2169(3184, 1040), 3);
    add_background_object(create_sbwallleft_2172(3264, 976), 3);
    add_background_object(create_sbwallleft_2172(3264, 1040), 3);
    add_background_object(create_sbmetaltube1_2190(8768, 760), 3);
    add_background_object(create_sbmetaltube1_2190(8864, 760), 3);
    add_background_object(create_sbmetaltube1_2190(7824, 792), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 376), 3);
    add_background_object(create_sbmetaltube1_2190(8240, 408), 3);
    add_background_object(create_sbmetaltube4_2193(10224, 40), 3);
    add_background_object(create_sbmetaltube1_2190(10224, 72), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 688), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 720), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 752), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 496), 3);
    add_background_object(create_sbwallright_2169(3936, 464), 3);
    add_background_object(create_sbwallright_2169(3936, 400), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 464), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 432), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 400), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 656), 3);
    add_background_object(create_sbmetaltube2_2191(3984, 656), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 688), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 720), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 752), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 784), 3);
    add_background_object(create_sbwallleft_2172(4496, 464), 3);
    add_background_object(create_sbwallleft_2172(4496, 400), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 400), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 432), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 464), 3);
    add_background_object(create_sbmetaltube2_2191(4464, 496), 3);
    add_background_object(create_sbmetaltube1_2190(6880, 784), 3);
    add_background_object(create_sbmetaltube1_2190(6912, 784), 3);
    add_background_object(create_sbmetaltube1_2190(6944, 784), 3);
    add_background_object(create_sbmetaltube1_2190(6976, 784), 3);
    add_background_object(create_sbmetaltube2_2191(3984, 496), 3);
    add_background_object(create_sbdeck1_2148(3456, 888), 3);
    add_background_object(create_sbdeck1_2148(3584, 888), 3);
    add_background_object(create_sbwall_2146(3584, 1040), 3);
    add_background_object(create_sbwall_2146(3456, 1040), 3);
    add_background_object(create_sbbigwall_2147(3456, 912), 3);
    add_background_object(create_sbbigwall2_2145(3712, 912), 3);
    add_background_object(create_sbwall_2146(3840, 1040), 3);
    add_background_object(create_sbwall_2146(3712, 1040), 3);
    add_background_object(create_sbdeck1_2148(3712, 888), 3);
    add_background_object(create_sbdeck1_2148(3840, 888), 3);
    add_background_object(create_sbwall_2146(3328, 720), 3);
    add_background_object(create_sbwall_2146(3328, 656), 3);
    add_background_object(create_sbbigwall_2147(3200, 528), 3);
    add_background_object(create_sbdeck1_2148(3456, 120), 3);
    add_background_object(create_sbdeck1_2148(3584, 120), 3);
    add_background_object(create_sbdeck1_2148(3712, 120), 3);
    add_background_object(create_sbdeck1_2148(3840, 120), 3);
    add_background_object(create_sbbigwall_2147(3456, 144), 3);
    add_background_object(create_sbbigwall_2147(3200, 144), 3);
    add_background_object(create_sbbigwall_2147(3456, 272), 3);
    add_background_object(create_sbbigwall_2147(3200, 272), 3);
    add_background_object(create_sbbigwall_2147(3328, 400), 3);
    add_background_object(create_sbbigwall_2147(3584, 400), 3);
    add_background_object(create_sbwallright_2169(3424, 720), 3);
    add_background_object(create_sbwallright_2169(3424, 656), 3);
    add_background_object(create_sbwallleft_2172(3824, 720), 3);
    add_background_object(create_sbmetaltube1_2190(3536, 856), 3);
    add_background_object(create_sbmetaltube1_2190(3568, 856), 3);
    add_background_object(create_sbmetaltube1_2190(3568, 824), 3);
    add_background_object(create_sbmetaltube4_2193(3568, 792), 3);
    add_background_object(create_sbmetaltube2_2191(3600, 792), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 824), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 792), 3);
    add_background_object(create_sbmetaltube2_2191(3664, 792), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 824), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 792), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 856), 3);
    add_background_object(create_sbmetaltube2_2191(3952, 784), 3);
    add_background_object(create_sbmetaltube2_2191(3920, 784), 3);
    add_background_object(create_sbmetaltube2_2191(3888, 784), 3);
    add_background_object(create_sbmetaltube1_2190(3440, 752), 3);
    add_background_object(create_sbmetaltube1_2190(3440, 720), 3);
    add_background_object(create_sbmetaltube1_2190(3440, 688), 3);
    add_background_object(create_sbmetaltube4_2193(3440, 656), 3);
    add_background_object(create_sbmetaltube2_2191(3472, 656), 3);
    add_background_object(create_sbmetaltube3_2192(3536, 656), 3);
    add_background_object(create_sbbigwall2_2145(3456, 528), 3);
    add_background_object(create_sbmetaltube4_2193(3536, 624), 3);
    add_background_object(create_sbmetaltube2_2191(3600, 624), 3);
    add_background_object(create_sbmetaltube2_2191(3632, 624), 3);
    add_background_object(create_sbwallright_2169(3520, 624), 3);
    add_background_object(create_sbmetaltube2_2191(3568, 624), 3);
    add_background_object(create_sbmetaltube3_2192(3696, 624), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 592), 3);
    add_background_object(create_sbmetaltube1_2190(3536, 888), 3);
    add_background_object(create_sbmetaltube1_2190(3536, 920), 3);
    add_background_object(create_sbmetaltube1_2190(3536, 952), 3);
    add_background_object(create_sbwallright_2169(3520, 912), 3);
    add_background_object(create_sbwallleft_2172(3568, 912), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 888), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 920), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 952), 3);
    add_background_object(create_sbwallright_2169(3616, 912), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 888), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 920), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 952), 3);
    add_background_object(create_sbwallleft_2172(3664, 912), 3);
    add_background_object(create_sbwallright_2169(3680, 912), 3);
    add_background_object(create_sbwallleft_2172(3728, 912), 3);
    add_background_object(create_sbwallleft_2172(3664, 976), 3);
    add_background_object(create_sbwallright_2169(3680, 976), 3);
    add_background_object(create_sbwallright_2169(3520, 976), 3);
    add_background_object(create_sbwallleft_2172(3568, 976), 3);
    add_background_object(create_sbwallleft_2172(3728, 976), 3);
    add_background_object(create_sbmetaltube1_2190(3536, 984), 3);
    add_background_object(create_sbmetaltube1_2190(3536, 1008), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 984), 3);
    add_background_object(create_sbmetaltube1_2190(3632, 1008), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 984), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 1008), 3);
    add_background_object(create_sbmetaltube2_2191(3504, 656), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 856), 3);
    add_background_object(create_sbwallright_2169(3680, 576), 3);
    add_background_object(create_sbmetaltube1_2190(3696, 560), 3);
    add_background_object(create_sbwallslope2_2182(3824, 656), 3);
    add_background_object(create_sbceiling1_2181(3696, 528), 3);
    add_background_object(create_sbmetaltube2_2191(3664, 624), 3);
    add_background_object(create_sbwallshadow_2142(9800, 120), 3);
    add_background_object(create_sbwallshadow_2142(9928, 120), 3);
    add_background_object(create_sbwallshadow_2142(10056, 120), 3);
    add_background_object(create_sbwallshadow_2142(10184, 120), 3);
    add_background_object(create_sbmetaltube1_2190(10224, 104), 3);
    add_background_object(create_sbwallshadow_2142(9800, 432), 3);
    add_background_object(create_sbwallshadow_2142(10056, 432), 3);
    add_background_object(create_sbwallshadow_2142(10184, 432), 3);
    add_background_object(create_sbwallshadow_2142(10504, 472), 3);
    add_background_object(create_sbwallshadow_2142(10632, 472), 3);
    add_background_object(create_sbwallshadow_2142(10832, 344), 3);
    add_background_object(create_sbwallshadow_2142(10960, 344), 3);
    add_background_object(create_sbwallshadow_2142(7800, 664), 3);
    add_background_object(create_sbwallshadow_2142(7928, 664), 3);
    add_background_object(create_sbwallshadow_2142(7928, 440), 3);
    add_background_object(create_sbwallshadow_2142(7800, 440), 3);
    add_background_object(create_sbwallshadow_2142(2048, 752), 3);
    add_background_object(create_sbwallshadow_2142(2176, 752), 3);
    add_background_object(create_sbwallshadow_2142(2048, 568), 3);
    add_background_object(create_sbwallshadow_2142(2176, 568), 3);
    add_background_object(create_sbdeck1walkthru_2170(8688, 440), 3);
    add_background_object(create_sbdeck1walkthru_2170(8816, 440), 3);
    add_background_object(create_sbdeck8walkthru_2168(8944, 440), 3);
    add_background_object(create_sbdeck7walkthru_2167(8664, 440), 3);
    add_background_object(create_sbmetaltube2_2191(10816, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(10848, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(10880, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(10912, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(11072, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(11104, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(11136, 1168), 3);
    add_background_object(create_sbmetaltube2_2191(11168, 1168), 3);
    add_background_object(create_sbdeck1_2148(11728, 728), 3);
    add_background_object(create_blimpcable2_2135(11920, 664), 3);
    add_background_object(create_sbdeck1_2148(11856, 728), 3);
    add_background_object(create_sbshipfront_2152(11856, 752), 3);
    add_background_object(create_sbdeck1_2148(11984, 728), 3);
    add_background_object(create_blimpcable2_2135(11384, 632), 3);
    add_background_object(create_blimpcable3_2143(11504, 504), 3);
    add_background_object(create_blimpcable3_2143(11504, 568), 3);
    add_background_object(create_blimpcable3_2143(11504, 632), 3);
    add_background_object(create_blimpcable2_2135(11608, 504), 3);
    add_object(create_bossspade_2194(11470, -111), 3);
    add_object(create_enemyspawntube_2195(8832, 804), 3);
    add_object(create_enemyspawntube_2195(9088, 676), 3);
    add_object(create_minibossrailing_923(11448, 728), 3);
    add_object(create_minibossrailing_923(11424, 728), 3);
    add_object(create_minibossrailing_923(11400, 728), 3);
    add_object(create_minibossrailing_923(11376, 728), 3);
    add_object(create_minibossrailing_923(11352, 728), 3);
    add_object(create_objectjumppad_530(4496, 272), 3);
    add_object(create_objectjumppad_530(4224, 272), 3);
    add_object(create_playerstartingpoint_358(149, 469), 3);
    add_object(create_levelsbplatform1_2096(80, 552), 3);
    add_object(create_levelsbplatformflame1_2097(79, 570), 3);
    add_object(create_shipplatform2_2094(2032, 728), 3);
    add_object(create_shipplatform2_2094(2192, 728), 3);
    add_object(create_shipplatform2_2094(2120, 544), 3);
    add_object(create_shipplatform2_2094(2192, 544), 3);
    add_object(create_shipplatform2_2094(2048, 544), 3);
    add_object(create_shipplatform2_2094(2112, 728), 3);
    add_object(create_laddertop_357(2028, 567), 3);
    add_object(create_gimmickflamethrower_2196(4656, 416), 3);
    add_object(create_gimmickflamethrower_2196(4856, 240), 3);
    add_object(create_enemylimiter_350(4861, 234), 3);
    add_object(create_enemylimiter_350(4877, 234), 3);
    add_object(create_switchdoor_2099(2976, 376), 3);
    add_object(create_switchplatform_2100(2904, 512), 3);
    add_object(create_levelsbplatform3_2197(5760, 840), 3);
    add_object(create_levelsbplatform3_2197(5760, 792), 3);
    add_object(create_levelsbplatform3_2197(5760, 744), 3);
    add_object(create_levelsbplatform3_2197(5760, 696), 3);
    add_object(create_levelsbplatform3_2197(5760, 648), 3);
    add_object(create_levelsbplatform3_2197(5760, 600), 3);
    add_object(create_levelsbplatform3_2197(5760, 552), 3);
    add_object(create_levelsbplatform3_2197(5760, 504), 3);
    add_object(create_levelsbplatform3_2197(5760, 456), 3);
    add_object(create_levelsbplatform3_2197(5760, 408), 3);
    add_object(create_gimmickcannonbase_2198(11568, 1040), 3);
    add_object(create_gimmickcannon_2199(11568, 1040), 3);
    add_object(create_enemyhoppermkii_2200(1339, 632), 3);
    add_object(create_enemylimiter_350(1013, 610), 3);
    add_object(create_enemylimiter_350(1445, 610), 3);
    add_object(create_enemyaxleturret_2201(5952, 520), 3);
    add_object(create_enemyaxleturret2_2202(5952, 520), 3);
    add_object(create_enemyaxleturret_2201(5568, 632), 3);
    add_object(create_enemyaxleturret2_2202(5568, 632), 3);
    add_object(create_gimmickcannonbase2_2203(11560, 1040), 3);
    add_object(create_objectcrystal_279(5741, 386), 3);
    add_object(create_objectcrystal_279(5781, 386), 3);
    add_object(create_objectcrystal_279(5701, 386), 3);
    add_object(create_objectcrystal_279(5621, 386), 3);
    add_object(create_objectcrystal_279(5661, 386), 3);
    add_object(create_objectcrystal_279(5861, 386), 3);
    add_object(create_objectcrystal_279(5901, 386), 3);
    add_object(create_objectcrystal_279(5821, 386), 3);
    add_object(create_monitorwoodshield_325(5984, 856), 3);
    add_object(create_levelsbplatform3_2197(4224, 840), 3);
    add_object(create_levelsbplatform3_2197(4224, 792), 3);
    add_object(create_levelsbplatform3_2197(4224, 744), 3);
    add_object(create_levelsbplatform3_2197(4224, 696), 3);
    add_object(create_levelsbplatform3_2197(4224, 648), 3);
    add_object(create_levelsbplatform3_2197(4224, 600), 3);
    add_object(create_levelsbplatform3_2197(4224, 552), 3);
    add_object(create_levelsbplatform3_2197(4224, 504), 3);
    add_object(create_levelsbplatform3_2197(4224, 456), 3);
    add_object(create_levelsbplatform3_2197(4224, 408), 3);
    add_object(create_objectcrystal_279(4205, 386), 3);
    add_object(create_objectcrystal_279(4245, 386), 3);
    add_object(create_objectcrystal_279(4165, 386), 3);
    add_object(create_objectcrystal_279(4085, 386), 3);
    add_object(create_objectcrystal_279(4125, 386), 3);
    add_object(create_objectcrystal_279(4325, 386), 3);
    add_object(create_objectcrystal_279(4365, 386), 3);
    add_object(create_objectcrystal_279(4285, 386), 3);
    add_object(create_enemyaxleturret_2201(5432, 832), 3);
    add_object(create_enemyaxleturret2_2202(5432, 832), 3);
    add_object(create_objectcrystal_279(5405, 554), 3);
    add_object(create_objectcrystal_279(5413, 538), 3);
    add_object(create_objectcrystal_279(5421, 554), 3);
    add_object(create_objectcrystal_279(5429, 538), 3);
    add_object(create_objectcrystal_279(5437, 554), 3);
    add_object(create_objectcrystal_279(5445, 538), 3);
    add_object(create_objectcrystal_279(5453, 554), 3);
    add_object(create_objectcrystal_279(5461, 538), 3);
    add_object(create_objectcrystal_279(5469, 554), 3);
    add_object(create_objectcrystal_279(5477, 538), 3);
    add_object(create_objectcrystal_279(5485, 554), 3);
    add_object(create_objectcrystal_279(5405, 682), 3);
    add_object(create_objectcrystal_279(5413, 666), 3);
    add_object(create_objectcrystal_279(5421, 682), 3);
    add_object(create_objectcrystal_279(5429, 666), 3);
    add_object(create_objectcrystal_279(5437, 682), 3);
    add_object(create_objectcrystal_279(5445, 666), 3);
    add_object(create_objectcrystal_279(5453, 682), 3);
    add_object(create_objectcrystal_279(5461, 666), 3);
    add_object(create_objectcrystal_279(5469, 682), 3);
    add_object(create_objectcrystal_279(5477, 666), 3);
    add_object(create_objectcrystal_279(5485, 682), 3);
    add_object(create_enemyhoppermkii_2200(3171, 920), 3);
    add_object(create_enemylimiter_350(4469, 842), 3);
    add_object(create_enemylimiter_350(2965, 898), 3);
    add_object(create_enemyrotorbladespikes_2204(2655, 984), 3);
    add_object(create_enemyrotorblade_2205(2656, 984), 3);
    add_object(create_enemyspawntube_2195(2656, 996), 3);
    add_object(create_enemylimiter_350(2821, 930), 3);
    add_object(create_enemylimiter_350(2325, 930), 3);
    add_object(create_objectcodec_354(3034, 429), 3);
    add_object(create_enemyrotorbladespikes_2204(3231, 984), 3);
    add_object(create_enemyrotorblade_2205(3232, 984), 3);
    add_object(create_enemyspawntube_2195(3232, 996), 3);
    add_object(create_enemylimiter_350(3333, 898), 3);
    add_object(create_enemylimiter_350(3333, 930), 3);
    add_object(create_enemylimiter_350(2965, 930), 3);
    add_object(create_enemylimiter_350(3333, 842), 3);
    add_object(create_enemyhoppermkii_2200(4411, 856), 3);
    add_object(create_switchplatform_2100(5016, 600), 3);
    add_object(create_switchdoor_2099(5104, 248), 3);
    add_object(create_monitorcrystals_324(4528, 344), 3);
    add_object(create_gimmickflamethrower_2196(4768, 632), 3);
    add_object(create_enemylimiter_350(4773, 626), 3);
    add_object(create_enemylimiter_350(4789, 626), 3);
    add_object(create_monitorcrystals_324(4592, 624), 3);
    add_object(create_laddertop_357(4948, 399), 3);
    add_object(create_yellowspringright_435(4608, 752), 3);
    add_object(create_yellowspringright_435(4608, 720), 3);
    add_object(create_monitorbomb_563(5144, 856), 3);
    add_object(create_monitorbomb_563(5208, 856), 3);
    add_object(create_breakablefloor1_2206(-416, 1064), 3);
    add_object(create_breakablefloor2_2207(-352, 1064), 3);
    add_object(create_breakablefloor2_2207(5184, 888), 3);
    add_object(create_breakablefloor1_2206(5120, 888), 3);
    add_object(create_yellowspringleft_436(6768, 568), 3);
    add_object(create_yellowspringleft_436(6768, 600), 3);
    add_object(create_yellowspringright_435(6288, 728), 3);
    add_object(create_yellowspringright_435(6288, 696), 3);
    add_object(create_yellowspringright_435(6288, 664), 3);
    add_object(create_enemymagmeon_2208(2240, 809), 3);
    add_object(create_enemymagmeon_2208(6096, 873), 3);
    add_object(create_enemymagmeon_2208(6000, 841), 3);
    add_object(create_enemymagmeon_2208(6112, 361), 3);
    add_object(create_enemymagmeon_2208(5936, 873), 3);
    add_object(create_enemymagmeon_2208(2912, 873), 3);
    add_object(create_laddertop_357(4524, 911), 3);
    add_object(create_objectcrystal_279(2181, 802), 3);
    add_object(create_objectcrystal_279(2149, 802), 3);
    add_object(create_objectcrystal_279(2117, 802), 3);
    add_object(create_objectcrystal_279(2213, 802), 3);
    add_object(create_objectcrystal_279(2701, 930), 3);
    add_object(create_objectcrystal_279(2781, 930), 3);
    add_object(create_objectcrystal_279(2741, 930), 3);
    add_object(create_objectcrystal_279(2973, 930), 3);
    add_object(create_objectcrystal_279(3053, 930), 3);
    add_object(create_objectcrystal_279(3013, 930), 3);
    add_object(create_objectcrystal_279(2341, 930), 3);
    add_object(create_objectcrystal_279(2421, 930), 3);
    add_object(create_objectcrystal_279(2381, 930), 3);
    add_object(create_objectcrystal_279(3213, 930), 3);
    add_object(create_objectcrystal_279(3293, 930), 3);
    add_object(create_objectcrystal_279(3253, 930), 3);
    add_object(create_objectcrystal_279(6525, 674), 3);
    add_object(create_objectcrystal_279(6573, 650), 3);
    add_object(create_objectcrystal_279(6621, 626), 3);
    add_object(create_objectcrystal_279(6661, 866), 3);
    add_object(create_objectcrystal_279(6613, 842), 3);
    add_object(create_objectcrystal_279(6565, 818), 3);
    add_object(create_objectcrystal_279(6517, 794), 3);
    add_object(create_objectcrystal_279(6469, 770), 3);
    add_object(create_gimmickflamethrower_2196(4800, 1152), 3);
    add_object(create_objectcrystal_279(4925, 1058), 3);
    add_object(create_objectcrystal_279(4957, 1058), 3);
    add_object(create_objectcrystal_279(4989, 1058), 3);
    add_object(create_objectcrystal_279(4893, 1058), 3);
    add_object(create_monitor1up_410(3088, 88), 3);
    add_object(create_objectpetal_302(6297, 425), 3);
    add_object(create_objectpetal_302(6393, 473), 3);
    add_object(create_objectpetal_302(6489, 521), 3);
    add_object(create_playerassist_2028(11728, 1096), 3);
    add_object(create_levelsbplatform1_2096(304, 584), 3);
    add_object(create_levelsbplatformflame1_2097(303, 602), 3);
    add_object(create_levelsbplatform1_2096(552, 616), 3);
    add_object(create_levelsbplatformflame1_2097(551, 634), 3);
    add_object(create_levelsbplatform1_2096(784, 664), 3);
    add_object(create_levelsbplatformflame1_2097(783, 682), 3);
    add_object(create_sbloop1_2209(6976, 656), 3);
    add_object(create_sbloop2_2210(6784, 784), 3);
    add_object(create_sbloop3_2211(6768, 784), 3);
    add_object(create_layerchangeswitch_404(6936, 656), 3);
    add_object(create_layerchangeto0_405(6672, 848), 3);
    add_object(create_layerchangeto0_405(6672, 792), 3);
    add_object(create_layerchangeto1_406(7128, 584), 3);
    add_object(create_layerchangeto1_406(7128, 528), 3);
    add_object(create_sbloop3_2211(6768, 848), 3);
    add_object(create_layerchangeto1_406(7128, 472), 3);
    add_object(create_objectcrystal_279(7085, 778), 3);
    add_object(create_objectcrystal_279(7053, 706), 3);
    add_object(create_objectcrystal_279(6989, 674), 3);
    add_object(create_objectcrystal_279(6901, 674), 3);
    add_object(create_objectcrystal_279(6837, 706), 3);
    add_object(create_objectcrystal_279(6805, 778), 3);
    add_object(create_objectcrystal_279(6813, 738), 3);
    add_object(create_objectcrystal_279(7077, 738), 3);
    add_object(create_objectcrystal_279(6869, 682), 3);
    add_object(create_objectcrystal_279(7021, 682), 3);
    add_object(create_objectcrystal_279(6933, 674), 3);
    add_object(create_objectcrystal_279(6957, 674), 3);
    add_object(create_objectcodec_354(6450, 101), 3);
    add_object(create_objectcrystal_279(6509, 138), 3);
    add_object(create_objectcrystal_279(6573, 170), 3);
    add_object(create_objectcrystal_279(6637, 202), 3);
    add_object(create_objectcrystal_279(6701, 234), 3);
    add_object(create_objectcrystal_279(6765, 266), 3);
    add_object(create_objectcrystal_279(6829, 298), 3);
    add_object(create_objectcrystal_279(6893, 330), 3);
    add_object(create_objectjumppad_530(3984, 656), 3);
    add_object(create_enemyaxleturret_2201(2176, 648), 3);
    add_object(create_enemyaxleturret2_2202(2176, 648), 3);
    add_object(create_bosschopperbars_2212(956, -76), 3);
    add_object(create_bosschopperbars2_2213(956, -76), 3);
    add_object(create_bosschoppertailblade2_2214(876, -148), 3);
    add_object(create_bosschoppertail_2215(876, -148), 3);
    add_object(create_bosschoppertail_2215(892, -132), 3);
    add_object(create_bosschoppertail_2215(908, -116), 3);
    add_object(create_bosschoppertail_2215(924, -100), 3);
    add_object(create_bosschopper_2216(11484, 572), 3);
    add_object(create_bosschoppertailblade_2217(876, -148), 3);
    add_object(create_bosschopperblade_2218(956, -76), 3);
    add_object(create_minibossbarrier_924(11432, 728), 3);
    add_object(create_minibossbarrier_924(11352, 728), 3);
    add_object(create_minibossbarrier_924(11368, 728), 3);
    add_object(create_minibossbarrier_924(11416, 728), 3);
    add_object(create_minibossbarrier_924(11384, 728), 3);
    add_object(create_minibossbarrier_924(11400, 728), 3);
    add_object(create_gimmickcannonbase_2198(11568, 912), 3);
    add_object(create_gimmickcannonbase2_2203(11560, 912), 3);
    add_object(create_gimmickcannon_2199(11568, 912), 3);
    add_object(create_playerassistcopilot_2219(11726, 1096), 3);
    add_object(create_monitorinvincibility_408(5328, 1176), 3);
    add_object(create_objectcrystal_279(8325, 714), 3);
    add_object(create_objectcrystal_279(8245, 714), 3);
    add_object(create_objectcrystal_279(8285, 714), 3);
    add_object(create_objectcrystal_279(8365, 714), 3);
    add_object(create_objectcrystal_279(10341, 418), 3);
    add_object(create_objectcrystal_279(10381, 418), 3);
    add_object(create_objectcrystal_279(10341, 378), 3);
    add_object(create_objectcrystal_279(7669, 746), 3);
    add_object(create_objectcrystal_279(7629, 746), 3);
    add_object(create_objectcrystal_279(7589, 746), 3);
    add_object(create_objectcrystal_279(7477, 746), 3);
    add_object(create_objectcrystal_279(7437, 746), 3);
    add_object(create_objectcrystal_279(7397, 746), 3);
    add_object(create_objectcrystal_279(9589, 586), 3);
    add_object(create_objectcrystal_279(9557, 618), 3);
    add_object(create_objectcrystal_279(9525, 650), 3);
    add_object(create_objectcrystal_279(9493, 682), 3);
    add_object(create_objectcrystal_279(9461, 714), 3);
    add_object(create_objectcrystal_279(9429, 746), 3);
    add_object(create_objectcrystal_279(9397, 778), 3);
    add_object(create_objectcrystal_279(9461, 650), 3);
    add_object(create_objectcrystal_279(9429, 618), 3);
    add_object(create_objectcrystal_279(9397, 586), 3);
    add_object(create_objectcrystal_279(9525, 714), 3);
    add_object(create_objectcrystal_279(9557, 746), 3);
    add_object(create_objectcrystal_279(9589, 778), 3);
    add_object(create_objectcrystal_279(9493, 490), 3);
    add_object(create_objectcrystal_279(9461, 522), 3);
    add_object(create_objectcrystal_279(9429, 554), 3);
    add_object(create_objectcrystal_279(9525, 522), 3);
    add_object(create_objectcrystal_279(9557, 554), 3);
    add_object(create_objectcrystal_279(9365, 618), 3);
    add_object(create_objectcrystal_279(9333, 650), 3);
    add_object(create_objectcrystal_279(9301, 682), 3);
    add_object(create_objectcrystal_279(9269, 714), 3);
    add_object(create_objectcrystal_279(9237, 746), 3);
    add_object(create_objectcrystal_279(9205, 778), 3);
    add_object(create_objectcrystal_279(9269, 650), 3);
    add_object(create_objectcrystal_279(9237, 618), 3);
    add_object(create_objectcrystal_279(9205, 586), 3);
    add_object(create_objectcrystal_279(9333, 714), 3);
    add_object(create_objectcrystal_279(9365, 746), 3);
    add_object(create_objectcrystal_279(9301, 490), 3);
    add_object(create_objectcrystal_279(9269, 522), 3);
    add_object(create_objectcrystal_279(9237, 554), 3);
    add_object(create_objectcrystal_279(9333, 522), 3);
    add_object(create_objectcrystal_279(9365, 554), 3);
    add_object(create_objectcrystal_279(9557, 810), 3);
    add_object(create_objectcrystal_279(9525, 842), 3);
    add_object(create_objectcrystal_279(9493, 874), 3);
    add_object(create_objectcrystal_279(9461, 842), 3);
    add_object(create_objectcrystal_279(9429, 810), 3);
    add_object(create_objectcrystal_279(9365, 810), 3);
    add_object(create_objectcrystal_279(9333, 842), 3);
    add_object(create_objectcrystal_279(9301, 874), 3);
    add_object(create_objectcrystal_279(9269, 842), 3);
    add_object(create_objectcrystal_279(9237, 810), 3);
    add_object(create_shipplatform2_2094(7784, 416), 3);
    add_object(create_shipplatform2_2094(7944, 416), 3);
    add_object(create_shipplatform2_2094(7864, 416), 3);
    add_object(create_shipplatform2_2094(9928, 216), 3);
    add_object(create_enemyaxleturret_2201(7936, 520), 3);
    add_object(create_enemyaxleturret2_2202(7936, 520), 3);
    add_object(create_enemyhoppermkii_2200(7523, 792), 3);
    add_object(create_enemyhoppermkii_2200(7731, 792), 3);
    add_object(create_enemyhoppermkii_2200(7731, 568), 3);
    add_object(create_enemylimiter_350(7261, 770), 3);
    add_object(create_enemylimiter_350(7829, 770), 3);
    add_object(create_enemylimiter_350(7405, 554), 3);
    add_object(create_enemylimiter_350(8077, 554), 3);
    add_object(create_enemylimiter_350(9805, 610), 3);
    add_object(create_enemylimiter_350(10557, 610), 3);
    add_object(create_gimmickfan_2220(8704, 1032), 3);
    add_object(create_gimmickfan_2220(8960, 904), 3);
    add_object(create_gimmickfan_2220(8576, 1032), 3);
    add_object(create_gimmickfan_2220(9344, 1032), 3);
    add_object(create_gimmickfan_2220(9216, 1032), 3);
    add_object(create_gimmickfan_2220(9600, 1032), 3);
    add_object(create_gimmickfan_2220(9472, 1032), 3);
    add_object(create_gimmickfanside_2221(10807, 1184), 3);
    add_object(create_gimmickfan_2220(9984, 648), 3);
    add_object(create_gimmickfan_2220(8320, 1032), 3);
    add_object(create_hazardspikesup_2116(9920, 600), 3);
    add_object(create_hazardspikesup_2116(9952, 600), 3);
    add_object(create_hazardspikesup_2116(9984, 600), 3);
    add_object(create_hazardspikesup_2116(10016, 600), 3);
    add_object(create_hazardspikesup_2116(10512, 600), 3);
    add_object(create_hazardspikesup_2116(10480, 600), 3);
    add_object(create_enemyrotorbladespikes_2204(10271, 664), 3);
    add_object(create_enemyrotorblade_2205(10272, 664), 3);
    add_object(create_enemyspawntube_2195(10272, 676), 3);
    add_object(create_monitorearthshield_326(8336, 576), 3);
    add_object(create_monitorrings_407(8800, 408), 3);
    add_object(create_monitorkeystone_562(8400, 320), 3);
    add_object(create_enemydrone_2222(9088, 664), 3);
    add_object(create_enemydrone_2222(8832, 792), 3);
    add_object(create_layerchangeto0_405(10640, 272), 3);
    add_object(create_layerchangeto0_405(10640, 216), 3);
    add_object(create_layerchangeto0_405(10640, 160), 3);
    add_object(create_layerchangeto0_405(10640, 104), 3);
    add_object(create_layerchangeto0_405(10640, 48), 3);
    add_object(create_layerchangeto0_405(10640, -8), 3);
    add_object(create_sbloop3_2211(10752, 216), 3);
    add_object(create_sbloop3_2211(10752, 280), 3);
    add_object(create_sbloop5_2223(10768, 280), 3);
    add_object(create_sbloop4_2224(10832, 320), 3);
    add_object(create_sbloop5_2223(10768, 216), 3);
    add_object(create_sbloop6_2225(10832, 88), 3);
    add_object(create_layerchangeswitch_404(10952, 96), 3);
    add_object(create_layerchangeto1_406(10896, 352), 3);
    add_object(create_layerchangeto1_406(10896, 416), 3);
    add_object(create_layerchangeto1_406(10896, 480), 3);
    add_object(create_layerchangeto1_406(10896, 544), 3);
    add_object(create_objectpetal_302(10961, 105), 3);
    add_object(create_objectpetal_302(11033, 137), 3);
    add_object(create_objectpetal_302(10889, 137), 3);
    add_object(create_layerchangeto1_406(10848, 448), 3);
    add_object(create_sbloop3_2211(10752, 152), 3);
    add_object(create_sbloop5_2223(10768, 152), 3);
    add_object(create_sbloop3_2211(10752, 88), 3);
    add_object(create_sbloop5_2223(10768, 88), 3);
    add_object(create_sbloop4_2224(10720, 320), 3);
    add_object(create_monitorbomb_563(2288, 696), 3);
    add_object(create_monitorbomb_563(2256, 696), 3);
    add_object(create_monitorbomb_563(4496, 1048), 3);
    add_object(create_monitorwatershield_327(5440, 344), 3);
    add_object(create_objectcrystal_279(9941, 194), 3);
    add_object(create_objectcrystal_279(10037, 194), 3);
    add_object(create_objectcrystal_279(9989, 194), 3);
    add_object(create_enemydronelaser_2127(-352, 720), 3);
    add_object(create_laddertop_357(11436, 967), 3);
    add_object(create_objectpetal_302(841, 633), 3);
    add_object(create_objectpetal_302(897, 633), 3);
    add_object(create_hazardfireup_2226(8784, 759), 3);
    add_object(create_hazardfireup_2226(8880, 759), 3);
    add_object(create_hazardfireup_2226(9040, 631), 3);
    add_object(create_hazardfireup_2226(9136, 631), 3);
    add_object(create_hazardfireup_2226(7840, 791), 3);
    add_object(create_hazardfiredown_2227(8256, 440), 3);
    add_object(create_hazardfiredown_2227(10240, 136), 3);
    add_object(create_hazardfireright_2228(3984, 704), 3);
    add_object(create_hazardfireright_2228(3984, 736), 3);
    add_object(create_hazardfireright_2228(3984, 768), 3);
    add_object(create_hazardfireleft_2229(4463, 800), 3);
    add_object(create_hazardfireright_2228(3984, 448), 3);
    add_object(create_hazardfireright_2228(3984, 480), 3);
    add_object(create_hazardfireright_2228(3984, 416), 3);
    add_object(create_hazardfireleft_2229(4463, 768), 3);
    add_object(create_hazardfireleft_2229(4463, 736), 3);
    add_object(create_hazardfireleft_2229(4463, 704), 3);
    add_object(create_hazardfireleft_2229(4463, 512), 3);
    add_object(create_hazardfireleft_2229(4463, 480), 3);
    add_object(create_hazardfireleft_2229(4463, 448), 3);
    add_object(create_hazardfireleft_2229(4463, 416), 3);
    add_object(create_hazardfireup_2226(6928, 783), 3);
    add_object(create_hazardfireup_2226(6960, 783), 3);
    add_object(create_enemymagmeon_2208(1896, 809), 3);
    add_object(create_hazardfireright_2228(3984, 800), 3);
    add_object(create_hazardfireleft_2229(3887, 800), 3);
    add_object(create_hazardfireup_2226(3648, 791), 3);
    add_object(create_hazardfireup_2226(3712, 791), 3);
    add_object(create_objectpetal_302(3649, 689), 3);
    add_object(create_objectpetal_302(3713, 689), 3);
    add_object(create_hazardfireup_2226(3552, 855), 3);
    add_object(create_monitorbomb_563(5176, 856), 3);
    add_object(create_shipplatform2_2094(8672, 440), 3);
    add_object(create_shipplatform2_2094(8832, 440), 3);
    add_object(create_shipplatform2_2094(8744, 440), 3);
    add_object(create_monitor1up_410(11056, 1040), 3);
    add_object(create_gimmickfanside_2221(11063, 1184), 3);
    add_object(create_monitorcrate_409(2136, 512), 3);
    add_object(create_monitorcrate_409(2168, 512), 3);
    add_object(create_monitorcrate_409(5296, 1176), 3);
    add_object(create_monitorcrate_409(5264, 1176), 3);
    add_object(create_monitorcrate_409(5376, 344), 3);
    add_object(create_monitorcrate_409(5408, 344), 3);
    add_object(create_monitorcrate_409(6096, 600), 3);
    add_object(create_monitorcrate_409(6064, 600), 3);
    add_object(create_guicompass_2230(11400, 664), 3);
    add_object(create_monitorrings_407(11184, 1040), 3);
    add_object(create_objectcodec_354(9842, 589), 3);
    add_object(create_bossspademask_2231(11528, 713), 3);
    add_object(create_bossspadehitbox_2232(11502, -119), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_blimpcable1_2070(1424, 664), 4);
    add_background_object(create_blimpcable1_2070(1520, 280), 4);
    add_background_object(create_blimpcable1_2070(1504, 344), 4);
    add_background_object(create_blimpcable1_2070(1488, 408), 4);
    add_background_object(create_blimpcable1_2070(1472, 472), 4);
    add_background_object(create_blimpcable1_2070(1456, 536), 4);
    add_background_object(create_blimpcable1_2070(1440, 600), 4);
    add_background_object(create_blimpcable1_2070(1408, 728), 4);
    add_background_object(create_sbdeck8_2171(1408, 792), 4);
    add_background_object(create_blimpcable1_2070(1792, 280), 4);
    add_background_object(create_blimpcable1_2070(1776, 344), 4);
    add_background_object(create_blimpcable1_2070(1760, 408), 4);
    add_background_object(create_blimpcable1_2070(1744, 472), 4);
    add_background_object(create_blimpcable1_2070(1728, 536), 4);
    add_background_object(create_blimpcable1_2070(1712, 600), 4);
    add_background_object(create_blimpcable1_2070(1696, 664), 4);
    add_background_object(create_blimpcable1_2070(1680, 728), 4);
    add_background_object(create_blimpcable1_2070(1664, 792), 4);
    add_background_object(create_sbdeck8_2171(1664, 856), 4);
    add_background_object(create_blimpcable1_2070(11232, 120), 4);
    add_background_object(create_blimpcable1_2070(11216, 184), 4);
    add_background_object(create_blimpcable1_2070(11200, 248), 4);
    add_background_object(create_blimpcable1_2070(11184, 312), 4);
    add_background_object(create_blimpcable1_2070(11168, 376), 4);
    add_background_object(create_blimpcable1_2070(11152, 440), 4);
    add_background_object(create_blimpcable1_2070(11136, 504), 4);
    add_background_object(create_blimpcable1_2070(11120, 568), 4);
    add_background_object(create_blimpcable1_2070(11104, 632), 4);
    add_background_object(create_blimpcable1_2070(11088, 696), 4);
    add_background_object(create_sbdeck8_2171(11088, 760), 4);
    add_background_object(create_sbdeck7_2176(11064, 760), 4);
    add_background_object(create_sbdeck7_2176(1384, 792), 4);
    add_background_object(create_sbdeck7_2176(1640, 856), 4);
    add_background_object(create_blimpcable1_2070(11488, 120), 4);
    add_background_object(create_blimpcable1_2070(11472, 184), 4);
    add_background_object(create_blimpcable1_2070(11456, 248), 4);
    add_background_object(create_blimpcable1_2070(11440, 312), 4);
    add_background_object(create_blimpcable1_2070(11424, 376), 4);
    add_background_object(create_blimpcable1_2070(11408, 440), 4);
    add_background_object(create_blimpcable1_2070(11392, 504), 4);
    add_background_object(create_blimpcable1_2070(11376, 568), 4);
    add_background_object(create_blimpcable1_2070(11360, 632), 4);
    add_background_object(create_blimpcable1_2070(11344, 696), 4);
    add_background_object(create_sbdeck8_2171(11344, 760), 4);
    add_background_object(create_sbdeck7_2176(11320, 760), 4);
    add_background_object(create_blimpcable1_2070(11760, 120), 4);
    add_background_object(create_blimpcable1_2070(11744, 184), 4);
    add_background_object(create_blimpcable1_2070(11728, 248), 4);
    add_background_object(create_blimpcable1_2070(11712, 312), 4);
    add_background_object(create_blimpcable1_2070(11696, 376), 4);
    add_background_object(create_blimpcable1_2070(11680, 440), 4);
    add_background_object(create_blimpcable1_2070(11664, 504), 4);
    add_background_object(create_blimpcable1_2070(11648, 568), 4);
    add_background_object(create_blimpcable1_2070(11632, 632), 4);
    add_background_object(create_blimpcable1_2070(11616, 696), 4);
    add_background_object(create_sbdeck8_2171(11616, 760), 4);
    add_background_object(create_sbdeck7_2176(11592, 760), 4);
    add_background_object(create_sbwall_2146(2944, 336), 4);
    add_background_object(create_sbwall_2146(2880, 320), 4);
    add_background_object(create_sbwall_2146(3008, 320), 4);
    add_background_object(create_blimpcable1_2070(2080, 160), 4);
    add_background_object(create_blimpcable1_2070(2064, 224), 4);
    add_background_object(create_blimpcable1_2070(2048, 288), 4);
    add_background_object(create_blimpcable1_2070(2032, 352), 4);
    add_background_object(create_blimpcable1_2070(2016, 416), 4);
    add_background_object(create_blimpcable1_2070(2000, 480), 4);
    add_background_object(create_blimpcable1_2070(1984, 544), 4);
    add_background_object(create_blimpcable1_2070(1968, 608), 4);
    add_background_object(create_blimpcable1_2070(1952, 672), 4);
    add_background_object(create_blimpcable1_2070(1936, 736), 4);
    add_background_object(create_blimpcable1_2070(1920, 800), 4);
    add_background_object(create_sbdeck8_2171(1920, 856), 4);
    add_background_object(create_sbdeck7_2176(1896, 856), 4);
    add_background_object(create_blimpcable1_2070(2336, 160), 4);
    add_background_object(create_blimpcable1_2070(2320, 224), 4);
    add_background_object(create_blimpcable1_2070(2304, 288), 4);
    add_background_object(create_blimpcable1_2070(2288, 352), 4);
    add_background_object(create_blimpcable1_2070(2272, 416), 4);
    add_background_object(create_blimpcable1_2070(2256, 480), 4);
    add_background_object(create_blimpcable1_2070(2240, 544), 4);
    add_background_object(create_blimpcable1_2070(2224, 608), 4);
    add_background_object(create_blimpcable1_2070(2208, 672), 4);
    add_background_object(create_blimpcable1_2070(2192, 736), 4);
    add_background_object(create_blimpcable1_2070(2176, 800), 4);
    add_background_object(create_sbdeck8_2171(2176, 856), 4);
    add_background_object(create_sbdeck7_2176(2152, 856), 4);
    add_background_object(create_blimpcable1_2070(2512, 544), 4);
    add_background_object(create_blimpcable1_2070(2496, 608), 4);
    add_background_object(create_blimpcable1_2070(2480, 672), 4);
    add_background_object(create_blimpcable1_2070(2464, 736), 4);
    add_background_object(create_blimpcable1_2070(2448, 800), 4);
    add_background_object(create_blimpcable1_2070(2432, 864), 4);
    add_background_object(create_blimpcable1_2070(2608, 160), 4);
    add_background_object(create_blimpcable1_2070(2592, 224), 4);
    add_background_object(create_blimpcable1_2070(2576, 288), 4);
    add_background_object(create_blimpcable1_2070(2560, 352), 4);
    add_background_object(create_blimpcable1_2070(2544, 416), 4);
    add_background_object(create_blimpcable1_2070(2528, 480), 4);
    add_background_object(create_blimpcable1_2070(2416, 928), 4);
    add_background_object(create_sbdeck8_2171(2416, 984), 4);
    add_background_object(create_sbdeck7_2176(2392, 984), 4);
    add_background_object(create_sbwall_2146(4992, 208), 4);
    add_background_object(create_sbwall_2146(5120, 208), 4);
    add_background_object(create_sbdeck6_2151(7040, 632), 4);
    add_background_object(create_sbdeck7_2176(7016, 632), 4);
    add_background_object(create_sbinnercurve3_2189(6976, 656), 4);
    add_background_object(create_sbwall_2146(7104, 656), 4);
    add_background_object(create_sbwall_2146(7104, 720), 4);
    add_background_object(create_sbdeck1_2148(7104, 632), 4);
    add_background_object(create_sbdeck8_2171(10944, 600), 4);
    add_background_object(create_sbinnercurve2_2233(6784, 784), 4);
    add_background_object(create_sbwallleft_2172(6768, 848), 4);
    add_background_object(create_sbwallleft_2172(6768, 784), 4);
    add_background_object(create_sbdeck1_2148(6768, 912), 4);
    add_object(create_sbloop3_2211(10752, 216), 4);
    add_object(create_sbloop3_2211(10752, 280), 4);
    add_object(create_sbloop5_2223(10768, 280), 4);
    add_object(create_sbloop5_2223(10768, 216), 4);
    add_object(create_sbloop3_2211(10752, 152), 4);
    add_object(create_sbloop5_2223(10768, 152), 4);
    add_object(create_sbloop3_2211(10752, 88), 4);
    add_object(create_sbloop5_2223(10768, 88), 4);
    add_object(create_levelbackgroundplane2_2234(-360, 944), 4);
    add_background_object(create_separatormasterobjects_372(-176, -32), 5);
    add_background_object(create_separatormasterobjects2_12(-480, 152), 5);
    add_background_object(create_separatorplayerobjects_373(-176, 112), 5);
    add_background_object(create_separatorlayerchange_374(-320, -32), 5);
    add_background_object(create_separatorsprings_375(-344, 152), 5);
    add_background_object(create_separatoreffects_376(-544, -32), 5);
    add_background_object(create_separatorwater_377(-593, 352), 5);
    add_background_object(create_separatormonitors_378(-248, -32), 5);
    add_background_object(create_separatorrings_379(-312, 56), 5);
    add_background_object(create_separatorspikes_556(-216, 376), 5);
    add_object(create_addtimebonus_380(-288, -72), 5);
    add_object(create_playerskinmillatail_381(-91, 273), 5);
    add_object(create_playerskincarolbike_382(-104, 264), 5);
    add_object(create_playerskinmilla_446(-91, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-122, 273), 5);
    add_object(create_playercharactersensor_383(-155, 188), 5);
    add_object(create_mastergroupsa_384(-168, -8), 5);
    add_object(create_mastergroupsb_385(-152, -8), 5);
    add_object(create_generalanglechanger75_386(-168, 48), 5);
    add_object(create_playermovementvalues_245(-168, 136), 5);
    add_object(create_playeractionvaluesa_387(-144, 136), 5);
    add_object(create_playeractionvaluesb_388(-144, 144), 5);
    add_object(create_playerothers_123(-120, 136), 5);
    add_object(create_playerinput_19(-440, 176), 5);
    add_object(create_player_389(-123, 213), 5);
    add_object(create_playersensorleft_390(-116, 172), 5);
    add_object(create_playersensorleftbig_391(-107, 173), 5);
    add_object(create_playersensorright_392(-92, 172), 5);
    add_object(create_playersensorrightbig_393(-83, 173), 5);
    add_object(create_playersensortop_394(-116, 188), 5);
    add_object(create_playersensortopbig_395(-107, 189), 5);
    add_object(create_playersensorbottom_396(-92, 188), 5);
    add_object(create_playersensorbottombig_397(-83, 189), 5);
    add_object(create_playersensorslopes_398(-67, 173), 5);
    add_object(create_playersensorplatform_399(-67, 189), 5);
    add_object(create_playersensorleftangle_400(-159, 241), 5);
    add_object(create_playersensorrightangle_401(-151, 241), 5);
    add_object(create_playersensorleftedge_402(-159, 209), 5);
    add_object(create_playersensorrightedge_403(-151, 209), 5);
    add_object(create_layerchangeswitch_404(-312, -8), 5);
    add_object(create_layerchangeto0_405(-296, -8), 5);
    add_object(create_layerchangeto1_406(-280, -8), 5);
    add_object(create_objectpetal_302(-295, 81), 5);
    add_object(create_monitorbroken_330(-248, -16), 5);
    add_object(create_monitorrings_407(-248, 16), 5);
    add_object(create_monitorcrystals_324(-248, 48), 5);
    add_object(create_monitorfireshield_328(-248, 80), 5);
    add_object(create_monitormetalshield_329(-248, 112), 5);
    add_object(create_monitorwatershield_327(-248, 144), 5);
    add_object(create_monitorinvincibility_408(-248, 176), 5);
    add_object(create_monitoricon_331(-248, -13), 5);
    add_object(create_monitorcrate_409(-248, 208), 5);
    add_object(create_monitor1up_410(-248, 240), 5);
    add_object(create_monitorbomb_563(-248, 272), 5);
    add_object(create_effectsdust01_332(-383, 25), 5);
    add_object(create_hazardspikesup_2116(-208, 392), 5);
    add_object(create_hazardspikesdown_2117(-168, 392), 5);
    add_object(create_hazardspikesleft_2118(-128, 392), 5);
    add_object(create_hazardspikesright_2119(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(11320, 767), 5);
    add_object(create_cameralimitbossleft_421(10768, 528), 5);
    add_object(create_cameralimitbossright_422(12111, 608), 5);
    add_object(create_cameralimitbosstop_423(11304, -16), 5);
    add_object(create_cameratriggerboss_424(11168, -232), 5);
    add_object(create_scorevalues_425(-376, -72), 5);
    add_object(create_obj1up_337(-528, 45), 5);
    add_object(create_obj200pts_338(-512, 45), 5);
    add_object(create_obj500pts_426(-488, 45), 5);
    add_object(create_ringsparkle_139(-433, 50), 5);
    add_object(create_sparkle1_300(-433, 103), 5);
    add_object(create_sparkle5_336(-433, 134), 5);
    add_object(create_sparkle2_333(-401, 103), 5);
    add_object(create_sparkle3_334(-369, 103), 5);
    add_object(create_sparkle4_335(-337, 103), 5);
    add_object(create_controllermusic_128(-192, -88), 5);
    add_object(create_stringparser_427(-72, -88), 5);
    add_object(create_bubblenumbers_429(-464, 87), 5);
    add_object(create_mastercamera_430(-136, -8), 5);
    add_object(create_masterinput_20(-464, 176), 5);
    add_object(create_masterlevel_37(-120, -8), 5);
    add_object(create_masterringloss_431(-104, -8), 5);
    add_object(create_thunderspark_339(-400, 40), 5);
    add_object(create_effectsgroundspark_2025(-400, 72), 5);
    add_object(create_yellowspringupleft_432(-296, 304), 5);
    add_object(create_yellowspringupright_433(-296, 264), 5);
    add_object(create_yellowspringup_434(-296, 184), 5);
    add_object(create_yellowspringright_435(-280, 224), 5);
    add_object(create_yellowspringleft_436(-296, 224), 5);
    add_object(create_yellowspringdown_437(-296, 200), 5);
    add_object(create_redspringupright_438(-336, 264), 5);
    add_object(create_redspringupleft_439(-336, 304), 5);
    add_object(create_redspringup_440(-336, 184), 5);
    add_object(create_redspringright_441(-320, 224), 5);
    add_object(create_redspringleft_442(-336, 224), 5);
    add_object(create_redspringdown_443(-336, 200), 5);
    add_object(create_monitorwoodshield_325(-216, 112), 5);
    add_object(create_monitorearthshield_326(-216, 144), 5);
    add_object(create_inputsp1_21(-416, 176), 5);
    add_object(create_globalinputdata_22(-392, 176), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-72, 224), 5);
    add_object(create_playerdig_448(-56, 234), 5);
    add_object(create_playerskintorquearm_449(-96, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(160, -40), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guikeystone_455(144, -40), 6);
    add_object(create_guikeystone_455(128, -40), 6);
    add_object(create_guikeystone_455(112, -40), 6);
    add_object(create_guikeystone_455(96, -40), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_dialogdata_2235(-136, 470), 6);
    add_object(create_dialogbox_566(0, 8), 6);
    add_object(create_dialogbox2_567(-156, 71), 6);
    add_object(create_dialogarrow_568(132, 40), 6);
    add_object(create_dialogtext_569(-148, 8), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    loop_itm_running = false;
    loop_itm_index = 0;
    loop_sound_kick1_running = false;
    loop_sound_kick1_index = 0;
    loop_sound_kick0_running = false;
    loop_sound_kick0_index = 0;
    loop_cacteon_floor_running = false;
    loop_cacteon_floor_index = 0;
    loop_sound_idle3_running = false;
    loop_sound_idle3_index = 0;
    loop_sound_idle5_running = false;
    loop_sound_idle5_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_spawn_rings_running = false;
    loop_spawn_rings_index = 0;
    loop_player01slopesup_running = false;
    loop_player01slopesup_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
    loop_player01slopesdown_running = false;
    loop_player01slopesdown_index = 0;
    loop_player01detectsensoredges_running = false;
    loop_player01detectsensoredges_index = 0;
    loop_gui_shiftdown_running = false;
    loop_gui_shiftdown_index = 0;
    loop_rings_ringloss_step_running = false;
    loop_rings_ringloss_step_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_process_call_unlock_music_running = false;
    loop_process_call_unlock_music_index = 0;
    loop_player01detectsensorbottom_running = false;
    loop_player01detectsensorbottom_index = 0;
    loop_monitorsunstuckfromceiling_running = false;
    loop_monitorsunstuckfromceiling_index = 0;
    loop_spawndebris_running = false;
    loop_spawndebris_index = 0;
    loop_process_call_fadeout_music_running = false;
    loop_process_call_fadeout_music_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_process_call_reset_music_running = false;
    loop_process_call_reset_music_index = 0;
    loop_petal_loss_running = false;
    loop_petal_loss_index = 0;
    loop_player01_interruption_action_running = false;
    loop_player01_interruption_action_index = 0;
    loop_dig_crystals_running = false;
    loop_dig_crystals_index = 0;
    loop_collect_item_running = false;
    loop_collect_item_index = 0;
    loop_iterate_query_me_stop_running = false;
    loop_iterate_query_me_stop_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_reposition_skin_running = false;
    loop_reposition_skin_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_bs_running = false;
    loop_bs_index = 0;
    loop_cacteon_running = false;
    loop_cacteon_index = 0;
    loop_process_call_fadein_music_running = false;
    loop_process_call_fadein_music_index = 0;
    loop_process_call_lock_music_running = false;
    loop_process_call_lock_music_index = 0;
    loop_process_call_unqueue_music_running = false;
    loop_process_call_unqueue_music_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
    loop_process_call_play_music_running = false;
    loop_process_call_play_music_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_cp_running = false;
    loop_cp_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
    loop_player01detectcharactersensor_running = false;
    loop_player01detectcharactersensor_index = 0;
    loop_player01detectangle_running = false;
    loop_player01detectangle_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
    loop_sound_explode0_running = false;
    loop_sound_explode0_index = 0;
    loop_sound_explode7_running = false;
    loop_sound_explode7_index = 0;
    loop_sound_explode6_running = false;
    loop_sound_explode6_index = 0;
    loop_sound_explode5_running = false;
    loop_sound_explode5_index = 0;
    loop_sound_explode4_running = false;
    loop_sound_explode4_index = 0;
    loop_sound_die_running = false;
    loop_sound_die_index = 0;
    loop_player01allsensors_running = false;
    loop_player01allsensors_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_create_links_1_running = false;
    loop_create_links_1_index = 0;
    loop_player01detectsensormain_running = false;
    loop_player01detectsensormain_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_link_objects_1_running = false;
    loop_link_objects_1_index = 0;
    loop_rings_ringloss_running = false;
    loop_rings_ringloss_index = 0;
    loop_play_music_0_running = false;
    loop_play_music_0_index = 0;
    loop_play_music_1_running = false;
    loop_play_music_1_index = 0;
    loop_play_music_2_running = false;
    loop_play_music_2_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_play_music_4_running = false;
    loop_play_music_4_index = 0;
    loop_play_music_5_running = false;
    loop_play_music_5_index = 0;
    loop_play_music_6_running = false;
    loop_play_music_6_index = 0;
    loop_play_music_7_running = false;
    loop_play_music_7_index = 0;
    loop_play_music_8_running = false;
    loop_play_music_8_index = 0;
    loop_process_call_me_running = false;
    loop_process_call_me_index = 0;
    loop_player01detectsensorangles_running = false;
    loop_player01detectsensorangles_index = 0;
    loop_iterate_query_me_reset_running = false;
    loop_iterate_query_me_reset_index = 0;
    loop_voice_running = false;
    loop_voice_index = 0;
    loop_player01_interruption_control_running = false;
    loop_player01_interruption_control_index = 0;
    loop_color_dots_running = false;
    loop_color_dots_index = 0;
    loop_player01up_running = false;
    loop_player01up_index = 0;
    loop_process_call_resume_music_running = false;
    loop_process_call_resume_music_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_spawn_crystals_running = false;
    loop_spawn_crystals_index = 0;
    loop_player01detectsensorslope_running = false;
    loop_player01detectsensorslope_index = 0;
    loop_start_player_running = false;
    loop_start_player_index = 0;
    loop_cutscene_start_running = false;
    loop_cutscene_start_index = 0;
    loop_player01down_running = false;
    loop_player01down_index = 0;
    loop_camera_mode2_running = false;
    loop_camera_mode2_index = 0;
    loop_camera_mode1_running = false;
    loop_camera_mode1_index = 0;
    loop_camera_mode0_running = false;
    loop_camera_mode0_index = 0;
    loop_toolsanglecalculator_running = false;
    loop_toolsanglecalculator_index = 0;
    loop_monitorsunstuckfromground_running = false;
    loop_monitorsunstuckfromground_index = 0;
    loop_player01detectsensorleft_running = false;
    loop_player01detectsensorleft_index = 0;
    loop_action_land_running = false;
    loop_action_land_index = 0;
    loop_check_death_running = false;
    loop_check_death_index = 0;
    loop_plaftorms_updateposition_running = false;
    loop_plaftorms_updateposition_index = 0;
    loop_shift_query_me_running = false;
    loop_shift_query_me_index = 0;
    loop_extralife_floor_running = false;
    loop_extralife_floor_index = 0;
    loop_stop_player_running = false;
    loop_stop_player_index = 0;
    loop_gui_shiftup_running = false;
    loop_gui_shiftup_index = 0;
    loop_player01wallcollision_running = false;
    loop_player01wallcollision_index = 0;
    loop_rings_ringloss_creation_running = false;
    loop_rings_ringloss_creation_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_weapon_running = false;
    loop_weapon_index = 0;
    loop_player01detectsensorright_running = false;
    loop_player01detectsensorright_index = 0;
    loop_process_call_stop_music_running = false;
    loop_process_call_stop_music_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_36, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_36, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_36, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_36, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_36, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_36, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_36, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_36, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_36, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_36, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_36, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_36, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_36, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_36, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_36, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_36, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_36, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_36, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_36, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_36, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_36, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_36, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_36, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_36, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_36, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_36, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_36, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_36, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_36, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_36, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_36, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_36, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_36, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_36, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_36, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_36, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_36, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_36, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_36, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_36, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_36, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_36, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_36, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_36, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_36, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_36, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_36, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_36, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_36, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_36, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_36, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_36, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_36, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_36, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_1424_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    not_always_1645_36 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    not_always_1051_14 = loop_count;
    not_always_1449_13 = loop_count;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    group_main_engine_level_specific_methods_cutscenes_spade_encounter_1 = false;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1048_14 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_fall_from_sky_1 = false;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    not_always_1046_14 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_punch_combo_1 = false;
    not_always_1448_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_2_jump_1 = false;
    not_always_1609_36 = loop_count;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    not_always_64_0 = loop_count;
    not_always_1394_36 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    once_condition_1686_36 = false;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    once_condition_1720_36 = false;
    not_always_1719_36 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_1 = false;
    group_main_engine_level_specific_methods_play_bgm_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1667_36 = loop_count;
    not_always_1644_36 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_39_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_99_0 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    not_always_1398_23 = loop_count;
    not_always_45_13 = loop_count;
    not_always_53_13 = loop_count;
    not_always_1047_14 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_5_dual_crash_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_spade_hit_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_voice_acting_1 = false;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_101_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_3_flash_step_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_1_on_chopper_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_4_card_throw_1 = false;
    not_always_422_13 = loop_count;
    not_always_171_8 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    not_always_1333_14 = loop_count;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1874_36 = loop_count;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    once_condition_38_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    group_main_engine_level_specific_methods_cutscenes_spade_encounter_dialog_system_dialog_voices_blips_1 = false;
    once_condition_40_14 = false;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    not_always_1425_13 = loop_count;
    once_condition_41_14 = false;
    not_always_1049_14 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_0_moving_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    once_condition_138_0 = false;
    not_always_1698_16 = loop_count;
    group_mac_controls_1 = false;
    not_always_172_8 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_9_chopper_flee_1 = false;
    not_always_558_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_1528_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    not_always_1619_36 = loop_count;
    group_pause_1 = false;
    not_always_1050_14 = loop_count;
    not_always_41_13 = loop_count;
    not_always_1641_36 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    once_condition_1768_36 = false;
    not_always_1421_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_606_14 = loop_count;
    once_condition_1868_36 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    group_main_engine_level_specific_methods_bosses_miniboss_chopper_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_1697_36 = false;
    once_condition_63_13 = false;
    group_main_engine_level_specific_methods_cutscenes_fly_in_1 = false;
    once_condition_1769_36 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    once_condition_2144_36 = false;
    not_always_174_8 = loop_count;
    once_condition_1722_36 = false;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    group_main_engine_level_specific_methods_bosses_boss_spade_spade_main_boss_spade_ai_states_boss_spade_6_7_flinch_1 = false;
    once_condition_66_13 = false;
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1 = true;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1 = false;
    not_always_69_13 = loop_count;
    not_always_1039_13 = loop_count;
    not_always_95_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1 = false;
    once_condition_59_14 = false;
    not_always_809_13 = loop_count;
    once_condition_48_13 = false;
    once_condition_1630_36 = false;
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    not_always_814_13 = loop_count;
    once_condition_1797_36 = false;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    not_always_311_14 = loop_count;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    once_condition_2028_35 = false;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_1873_36 = loop_count;
    not_always_66_0 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1396_36 = loop_count;
    once_condition_50_13 = false;
    not_always_560_14 = loop_count;
    not_always_1697_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1648_36 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_1695_16 = loop_count;
    not_always_1696_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::event_func_9095()
{
    // event 1554_37
    {
        if (!(group_main_engine_1)) goto event_1554_37_end;
        enemydnacannon_2264_instances.clear_selection();
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) < (-1))) { it.deselect(); continue; }
        }
        if (!enemydnacannon_2264_instances.has_selection()) goto event_1554_37_end;
        FrameObject * single_instance_1554_37_0; single_instance_1554_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydnacannon_2264_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1554_37_0 == NULL)
                    single_instance_1554_37_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1554_37_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1554_37_0))->force_frame(80+((Active*)get_single(enemydnacannon_2264_instances, default_active_instance))->alterables->values.get(0)*-1);
        for (ObjectIterator it(enemydnacannon_2264_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1554_37_end: ;
}
void Frames::loop_spawndebris_37()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_8589();
    event_func_8590();
    event_func_8591();
    event_func_9095();
    event_func_8592();
}
void Frames::loop_wrapper_sound_hurt1_37(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_37(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_37(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_37(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_37(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_37(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_37(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_16();
}
void Frames::loop_wrapper_sound_dig2_37(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_37(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_37(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_37(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_37(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_37(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_16();
}
void Frames::loop_wrapper_camera_mode0_37(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_16();
}
void Frames::loop_wrapper_process_call_play_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_sound_attack1_37(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_37(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_37(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_37(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_37(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_13();
}
void Frames::loop_wrapper_play_music_5_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_play_music_6_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_sound_go0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
void Frames::loop_wrapper_process_call_unqueue_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_process_call_me_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_play_music_7_37(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_35();
}
void Frames::loop_wrapper_sound_explode3_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_cyclone0_37(void * frame)
{
    ((Frames*)frame)->loop_sound_cyclone0_0();
}
void Frames::loop_wrapper_sound_explode2_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_37(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_process_call_stop_music_37(void * frame)
{
    ((Frames*)frame)->loop_process_call_stop_music_13();
}
void Frames::event_func_9096()
{
    // event 1549_37
    {
        if (!(group_main_engine_1)) goto event_1549_37_end;
        if (!((((Active*)foreach_instance_dna)->alterables->values.get(4)) == (1))) goto event_1549_37_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1549_37_end;
        FrameObject * single_instance_1549_37_0; single_instance_1549_37_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_enemydnalaser_2236(((Active*)foreach_instance_dna)->get_action_x() - ((Active*)foreach_instance_dna)->layer->off_x + 0, ((Active*)foreach_instance_dna)->get_action_y() - ((Active*)foreach_instance_dna)->layer->off_y + 0), ((Active*)foreach_instance_dna)->layer);
            if (single_instance_1549_37_0 == NULL)
                single_instance_1549_37_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_1549_37_0))->alterables->values.set(0, ((Active*)single_instance_1549_37_0)->alterables->values.get(0)*((Active*)foreach_instance_dna)->alterables->values.get(6));
        FrameObject * single_instance_1549_37_1; single_instance_1549_37_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)foreach_instance_dna)->get_action_x() - ((Active*)foreach_instance_dna)->layer->off_x + 0, ((Active*)foreach_instance_dna)->get_action_y() - ((Active*)foreach_instance_dna)->layer->off_y + 0), ((Active*)foreach_instance_dna)->layer);
            if (single_instance_1549_37_1 == NULL)
                single_instance_1549_37_1 = new_obj;
        }
        ((Active*)((Active*)single_instance_1549_37_1))->set_x(((Active*)single_instance_1549_37_1)->get_x()-14+randrange(29));
        ((Active*)((Active*)single_instance_1549_37_1))->set_y(((Active*)single_instance_1549_37_1)->get_y()-20+randrange(41));
        ((Active*)((Active*)single_instance_1549_37_1))->set_y_scale(0.5);
        ((Active*)((Active*)single_instance_1549_37_1))->set_x_scale(0.4);
    }
    event_1549_37_end: ;
}
void Frames::foreach_dna_37()
{
    event_func_9096();
}
void Frames::event_func_9097()
{
    // event 1480_37
    {
        if (!(group_main_engine_1)) goto event_1480_37_end;
        gimmickspincup_2249_instances.clear_selection();
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (((Active*)col_instance_2)->alterables->values.get(0)))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!gimmickspincup_2249_instances.has_selection()) goto event_1480_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (6))) goto event_1480_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1480_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (10))) goto event_1480_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (43))) goto event_1480_37_end;
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_ROLLING_2_7, -1, 1);
        for (ObjectIterator it(gimmickspincup_2249_instances); !it.end(); ++it) {
            ((Active*)*it)->set_layer(((Active*)col_instance_1)->layer->index+1-1);
        }
    }
    event_1480_37_end: ;
}
void Frames::col_0_37()
{
    event_func_9097();
}
void Frames::event_func_9098()
{
    // event 1695_37
    {
        if (!(group_main_engine_1)) goto event_1695_37_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(8);
        ((Active*)((Active*)col_instance_2))->alterables->values.set(5, 999);
    }
    event_1695_37_end: ;
}
void Frames::col_8_37()
{
    event_func_9098();
}
void Frames::event_func_9099()
{
    // event 1533_37
    {
        if (!(group_main_engine_1)) goto event_1533_37_end;
        if (!(((Active*)col_instance_2)->alterables->flags.is_on(6))) goto event_1533_37_end;
        FrameObject * single_instance_1533_37_0; single_instance_1533_37_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1533_37_0 == NULL)
                single_instance_1533_37_0 = new_obj;
        }
        ((Active*)((Active*)col_instance_2))->alterables->values.set(0, -5);
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1533_37_end: ;
}
void Frames::col_10_37()
{
    event_func_8608();
    event_func_8609();
    event_func_9099();
}
void Frames::event_func_9100()
{
    // event 1564_37
    {
        if (!(group_main_engine_1)) goto event_1564_37_end;
        if (!((((Active*)col_instance_1)->alterables->values.get(0)) >= (4))) goto event_1564_37_end;
        ((Active*)((Active*)col_instance_2))->destroy();
        FrameObject * single_instance_1564_37_0; single_instance_1564_37_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectswhiteburst_5(((Active*)col_instance_2)->x + 0, ((Active*)col_instance_2)->y + 0), ((Active*)col_instance_2)->layer);
            if (single_instance_1564_37_0 == NULL)
                single_instance_1564_37_0 = new_obj;
        }
    }
    event_1564_37_end: ;
}
void Frames::col_17_37()
{
    event_func_9100();
}
void Frames::test_collisions_37()
{
    test_collisions(player_389_instances, gimmickspincupstartpoint_2268_instances, 1, 1, (EventFunction)&Frames::col_0_37);
    test_collisions(qualifier_19, qualifier_19, 2147483648, 2147483648, (EventFunction)&Frames::col_0_13);
    test_collisions(qualifier_7, objectcrystal_279_instances, 1073741824, 1, (EventFunction)&Frames::col_1_13);
    test_collisions(qualifier_20, objectcrystal_279_instances, 2147483648, 2, (EventFunction)&Frames::col_2_13);
    test_collisions(player_389_instances, gimmickcannonbullet_2050_instances, 2, 1, (EventFunction)&Frames::col_9_36);
    test_collisions(player_389_instances, enemyfragbomb_2049_instances, 4, 1, (EventFunction)&Frames::col_27_36);
    test_collisions(hazardspikesup_558_instances, enemyrotorbladespikes_2204_instances, 1, 1, (EventFunction)&Frames::col_16_36);
    test_collisions(playerreflect_447_instances, enemyfragbomb_2049_instances, 1, 2, (EventFunction)&Frames::col_29_36);
    test_collisions(qualifier_14, monitorbomb_563_instances, 2147483648, 1, (EventFunction)&Frames::col_8_37);
    test_collisions(qualifier_20, playerprojectile_320_instances, 536870912, 1, (EventFunction)&Frames::col_7_13);
    test_collisions(enemylimiter_350_instances, enemyrotorblade_2205_instances, 1, 1, (EventFunction)&Frames::col_10_37);
    test_collisions(qualifier_7, effectsdebris_319_instances, 268435456, 1, (EventFunction)&Frames::col_3_13);
    test_collisions(qualifier_8, playerreflect_447_instances, 134217728, 2, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, effectsdebris_319_instances, 67108864, 2, (EventFunction)&Frames::col_3_13);
    test_collisions(enemyhoppermkii_2200_instances, enemyrotorbladespikes_2204_instances, 1, 2, (EventFunction)&Frames::col_22_36);
    test_collisions(enemyfragbomb_2049_instances, enemyhoppermkii_2200_instances, 4, 2, (EventFunction)&Frames::col_0_36);
    test_collisions(qualifier_7, playerprojectile_320_instances, 33554432, 2, (EventFunction)&Frames::col_6_13);
    test_collisions(playerreflect_447_instances, enemydnalaser_2236_instances, 4, 1, (EventFunction)&Frames::col_17_37);
    test_collisions(monitoricon_331_instances, player_389_instances, 1, 8, (EventFunction)&Frames::col_8_13);
    test_collisions(qualifier_7, playerreflect_447_instances, 16777216, 8, (EventFunction)&Frames::col_5_13);
    test_collisions(qualifier_8, objectcrystal_279_instances, 8388608, 4, (EventFunction)&Frames::col_1_13);
    ObjectList::iterator it1, it2;
    for (it1 = playerreflect_447_instances.begin(); it1 != playerreflect_447_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_14_13();
    }
    for (it1 = enemyfragbomb_2049_instances.begin(); it1 != enemyfragbomb_2049_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_31_36();
    }
    for (it1 = playerprojectile_320_instances.begin(); it1 != playerprojectile_320_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_13_13();
    }
    for (it1 = effectsdebris_319_instances.begin(); it1 != effectsdebris_319_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_11_13();
    }
    for (it1 = breakablespike2_2123_instances.begin(); it1 != breakablespike2_2123_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_30_26();
    }
    for (it1 = objectcrystal_279_instances.begin(); it1 != objectcrystal_279_instances.end(); ++it1) {
        col_instance_1 = it1->obj;
        if (!col_instance_1->overlaps_background()) {
            col_instance_1->flags &= ~REPEAT_BACK_COLLISION;
            continue;
        }
        if (col_instance_1->flags & REPEAT_BACK_COLLISION) continue;
        col_instance_1->flags |= REPEAT_BACK_COLLISION;
        col_12_13();
    }
}
void Frames::event_func_9101()
{
    // event 536_37
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1)) goto event_536_37_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_536_37_end;
        FrameObject * single_instance_536_37_0; single_instance_536_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_536_37_0 == NULL)
                    single_instance_536_37_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_536_37_end: ;
}
void Frames::event_func_9102()
{
    // event 553_37
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1)) goto event_553_37_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_553_37_end;
        FrameObject * single_instance_553_37_0; single_instance_553_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_553_37_0 == NULL)
                    single_instance_553_37_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_553_37_end: ;
}
void Frames::event_func_9103()
{
    // event 687_37
    {
        if (!(group_main_engine_1 && group_main_engine_global_methods_player_1 && group_main_engine_global_methods_player_player_control_actions_carol_actions_1)) goto event_687_37_end;
        objectbike_322_instances.clear_selection();
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!objectbike_322_instances.has_selection()) goto event_687_37_end;
        FrameObject * single_instance_687_37_0; single_instance_687_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectbike_322_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_687_37_0 == NULL)
                    single_instance_687_37_0 = new_obj;
            }
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(objectbike_322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_687_37_end: ;
}
void Frames::event_func_9104()
{
    // event 1406_37
    {
        if (!(group_main_engine_1)) goto event_1406_37_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (4))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1406_37_end;
        if (not_always_1406_37 > loop_count) {
            not_always_1406_37 = loop_count + 2;
            goto event_1406_37_end;
        }
        not_always_1406_37 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 90);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1406_37_end: ;
}
void Frames::event_func_9105()
{
    // event 1407_37
    {
        if (!(group_main_engine_1)) goto event_1407_37_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (5))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1407_37_end;
        if (not_always_1407_37 > loop_count) {
            not_always_1407_37 = loop_count + 2;
            goto event_1407_37_end;
        }
        not_always_1407_37 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 1);
        }
    }
    event_1407_37_end: ;
}
void Frames::event_func_9106()
{
    // event 1408_37
    {
        if (!(group_main_engine_1)) goto event_1408_37_end;
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!objectjumppad_530_instances.has_selection()) goto event_1408_37_end;
        if (not_always_1408_37 > loop_count) {
            not_always_1408_37 = loop_count + 2;
            goto event_1408_37_end;
        }
        not_always_1408_37 = loop_count + 2;
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 270);
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1408_37_end: ;
}
void Frames::event_func_9107()
{
    // event 1441_37
    {
        if (!(group_main_engine_1)) goto event_1441_37_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (10))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1441_37_end;
        FrameObject * single_instance_1441_37_0; single_instance_1441_37_0 = pick_random(gimmickcannon_2199_instances);
        if (single_instance_1441_37_0 == NULL) goto event_1441_37_end;
        ((Active*)((Active*)single_instance_1441_37_0))->alterables->values.add(2, 1);
        ((Active*)((Active*)single_instance_1441_37_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1441_37_0))->force_animation(7);
        FrameObject * single_instance_1441_37_1; single_instance_1441_37_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickcannonbullet_2050(((Active*)single_instance_1441_37_0)->get_action_x() - ((Active*)single_instance_1441_37_0)->layer->off_x + 0, ((Active*)single_instance_1441_37_0)->get_action_y() - ((Active*)single_instance_1441_37_0)->layer->off_y + 0), ((Active*)single_instance_1441_37_0)->layer);
            if (single_instance_1441_37_1 == NULL)
                single_instance_1441_37_1 = new_obj;
        }
        ((Active*)single_instance_1441_37_1)->move_back(((Active*)single_instance_1441_37_0));
        ((Active*)((Active*)single_instance_1441_37_1))->alterables->values.set(3, ((Active*)single_instance_1441_37_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1441_37_1))->alterables->values.set(0, ((Active*)single_instance_1441_37_1)->get_x());
        ((Active*)((Active*)single_instance_1441_37_1))->alterables->values.set(1, ((Active*)single_instance_1441_37_1)->get_y());
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1441_37_end: ;
}
void Frames::event_func_9108()
{
    // event 1442_37
    {
        if (!(group_main_engine_1)) goto event_1442_37_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1442_37_end;
        FrameObject * single_instance_1442_37_0; single_instance_1442_37_0 = pick_random(gimmickcannon_2199_instances);
        if (single_instance_1442_37_0 == NULL) goto event_1442_37_end;
        ((Active*)((Active*)single_instance_1442_37_0))->alterables->values.add(2, 1);
        ((Active*)((Active*)single_instance_1442_37_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1442_37_0))->force_animation(7);
        FrameObject * single_instance_1442_37_1; single_instance_1442_37_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickcannonbullet_2050(((Active*)single_instance_1442_37_0)->get_action_x() - ((Active*)single_instance_1442_37_0)->layer->off_x + 0, ((Active*)single_instance_1442_37_0)->get_action_y() - ((Active*)single_instance_1442_37_0)->layer->off_y + 0), ((Active*)single_instance_1442_37_0)->layer);
            if (single_instance_1442_37_1 == NULL)
                single_instance_1442_37_1 = new_obj;
        }
        ((Active*)single_instance_1442_37_1)->move_back(((Active*)single_instance_1442_37_0));
        ((Active*)((Active*)single_instance_1442_37_1))->alterables->values.set(3, ((Active*)single_instance_1442_37_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1442_37_1))->alterables->values.set(0, ((Active*)single_instance_1442_37_1)->get_x());
        ((Active*)((Active*)single_instance_1442_37_1))->alterables->values.set(1, ((Active*)single_instance_1442_37_1)->get_y());
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1442_37_end: ;
}
void Frames::event_func_9109()
{
    // event 1443_37
    {
        if (!(group_main_engine_1)) goto event_1443_37_end;
        gimmickcannon_2199_instances.clear_selection();
        for (ObjectIterator it(gimmickcannon_2199_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) == (50))) { it.deselect(); continue; }
        }
        if (!gimmickcannon_2199_instances.has_selection()) goto event_1443_37_end;
        FrameObject * single_instance_1443_37_0; single_instance_1443_37_0 = pick_random(gimmickcannon_2199_instances);
        if (single_instance_1443_37_0 == NULL) goto event_1443_37_end;
        ((Active*)((Active*)single_instance_1443_37_0))->alterables->values.add(2, 1);
        ((Active*)((Active*)single_instance_1443_37_0))->force_animation(0);
        ((Active*)((Active*)single_instance_1443_37_0))->force_animation(7);
        FrameObject * single_instance_1443_37_1; single_instance_1443_37_1 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_gimmickcannonbullet_2050(((Active*)single_instance_1443_37_0)->get_action_x() - ((Active*)single_instance_1443_37_0)->layer->off_x + 0, ((Active*)single_instance_1443_37_0)->get_action_y() - ((Active*)single_instance_1443_37_0)->layer->off_y + 0), ((Active*)single_instance_1443_37_0)->layer);
            if (single_instance_1443_37_1 == NULL)
                single_instance_1443_37_1 = new_obj;
        }
        ((Active*)single_instance_1443_37_1)->move_back(((Active*)single_instance_1443_37_0));
        ((Active*)((Active*)single_instance_1443_37_1))->alterables->values.set(3, ((Active*)single_instance_1443_37_0)->alterables->values.get(0));
        ((Active*)((Active*)single_instance_1443_37_1))->alterables->values.set(0, ((Active*)single_instance_1443_37_1)->get_x());
        ((Active*)((Active*)single_instance_1443_37_1))->alterables->values.set(1, ((Active*)single_instance_1443_37_1)->get_y());
        media.play_id(SOUND_COMMON_EXPLODE4_99, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 4));
    }
    event_1443_37_end: ;
}
void Frames::event_func_9110()
{
    // event 1448_37
    {
        if (!(group_main_engine_1)) goto event_1448_37_end;
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (30))) { it.deselect(); continue; }
        }
        if (!gimmickcannonbase_2198_instances.has_selection()) goto event_1448_37_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.add(3, 1);
        }
        FrameObject * single_instance_1448_37_0; single_instance_1448_37_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(gimmickcannonbase_2198_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1448_37_0 == NULL)
                    single_instance_1448_37_0 = new_obj;
            }
        }
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
            ((Active*)*it)->alterables->values.set(0, -5);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_37();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
        gimmickcannonbase_2198_instances.clear_selection();
        for (ObjectIterator it(gimmickcannonbase_2198_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1448_37_end: ;
}
void Frames::event_func_9111()
{
    // event 1453_37
    {
        if (!(group_main_engine_1)) goto event_1453_37_end;
        hazardlightningradial_2263_instances.clear_selection();
        for (ObjectIterator it(hazardlightningradial_2263_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, get_max(((Active*)*it)->alterables->values.get(2)-1, 0));
        }
        hazardlightningradial2_2247_instances.clear_selection();
        for (ObjectIterator it(hazardlightningradial2_2247_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(hazardlightningradial_2263_instances, it.current_index));
            if (parent == NULL) goto pos_end_1453_37_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1453_37_0: ;
        }
        for (ObjectIterator it(hazardlightningradial2_2247_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(hazardlightningradial_2263_instances, it.current_index, default_active_instance))->alterables->values.get(0), 0);
        }
    }
    event_1453_37_end: ;
}
void Frames::event_func_9112()
{
    // event 1455_37
    {
        if (!(group_main_engine_1)) goto event_1455_37_end;
        hazardlightningradial_2263_instances.clear_selection();
        enemylimiter_350_instances.clear_selection();
        if (!check_overlap(hazardlightningradial_2263_instances, enemylimiter_350_instances)) goto event_1455_37_end;
        for (ObjectIterator it(hazardlightningradial_2263_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
        }
        if (!hazardlightningradial_2263_instances.has_selection()) goto event_1455_37_end;
        for (ObjectIterator it(hazardlightningradial_2263_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 0-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1455_37_end: ;
}
void Frames::event_func_9113()
{
    // event 1456_37
    {
        if (!(group_main_engine_1)) goto event_1456_37_end;
        hazardlightningradial_2263_instances.clear_selection();
        for (ObjectIterator it(hazardlightningradial_2263_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
        }
        if (!hazardlightningradial_2263_instances.has_selection()) goto event_1456_37_end;
        for (ObjectIterator it(hazardlightningradial_2263_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+((Active*)*it)->alterables->values.get(1))%math_helper%360);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(0), 0);
        }
    }
    event_1456_37_end: ;
}
void Frames::event_func_9114()
{
    // event 1457_37
    {
        if (!(group_main_engine_1)) goto event_1457_37_end;
        hazardlightningradial_2263_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardlightningradial_2263_instances, playercharactersensor_383_instances)) goto event_1457_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1457_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (3))) goto event_1457_37_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1457_37_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 3));
        media.play_id(SOUND_DAMAGE_ELECTRIC_2_373, -1, 1);
    }
    event_1457_37_end: ;
}
void Frames::event_func_9115()
{
    // event 1459_37
    {
        if (!(group_main_engine_1)) goto event_1459_37_end;
        {
            FrameObject * parent = ((Active*)get_instance(switchplatform_2100_instances));
            if (parent == NULL) goto pos_end_1459_37_0;
            ((Active*)get_instance(switchplatformmask_2067_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1459_37_0: ;
        }
        ((Active*)get_instance(switchplatform_2100_instances))->set_y(((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(0)+((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1));
    }
    event_1459_37_end: ;
}
void Frames::event_func_9116()
{
    // event 1460_37
    {
        if (!(group_main_engine_1)) goto event_1460_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) < (24))) goto event_1460_37_end;
        playersensorbottombig_397_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1460_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1460_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) < (30))) goto event_1460_37_end;
        if (!(!media.is_sample_playing(SOUND_DRAG2_62))) goto event_1460_37_end;
        media.play_id(SOUND_DRAG2_62, -1, 0);
    }
    event_1460_37_end: ;
}
void Frames::event_func_9117()
{
    // event 1461_37
    {
        if (!(group_main_engine_1)) goto event_1461_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) < (24))) goto event_1461_37_end;
        playersensorbottombig_397_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1461_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1461_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) > (330))) goto event_1461_37_end;
        if (!(!media.is_sample_playing(SOUND_DRAG2_62))) goto event_1461_37_end;
        media.play_id(SOUND_DRAG2_62, -1, 0);
    }
    event_1461_37_end: ;
}
void Frames::event_func_9118()
{
    // event 1463_37
    {
        if (!(group_main_engine_1)) goto event_1463_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) < (24))) goto event_1463_37_end;
        playersensorbottombig_397_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1463_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1463_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) < (30))) goto event_1463_37_end;
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->values.set(1, get_min(((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)+0.5, 24));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 1);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1463_37_end: ;
}
void Frames::event_func_9119()
{
    // event 1464_37
    {
        if (!(group_main_engine_1)) goto event_1464_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) < (24))) goto event_1464_37_end;
        playersensorbottombig_397_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1464_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1464_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) > (330))) goto event_1464_37_end;
        ((Active*)get_instance(switchplatform_2100_instances))->alterables->values.set(1, get_min(((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)+0.5, 24));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.add(24, 1);
        {
            loop_player01allsensors_running = true;
            int times = int(1);
            loop_player01allsensors_index = 0;
            while (loop_player01allsensors_index < times) {
                loop_player01allsensors_13();
                if (!loop_player01allsensors_running) break;
                loop_player01allsensors_index++;
            }
        }
    }
    event_1464_37_end: ;
}
void Frames::event_func_9120()
{
    // event 1465_37
    {
        if (!(group_main_engine_1)) goto event_1465_37_end;
        if (!((((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(1)) < (24))) goto event_1465_37_end;
        playersensorbottombig_397_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        if (!check_overlap(playersensorbottombig_397_instances, switchplatform_2100_instances)) goto event_1465_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(11)) == (1))) goto event_1465_37_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(14)) < (30))) goto event_1465_37_end;
        if (!((((Active*)get_instance(switchdoor_735_instances))->alterables->values.get(0)) == (((Active*)get_instance(switchplatform_2100_instances))->alterables->values.get(2)))) goto event_1465_37_end;
        ((Active*)get_instance(switchdoor_735_instances))->set_y(((Active*)get_instance(switchdoor_735_instances))->get_y()-2);
        ((Active*)get_instance(switchdoor_735_instances))->alterables->values.add(2, 2);
    }
    event_1465_37_end: ;
}
