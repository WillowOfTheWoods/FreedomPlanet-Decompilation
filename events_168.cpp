#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13149()
{
    // event 1650_61
    {
        if (!(group_main_engine_1)) goto event_1650_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (10))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1650_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, 10);
        }
    }
    event_1650_61_end: ;
}
void Frames::event_func_13150()
{
    // event 1651_61
    {
        if (!(group_main_engine_1)) goto event_1651_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) > (-10))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1651_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, -10);
        }
    }
    event_1651_61_end: ;
}
void Frames::event_func_13151()
{
    // event 1652_61
    {
        if (!(group_main_engine_1)) goto event_1652_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1652_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(9, ((Active*)*it)->alterables->values.get(4)*-2);
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(9), 0);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(23)*0.6);
        }
    }
    event_1652_61_end: ;
}
void Frames::event_func_13152()
{
    // event 1653_61
    {
        if (!(group_main_engine_1)) goto event_1653_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) >= (360+90))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1653_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(90, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*1.25);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1653_61_end: ;
}
void Frames::event_func_13153()
{
    // event 1654_61
    {
        if (!(group_main_engine_1)) goto event_1654_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(9)) <= (-360-90))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1654_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(270, 0);
            ((Active*)*it)->alterables->values.add(3, 1);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*1.25);
            ((Active*)*it)->force_animation(7);
        }
        media.play_id(SOUND_COMMON_MISSILE_195, -1, 1);
    }
    event_1654_61_end: ;
}
void Frames::event_func_13154()
{
    // event 1655_61
    {
        if (!(group_main_engine_1)) goto event_1655_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1655_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+((Active*)*it)->alterables->values.get(4));
        }
    }
    event_1655_61_end: ;
}
void Frames::event_func_13155()
{
    // event 1656_61
    {
        if (!(group_main_engine_1)) goto event_1656_61_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1656_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1656_61_end;
        FrameObject * single_instance_1656_61_0; single_instance_1656_61_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemydrillsat_3281_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust_305(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1656_61_0 == NULL)
                    single_instance_1656_61_0 = new_obj;
            }
        }
    }
    event_1656_61_end: ;
}
void Frames::event_func_13156()
{
    // event 1657_61
    {
        if (!(group_main_engine_1)) goto event_1657_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) > (frame_right()+1200))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1657_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->alterables->values.set(3, -2);
            ((Active*)*it)->alterables->values.set(0, 5);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(8, 10);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1657_61_end: ;
}
void Frames::event_func_13157()
{
    // event 1658_61
    {
        if (!(group_main_engine_1)) goto event_1658_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (frame_left()-1200))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1658_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_angle(0, 0);
            ((Active*)*it)->alterables->values.set(3, -2);
            ((Active*)*it)->alterables->values.set(0, 5);
            ((Active*)*it)->alterables->flags.disable(6);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(10));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(11));
            ((Active*)*it)->alterables->values.set(8, 10);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
    }
    event_1658_61_end: ;
}
void Frames::event_func_13158()
{
    // event 1659_61
    {
        if (!(group_main_engine_1)) goto event_1659_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1659_61_end;
        // icache destruction
        bossneerahitbox_2465_instances.clear_selection();
        enemyballoon_1947_instances.clear_selection();
        enemydrone_2222_instances.clear_selection();
        bosscrystalbasherface_3192_instances.clear_selection();
        gimmickspikechain1_3844_instances.clear_selection();
        minibossganseki_1490_instances.clear_selection();
        enemyseeker2_2711_instances.clear_selection();
        enemybuoybuoy_2418_instances.clear_selection();
        enemysporepod_1005_instances.clear_selection();
        enemyseeker_2648_instances.clear_selection();
        minibosstredd_1044_instances.clear_selection();
        minibossbulldozerdoor_1718_instances.clear_selection();
        enemyobelisk_3035_instances.clear_selection();
        bossmserphead_3585_instances.clear_selection();
        enemylavasquiddebris_2677_instances.clear_selection();
        enemymeteorroller_2421_instances.clear_selection();
        bossroboshrimpsegment_2657_instances.clear_selection();
        enemybladeorbiter_3153_instances.clear_selection();
        enemyufo_4156_instances.clear_selection();
        enemymallet_3939_instances.clear_selection();
        enemysharktorpedo_2423_instances.clear_selection();
        bossroboshrimp_2658_instances.clear_selection();
        enemysunflora_2960_instances.clear_selection();
        enemyextractorhead_1177_instances.clear_selection();
        enemyduster_1958_instances.clear_selection();
        enemydragonfly_944_instances.clear_selection();
        enemytankbot_2821_instances.clear_selection();
        enemybeastiris_3353_instances.clear_selection();
        bossmantalithhead_1598_instances.clear_selection();
        enemyorb_4152_instances.clear_selection();
        bossmmillahead_3680_instances.clear_selection();
        bosspantherhitbox_2034_instances.clear_selection();
        enemygansekijr_816_instances.clear_selection();
        minibosschomperball_811_instances.clear_selection();
        minibossironworm_675_instances.clear_selection();
        minibossufo_1763_instances.clear_selection();
        minibosswretchnidweakspot_954_instances.clear_selection();
        enemywallpusher_2723_instances.clear_selection();
        bossmantalithhitbox2_1604_instances.clear_selection();
        objecttarget_367_instances.clear_selection();
        enemylavasquid_2721_instances.clear_selection();
        enemystingernest_2961_instances.clear_selection();
        bossrobosquid_2752_instances.clear_selection();
        parallaxorb_3289_instances.clear_selection();
        bossgunshiphitbox_2536_instances.clear_selection();
        enemystarflounder_1006_instances.clear_selection();
        enemywallstinger_3006_instances.clear_selection();
        bossholodragonhitspot3_3071_instances.clear_selection();
        enemytrafficle2_1758_instances.clear_selection();
        enemygatlinggun_3650_instances.clear_selection();
        enemyrotorbladedeath_2126_instances.clear_selection();
        objectwastebin_1948_instances.clear_selection();
        enemybikeninjamask_3171_instances.clear_selection();
        bossholodragonhitspot1_3069_instances.clear_selection();
        bossholodragoneye2_3072_instances.clear_selection();
        enemyterreonleftleg_2983_instances.clear_selection();
        enemytrafficle3_1759_instances.clear_selection();
        bosssnakebody_995_instances.clear_selection();
        brevonmechweakspot_3316_instances.clear_selection();
        enemyplantturretus_2365_instances.clear_selection();
        bosssyntaxsquidhitbox_2881_instances.clear_selection();
        enemytrafficle1_1757_instances.clear_selection();
        enemyrotorblade_2205_instances.clear_selection();
        enemybubblorbiter_2443_instances.clear_selection();
        bosskujackertailtarget_2109_instances.clear_selection();
        caravanengine_1395_instances.clear_selection();
        gimmickboostblock_1747_instances.clear_selection();
        enemycacteon_990_instances.clear_selection();
        bosssatellite_2251_instances.clear_selection();
        enemyroller_1943_instances.clear_selection();
        bosscancerforcehead_4170_instances.clear_selection();
        enemyterreon_2985_instances.clear_selection();
        bossmorpherhead_3471_instances.clear_selection();
        shrine3_1390_instances.clear_selection();
        enemyghettoshell_1971_instances.clear_selection();
        bosssnakehitbox_999_instances.clear_selection();
        hazardorbitbeambase_3633_instances.clear_selection();
        enemyhopper_1168_instances.clear_selection();
        enemypelletizer_2304_instances.clear_selection();
        enemysaucer_2812_instances.clear_selection();
        hazardgiantsword_3043_instances.clear_selection();
        enemysentinel_1496_instances.clear_selection();
        parallaxthundercarrier_3291_instances.clear_selection();
        brevonsuithead_3770_instances.clear_selection();
        bossdail_3359_instances.clear_selection();
        minibosssamu_1876_instances.clear_selection();
        enemysaucerdebris_2761_instances.clear_selection();
        enemyrocketpuncher_3160_instances.clear_selection();
        enemyseeker3_2710_instances.clear_selection();
        bosslaseriris_3102_instances.clear_selection();
        enemyorb2_4162_instances.clear_selection();
        enemyrocketpunchershield_3162_instances.clear_selection();
        enemydnacannon_2264_instances.clear_selection();
        enemyterreonrightleg_2984_instances.clear_selection();
        enemyslug_1182_instances.clear_selection();
        minibossbulldozer_1719_instances.clear_selection();
        bossclawhitbox_1388_instances.clear_selection();
        bosssyntaxspider_2743_instances.clear_selection();
        bossserphitbox_1867_instances.clear_selection();
        bossgrappler_2316_instances.clear_selection();
        enemyspiderbeamer_3729_instances.clear_selection();
        enemybullfrag_2417_instances.clear_selection();
        enemyhoppermkii_2200_instances.clear_selection();
        gimmickcannonbase_2198_instances.clear_selection();
        minibossbonegolem_1576_instances.clear_selection();
        minibossgolem_1252_instances.clear_selection();
        enemypounder_3419_instances.clear_selection();
        enemysuperturretus_1828_instances.clear_selection();
        enemythundercarrier_4153_instances.clear_selection();
        bossboulder_1064_instances.clear_selection();
        bosskujackerhead_2113_instances.clear_selection();
        objectbluepot_1565_instances.clear_selection();
        hazardspinmine_3326_instances.clear_selection();
        enemymetalpup_3149_instances.clear_selection();
        bosschopper_2216_instances.clear_selection();
        bossspadehitbox_2232_instances.clear_selection();
        bossholodragonhitspot2_3070_instances.clear_selection();
        minibosschomperhitbox_818_instances.clear_selection();
        enemycoilhead_1782_instances.clear_selection();
        enemymagmeon_2208_instances.clear_selection();
        chancecube_366_instances.clear_selection();
        bossmantalithhitbox1_1603_instances.clear_selection();
        enemyshockpuppet_3150_instances.clear_selection();
        enemymagnetizer_2300_instances.clear_selection();
        objectpot_1185_instances.clear_selection();
        lamppostfront_1778_instances.clear_selection();
        enemypushuphitbox_2653_instances.clear_selection();
        enemyhoppermissile_3942_instances.clear_selection();
        enemystinger_2891_instances.clear_selection();
        bossholodragonclaw_3068_instances.clear_selection();
        enemyiris_1183_instances.clear_selection();
        enemyturretus_938_instances.clear_selection();
        parallaxufo_3292_instances.clear_selection();
        enemyaxleturret_2201_instances.clear_selection();
        syntax_4163_instances.clear_selection();
        enemyfirefly_742_instances.clear_selection();
        bosssparky_3327_instances.clear_selection();
        brevonhitbox_3781_instances.clear_selection();
        enemyslime_741_instances.clear_selection();
        hazardshuriken_3154_instances.clear_selection();
        enemyflarecannon_1820_instances.clear_selection();
        enemytotematic_3103_instances.clear_selection();
        enemyfirespitter_1385_instances.clear_selection();
        enemyelitemask_2511_instances.clear_selection();
        if (!check_overlap(enemydrillsat_3281_instances, qualifier_20)) goto event_1659_61_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1659_61_end;
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50+randrange(30));
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(2, 5);
            ((Active*)*it)->alterables->values.set(23, ((Active*)get_single(enemydrillsat_3281_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(24, 0);
            ((Active*)*it)->alterables->values.sub(0, 3);
        }
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->set_shader(Render::INVERT);
        }
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, 4);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
    }
    event_1659_61_end: ;
}
void Frames::event_func_13159()
{
    // event 1660_61
    {
        if (!(group_main_engine_1)) goto event_1660_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(8)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1660_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(8, 1);
        }
    }
    event_1660_61_end: ;
}
void Frames::event_func_13160()
{
    // event 1661_61
    {
        if (!(group_main_engine_1)) goto event_1661_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) > (0))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1661_61_end;
        qualifier_19.clear_selection();
        if (!check_overlap(enemydrillsat_3281_instances, qualifier_19)) goto event_1661_61_end;
        for (QualifierIterator it(qualifier_19); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
        }
        if (!qualifier_19.has_selection()) goto event_1661_61_end;
        FrameObject * single_instance_1661_61_0; single_instance_1661_61_0 = pick_random(qualifier_19);
        if (single_instance_1661_61_0 == NULL) goto event_1661_61_end;
        ((Active*)((Active*)single_instance_1661_61_0))->alterables->flags.enable(6);
    }
    event_1661_61_end: ;
}
void Frames::event_func_13161()
{
    // event 1662_61
    {
        if (!(group_main_engine_1)) goto event_1662_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (7))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1662_61_end;
        FrameObject * single_instance_1662_61_0; single_instance_1662_61_0 = pick_random(enemydrillsat_3281_instances);
        if (single_instance_1662_61_0 == NULL) goto event_1662_61_end;
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50+randrange(30));
        }
        ((Active*)((Active*)single_instance_1662_61_0))->alterables->values.set(3, 8);
    }
    event_1662_61_end: ;
}
void Frames::event_func_13162()
{
    // event 1663_61
    {
        if (!(group_main_engine_1)) goto event_1663_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (8))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1663_61_end;
        FrameObject * single_instance_1663_61_0; single_instance_1663_61_0 = pick_random(enemydrillsat_3281_instances);
        if (single_instance_1663_61_0 == NULL) goto event_1663_61_end;
        effectsdebris_319_instances.empty_selection();
        // select single: false true false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1663_61_0)->x + 0, ((Active*)single_instance_1663_61_0)->y + 0), ((Active*)single_instance_1663_61_0)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1663_61_0)->x + 0, ((Active*)single_instance_1663_61_0)->y + 0), ((Active*)single_instance_1663_61_0)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1663_61_0)->x + 0, ((Active*)single_instance_1663_61_0)->y + 0), ((Active*)single_instance_1663_61_0)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1663_61_0)->x + 0, ((Active*)single_instance_1663_61_0)->y + 0), ((Active*)single_instance_1663_61_0)->layer);
            effectsdebris_319_instances.add_back();
        }
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsdebris_319(((Active*)single_instance_1663_61_0)->x + 0, ((Active*)single_instance_1663_61_0)->y + 0), ((Active*)single_instance_1663_61_0)->layer);
            effectsdebris_319_instances.add_back();
        }
        FrameObject * single_instance_1663_61_2; single_instance_1663_61_2 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectsexplosion01_309(((Active*)single_instance_1663_61_0)->x + 0, ((Active*)single_instance_1663_61_0)->y + 0), ((Active*)single_instance_1663_61_0)->layer);
            if (single_instance_1663_61_2 == NULL)
                single_instance_1663_61_2 = new_obj;
        }
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(50+randrange(30));
        }
        media.stop_sample(SOUND_COMMON_MISSILE_195);
        ((Active*)((Active*)single_instance_1663_61_0))->set_visible(false);
        ((Active*)((Active*)single_instance_1663_61_0))->set_angle(0, 0);
        ((Active*)((Active*)single_instance_1663_61_0))->alterables->values.set(3, -2);
        ((Active*)((Active*)single_instance_1663_61_0))->alterables->values.set(0, 5);
        ((Active*)((Active*)single_instance_1663_61_0))->alterables->flags.disable(6);
        ((Active*)((Active*)single_instance_1663_61_0))->set_x(((Active*)single_instance_1663_61_0)->alterables->values.get(10));
        ((Active*)((Active*)single_instance_1663_61_0))->set_y(((Active*)single_instance_1663_61_0)->alterables->values.get(11));
        ((Active*)((Active*)single_instance_1663_61_0))->alterables->values.set(8, 60);
        ((Active*)((Active*)single_instance_1663_61_0))->alterables->values.set(1, 0);
    }
    event_1663_61_end: ;
}
void Frames::event_func_13163()
{
    // event 1664_61
    {
        if (!(group_main_engine_1)) goto event_1664_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1664_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_1664_61_end: ;
}
void Frames::event_func_13164()
{
    // event 1665_61
    {
        if (!(group_main_engine_1)) goto event_1665_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (-2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(8)) <= (0))) { it.deselect(); continue; }
        }
        if (!enemydrillsat_3281_instances.has_selection()) goto event_1665_61_end;
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 0);
            ((Active*)*it)->alterables->values.set(6, 0);
            ((Active*)*it)->alterables->values.set(4, 0);
            ((Active*)*it)->alterables->values.set(9, 0);
        }
    }
    event_1665_61_end: ;
}
void Frames::event_func_13165()
{
    // event 1666_61
    {
        if (!(group_main_engine_1)) goto event_1666_61_end;
        enemydrillsat_3281_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        if (!check_overlap(enemydrillsat_3281_instances, objectexplosiveblock_2708_instances)) goto event_1666_61_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(0))) { it.deselect(); continue; }
        }
        if (!objectexplosiveblock_2708_instances.has_selection()) goto event_1666_61_end;
        for (ObjectIterator it(objectexplosiveblock_2708_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
            ((Active*)*it)->set_visible(false);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 8));
        FrameObject * single_instance_1666_61_0; single_instance_1666_61_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(objectexplosiveblock_2708_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 32, parent->y + 32), parent->layer);
                if (single_instance_1666_61_0 == NULL)
                    single_instance_1666_61_0 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 8);
        }
    }
    event_1666_61_end: ;
}
void Frames::event_func_13166()
{
    // event 1680_61
    {
        if (!(group_main_engine_1)) goto event_1680_61_end;
        player_389_instances.clear_selection();
        if (!((objects_in_zone(player_389_instances, 7495, 1164, 7844, 1244)) == (0))) goto event_1680_61_end;
        if (!((objects_in_zone(player_389_instances, 9222, 971, 11150, 1596)) == (0))) goto event_1680_61_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, 1);
        }
    }
    event_1680_61_end: ;
}
void Frames::event_func_13167()
{
    // event 1695_61
    {
        if (!(group_main_engine_1)) goto event_1695_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (0))) goto event_1695_61_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6200))) goto event_1695_61_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(12)) == (0))) goto event_1695_61_end;
        media.play_id(SOUND_ABSOLUTION_DASH_296, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 10);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(true);
    }
    event_1695_61_end: ;
}
void Frames::event_func_13168()
{
    // event 1696_61
    {
        if (!(group_main_engine_1)) goto event_1696_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (1))) goto event_1696_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_x(((Active*)get_instance(brevonmechbackground_2513_instances))->get_x()+20);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
    }
    event_1696_61_end: ;
}
void Frames::event_func_13169()
{
    // event 1697_61
    {
        if (!(group_main_engine_1)) goto event_1697_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (1))) goto event_1697_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (100))) goto event_1697_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(false);
    }
    event_1697_61_end: ;
}
void Frames::event_func_13170()
{
    // event 1698_61
    {
        if (!(group_main_engine_1)) goto event_1698_61_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6250))) goto event_1698_61_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(24)) > (900))) goto event_1698_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) < (10))) goto event_1698_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(false);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(0, 10);
        media.play_id(SOUND_ABSOLUTION_CHARGE_344, -1, 1);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(1, 0);
    }
    event_1698_61_end: ;
}
void Frames::event_func_13171()
{
    // event 1699_61
    {
        if (!(group_main_engine_1)) goto event_1699_61_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (8000))) goto event_1699_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) < (11))) goto event_1699_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (0))) goto event_1699_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->set_visible(false);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(0, 11);
        media.play_id(SOUND_ABSOLUTION_CHARGE_344, -1, 1);
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.set(1, 0);
    }
    event_1699_61_end: ;
}
void Frames::event_func_13172()
{
    // event 1700_61
    {
        if (!(group_main_engine_1)) goto event_1700_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) >= (10))) goto event_1700_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) < (110))) goto event_1700_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
    }
    event_1700_61_end: ;
}
void Frames::event_func_13173()
{
    // event 1701_61
    {
        if (!(group_main_engine_1)) goto event_1701_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (10))) goto event_1701_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (30))) goto event_1701_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)%math_helper%20) == (0))) goto event_1701_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
        brevonmechlaser_3254_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_brevonmechlaser_3254(0, 0), 3);
            brevonmechlaser_3254_instances.add_back();
        }
        effectbrevonmechwarning_3255_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectbrevonmechwarning_3255(0, 0), 4);
            effectbrevonmechwarning_3255_instances.add_back();
        }
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()-150);
            ((Active*)*it)->set_x(6000+((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)*10);
            ((Active*)*it)->alterables->values.set(4, 210);
        }
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
    }
    event_1701_61_end: ;
}
void Frames::event_func_13174()
{
    // event 1702_61
    {
        if (!(group_main_engine_1)) goto event_1702_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(0)) == (11))) goto event_1702_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)) > (30))) goto event_1702_61_end;
        if (!((((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)%math_helper%20) == (0))) goto event_1702_61_end;
        ((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.add(1, 1);
        brevonmechlaser_3254_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_brevonmechlaser_3254(0, 0), 3);
            brevonmechlaser_3254_instances.add_back();
        }
        effectbrevonmechwarning_3255_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectbrevonmechwarning_3255(0, 0), 4);
            effectbrevonmechwarning_3255_instances.add_back();
        }
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()-150);
            ((Active*)*it)->set_x(8000+((Active*)get_instance(brevonmechbackground_2513_instances))->alterables->values.get(1)*10);
            ((Active*)*it)->alterables->values.set(4, 210);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, get_max(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(25), 2));
        media.play_id(SOUND_ABSOLUTION_LASER_410, -1, 1);
    }
    event_1702_61_end: ;
}
void Frames::event_func_13175()
{
    // event 1709_61
    {
        if (!(group_main_engine_1)) goto event_1709_61_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) < (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1260))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1709_61_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, 2);
        }
    }
    event_1709_61_end: ;
}
void Frames::event_func_13176()
{
    // event 1710_61
    {
        if (!(group_main_engine_1)) goto event_1710_61_end;
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (180))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(3)) > (1260))) { it.deselect(); continue; }
        }
        if (!brevonmechlaser_3254_instances.has_selection()) goto event_1710_61_end;
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(4, 2);
        }
    }
    event_1710_61_end: ;
}
void Frames::event_func_13177()
{
    // event 1715_61
    {
        if (!(group_main_engine_1)) goto event_1715_61_end;
        if (!((global_values->get(4)) < (2))) goto event_1715_61_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) > (6044))) goto event_1715_61_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(23)) < (6200))) goto event_1715_61_end;
        global_values->set(4, 2);
        global_values->set(5, 6138);
        global_values->set(6, 420);
        {
            loop_cp_running = true;
            int times = int(1);
            loop_cp_index = 0;
            while (loop_cp_index < times) {
                loop_cp_16();
                if (!loop_cp_running) break;
                loop_cp_index++;
            }
        }
    }
    event_1715_61_end: ;
}
void Frames::event_func_13178()
{
    // event 1985_61
    {
        if (!(group_pause_1)) goto event_1985_61_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1985_61_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1985_61_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1985_61_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1985_61_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(true);
        media.pause_samples();
            group_main_engine_1 = false;
    
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 5);
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->stop_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->stop_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        media.play_id(SOUND_UI_PAUSE_63, -1, 1);
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(true);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->stop_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->stop(false);
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->get_movement()->stop(false);
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(brevonmechbackground_2513_instances))->stop_animation();
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->advance_movement(+1);
        }
        ((Active*)get_instance(enemyextractorbase_1176_instances))->stop_animation();
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1985_61_end: ;
}
void Frames::event_func_13179()
{
    // event 1986_61
    bool or_result_1986_61 = false;
    bool or_temp_result_1986_61_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1986_61_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1986_61_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1986_61_0_end;
        or_result_1986_61 = true;
        or_temp_result_1986_61_0 = true;
    }
    or_event_1986_61_0_end: ;
    // event 1986_61
    bool or_temp_result_1986_61_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1986_61_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1986_61_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1986_61_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1986_61_1_end;
        or_result_1986_61 = true;
        or_temp_result_1986_61_1 = true;
        or_event_1986_61_1_end: ;
        if (!or_result_1986_61) goto or_final_or_event_1986_61_1_end;
        ((Active*)get_instance(guipause_453_instances))->set_visible(false);
        media.resume_samples();
        ((Active*)get_instance(guipause_453_instances))->alterables->values.set(0, 2);
        if (!group_main_engine_1) {
            group_main_engine_1 = true;
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerskinsash_418_instances))->start_animation();
        ((Active*)get_instance(playerskinsashhair_417_instances))->start_animation();
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldinstashield_359_instances.clear_selection();
        for (ObjectIterator it(shieldinstashield_359_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwood_313_instances.clear_selection();
        for (ObjectIterator it(shieldwood_313_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflamefront_316_instances.clear_selection();
        for (ObjectIterator it(shieldflamefront_316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldflameback_315_instances.clear_selection();
        for (ObjectIterator it(shieldflameback_315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldmagnetic_317_instances.clear_selection();
        for (ObjectIterator it(shieldmagnetic_317_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldwater_318_instances.clear_selection();
        for (ObjectIterator it(shieldwater_318_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        shieldearth_314_instances.clear_selection();
        for (ObjectIterator it(shieldearth_314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectpetal_302_instances.clear_selection();
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectcodec_354_instances.clear_selection();
        for (ObjectIterator it(objectcodec_354_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(objectpetal_302_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        objectcrystal_279_instances.clear_selection();
        for (ObjectIterator it(objectcrystal_279_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsexplosion01_309_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion01_309_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsexplosion06_312_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion06_312_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdust_305_instances.clear_selection();
        for (ObjectIterator it(effectsdust_305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectshade_356_instances.clear_selection();
        for (ObjectIterator it(effectshade_356_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        thunderspark_339_instances.clear_selection();
        for (ObjectIterator it(thunderspark_339_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswatersplash_416_instances.clear_selection();
        for (ObjectIterator it(effectswatersplash_416_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle1_300_instances.clear_selection();
        for (ObjectIterator it(sparkle1_300_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle2_333_instances.clear_selection();
        for (ObjectIterator it(sparkle2_333_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle3_334_instances.clear_selection();
        for (ObjectIterator it(sparkle3_334_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle4_335_instances.clear_selection();
        for (ObjectIterator it(sparkle4_335_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        sparkle5_336_instances.clear_selection();
        for (ObjectIterator it(sparkle5_336_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsdebris_319_instances.clear_selection();
        for (ObjectIterator it(effectsdebris_319_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        effectsshield_306_instances.clear_selection();
        for (ObjectIterator it(effectsshield_306_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        effectsspringbeam_470_instances.clear_selection();
        for (ObjectIterator it(effectsspringbeam_470_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        pressuredoor3_3473_instances.clear_selection();
        gimmickconveyorbeltright_2818_instances.clear_selection();
        yellowspringright_435_instances.clear_selection();
        playerblocker_2756_instances.clear_selection();
        gimmickconveyorbeltleft3_2826_instances.clear_selection();
        gimmickmovingfloor3_1255_instances.clear_selection();
        rmalternatepath_1420_instances.clear_selection();
        gimmickchainwalldown_2292_instances.clear_selection();
        bgloop3_3332_instances.clear_selection();
        tbpipeloop9_2823_instances.clear_selection();
        rmalternatepath2_1379_instances.clear_selection();
        breakablerock_951_instances.clear_selection();
        active_1396_instances.clear_selection();
        spiraltunnelmask_958_instances.clear_selection();
        pushableblock3_1394_instances.clear_selection();
        monitorwoodshield_325_instances.clear_selection();
        collapsingplatform_745_instances.clear_selection();
        objecttransporter_3344_instances.clear_selection();
        levelcrusher1_832_instances.clear_selection();
        levellayer1loop03_808_instances.clear_selection();
        customtile15_3813_instances.clear_selection();
        customtile23_3821_instances.clear_selection();
        bosstunnel2_1077_instances.clear_selection();
        objectspiketrap_3835_instances.clear_selection();
        ramp2_1856_instances.clear_selection();
        monitorfireshield_328_instances.clear_selection();
        fdlooplayer03_3639_instances.clear_selection();
        active_2270_instances.clear_selection();
        customtile3_3801_instances.clear_selection();
        gimmickverticalhalfpipe5_1826_instances.clear_selection();
        customtile14_3812_instances.clear_selection();
        active3_2272_instances.clear_selection();
        collapsingsegment2_3914_instances.clear_selection();
        mastergroupsa_384_instances.clear_selection();
        customtile10_3808_instances.clear_selection();
        fdlooplayer13_3642_instances.clear_selection();
        gimmickaxletunnel_1262_instances.clear_selection();
        layer0loop5_1946_instances.clear_selection();
        lockedlabdoorbarrier_3541_instances.clear_selection();
        customtile24_3822_instances.clear_selection();
        levellayer116_349_instances.clear_selection();
        sbloop6_2225_instances.clear_selection();
        gimmickrollingarchbase_1725_instances.clear_selection();
        breakablerock2_1007_instances.clear_selection();
        monitor1up_410_instances.clear_selection();
        gimmickrotatingpipebase_804_instances.clear_selection();
        gimmicklanternbridge7_1733_instances.clear_selection();
        gimmickverticalhalfpipe6_1824_instances.clear_selection();
        fdlooplayer14_3646_instances.clear_selection();
        monitorwatershield_327_instances.clear_selection();
        levelthcollapsingplatform_3164_instances.clear_selection();
        sbloop3_2211_instances.clear_selection();
        customtile27_3825_instances.clear_selection();
        tbpipeloop2_2804_instances.clear_selection();
        bosscrystalspire_2293_instances.clear_selection();
        levellayer1loop02_1235_instances.clear_selection();
        hazardspikesup_558_instances.clear_selection();
        gimmickconveyorbeltright2_2819_instances.clear_selection();
        switchcolumnfront1_1169_instances.clear_selection();
        fdlooplayer15_3649_instances.clear_selection();
        fdlooplayer01_3643_instances.clear_selection();
        bossdoor_3191_instances.clear_selection();
        levelballtunnel1_1033_instances.clear_selection();
        active2_2271_instances.clear_selection();
        customtile19_3817_instances.clear_selection();
        levelminetrackswitch_1413_instances.clear_selection();
        objectexplosiveblock_2708_instances.clear_selection();
        objectteleblockmask_3246_instances.clear_selection();
        monitormetalshield_329_instances.clear_selection();
        customtile17_3815_instances.clear_selection();
        minibossbulldozerhitbox_1776_instances.clear_selection();
        jellyspring_739_instances.clear_selection();
        turningspring_1960_instances.clear_selection();
        breakableaquabrick2_813_instances.clear_selection();
        breakablewall_1748_instances.clear_selection();
        monitorkeystone_562_instances.clear_selection();
        levelsbmovingblock1_2310_instances.clear_selection();
        layer0block_1872_instances.clear_selection();
        monitorearthshield_326_instances.clear_selection();
        gimmickconveyorbeltleft2_2825_instances.clear_selection();
        sbloop7_2274_instances.clear_selection();
        gimmicklanternbridge2_1728_instances.clear_selection();
        switchdoor2_754_instances.clear_selection();
        bosshatchdoor_3317_instances.clear_selection();
        redspringup_440_instances.clear_selection();
        customtile6_3804_instances.clear_selection();
        tbpipeloop8_2822_instances.clear_selection();
        enemybullfragmask_2419_instances.clear_selection();
        tbpipeloop11_2850_instances.clear_selection();
        gimmickdrillplatform_1503_instances.clear_selection();
        treetrunk_1034_instances.clear_selection();
        tbpipeloop3_2807_instances.clear_selection();
        levelcrusher2_833_instances.clear_selection();
        customtile20_3818_instances.clear_selection();
        largecolumn2_1862_instances.clear_selection();
        levelballtunnel3_2266_instances.clear_selection();
        layer0loop6_1969_instances.clear_selection();
        levelballtunnel2_2265_instances.clear_selection();
        active4_2273_instances.clear_selection();
        sbloop1_2209_instances.clear_selection();
        gimmicklanternbridge5_1731_instances.clear_selection();
        bgloop1_3330_instances.clear_selection();
        levellayer1loop2_1504_instances.clear_selection();
        gimmickverticalhalfpipe2_1825_instances.clear_selection();
        redspringleft_442_instances.clear_selection();
        pllayer02_2959_instances.clear_selection();
        fdlooplayer04_3647_instances.clear_selection();
        gimmickelevator2_1398_instances.clear_selection();
        jcloop3_2448_instances.clear_selection();
        yellowspringdown_437_instances.clear_selection();
        gimmickchainwallup_2291_instances.clear_selection();
        gimmickrotatingpipe_801_instances.clear_selection();
        breakablefloor1_1760_instances.clear_selection();
        gimmickmovingfloor2_1254_instances.clear_selection();
        gimmickelevator_2020_instances.clear_selection();
        customtile4_3802_instances.clear_selection();
        switchdoor_735_instances.clear_selection();
        customtile7_3805_instances.clear_selection();
        levelelectriccrusher_3540_instances.clear_selection();
        minibosstrapdoor_2722_instances.clear_selection();
        customtile2_3800_instances.clear_selection();
        spikeceiling_1568_instances.clear_selection();
        monitorbomb_563_instances.clear_selection();
        gimmickconveyorbeltright3_2820_instances.clear_selection();
        gimmickverticalhalfpipe3_1823_instances.clear_selection();
        sbloop2_2210_instances.clear_selection();
        tbpipeloop7_2806_instances.clear_selection();
        breakableruins_1184_instances.clear_selection();
        breakableplrock_2987_instances.clear_selection();
        sbloop4_2224_instances.clear_selection();
        tbpipeloop4_2808_instances.clear_selection();
        hazardspikesleft_560_instances.clear_selection();
        levellayer02_1238_instances.clear_selection();
        gimmickverticalhalfpipe4_1822_instances.clear_selection();
        gimmickrelicflippanel_1240_instances.clear_selection();
        playeractionvaluesb_388_instances.clear_selection();
        gimmickcrusherplatform_2306_instances.clear_selection();
        floorcandle2_4117_instances.clear_selection();
        gimmicklanternbridge3_1729_instances.clear_selection();
        fdlooplayer05_3648_instances.clear_selection();
        layer1loop2_1744_instances.clear_selection();
        levelscrollingplatform2_2663_instances.clear_selection();
        tbpipeloop5_2805_instances.clear_selection();
        layer1loop_1745_instances.clear_selection();
        gimmickconveyorbeltleft_2824_instances.clear_selection();
        objectswitchblock2_3340_instances.clear_selection();
        levellayer1loop01_1234_instances.clear_selection();
        pllayer11_2957_instances.clear_selection();
        enemymagnetizercrate_2301_instances.clear_selection();
        levelcrystalspike_2248_instances.clear_selection();
        lightstonedoor2_1586_instances.clear_selection();
        gimmickmovingpillar1_1407_instances.clear_selection();
        fdlooplayer02_3641_instances.clear_selection();
        gimmickchainwallmaskdown_2305_instances.clear_selection();
        levellayer117_1487_instances.clear_selection();
        scrollingfloor_2021_instances.clear_selection();
        monitorcrystals_324_instances.clear_selection();
        leveljccollapsingplatformpiece_2427_instances.clear_selection();
        gimmicklanternbridge8_1734_instances.clear_selection();
        levellayer0loop04_997_instances.clear_selection();
        levelscrollingplatform1_2662_instances.clear_selection();
        jcslidingplatform_2414_instances.clear_selection();
        layer1loop3_1746_instances.clear_selection();
        hazardfloortrap_2748_instances.clear_selection();
        lockeddoorbarrier_2667_instances.clear_selection();
        airlock1_3453_instances.clear_selection();
        levellayer016_996_instances.clear_selection();
        digspothole_1186_instances.clear_selection();
        levelcrusher1_772_instances.clear_selection();
        hazardspikesup2_3909_instances.clear_selection();
        gimmickrelicpanel_1178_instances.clear_selection();
        collapsingsegment1_3912_instances.clear_selection();
        corkscrewdoor_3537_instances.clear_selection();
        breakableaquabrick_743_instances.clear_selection();
        gimmickmovingpillar2_1408_instances.clear_selection();
        minibossbarrier_924_instances.clear_selection();
        customtile5_3803_instances.clear_selection();
        yellowspringleft_436_instances.clear_selection();
        jcloop4_2446_instances.clear_selection();
        gimmickteetertotter_1827_instances.clear_selection();
        levellayer015_1261_instances.clear_selection();
        monitorcrate_409_instances.clear_selection();
        redspringright_441_instances.clear_selection();
        levelhideoutplatform1_3157_instances.clear_selection();
        bossgate_1878_instances.clear_selection();
        hazardspikesright_561_instances.clear_selection();
        gimmickwaterturbine_2851_instances.clear_selection();
        monitorrings_407_instances.clear_selection();
        pushableblock2_1012_instances.clear_selection();
        objectbiglift_3574_instances.clear_selection();
        monitorinvincibility_408_instances.clear_selection();
        levellayer03_1505_instances.clear_selection();
        gimmickmovingfloor1_1253_instances.clear_selection();
        gimmickchainwallmaskup_2307_instances.clear_selection();
        levellayer002_1260_instances.clear_selection();
        customtile18_3816_instances.clear_selection();
        fdrotatingbarrier_3573_instances.clear_selection();
        objectspinningbeam_807_instances.clear_selection();
        levelfireplatform2_2739_instances.clear_selection();
        fdlooplayer12_3636_instances.clear_selection();
        playeractionvaluesa_387_instances.clear_selection();
        slimefloor_839_instances.clear_selection();
        gimmicklanternbridge6_1732_instances.clear_selection();
        gimmicklanternbridge1_1727_instances.clear_selection();
        tbpipeloop1_2803_instances.clear_selection();
        gimmicksnowspiremask_3247_instances.clear_selection();
        sbloop5_2223_instances.clear_selection();
        layer0loop4_1945_instances.clear_selection();
        levellayer101_1232_instances.clear_selection();
        customtile21_3819_instances.clear_selection();
        gimmickverticalhalfpipe1_1821_instances.clear_selection();
        levellayer001_1237_instances.clear_selection();
        levellayer115_348_instances.clear_selection();
        breakablefloor2_1761_instances.clear_selection();
        pushableblock4_2269_instances.clear_selection();
        layer0loop3_1857_instances.clear_selection();
        pllayer12_2964_instances.clear_selection();
        levellayer115_1085_instances.clear_selection();
        tbpipeloop6_2809_instances.clear_selection();
        leveljccollapsingplatform_2444_instances.clear_selection();
        gimmicklanternbridge4_1730_instances.clear_selection();
        keyboard_1940_instances.clear_selection();
        airlock4_3454_instances.clear_selection();
        tbpipeloop10_2849_instances.clear_selection();
        layer0loop_1742_instances.clear_selection();
        levelicebarrier_2456_instances.clear_selection();
        customtile26_3824_instances.clear_selection();
        customtile22_3820_instances.clear_selection();
        gimmickmovingpillar3_1409_instances.clear_selection();
        customtile13_3811_instances.clear_selection();
        lightstonedoor1_1585_instances.clear_selection();
        objectvanishingblock_3034_instances.clear_selection();
        levelthcollapsingplatformpiece_3165_instances.clear_selection();
        customtile25_3823_instances.clear_selection();
        slimeraft_843_instances.clear_selection();
        bossclawbase_1393_instances.clear_selection();
        customtile16_3814_instances.clear_selection();
        customtile1_3799_instances.clear_selection();
        jcloop2_2447_instances.clear_selection();
        redspringdown_443_instances.clear_selection();
        levellayer1loop03_1086_instances.clear_selection();
        switchplatform_2100_instances.clear_selection();
        customtile11_3809_instances.clear_selection();
        largecolumn_1861_instances.clear_selection();
        jcloop1_2445_instances.clear_selection();
        scrollingfloor2_3440_instances.clear_selection();
        bgloop2_3331_instances.clear_selection();
        hazardspikesdown_559_instances.clear_selection();
        pushableblock1_531_instances.clear_selection();
        hazardspikesright2_3910_instances.clear_selection();
        fdlooplayer11_3640_instances.clear_selection();
        pllayer01_2958_instances.clear_selection();
        levellift_2647_instances.clear_selection();
        layer0loop2_1743_instances.clear_selection();
        customtile12_3810_instances.clear_selection();
        ramp1_1869_instances.clear_selection();
        objectswitchblock1_3339_instances.clear_selection();
        for (QualifierIterator it(qualifier_7); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        goldplatform2_1736_instances.clear_selection();
        laddertop_357_instances.clear_selection();
        goldplatform3_1737_instances.clear_selection();
        levelpistonplatform1_2717_instances.clear_selection();
        levelmovingplatform01_1404_instances.clear_selection();
        gimmickleafplatform2_2360_instances.clear_selection();
        levelglacierplatform2_3282_instances.clear_selection();
        levelglacierplatform1_3251_instances.clear_selection();
        fdplatform_3542_instances.clear_selection();
        leveltrolleyplatform_1818_instances.clear_selection();
        shipplatform1_2093_instances.clear_selection();
        yellowspringupleft_432_instances.clear_selection();
        levelfireplatform1_2646_instances.clear_selection();
        fdlasertunnelplatform_3728_instances.clear_selection();
        levelfdpushplatform_3539_instances.clear_selection();
        shipplatform3_2095_instances.clear_selection();
        levelcrankferris_3319_instances.clear_selection();
        carouselplatform_2015_instances.clear_selection();
        planeplatform_2038_instances.clear_selection();
        levellagoonplatform1_2967_instances.clear_selection();
        escalatorright_1966_instances.clear_selection();
        minibossgolempiece1_1250_instances.clear_selection();
        minibossgolempiece2_1249_instances.clear_selection();
        yellowspringup_434_instances.clear_selection();
        gimmickrisingswing_1405_instances.clear_selection();
        levelspinplatform_2718_instances.clear_selection();
        levelmovingplatform3_949_instances.clear_selection();
        gimmickdragontunnelmask2_1781_instances.clear_selection();
        redspringupright_438_instances.clear_selection();
        levelrmplatform_1506_instances.clear_selection();
        gimmickcollapsingplatformleftbrick02_667_instances.clear_selection();
        gimmickdragontunnel1_1845_instances.clear_selection();
        leveltrolleyplatform2_1819_instances.clear_selection();
        levelfloatingplatform_1032_instances.clear_selection();
        levelmovingplatform1_1965_instances.clear_selection();
        gimmickswingplatform_768_instances.clear_selection();
        levelfloatingplatform3_1412_instances.clear_selection();
        escalatorleft_1951_instances.clear_selection();
        levelmovingplatform2_940_instances.clear_selection();
        levellagoonplatform2_2980_instances.clear_selection();
        levelvalleyplatform1_939_instances.clear_selection();
        levelferriswheel2_1766_instances.clear_selection();
        gimmickbridgelog_412_instances.clear_selection();
        crystalplatform_2317_instances.clear_selection();
        levelaxelplatform3_844_instances.clear_selection();
        spinninglogmask_1004_instances.clear_selection();
        levelferriswheel1_1765_instances.clear_selection();
        gimmickrollingplatformcave_1497_instances.clear_selection();
        aquabrickplatform_744_instances.clear_selection();
        levelfloatingplatform2_1387_instances.clear_selection();
        levelferriswheel3_1767_instances.clear_selection();
        levelsbplatform1_2096_instances.clear_selection();
        airventplatform_2668_instances.clear_selection();
        levelsbplatform3_2197_instances.clear_selection();
        shipplatform2_2094_instances.clear_selection();
        levelaxelplatform2_654_instances.clear_selection();
        gimmickcrankplatformtop1_2801_instances.clear_selection();
        gimmickcrankplatformtop2_2802_instances.clear_selection();
        gimmickdownhillplatform_3427_instances.clear_selection();
        levelaxelplatform1_653_instances.clear_selection();
        active_2962_instances.clear_selection();
        levelmovingplatform1_3840_instances.clear_selection();
        waterfalllog_1013_instances.clear_selection();
        levelhandcar_1415_instances.clear_selection();
        gimmickbreakoutplatform_3037_instances.clear_selection();
        gimmickrollingplatform_1171_instances.clear_selection();
        minibossbonegolempiece5_1579_instances.clear_selection();
        bosstbplatform_2878_instances.clear_selection();
        gimmickleafplatform1_2359_instances.clear_selection();
        redspringupleft_439_instances.clear_selection();
        gimmickdragontunnelmask1_1780_instances.clear_selection();
        yellowspringupright_433_instances.clear_selection();
        gimmickflyingleafplatformmask_2462_instances.clear_selection();
        levelwaterplatform_1954_instances.clear_selection();
        levelferriswheel4_1768_instances.clear_selection();
        levelfloatingplatform_523_instances.clear_selection();
        bgplatform1_3318_instances.clear_selection();
        gimmickbowarrowplatform_2970_instances.clear_selection();
        levelcreekplatform_2424_instances.clear_selection();
        goldplatform1_1735_instances.clear_selection();
        for (QualifierIterator it(qualifier_8); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        // icache destruction
        generaledge05_3898_instances.clear_selection();
        generaledge01_3894_instances.clear_selection();
        generaledge04_3897_instances.clear_selection();
        generaledge02_3895_instances.clear_selection();
        generaledge03_3896_instances.clear_selection();
        for (QualifierIterator it(qualifier_9); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(crystal_456_instances))->set_visible(false);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskinmillatail_381_instances.clear_selection();
        for (ObjectIterator it(playerskinmillatail_381_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        playerskintorquearm_449_instances.clear_selection();
        for (ObjectIterator it(playerskintorquearm_449_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectscrystalbit_323_instances.clear_selection();
        for (ObjectIterator it(effectscrystalbit_323_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(objectjumppad_530_instances))->start_animation();
        objectcodecid_303_instances.clear_selection();
        for (ObjectIterator it(objectcodecid_303_instances); !it.end(); ++it) {
            ((Counter*)*it)->get_movement()->start();
        }
        objectextralife_304_instances.clear_selection();
        for (ObjectIterator it(objectextralife_304_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->get_movement()->start();
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->start_animation();
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(brevonmechbackground_2513_instances))->start_animation();
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyrock_657_instances.clear_selection();
        for (ObjectIterator it(enemyrock_657_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
            ((Active*)*it)->advance_movement(-1);
        }
        ((Active*)get_instance(enemyextractorbase_1176_instances))->start_animation();
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright1_1045_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright1_1045_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft1_1051_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft1_1051_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemylavasquidlaser_2676_instances.clear_selection();
        for (ObjectIterator it(enemylavasquidlaser_2676_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmicksnakedrill_3211_instances.clear_selection();
        for (ObjectIterator it(gimmicksnakedrill_3211_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        minibosstredddebris_1014_instances.clear_selection();
        for (ObjectIterator it(minibosstredddebris_1014_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft3_1050_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft3_1050_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft2_1049_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft2_1049_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft5_1048_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft5_1048_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft4_1047_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft4_1047_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddleft6_1046_instances.clear_selection();
        for (ObjectIterator it(minibosstreddleft6_1046_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(minibosstredd_1044_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright3_1043_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright3_1043_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright5_1042_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright5_1042_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright6_1041_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright6_1041_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright4_1040_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright4_1040_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        minibosstreddright2_1039_instances.clear_selection();
        for (ObjectIterator it(minibosstreddright2_1039_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1986_61_1_end: ;
}
void Frames::handle_frame_62_events()
{
    test_collisions_61();
    event_func_1647();
    event_func_1680();
    event_func_1697();
    event_func_1733();
    event_func_1823();
    event_func_1824();
    event_func_1825();
    event_func_1833();
    event_func_1863();
    event_func_1864();
    event_func_1865();
    event_func_1957();
    event_func_2128();
    event_func_2167();
    event_func_2266();
    event_func_2270();
    event_func_3904();
    event_func_5247();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_1349();
    if (!group_main_engine_global_methods_player_1) goto group_main_engine_global_methods_player_1_end;
    event_func_1350();
    event_func_1351();
    event_func_1352();
    event_func_1353();
    event_func_1354();
    event_func_1355();
    event_func_1356();
    event_func_1357();
    event_func_1358();
    event_func_1359();
    event_func_1360();
    event_func_1361();
    event_func_1362();
    event_func_1363();
    event_func_1364();
    event_func_1365();
    event_func_1366();
    event_func_1367();
    event_func_1368();
    event_func_2732();
    event_func_2733();
    event_func_2734();
    event_func_1372();
    event_func_1373();
    event_func_1374();
    event_func_1375();
    event_func_1376();
    event_func_1377();
    event_func_1378();
    event_func_1379();
    event_func_1380();
    event_func_1381();
    event_func_1382();
    event_func_1383();
    event_func_1384();
    if (!group_main_engine_global_methods_player_player_movement_1) goto group_main_engine_global_methods_player_player_movement_1_end;
    if (!group_main_engine_global_methods_player_player_movement_initial_movement_1) goto group_main_engine_global_methods_player_player_movement_initial_movement_1_end;
    event_func_1385();
    group_main_engine_global_methods_player_player_movement_initial_movement_1_end: ;
    event_func_1386();
    event_func_1387();
    event_func_1388();
    event_func_1389();
    event_func_1390();
    event_func_1391();
    event_func_1392();
    event_func_1393();
    event_func_1394();
    event_func_1395();
    event_func_1396();
    event_func_1397();
    event_func_1398();
    event_func_1399();
    event_func_1400();
    event_func_1401();
    event_func_1402();
    event_func_1403();
    event_func_1404();
    event_func_1405();
    event_func_1406();
    event_func_1407();
    event_func_1408();
    event_func_1409();
    event_func_1410();
    event_func_1411();
    event_func_1412();
    event_func_1413();
    event_func_1414();
    event_func_1415();
    event_func_1416();
    event_func_1417();
    event_func_1418();
    event_func_1419();
    event_func_1420();
    event_func_1421();
    event_func_1422();
    event_func_1423();
    group_main_engine_global_methods_player_player_movement_1_end: ;
    event_func_3721();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_1429();
    event_func_1430();
    if (!group_main_engine_global_methods_player_player_control_control_1) goto group_main_engine_global_methods_player_player_control_control_1_end;
    event_func_1431();
    event_func_1432();
    event_func_1433();
    event_func_1434();
    event_func_1435();
    event_func_1436();
    event_func_1437();
    event_func_1438();
    event_func_1439();
    event_func_1440();
    event_func_1441();
    event_func_1442();
    event_func_1443();
    event_func_1444();
    event_func_1445();
    event_func_1446();
    event_func_1447();
    event_func_1448();
    event_func_1449();
    event_func_1450();
    event_func_1451();
    event_func_1452();
    event_func_1453();
    event_func_1454();
    event_func_1455();
    event_func_1456();
    event_func_1457();
    event_func_1458();
    event_func_1459();
    event_func_1460();
    event_func_1461();
    event_func_1462();
    event_func_1463();
    event_func_1464();
    event_func_1465();
    group_main_engine_global_methods_player_player_control_control_1_end: ;
    event_func_1466();
    event_func_1467();
    event_func_1468();
    event_func_1469();
    event_func_2743();
    event_func_1471();
    event_func_1472();
    event_func_1473();
    event_func_1474();
    event_func_1475();
    event_func_1476();
    event_func_1477();
    event_func_1478();
    event_func_1479();
    event_func_1480();
    event_func_1481();
    event_func_1482();
    event_func_1483();
    event_func_1484();
    event_func_1485();
    event_func_1486();
    event_func_1487();
    event_func_1488();
    event_func_1489();
    if (!group_main_engine_global_methods_player_player_control_actions_charge_attack_1) goto group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end;
    event_func_1490();
    event_func_1491();
    event_func_1492();
    event_func_1493();
    event_func_1494();
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_manage_actions_1) goto group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end;
    event_func_1495();
    event_func_1496();
    event_func_1497();
    event_func_1498();
    event_func_1499();
    event_func_1500();
    event_func_1501();
    event_func_1502();
    event_func_1503();
    event_func_1504();
    event_func_1505();
    event_func_1506();
    event_func_1507();
    event_func_1508();
    event_func_1509();
    event_func_1510();
    event_func_1511();
    event_func_1512();
    event_func_1513();
    event_func_1514();
    event_func_1515();
    event_func_1516();
    event_func_1517();
    event_func_1518();
    event_func_1519();
    event_func_1520();
    event_func_1521();
    event_func_1522();
    event_func_1523();
    event_func_1524();
    event_func_1525();
    event_func_1526();
    event_func_1527();
    event_func_1528();
    event_func_1529();
    event_func_1530();
    event_func_1531();
    event_func_1532();
    event_func_1533();
    event_func_1534();
    event_func_1535();
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end;
    event_func_1536();
    event_func_1537();
    event_func_1538();
    event_func_1539();
    event_func_1540();
    event_func_1541();
    event_func_1542();
    event_func_1543();
    event_func_1544();
    event_func_1545();
    event_func_1546();
    event_func_1547();
    event_func_1548();
    event_func_1549();
    event_func_1550();
    event_func_1551();
    event_func_1552();
    event_func_1553();
    event_func_1554();
    event_func_1555();
    event_func_1556();
    event_func_1557();
    event_func_1558();
    event_func_1559();
    event_func_1560();
    event_func_1561();
    event_func_1562();
    event_func_1563();
    event_func_1564();
    event_func_1565();
    event_func_1566();
    event_func_1567();
    event_func_1568();
    event_func_1569();
    event_func_1570();
    event_func_1571();
    event_func_1572();
    event_func_1573();
    event_func_1574();
    event_func_1575();
    event_func_1576();
    event_func_1577();
    event_func_1578();
    event_func_1579();
    event_func_1580();
    event_func_1581();
    event_func_1582();
    event_func_1583();
    event_func_1584();
    event_func_1585();
    event_func_1586();
    event_func_1587();
    event_func_1588();
    event_func_1589();
    event_func_1590();
    event_func_1591();
    event_func_1592();
    event_func_1593();
    event_func_1594();
    event_func_1595();
    event_func_1596();
    event_func_1597();
    event_func_1598();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end;
    event_func_1599();
    event_func_1600();
    event_func_1601();
    event_func_1602();
    event_func_1603();
    event_func_1604();
    event_func_1605();
    event_func_1606();
    event_func_1607();
    event_func_1608();
    event_func_1609();
    event_func_1610();
    event_func_1611();
    event_func_1612();
    event_func_1613();
    event_func_1614();
    event_func_1615();
    event_func_1616();
    event_func_1617();
    event_func_1618();
    event_func_1619();
    event_func_1620();
    event_func_1621();
    event_func_1622();
    event_func_1623();
    event_func_1624();
    event_func_1625();
    event_func_1626();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end;
    event_func_1627();
    event_func_1628();
    event_func_1629();
    event_func_1630();
    event_func_1631();
    event_func_1632();
    event_func_1633();
    event_func_1634();
    event_func_1635();
    event_func_1636();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end;
    event_func_1637();
    event_func_1638();
    event_func_1639();
    event_func_1640();
    event_func_1641();
    event_func_1642();
    event_func_1643();
    event_func_1644();
    event_func_1645();
    event_func_1646();
    event_func_1648();
    event_func_1649();
    event_func_1650();
    event_func_1651();
    event_func_1652();
    event_func_1653();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end;
    event_func_1654();
    event_func_1655();
    event_func_1656();
    event_func_1657();
    event_func_1658();
    event_func_1659();
    event_func_1660();
    event_func_1661();
    event_func_1662();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end;
    event_func_1663();
    event_func_1664();
    event_func_1665();
    event_func_1666();
    event_func_1667();
    event_func_1668();
    event_func_1669();
    event_func_1670();
    event_func_1671();
    event_func_1672();
    event_func_1673();
    event_func_1674();
    event_func_1675();
    event_func_1676();
    event_func_1677();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end;
    event_func_1678();
    event_func_1679();
    event_func_1681();
    event_func_1682();
    event_func_1683();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end;
    event_func_1684();
    event_func_1685();
    event_func_1686();
    event_func_1687();
    event_func_1688();
    event_func_1689();
    event_func_1690();
    event_func_1691();
    event_func_1692();
    event_func_1693();
    event_func_1694();
    event_func_1695();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end;
    event_func_1696();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end;
    event_func_1698();
    event_func_1699();
    event_func_1700();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end;
    event_func_1701();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end;
    event_func_1702();
    event_func_1703();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end;
    event_func_1704();
    event_func_1705();
    event_func_1706();
    event_func_1707();
    event_func_1708();
    event_func_1709();
    event_func_1710();
    event_func_1711();
    event_func_1712();
    event_func_1713();
    event_func_1714();
    event_func_1715();
    event_func_1716();
    event_func_1717();
    event_func_1718();
    event_func_1719();
    event_func_1720();
    event_func_1721();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end;
    event_func_1722();
    event_func_1723();
    event_func_1724();
    event_func_1725();
    event_func_3722();
    event_func_3723();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end;
    event_func_1728();
    event_func_1729();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end;
    event_func_1730();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end;
    event_func_1731();
    event_func_1732();
    event_func_1734();
    event_func_1735();
    event_func_1736();
    event_func_1737();
    event_func_1738();
    event_func_1739();
    event_func_1740();
    event_func_1741();
    event_func_1742();
    event_func_1743();
    event_func_1744();
    event_func_1745();
    event_func_1746();
    event_func_1747();
    event_func_1748();
    event_func_1749();
    event_func_1750();
    event_func_1751();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1) goto group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end;
    event_func_1752();
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end;
    event_func_1753();
    event_func_3728();
    event_func_1755();
    event_func_1756();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1757();
    event_func_1758();
    event_func_1759();
    event_func_1760();
    event_func_13122();
    event_func_1762();
    event_func_1763();
    event_func_1764();
    event_func_1765();
    event_func_1766();
    event_func_1767();
    event_func_1768();
    event_func_1769();
    event_func_1770();
    event_func_1771();
    event_func_1772();
    event_func_1773();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1) goto group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end;
    event_func_1774();
    event_func_2783();
    event_func_1776();
    event_func_13123();
    event_func_1778();
    event_func_1779();
    event_func_1780();
    event_func_1781();
    event_func_1782();
    event_func_1783();
    event_func_1784();
    event_func_1785();
    event_func_1786();
    event_func_1787();
    event_func_1788();
    event_func_1789();
    event_func_1790();
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end;
    event_func_1791();
    event_func_1792();
    event_func_1793();
    event_func_1794();
    event_func_1795();
    event_func_1796();
    event_func_1797();
    event_func_1798();
    event_func_1799();
    event_func_1800();
    event_func_1801();
    event_func_1802();
    event_func_1803();
    event_func_1804();
    event_func_1805();
    event_func_1806();
    event_func_1807();
    event_func_1808();
    event_func_1809();
    event_func_1810();
    event_func_1811();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end;
    event_func_1812();
    event_func_1813();
    event_func_1814();
    event_func_1815();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end;
    event_func_1816();
    event_func_1817();
    event_func_1818();
    event_func_1819();
    event_func_1820();
    event_func_1821();
    event_func_1822();
    event_func_1826();
    event_func_1827();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end;
    event_func_1828();
    event_func_1829();
    event_func_1830();
    event_func_1831();
    event_func_1832();
    event_func_1834();
    event_func_1835();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1) goto group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end;
    event_func_1836();
    event_func_1837();
    event_func_1838();
    event_func_1839();
    event_func_1840();
    event_func_1841();
    event_func_1842();
    event_func_1843();
    event_func_1844();
    event_func_1845();
    event_func_1846();
    event_func_1847();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1_end: ;
    event_func_1848();
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end;
    event_func_1849();
    event_func_1850();
    event_func_1851();
    event_func_1852();
    event_func_1853();
    event_func_1854();
    event_func_1855();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end;
    event_func_1856();
    event_func_1857();
    event_func_1858();
    event_func_1859();
    event_func_1860();
    event_func_1861();
    event_func_1862();
    event_func_1866();
    event_func_1867();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end;
    event_func_1868();
    event_func_1869();
    event_func_1870();
    event_func_1871();
    event_func_1872();
    event_func_1873();
    event_func_1874();
    event_func_1875();
    event_func_1876();
    event_func_1877();
    event_func_1878();
    event_func_1879();
    event_func_1880();
    event_func_1881();
    event_func_1882();
    event_func_1883();
    event_func_1884();
    event_func_1885();
    event_func_1886();
    event_func_1887();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1) goto group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end;
    event_func_1888();
    event_func_1889();
    event_func_1890();
    event_func_1891();
    event_func_1892();
    event_func_1893();
    event_func_1894();
    event_func_1895();
    event_func_1896();
    event_func_1897();
    event_func_1898();
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end;
    event_func_1899();
    event_func_1900();
    event_func_1901();
    event_func_1902();
    event_func_1903();
    event_func_1904();
    event_func_1905();
    event_func_1906();
    event_func_1907();
    event_func_1908();
    event_func_13124();
    event_func_1910();
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end;
    event_func_1911();
    event_func_1912();
    event_func_1913();
    event_func_1914();
    event_func_1915();
    event_func_1916();
    event_func_1917();
    event_func_1918();
    event_func_1919();
    event_func_1920();
    event_func_1921();
    event_func_1922();
    event_func_1923();
    event_func_1924();
    event_func_1925();
    event_func_1926();
    event_func_1927();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end;
    event_func_1928();
    event_func_1929();
    event_func_1930();
    event_func_1931();
    event_func_1932();
    event_func_1933();
    event_func_1934();
    event_func_1935();
    event_func_1936();
    event_func_1937();
    event_func_1938();
    event_func_1939();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end;
    event_func_1940();
    event_func_1941();
    event_func_1942();
    event_func_1943();
    event_func_1944();
    event_func_1945();
    event_func_1946();
    event_func_1947();
    event_func_1948();
    event_func_1949();
    event_func_1950();
    event_func_1951();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end;
    event_func_1952();
    event_func_1953();
    event_func_1954();
    event_func_1955();
    event_func_1956();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end;
    event_func_1958();
    event_func_1959();
    event_func_1960();
    event_func_1961();
    event_func_1962();
    event_func_1963();
    event_func_1964();
    event_func_1965();
    event_func_1966();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end;
    event_func_1967();
    event_func_1968();
    event_func_1969();
    event_func_1970();
    event_func_1971();
    event_func_1972();
    event_func_1973();
    event_func_1974();
    event_func_1973();
    event_func_1975();
    event_func_1976();
    event_func_1977();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1) goto group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end;
    event_func_1978();
    event_func_1979();
    event_func_2826();
    event_func_2827();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_2828();
    event_func_1987();
    event_func_2829();
    event_func_1988();
    event_func_1989();
    event_func_2830();
    event_func_1990();
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end;
    event_func_1991();
    event_func_1992();
    event_func_1993();
    event_func_1994();
    event_func_1995();
    event_func_1996();
    event_func_2831();
    event_func_1997();
    event_func_2832();
    event_func_2833();
    event_func_2000();
    event_func_2001();
    event_func_2002();
    event_func_2003();
    event_func_2004();
    event_func_2005();
    event_func_2006();
    event_func_2007();
    event_func_2008();
    event_func_2009();
    event_func_2010();
    event_func_2011();
    event_func_2012();
    event_func_2013();
    event_func_2014();
    event_func_2015();
    event_func_2016();
    event_func_2017();
    event_func_2018();
    event_func_2019();
    event_func_2020();
    event_func_2021();
    event_func_2022();
    event_func_2023();
    event_func_2834();
    event_func_2025();
    event_func_2026();
    event_func_2027();
    event_func_2028();
    event_func_2029();
    event_func_2030();
    event_func_2031();
    event_func_2032();
    event_func_2033();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end;
    event_func_2034();
    event_func_2035();
    event_func_2036();
    event_func_2037();
    event_func_2038();
    event_func_2835();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end;
    event_func_2039();
    event_func_2040();
    event_func_2041();
    event_func_2042();
    event_func_2043();
    event_func_2044();
    event_func_2045();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end;
    event_func_2046();
    event_func_2047();
    event_func_2048();
    event_func_2049();
    event_func_2839();
    event_func_2050();
    event_func_2051();
    event_func_2052();
    event_func_2053();
    event_func_2054();
    event_func_2055();
    event_func_2056();
    event_func_2057();
    event_func_2058();
    event_func_2059();
    event_func_2060();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end;
    event_func_2061();
    event_func_2062();
    event_func_2063();
    event_func_2064();
    event_func_2065();
    event_func_2066();
    event_func_2067();
    event_func_2068();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_30_carry_object_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1) goto group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end;
    event_func_2069();
    event_func_2070();
    event_func_2071();
    event_func_2072();
    event_func_2073();
    event_func_2074();
    event_func_2075();
    event_func_2076();
    event_func_2077();
    event_func_2078();
    event_func_2079();
    event_func_2080();
    event_func_2081();
    event_func_2082();
    event_func_2083();
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_31_reflection_shield_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end;
    event_func_2084();
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end;
    event_func_2085();
    event_func_2086();
    event_func_2087();
    event_func_2088();
    event_func_2089();
    event_func_2090();
    event_func_2091();
    event_func_2092();
    event_func_2093();
    event_func_2094();
    event_func_2095();
    event_func_2840();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1_end: ;
    event_func_2841();
    event_func_2098();
    event_func_2099();
    event_func_2100();
    event_func_2101();
    event_func_2102();
    event_func_2103();
    event_func_2104();
    event_func_2105();
    event_func_2106();
    event_func_2107();
    event_func_2108();
    event_func_2109();
    event_func_2110();
    event_func_2111();
    event_func_2112();
    event_func_2113();
    event_func_2114();
    event_func_2115();
    event_func_2116();
    event_func_2117();
    event_func_2118();
    event_func_2119();
    event_func_2120();
    event_func_2121();
    event_func_2122();
    event_func_2123();
    event_func_2124();
    event_func_2125();
    event_func_2126();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1) goto group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end;
    event_func_2127();
    event_func_2129();
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1_end: ;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1) goto group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end;
    event_func_2130();
    event_func_2131();
    event_func_2132();
    event_func_2133();
    event_func_2134();
    event_func_2135();
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1_end: ;
    if (!group_main_engine_global_methods_player_player_control_check_for_being_hurt_1) goto group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end;
    event_func_2136();
    event_func_2137();
    event_func_2138();
    event_func_2139();
    event_func_2140();
    event_func_2141();
    event_func_2142();
    event_func_2143();
    event_func_1301();
    event_func_2144();
    event_func_1302();
    event_func_2145();
    event_func_2146();
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1_end: ;
    event_func_1189();
    event_func_2147();
    event_func_2148();
    event_func_2149();
    event_func_2150();
    event_func_2151();
    event_func_2152();
    event_func_2153();
    event_func_2154();
    event_func_2155();
    event_func_2156();
    event_func_2157();
    event_func_2158();
    event_func_2159();
    event_func_2160();
    event_func_2161();
    event_func_2162();
    event_func_2163();
    event_func_2164();
    event_func_2165();
    event_func_2166();
    event_func_2168();
    event_func_2169();
    event_func_2170();
    event_func_2171();
    event_func_2172();
    event_func_2173();
    event_func_2174();
    event_func_2175();
    event_func_2176();
    event_func_2177();
    event_func_2178();
    event_func_2179();
    event_func_2180();
    event_func_2181();
    event_func_2182();
    event_func_2183();
    event_func_2184();
    event_func_2185();
    event_func_2186();
    event_func_2187();
    event_func_2188();
    event_func_2189();
    event_func_2190();
    event_func_2191();
    event_func_2192();
    event_func_2193();
    event_func_2194();
    event_func_2195();
    event_func_2196();
    event_func_2197();
    event_func_2198();
    event_func_2199();
    event_func_2200();
    event_func_2201();
    event_func_2202();
    event_func_2203();
    event_func_2204();
    event_func_2205();
    event_func_2206();
    event_func_2207();
    event_func_2208();
    event_func_2209();
    event_func_2210();
    event_func_2211();
    event_func_2212();
    event_func_2213();
    event_func_2214();
    event_func_2215();
    event_func_2216();
    event_func_2217();
    event_func_2218();
    event_func_2219();
    event_func_2220();
    event_func_2221();
    event_func_2222();
    event_func_2223();
    event_func_2224();
    event_func_2225();
    event_func_2226();
    event_func_2227();
    event_func_2228();
    event_func_2229();
    event_func_2230();
    event_func_2231();
    event_func_2232();
    event_func_2233();
    event_func_2234();
    event_func_2235();
    event_func_2236();
    event_func_2237();
    event_func_2238();
    event_func_2239();
    event_func_2240();
    event_func_2241();
    event_func_2242();
    event_func_2243();
    event_func_2244();
    event_func_2245();
    group_main_engine_global_methods_player_1_end: ;
    event_func_2246();
    event_func_2247();
    event_func_2248();
    event_func_2249();
    event_func_2250();
    event_func_2251();
    event_func_2252();
    event_func_2253();
    event_func_2254();
    event_func_2255();
    event_func_2256();
    event_func_2257();
    event_func_2258();
    event_func_2259();
    event_func_2260();
    event_func_2261();
    event_func_2262();
    event_func_2263();
    event_func_2264();
    event_func_2265();
    event_func_2267();
    event_func_2268();
    event_func_2269();
    event_func_2271();
    event_func_2272();
    event_func_2273();
    event_func_2274();
    event_func_2275();
    event_func_2276();
    event_func_2277();
    event_func_2278();
    event_func_2279();
    event_func_2280();
    event_func_2281();
    event_func_2282();
    event_func_2283();
    event_func_2284();
    event_func_2285();
    event_func_2286();
    event_func_2287();
    event_func_2288();
    event_func_2289();
    event_func_2290();
    event_func_2291();
    event_func_2292();
    event_func_2293();
    event_func_2294();
    event_func_2295();
    event_func_2296();
    event_func_2297();
    event_func_2298();
    event_func_2299();
    event_func_2300();
    event_func_2301();
    event_func_2302();
    event_func_2303();
    event_func_2304();
    event_func_2305();
    event_func_2306();
    event_func_2307();
    event_func_2308();
    event_func_2298();
    event_func_2309();
    event_func_2300();
    event_func_2310();
    event_func_2311();
    event_func_2312();
    event_func_2313();
    event_func_2314();
    event_func_2315();
    event_func_2316();
    event_func_2317();
    event_func_2318();
    event_func_2319();
    event_func_2915();
    event_func_2916();
    event_func_2917();
    event_func_2918();
    event_func_2919();
    event_func_2920();
    event_func_2921();
    event_func_2922();
    event_func_2923();
    if (!group_main_engine_global_methods_common_objects_collectables_tao_stone_1) goto group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end;
    event_func_2320();
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1_end: ;
    event_func_2931();
    event_func_2322();
    event_func_2323();
    event_func_2324();
    event_func_2325();
    event_func_2325();
    event_func_2326();
    event_func_2327();
    event_func_2328();
    event_func_2329();
    event_func_2330();
    event_func_2331();
    event_func_2332();
    event_func_2333();
    event_func_2334();
    event_func_2335();
    event_func_2336();
    event_func_2337();
    event_func_2338();
    event_func_2339();
    event_func_2340();
    event_func_2341();
    event_func_2342();
    event_func_2343();
    event_func_2344();
    event_func_2345();
    event_func_2346();
    event_func_2347();
    event_func_2348();
    event_func_2349();
    event_func_2350();
    event_func_2351();
    event_func_2352();
    event_func_2353();
    event_func_2354();
    event_func_2355();
    event_func_2356();
    event_func_2357();
    event_func_2358();
    event_func_2359();
    event_func_2360();
    event_func_2361();
    event_func_2362();
    event_func_2363();
    event_func_2364();
    event_func_2365();
    event_func_2366();
    event_func_2367();
    event_func_2368();
    event_func_2369();
    event_func_2370();
    event_func_2371();
    event_func_2372();
    event_func_2373();
    event_func_2374();
    event_func_2375();
    event_func_2376();
    event_func_2377();
    event_func_2378();
    event_func_2379();
    event_func_2380();
    event_func_2380();
    event_func_2381();
    event_func_2382();
    event_func_2383();
    event_func_2384();
    event_func_2385();
    event_func_2932();
    event_func_3729();
    event_func_2933();
    event_func_2934();
    event_func_2935();
    event_func_2936();
    event_func_2937();
    event_func_2938();
    event_func_2386();
    event_func_2387();
    event_func_2388();
    event_func_2389();
    event_func_2390();
    event_func_2391();
    event_func_2392();
    event_func_2393();
    event_func_2394();
    event_func_2395();
    if (!group_main_engine_global_methods_common_objects_shields_1_wood_shield_1) goto group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end;
    event_func_2396();
    event_func_2397();
    event_func_2398();
    event_func_2399();
    event_func_2400();
    event_func_2401();
    event_func_2402();
    event_func_2403();
    event_func_2404();
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_2_flame_shield_1) goto group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end;
    event_func_2405();
    event_func_2406();
    event_func_2407();
    event_func_2408();
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1) goto group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end;
    event_func_2409();
    event_func_2410();
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_4_water_shield_1) goto group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end;
    event_func_2411();
    event_func_2412();
    event_func_2413();
    event_func_2414();
    event_func_2415();
    event_func_2416();
    event_func_2417();
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1_end: ;
    if (!group_main_engine_global_methods_common_objects_shields_5_earth_shield_1) goto group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end;
    event_func_2418();
    event_func_2419();
    event_func_2420();
    event_func_2421();
    event_func_2422();
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1_end: ;
    event_func_2946();
    event_func_2947();
    event_func_2948();
    event_func_2949();
    event_func_2423();
    event_func_2424();
    event_func_2425();
    event_func_2426();
    event_func_2427();
    event_func_2428();
    event_func_2429();
    event_func_2430();
    event_func_2431();
    event_func_2432();
    event_func_2433();
    event_func_2434();
    event_func_2435();
    event_func_2436();
    event_func_2437();
    event_func_2438();
    event_func_2439();
    event_func_2440();
    event_func_2441();
    event_func_2442();
    event_func_2443();
    event_func_2444();
    event_func_2445();
    event_func_2446();
    event_func_2447();
    event_func_2448();
    event_func_2449();
    event_func_2450();
    event_func_2451();
    event_func_2452();
    event_func_2453();
    event_func_2454();
    event_func_2455();
    event_func_2456();
    event_func_2457();
    event_func_2458();
    event_func_2459();
    event_func_2460();
    event_func_2461();
    event_func_2462();
    event_func_2463();
    event_func_2464();
    event_func_2465();
    event_func_2466();
    event_func_2467();
    event_func_2468();
    event_func_2469();
    event_func_2470();
    event_func_2471();
    event_func_2472();
    event_func_2473();
    event_func_2474();
    event_func_2475();
    event_func_2476();
    event_func_2477();
    event_func_2478();
    event_func_2479();
    event_func_2480();
    event_func_2481();
    event_func_2482();
    event_func_2483();
    event_func_2484();
    event_func_2485();
    event_func_2957();
    event_func_2958();
    event_func_2959();
    event_func_2970();
    event_func_2971();
    event_func_2972();
    event_func_2973();
    event_func_2974();
    event_func_2975();
    event_func_2976();
    event_func_2977();
    event_func_3734();
    event_func_2979();
    event_func_3735();
    event_func_3736();
    event_func_4355();
    event_func_4356();
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_13125();
    event_func_13126();
    event_func_13127();
    event_func_13128();
    event_func_13129();
    event_func_13130();
    event_func_13000();
    event_func_13011();
    event_func_13012();
    event_func_13013();
    event_func_13014();
    event_func_13015();
    event_func_13016();
    event_func_13017();
    event_func_13018();
    event_func_13019();
    event_func_13020();
    event_func_13021();
    event_func_13022();
    event_func_13023();
    event_func_13024();
    event_func_13025();
    event_func_13026();
    event_func_13027();
    event_func_13028();
    event_func_13029();
    event_func_13030();
    event_func_13031();
    event_func_13032();
    event_func_13033();
    event_func_13034();
    event_func_13035();
    event_func_13036();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_4396();
    event_func_4397();
    event_func_4398();
    event_func_4399();
    event_func_4400();
    event_func_4401();
    event_func_4402();
    event_func_4403();
    event_func_4404();
    event_func_4405();
    event_func_4406();
    event_func_4407();
    event_func_4408();
    event_func_4409();
    event_func_4410();
    event_func_4411();
    event_func_4412();
    event_func_4413();
    event_func_4414();
    event_func_4415();
    event_func_4416();
    event_func_4417();
    event_func_4418();
    event_func_4419();
    event_func_4420();
    event_func_4421();
    event_func_4422();
    event_func_4423();
    event_func_4424();
    event_func_4425();
    event_func_5687();
    event_func_5324();
    event_func_5325();
    event_func_5326();
    event_func_5327();
    event_func_5328();
    event_func_5329();
    event_func_5330();
    event_func_5331();
    event_func_5332();
    event_func_5333();
    event_func_5334();
    event_func_5335();
    event_func_5336();
    event_func_5337();
    event_func_5338();
    event_func_5339();
    event_func_5340();
    event_func_3902();
    event_func_3903();
    event_func_5341();
    event_func_5342();
    event_func_5343();
    event_func_5344();
    event_func_5345();
    event_func_5346();
    event_func_5347();
    event_func_5348();
    event_func_5349();
    event_func_7015();
    event_func_7016();
    event_func_7017();
    event_func_7018();
    event_func_7019();
    event_func_7020();
    event_func_7021();
    event_func_7022();
    event_func_7023();
    event_func_7024();
    event_func_7025();
    event_func_7026();
    event_func_7027();
    event_func_7028();
    event_func_7029();
    event_func_7030();
    event_func_7031();
    event_func_7032();
    event_func_7033();
    event_func_7034();
    event_func_13131();
    event_func_7036();
    event_func_9488();
    event_func_9489();
    event_func_9490();
    event_func_9491();
    event_func_9492();
    event_func_9493();
    event_func_9494();
    event_func_9495();
    event_func_9496();
    event_func_9497();
    event_func_9498();
    event_func_9499();
    event_func_9500();
    event_func_9501();
    event_func_9502();
    event_func_13132();
    event_func_9423();
    event_func_9504();
    event_func_9505();
    event_func_9506();
    event_func_9507();
    event_func_9508();
    event_func_9509();
    event_func_9510();
    event_func_9511();
    event_func_9512();
    event_func_11435();
    event_func_11436();
    event_func_11437();
    event_func_11438();
    event_func_11439();
    event_func_11440();
    event_func_11441();
    event_func_11442();
    event_func_11443();
    event_func_11444();
    event_func_11445();
    event_func_11446();
    event_func_11447();
    event_func_11448();
    event_func_11449();
    event_func_11450();
    event_func_11451();
    event_func_11452();
    event_func_11453();
    event_func_11454();
    event_func_11455();
    event_func_11456();
    event_func_11457();
    event_func_11458();
    event_func_13133();
    event_func_11460();
    event_func_11461();
    event_func_5240();
    event_func_5241();
    event_func_11462();
    event_func_11004();
    event_func_11005();
    event_func_11006();
    event_func_11007();
    event_func_11008();
    event_func_11009();
    event_func_11010();
    event_func_11011();
    event_func_11012();
    event_func_11013();
    event_func_11014();
    event_func_11015();
    event_func_11016();
    event_func_11017();
    event_func_11018();
    event_func_11019();
    event_func_11020();
    event_func_11021();
    event_func_13134();
    event_func_11023();
    event_func_11024();
    event_func_11025();
    event_func_11026();
    event_func_13135();
    event_func_13136();
    event_func_13137();
    event_func_13138();
    event_func_13139();
    event_func_13140();
    event_func_13141();
    event_func_13142();
    event_func_13143();
    event_func_13144();
    event_func_13145();
    event_func_13146();
    event_func_13147();
    event_func_13148();
    event_func_13149();
    event_func_13150();
    event_func_13151();
    event_func_13152();
    event_func_13153();
    event_func_13154();
    event_func_13155();
    event_func_13156();
    event_func_13157();
    event_func_13158();
    event_func_13159();
    event_func_13160();
    event_func_13161();
    event_func_13162();
    event_func_13163();
    event_func_13164();
    event_func_13165();
    event_func_10999();
    event_func_11000();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_2491();
    event_func_3000();
    event_func_13166();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_5358();
    event_func_5359();
    event_func_13041();
    event_func_5361();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_13167();
    event_func_13168();
    event_func_13169();
    event_func_13170();
    event_func_13171();
    event_func_13172();
    event_func_13173();
    event_func_13174();
    event_func_13089();
    event_func_13090();
    event_func_13091();
    event_func_13092();
    event_func_13093();
    event_func_13094();
    event_func_13175();
    event_func_13176();
    event_func_13097();
    event_func_13098();
    event_func_13099();
    event_func_13100();
    event_func_13177();
    event_func_4809();
    event_func_4810();
    event_func_4811();
    event_func_4812();
    event_func_4815();
    event_func_4816();
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end;
    event_func_4817();
    event_func_4818();
    event_func_4819();
    event_func_4820();
    event_func_4821();
    event_func_4822();
    event_func_4823();
    event_func_4824();
    event_func_4825();
    event_func_4826();
    event_func_4827();
    event_func_4828();
    event_func_4829();
    event_func_4830();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1_end: ;
    if (!group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1) goto group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end;
    event_func_4831();
    event_func_4832();
    event_func_4833();
    event_func_4834();
    event_func_4835();
    event_func_4836();
    event_func_4837();
    event_func_4838();
    event_func_4839();
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1_end: ;
    event_func_4840();
    event_func_4841();
    event_func_4842();
    event_func_4843();
    event_func_4844();
    event_func_4845();
    event_func_4846();
    event_func_4847();
    event_func_4848();
    event_func_4849();
    event_func_4850();
    event_func_4851();
    event_func_4852();
    event_func_4853();
    event_func_4854();
    event_func_4855();
    event_func_4856();
    event_func_4857();
    event_func_4858();
    event_func_4859();
    event_func_4860();
    event_func_4861();
    event_func_4862();
    event_func_4863();
    event_func_4864();
    event_func_4865();
    event_func_4866();
    event_func_4867();
    event_func_4868();
    event_func_4869();
    event_func_4870();
    event_func_4871();
    event_func_2519();
    event_func_2520();
    event_func_2521();
    event_func_2522();
    event_func_2523();
    event_func_2524();
    event_func_2525();
    event_func_2526();
    event_func_2527();
    event_func_2528();
    event_func_2529();
    event_func_2530();
    event_func_2531();
    event_func_2532();
    event_func_2533();
    event_func_2534();
    event_func_2535();
    event_func_2536();
    event_func_2537();
    event_func_2538();
    event_func_2539();
    event_func_2540();
    event_func_2541();
    event_func_2542();
    event_func_2543();
    event_func_2544();
    event_func_2545();
    event_func_2546();
    event_func_2547();
    event_func_2548();
    event_func_2549();
    event_func_2550();
    event_func_2551();
    event_func_2552();
    event_func_2553();
    event_func_2554();
    event_func_2555();
    event_func_2556();
    event_func_2557();
    event_func_2558();
    event_func_2559();
    event_func_2560();
    event_func_2561();
    event_func_2562();
    event_func_2563();
    event_func_2564();
    event_func_2565();
    event_func_2566();
    event_func_2567();
    event_func_2568();
    event_func_2569();
    event_func_2570();
    event_func_2571();
    event_func_2572();
    event_func_2573();
    event_func_2574();
    event_func_2605();
    event_func_2606();
    event_func_2607();
    event_func_2608();
    event_func_2609();
    event_func_2610();
    event_func_2611();
    event_func_2612();
    event_func_2613();
    event_func_3910();
    event_func_3911();
    event_func_2615();
    event_func_2616();
    event_func_2617();
    event_func_2618();
    event_func_2620();
    event_func_2621();
    event_func_2622();
    event_func_2623();
    event_func_2624();
    if (!group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1) goto group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end;
    event_func_2575();
    event_func_4119();
    event_func_2577();
    event_func_3243();
    event_func_3244();
    event_func_2580();
    event_func_2581();
    event_func_2582();
    event_func_2583();
    event_func_2584();
    event_func_2585();
    event_func_2586();
    event_func_2587();
    event_func_2588();
    event_func_2589();
    event_func_2590();
    event_func_2591();
    event_func_2592();
    event_func_2593();
    event_func_2594();
    event_func_2595();
    event_func_2596();
    event_func_2597();
    event_func_2598();
    event_func_2599();
    event_func_2600();
    event_func_2601();
    event_func_2602();
    event_func_3245();
    event_func_2604();
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_timer_1) goto group_main_engine_interface_and_post_processing_methods_timer_1_end;
    event_func_3956();
    group_main_engine_interface_and_post_processing_methods_timer_1_end: ;
    if (!group_main_engine_interface_and_post_processing_methods_titlecard_1) goto group_main_engine_interface_and_post_processing_methods_titlecard_1_end;
    event_func_3959();
    event_func_3960();
    event_func_3961();
    event_func_3962();
    event_func_3963();
    event_func_3964();
    event_func_3965();
    group_main_engine_interface_and_post_processing_methods_titlecard_1_end: ;
    event_func_2634();
    event_func_2635();
    event_func_2636();
    event_func_2637();
    event_func_2638();
    event_func_2639();
    event_func_2640();
    event_func_2641();
    event_func_3246();
    event_func_3247();
    event_func_3248();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_13178();
    event_func_13179();
    event_func_2644();
    event_func_3968();
    event_func_3969();
    event_func_3970();
    event_func_3971();
    event_func_3972();
    event_func_3973();
    event_func_3974();
    event_func_3975();
    event_func_3976();
    event_func_3977();
    event_func_3978();
    group_pause_1_end: ;
    event_func_145();
    event_func_146();
    event_func_147();
    event_func_148();
    event_func_149();
    event_func_150();
    if (!group_pc_controls_input_management_record_input_1) goto group_pc_controls_input_management_record_input_1_end;
    event_func_151();
    if (!group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1) goto group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1_end: ;
    if (!group_pc_controls_input_management_record_input_record_input_controller_1) goto group_pc_controls_input_management_record_input_record_input_controller_1_end;
    group_pc_controls_input_management_record_input_record_input_controller_1_end: ;
    event_func_152();
    group_pc_controls_input_management_record_input_1_end: ;
    event_func_153();
    event_func_154();
    event_func_155();
    event_func_156();
    event_func_157();
    event_func_158();
    event_func_159();
    event_func_160();
    event_func_161();
    event_func_162();
    event_func_163();
    event_func_164();
    event_func_165();
    event_func_166();
    event_func_167();
    event_func_168();
    event_func_169();
    event_func_170();
    event_func_171();
    event_func_172();
    event_func_173();
    event_func_174();
    event_func_175();
    event_func_176();
    event_func_177();
    event_func_178();
    event_func_179();
    event_func_180();
    event_func_181();
    event_func_182();
    event_func_183();
    event_func_184();
    event_func_185();
    event_func_186();
    event_func_187();
    event_func_188();
    event_func_189();
    event_func_190();
    event_func_191();
    event_func_192();
    event_func_193();
    event_func_194();
    event_func_195();
    event_func_196();
    event_func_197();
    event_func_198();
    event_func_199();
    event_func_200();
    event_func_201();
    if (!group_mac_controls_1) goto group_mac_controls_1_end;
    event_func_202();
    event_func_203();
    event_func_204();
    event_func_205();
    event_func_206();
    event_func_207();
    event_func_208();
    event_func_209();
    event_func_210();
    event_func_211();
    event_func_212();
    event_func_213();
    event_func_214();
    event_func_215();
    event_func_216();
    event_func_217();
    event_func_218();
    event_func_219();
    event_func_220();
    event_func_221();
    group_mac_controls_1_end: ;
    event_func_947();
    event_func_948();
    event_func_949();
    event_func_950();
    event_func_951();
    event_func_222();
    if (!group_sound_events_lilac_1) goto group_sound_events_lilac_1_end;
    group_sound_events_lilac_1_end: ;
    if (!group_sound_events_spade_1) goto group_sound_events_spade_1_end;
    group_sound_events_spade_1_end: ;
    if (!group_sound_events_carol_1) goto group_sound_events_carol_1_end;
    group_sound_events_carol_1_end: ;
    if (!group_sound_events_milla_1) goto group_sound_events_milla_1_end;
    group_sound_events_milla_1_end: ;
    if (!group_sound_events_torque_1) goto group_sound_events_torque_1_end;
    group_sound_events_torque_1_end: ;
    if (!group_debug_mode_1) goto group_debug_mode_1_end;
    event_func_223();
    event_func_3261();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_3262();
    event_func_648();
    event_func_649();
    event_func_650();
    event_func_651();
    event_func_225();
    event_func_952();
    event_func_953();
    event_func_954();
    event_func_652();
    event_func_3263();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
    event_func_2653();
    event_func_2619();
}
void Frames::handle_frame_62_pre_events()
{
}
void Frames::event_func_13180()
{
    // event 2_61
    {
        if (!(group_main_engine_1)) goto event_2_61_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 95);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 44);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_2_61_end: ;
}
void Frames::event_func_13181()
{
    // event 1405_61
    {
        if (!(group_main_engine_1)) goto event_1405_61_end;
        ((Active*)get_instance(gimmicksnowspiremask_3247_instances))->alterables->values.set(0, ((Active*)get_instance(gimmicksnowspiremask_3247_instances))->get_x());
        ((Active*)get_instance(gimmicksnowspiremask_3247_instances))->alterables->values.set(1, ((Active*)get_instance(gimmicksnowspiremask_3247_instances))->get_y());
        gimmicksnowspiremask_3247_instances.clear_selection();
        spread_value(gimmicksnowspiremask_3247_instances, 4, 0);
    }
    event_1405_61_end: ;
}
void Frames::event_func_13182()
{
    // event 1635_61
    {
        if (!(group_main_engine_1)) goto event_1635_61_end;
        enemydrillsat_3281_instances.clear_selection();
        for (ObjectIterator it(enemydrillsat_3281_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(11, ((Active*)*it)->get_y());
        }
    }
    event_1635_61_end: ;
}
void Frames::on_frame_62_start_events()
{
    event_func_4133();
    event_func_13180();
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
    event_func_13047();
    event_func_3269();
    event_func_3984();
    event_func_3985();
    event_func_2673();
    event_func_2674();
    event_func_2675();
    event_func_2676();
    event_func_2677();
    event_func_2678();
    event_func_2679();
    event_func_2680();
    event_func_2681();
    event_func_2682();
    event_func_2683();
    event_func_2684();
    event_func_2685();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_13181();
    event_func_13049();
    event_func_13050();
    event_func_7062();
    event_func_11500();
    event_func_13182();
    event_func_2686();
    event_func_2687();
    event_func_3990();
    event_func_13051();
    event_func_3277();
    event_func_2690();
    event_func_2691();
    event_func_13120();
    event_func_4145();
    event_func_5573();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_62_init()
{
    index = 61;
    width = 11136;
    height = 1600;
    virtual_width = 11136;
    virtual_height = 1600;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(8);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 0.5, 0.5, true, false, false);
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelglacierplatform1_3251_instances, &levelglacierplatform2_3282_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &levelglacierplatform1_3251_instances, &levelglacierplatform2_3282_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemydragonfly_944_instances, &minibosstredd_1044_instances, &enemyextractorhead_1177_instances, &enemysuperturretus_1828_instances, &enemymeteorroller_2421_instances, &enemylavasquiddebris_2677_instances, &enemylavasquid_2721_instances, &enemysaucerdebris_2761_instances, &enemysaucer_2812_instances, &enemydrillsat_3281_instances, NULL};
    qualifier_20.set(10, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0_465_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &objectexplosiveblock_2708_instances, &objectteleblockmask_3246_instances, &gimmicksnowspiremask_3247_instances, NULL};
    qualifier_7.set(29, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemydragonfly_944_instances, &minibosstreddright2_1039_instances, &minibosstreddright4_1040_instances, &minibosstreddright6_1041_instances, &minibosstreddright5_1042_instances, &minibosstreddright3_1043_instances, &minibosstredd_1044_instances, &minibosstreddright1_1045_instances, &minibosstreddleft6_1046_instances, &minibosstreddleft4_1047_instances, &minibosstreddleft5_1048_instances, &minibosstreddleft2_1049_instances, &minibosstreddleft3_1050_instances, &minibosstreddleft1_1051_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(49, &qualifier_4_instances[0]);
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
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_10.set(3, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, NULL};
    qualifier_11.set(3, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelglacierplatform1_3251_instances, &levelglacierplatform2_3282_instances, NULL};
    qualifier_12.set(4, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelglacierplatform1_3251_instances, &levelglacierplatform2_3282_instances, NULL};
    qualifier_13.set(3, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3197(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_3199(0, 168), 0);
    add_background_object(create_levelparallaxpiece5_3200(0, 224), 0);
    add_background_object(create_levelparallaxpiece6_3201(0, 304), 0);
    add_object(create_brevonmechbackground_2513(2308, 189), 1);
    add_background_object(create_bgbackrocks2_3257(6264, 344), 2);
    add_background_object(create_bgbackrocks3_3258(6248, 344), 2);
    add_background_object(create_bgbackrocks2_3257(6184, 328), 2);
    add_background_object(create_bgbackrocks3_3258(6168, 328), 2);
    add_background_object(create_bgfacility9_3267(6976, 1016), 2);
    add_background_object(create_bgfacility9_3267(6752, 1152), 2);
    add_background_object(create_bgsnowdune2_3203(5992, 344), 2);
    add_background_object(create_bgsnowdune2_3203(3344, 160), 2);
    add_background_object(create_bgsnowdune1_3206(2872, 728), 2);
    add_background_object(create_bgsnowdune1_3206(2120, 1016), 2);
    add_background_object(create_bgsnowdune1_3206(568, 992), 2);
    add_background_object(create_bgbackrocks1_3256(-288, 1424), 2);
    add_background_object(create_bgbackrocks2_3257(-32, 1424), 2);
    add_background_object(create_bgbackrocks3_3258(-304, 1424), 2);
    add_background_object(create_bgdeadtree3_3259(928, 328), 2);
    add_background_object(create_bgdeadtree2_3208(1744, 448), 2);
    add_background_object(create_bgdeadtree3_3259(1568, 408), 2);
    add_background_object(create_bgdeadtree2_3208(1440, 328), 2);
    add_background_object(create_bgdeadtree2_3208(1272, 392), 2);
    add_background_object(create_bgbackrocks1_3256(1160, 824), 2);
    add_background_object(create_bgbackrocks1_3256(1160, 952), 2);
    add_background_object(create_bgbackrocks3_3258(1144, 952), 2);
    add_background_object(create_bgbackrocks3_3258(1144, 824), 2);
    add_background_object(create_bgdeadtree_3204(88, 960), 2);
    add_background_object(create_bgdeadtree2_3208(320, 840), 2);
    add_background_object(create_bgdeadtree3_3259(472, 904), 2);
    add_background_object(create_bgdeadtree3_3259(648, 840), 2);
    add_background_object(create_bgdeadtree2_3208(792, 880), 2);
    add_background_object(create_bgfacility9_3267(3488, 592), 2);
    add_background_object(create_bgfacility9_3267(3488, 464), 2);
    add_background_object(create_bgfacility9_3267(3584, 592), 2);
    add_background_object(create_bgfacility9_3267(3584, 464), 2);
    add_background_object(create_bgfacility11_3268(3936, 624), 2);
    add_background_object(create_bgfacility11_3268(3520, 624), 2);
    add_background_object(create_bgfacility11_3268(3520, 560), 2);
    add_background_object(create_bgfacility11_3268(3520, 496), 2);
    add_background_object(create_bgfacility11_3268(3864, 168), 2);
    add_background_object(create_bgfacility11_3268(3864, 104), 2);
    add_background_object(create_bgfacility9_3267(3832, 104), 2);
    add_background_object(create_bgfacility9_3267(3928, 104), 2);
    add_background_object(create_bgfacility9_3267(4000, 592), 2);
    add_background_object(create_bgfacility9_3267(4000, 464), 2);
    add_background_object(create_bgfacility11_3268(3936, 560), 2);
    add_background_object(create_bgfacility11_3268(3936, 496), 2);
    add_background_object(create_bgfacility9_3267(3408, 104), 2);
    add_background_object(create_bgfacility11_3268(3344, 104), 2);
    add_background_object(create_bgfacility11_3268(3344, 168), 2);
    add_background_object(create_bgfacility10_3269(3408, 72), 2);
    add_background_object(create_bgsolarpanelpipe_3205(3424, 624), 2);
    add_background_object(create_bgsolarpanelpipe_3205(3424, 528), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2672, 880), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2672, 784), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2232, 1040), 2);
    add_background_object(create_bgsolarpanelpipe_3205(2232, 944), 2);
    add_background_object(create_bgfacility9_3267(3904, 592), 2);
    add_background_object(create_bgfacility9_3267(3904, 464), 2);
    add_background_object(create_bgbackrocks1_3256(1672, 832), 2);
    add_background_object(create_bgbackrocks2_3257(1928, 832), 2);
    add_background_object(create_bgsolarpanelpipe_3205(4192, 288), 2);
    add_background_object(create_bgsolarpanelpipe_3205(4192, 192), 2);
    add_background_object(create_bgsolarpanelpipe_3205(4192, 112), 2);
    add_background_object(create_bgsnowdune1_3206(960, 984), 2);
    add_background_object(create_bgsnowdune2_3203(1744, 600), 2);
    add_background_object(create_bgsnowdune1_3206(1224, 472), 2);
    add_background_object(create_bgsnowdune2_3203(3624, 600), 2);
    add_background_object(create_bgsnowdune2_3203(4384, 480), 2);
    add_background_object(create_bgsnowdune1_3206(4632, 96), 2);
    add_background_object(create_bgsnowdune1_3206(5400, 216), 2);
    add_background_object(create_bgdeadtree2_3208(5240, 64), 2);
    add_background_object(create_bgdeadtree_3204(5648, 192), 2);
    add_background_object(create_bgdeadtree3_3259(4768, 328), 2);
    add_background_object(create_bgdeadtree_3204(4056, 120), 2);
    add_background_object(create_bgfacility9_3267(6032, 248), 2);
    add_background_object(create_bgfacility11_3268(5904, 312), 2);
    add_background_object(create_bgfacility11_3268(5904, 248), 2);
    add_background_object(create_bgfacility9_3267(5872, 248), 2);
    add_background_object(create_bgfacility9_3267(6032, 120), 2);
    add_background_object(create_bgfacility11_3268(5904, 184), 2);
    add_background_object(create_bgfacility11_3268(5904, 120), 2);
    add_background_object(create_bgfacility9_3267(5872, 120), 2);
    add_background_object(create_bgfacility11_3268(5968, 312), 2);
    add_background_object(create_bgfacility11_3268(5968, 248), 2);
    add_background_object(create_bgfacility11_3268(5968, 184), 2);
    add_background_object(create_bgfacility11_3268(5968, 120), 2);
    add_background_object(create_bgfacility11_3268(5968, 376), 2);
    add_background_object(create_bgfacility9_3267(6032, 376), 2);
    add_background_object(create_bgsnowdune2_3203(6264, 384), 2);
    add_background_object(create_bgsnowdune1_3206(6328, 1184), 2);
    add_background_object(create_bgfacility11_3268(6784, 1152), 2);
    add_background_object(create_bgfacility11_3268(6848, 1152), 2);
    add_background_object(create_bgfacility11_3268(6848, 1088), 2);
    add_background_object(create_bgfacility11_3268(6848, 1024), 2);
    add_background_object(create_bgfacility11_3268(6784, 1216), 2);
    add_background_object(create_bgfacility11_3268(6784, 1280), 2);
    add_background_object(create_bgfacility11_3268(6848, 1216), 2);
    add_background_object(create_bgfacility11_3268(6848, 1280), 2);
    add_background_object(create_bgsnowdune2_3203(6624, 1240), 2);
    add_background_object(create_bgfacility11_3268(6912, 1152), 2);
    add_background_object(create_bgfacility11_3268(6912, 1088), 2);
    add_background_object(create_bgfacility11_3268(6912, 1024), 2);
    add_background_object(create_bgfacility11_3268(6912, 1216), 2);
    add_background_object(create_bgfacility9_3267(6496, 512), 2);
    add_background_object(create_bgfacility9_3267(6496, 640), 2);
    add_background_object(create_bgfacility11_3268(6432, 704), 2);
    add_background_object(create_bgfacility11_3268(6432, 640), 2);
    add_background_object(create_bgfacility11_3268(6432, 576), 2);
    add_background_object(create_bgfacility11_3268(6432, 512), 2);
    add_background_object(create_bgfacility9_3267(6400, 512), 2);
    add_background_object(create_bgfacility9_3267(6400, 640), 2);
    add_background_object(create_bgfacility9_3267(6120, 568), 2);
    add_background_object(create_bgfacility9_3267(6120, 696), 2);
    add_background_object(create_bgfacility11_3268(5992, 760), 2);
    add_background_object(create_bgfacility11_3268(5992, 696), 2);
    add_background_object(create_bgfacility11_3268(5992, 632), 2);
    add_background_object(create_bgfacility11_3268(5992, 568), 2);
    add_background_object(create_bgfacility11_3268(6056, 760), 2);
    add_background_object(create_bgfacility11_3268(6056, 696), 2);
    add_background_object(create_bgfacility11_3268(6056, 632), 2);
    add_background_object(create_bgfacility11_3268(6056, 568), 2);
    add_background_object(create_bgfacility9_3267(6360, 896), 2);
    add_background_object(create_bgfacility11_3268(6296, 960), 2);
    add_background_object(create_bgfacility11_3268(6296, 896), 2);
    add_background_object(create_bgfacility9_3267(6264, 896), 2);
    add_background_object(create_bgfacility9_3267(6360, 1024), 2);
    add_background_object(create_bgfacility11_3268(6296, 1088), 2);
    add_background_object(create_bgfacility11_3268(6296, 1024), 2);
    add_background_object(create_bgfacility9_3267(6264, 1024), 2);
    add_background_object(create_bgfacility11_3268(6296, 1152), 2);
    add_background_object(create_bgfacility9_3267(6360, 1152), 2);
    add_background_object(create_bgfacility9_3267(6264, 1152), 2);
    add_background_object(create_bgfacility9_3267(7544, 1120), 2);
    add_background_object(create_bgfacility11_3268(7576, 1152), 2);
    add_background_object(create_bgfacility11_3268(7640, 1152), 2);
    add_background_object(create_bgfacility11_3268(7704, 1152), 2);
    add_background_object(create_bgfacility9_3267(7768, 1120), 2);
    add_background_object(create_bgfacility9_3267(7768, 992), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7448, 1272), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7448, 1208), 2);
    add_background_object(create_bgsolarpanelpipe_3205(7448, 1144), 2);
    add_background_object(create_bgdeadtree_3204(7056, 1104), 2);
    add_background_object(create_bgsnowdune2_3203(7048, 1240), 2);
    add_background_object(create_bgbackrocks1_3256(3064, 96), 2);
    add_background_object(create_bgbackrocks2_3257(3320, 96), 2);
    add_background_object(create_bgfacility11_3268(8624, 1272), 2);
    add_background_object(create_bgfacility11_3268(8624, 1208), 2);
    add_background_object(create_bgfacility11_3268(8624, 1144), 2);
    add_background_object(create_bgfacility9_3267(8592, 1208), 2);
    add_background_object(create_bgfacility9_3267(8592, 1080), 2);
    add_background_object(create_bgfacility11_3268(8624, 1080), 2);
    add_background_object(create_bgfacility9_3267(8688, 1208), 2);
    add_background_object(create_bgfacility9_3267(8688, 1080), 2);
    add_background_object(create_bgfacility10_3269(8592, 1048), 2);
    add_background_object(create_bgfacility10_3269(8688, 1048), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8336, 1288), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8336, 1144), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8488, 1288), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8488, 1208), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8024, 1288), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8024, 1144), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8176, 1288), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8176, 1208), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8768, 1144), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8768, 1000), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8872, 1144), 2);
    add_background_object(create_bgsolarpanelpipe_3205(8872, 1064), 2);
    add_background_object(create_bgsnowdune1_3206(8960, 856), 2);
    add_background_object(create_bgfacility11_3268(9312, 960), 2);
    add_background_object(create_bgfacility11_3268(9376, 960), 2);
    add_background_object(create_bgfacility11_3268(9312, 896), 2);
    add_background_object(create_bgfacility11_3268(9376, 896), 2);
    add_background_object(create_bgfacility11_3268(9312, 832), 2);
    add_background_object(create_bgfacility11_3268(9376, 832), 2);
    add_background_object(create_bgfacility11_3268(9312, 768), 2);
    add_background_object(create_bgfacility11_3268(9376, 768), 2);
    add_background_object(create_bgfacility9_3267(9440, 896), 2);
    add_background_object(create_bgfacility9_3267(9440, 768), 2);
    add_background_object(create_bgfacility9_3267(9280, 896), 2);
    add_background_object(create_bgfacility9_3267(9280, 768), 2);
    add_background_object(create_bgfacility11_3268(10368, 1472), 2);
    add_background_object(create_bgfacility11_3268(10368, 1408), 2);
    add_background_object(create_bgfacility9_3267(10432, 1408), 2);
    add_background_object(create_bgfacility9_3267(10336, 1408), 2);
    add_background_object(create_bgfacility10_3269(10336, 1376), 2);
    add_background_object(create_bgfacility10_3269(10432, 1376), 2);
    add_background_object(create_bgfacility11_3268(9632, 1024), 2);
    add_background_object(create_bgfacility11_3268(9696, 1024), 2);
    add_background_object(create_bgfacility11_3268(9632, 960), 2);
    add_background_object(create_bgfacility11_3268(9696, 960), 2);
    add_background_object(create_bgfacility11_3268(9632, 896), 2);
    add_background_object(create_bgfacility11_3268(9696, 896), 2);
    add_background_object(create_bgfacility11_3268(9632, 832), 2);
    add_background_object(create_bgfacility11_3268(9696, 832), 2);
    add_background_object(create_bgfacility9_3267(9760, 960), 2);
    add_background_object(create_bgfacility9_3267(9760, 832), 2);
    add_background_object(create_bgfacility9_3267(9600, 960), 2);
    add_background_object(create_bgfacility9_3267(9600, 832), 2);
    add_background_object(create_bgfacility11_3268(9952, 960), 2);
    add_background_object(create_bgfacility11_3268(10016, 960), 2);
    add_background_object(create_bgfacility11_3268(9952, 896), 2);
    add_background_object(create_bgfacility11_3268(10016, 896), 2);
    add_background_object(create_bgfacility11_3268(9952, 832), 2);
    add_background_object(create_bgfacility11_3268(10016, 832), 2);
    add_background_object(create_bgfacility11_3268(9952, 768), 2);
    add_background_object(create_bgfacility11_3268(10016, 768), 2);
    add_background_object(create_bgfacility9_3267(10080, 896), 2);
    add_background_object(create_bgfacility9_3267(10080, 768), 2);
    add_background_object(create_bgfacility9_3267(9920, 896), 2);
    add_background_object(create_bgfacility9_3267(9920, 768), 2);
    add_background_object(create_bgfacility11_3268(9632, 768), 2);
    add_background_object(create_bgfacility11_3268(9696, 768), 2);
    add_background_object(create_bgfacility9_3267(9760, 704), 2);
    add_background_object(create_bgfacility9_3267(9600, 704), 2);
    add_background_object(create_bgfacility9_3267(10144, 896), 2);
    add_background_object(create_bgfacility9_3267(10144, 768), 2);
    add_background_object(create_bgfacility11_3268(10176, 960), 2);
    add_background_object(create_bgfacility11_3268(10176, 896), 2);
    add_background_object(create_bgfacility11_3268(10176, 832), 2);
    add_background_object(create_bgfacility11_3268(10176, 768), 2);
    add_background_object(create_bgfacility9_3267(10240, 896), 2);
    add_background_object(create_bgfacility9_3267(10240, 768), 2);
    add_background_object(create_bgfacility11_3268(10176, 1152), 2);
    add_background_object(create_bgfacility11_3268(10176, 1088), 2);
    add_background_object(create_bgfacility11_3268(10176, 1024), 2);
    add_background_object(create_bgfacility9_3267(10240, 1152), 2);
    add_background_object(create_bgfacility9_3267(10240, 1024), 2);
    add_background_object(create_bgfacility11_3268(10176, 1408), 2);
    add_background_object(create_bgfacility11_3268(10176, 1344), 2);
    add_background_object(create_bgfacility11_3268(10176, 1280), 2);
    add_background_object(create_bgfacility9_3267(10240, 1408), 2);
    add_background_object(create_bgfacility9_3267(10240, 1280), 2);
    add_background_object(create_bgfacility11_3268(10176, 1216), 2);
    add_background_object(create_bgfacility11_3268(10176, 1472), 2);
    add_background_object(create_bgfacility11_3268(10656, 1472), 2);
    add_background_object(create_bgfacility11_3268(10656, 1408), 2);
    add_background_object(create_bgfacility9_3267(10624, 1408), 2);
    add_background_object(create_bgfacility9_3267(10720, 1408), 2);
    add_background_object(create_bgfacility11_3268(10848, 1472), 2);
    add_background_object(create_bgfacility11_3268(10848, 1408), 2);
    add_background_object(create_bgfacility9_3267(10816, 1408), 2);
    add_background_object(create_bgfacility9_3267(10912, 1408), 2);
    add_background_object(create_bgfacility11_3268(11040, 1472), 2);
    add_background_object(create_bgfacility11_3268(11040, 1408), 2);
    add_background_object(create_bgfacility9_3267(11008, 1408), 2);
    add_background_object(create_bgfacility9_3267(11104, 1408), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(11240, 85), 2);
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
    add_object(create_gimmicksnowspire_3209(-472, 832), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_gimmicksnakedrill_3211(-240, 1944), 2);
    add_object(create_bgsolarpanel_3210(3415, 623), 2);
    add_object(create_bgsolarpanel_3210(3415, 559), 2);
    add_object(create_bgsolarpanel_3210(2663, 879), 2);
    add_object(create_bgsolarpanel_3210(2663, 815), 2);
    add_object(create_bgsolarpanel_3210(2223, 1039), 2);
    add_object(create_bgsolarpanel_3210(2223, 975), 2);
    add_object(create_bgsolarpanel_3210(4183, 287), 2);
    add_object(create_bgsolarpanel_3210(4183, 223), 2);
    add_object(create_bgsolarpanel_3210(4183, 143), 2);
    add_object(create_bgsolarpanel_3210(7439, 1255), 2);
    add_object(create_bgsolarpanel_3210(7439, 1175), 2);
    add_object(create_bgsolarpanel_3210(8327, 1255), 2);
    add_object(create_bgsolarpanel_3210(8327, 1191), 2);
    add_object(create_bgsolarpanel_3210(8327, 1095), 2);
    add_object(create_bgsolarpanel_3210(8479, 1255), 2);
    add_object(create_bgsolarpanel_3210(8479, 1159), 2);
    add_object(create_bgsolarpanel_3210(8479, 1095), 2);
    add_object(create_bgsolarpanel_3210(8015, 1255), 2);
    add_object(create_bgsolarpanel_3210(8015, 1191), 2);
    add_object(create_bgsolarpanel_3210(8015, 1095), 2);
    add_object(create_bgsolarpanel_3210(8167, 1255), 2);
    add_object(create_bgsolarpanel_3210(8167, 1159), 2);
    add_object(create_bgsolarpanel_3210(8167, 1095), 2);
    add_object(create_bgsolarpanel_3210(8759, 1111), 2);
    add_object(create_bgsolarpanel_3210(8759, 1047), 2);
    add_object(create_bgsolarpanel_3210(8759, 951), 2);
    add_object(create_bgsolarpanel_3210(8863, 1111), 2);
    add_object(create_bgsolarpanel_3210(8863, 1015), 2);
    add_object(create_bgsolarpanel_3210(8863, 951), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_bgrocks1_3213(10264, 1544), 3);
    add_background_object(create_bgrocks1_3213(10624, 1216), 3);
    add_background_object(create_bgrocks1_3213(10880, 1216), 3);
    add_background_object(create_bgrocks1_3213(10624, 1088), 3);
    add_background_object(create_bgrocks1_3213(10880, 1088), 3);
    add_background_object(create_bgrocks1_3213(8448, 1344), 3);
    add_background_object(create_bgsnowflat_3235(8576, 1336), 3);
    add_background_object(create_bgrocks13_3212(7104, 1280), 3);
    add_background_object(create_bgrocks1_3213(7424, 1344), 3);
    add_background_object(create_bgsnow1_3224(7424, 1328), 3);
    add_background_object(create_bgrocks1_3213(6912, 1472), 3);
    add_background_object(create_bgrocks1_3213(6912, 1344), 3);
    add_background_object(create_bgsnowmound_3207(7320, 1304), 3);
    add_background_object(create_bgsnowmound_3207(7272, 1312), 3);
    add_background_object(create_bgsnowmound_3207(7224, 1320), 3);
    add_background_object(create_bgrocks1_3213(7680, 1344), 3);
    add_background_object(create_bgsnow1_3224(7808, 1336), 3);
    add_background_object(create_bgrocks10_3228(7504, 904), 3);
    add_background_object(create_bgrocks13_3212(6464, 1280), 3);
    add_background_object(create_bgrocks13_3212(6400, 1280), 3);
    add_background_object(create_bgsnowflat_3235(6400, 1272), 3);
    add_background_object(create_bgrocks1_3213(6656, 1344), 3);
    add_background_object(create_bgsnow1_3224(6784, 1328), 3);
    add_background_object(create_bgrocks4_3217(6144, 1152), 3);
    add_background_object(create_bgsnow2_3238(6144, 1144), 3);
    add_background_object(create_bgrocks7_3219(6272, 1184), 3);
    add_background_object(create_bgrocks13_3212(6624, 736), 3);
    add_background_object(create_bgrocks6_3226(6368, 736), 3);
    add_background_object(create_bgrocks3_3220(6496, 672), 3);
    add_background_object(create_bgrocks9_3227(6016, 576), 3);
    add_background_object(create_bgrocks16_3260(6400, 512), 3);
    add_background_object(create_bgsnowmound_3207(5472, 288), 3);
    add_background_object(create_bgrocks13_3212(5888, 384), 3);
    add_background_object(create_bgrocks13_3212(5952, 384), 3);
    add_background_object(create_bgsnowflat_3235(5888, 376), 3);
    add_background_object(create_bgrocks1_3213(5888, 448), 3);
    add_background_object(create_bgsnow1_3224(6016, 432), 3);
    add_background_object(create_bgsnowmound_3207(5168, 288), 3);
    add_background_object(create_bgrocks11_3215(4728, 200), 3);
    add_background_object(create_bgrocks1_3213(4600, 200), 3);
    add_background_object(create_bgrocks1_3213(4344, 200), 3);
    add_background_object(create_bgsnowmound_3207(4368, 544), 3);
    add_background_object(create_bgsnowmound_3207(4240, 544), 3);
    add_background_object(create_bgsnowmound_3207(4104, 616), 3);
    add_background_object(create_bgrocks13_3212(4096, 368), 3);
    add_background_object(create_bgrocks13_3212(4160, 368), 3);
    add_background_object(create_bgsnowflat_3235(4096, 352), 3);
    add_background_object(create_bgrocks11_3215(1664, 960), 3);
    add_background_object(create_bgsnowmound_3207(3536, 216), 3);
    add_background_object(create_bgrocks8_3231(3424, 256), 3);
    add_background_object(create_bgrocks8_3231(3360, 240), 3);
    add_background_object(create_bgrocks8_3231(3488, 240), 3);
    add_background_object(create_bgsnow9_3222(3600, 232), 3);
    add_background_object(create_bgsnow8_3229(3360, 232), 3);
    add_background_object(create_bgsnowmound_3207(3704, 672), 3);
    add_background_object(create_bgrocks1_3213(3328, 704), 3);
    add_background_object(create_bgsnowmound_3207(2976, 536), 3);
    add_background_object(create_bgsnowmound_3207(3088, 728), 3);
    add_background_object(create_bgsnowmound_3207(3280, 672), 3);
    add_background_object(create_bgsnowmound_3207(2936, 800), 3);
    add_background_object(create_bgsnowslope1_3225(2728, 872), 3);
    add_background_object(create_bgrocks1_3213(1880, 1088), 3);
    add_background_object(create_bgrocks1_3213(2344, 1088), 3);
    add_background_object(create_bgrocks5_3221(2432, 960), 3);
    add_background_object(create_bgrocks14_3216(2368, 992), 3);
    add_background_object(create_bgrocks1_3213(2304, 1104), 3);
    add_background_object(create_bgrocks1_3213(2048, 1104), 3);
    add_background_object(create_bgrocks4_3217(1920, 960), 3);
    add_background_object(create_bgrocks12_3240(2048, 992), 3);
    add_background_object(create_bgrocks17_3270(2320, 576), 3);
    add_background_object(create_bgrocks16_3260(2464, 576), 3);
    add_background_object(create_bgrocks13_3212(2336, 576), 3);
    add_background_object(create_bgrocks13_3212(2400, 576), 3);
    add_background_object(create_bgsnowslope2_3223(1192, 824), 3);
    add_background_object(create_bgsnowslope1_3225(1192, 1000), 3);
    add_background_object(create_bgsnowmound_3207(-160, 1936), 3);
    add_background_object(create_bgsnowmound_3207(-416, 1936), 3);
    add_background_object(create_bgrocks1_3213(0, 1088), 3);
    add_background_object(create_bgrocks1_3213(0, 1216), 3);
    add_background_object(create_bgsnow1_3224(128, 1072), 3);
    add_background_object(create_bgsnow1_3224(0, 1072), 3);
    add_background_object(create_bgdeadtree_3204(-544, 1400), 3);
    add_background_object(create_bgrocks1_3213(-592, 1392), 3);
    add_background_object(create_bgrocks10_3228(-544, 1392), 3);
    add_background_object(create_bgrocks11_3215(-568, 1400), 3);
    add_background_object(create_bgrocks12_3240(-528, 1408), 3);
    add_background_object(create_bgrocks13_3212(-520, 1424), 3);
    add_background_object(create_bgrocks14_3216(-536, 1424), 3);
    add_background_object(create_bgrocks2_3218(-528, 1400), 3);
    add_background_object(create_bgrocks3_3220(-536, 1400), 3);
    add_background_object(create_bgrocks4_3217(-528, 1392), 3);
    add_background_object(create_bgrocks5_3221(-528, 1392), 3);
    add_background_object(create_bgrocks6_3226(-528, 1424), 3);
    add_background_object(create_bgrocks7_3219(-520, 1424), 3);
    add_background_object(create_bgrocks8_3231(-528, 1432), 3);
    add_background_object(create_bgrocks9_3227(-472, 1392), 3);
    add_background_object(create_bgsnow1_3224(-520, 1416), 3);
    add_background_object(create_bgsnow10_3244(-496, 1408), 3);
    add_background_object(create_bgsnow11_3230(-488, 1400), 3);
    add_background_object(create_bgsnow12_3245(-488, 1424), 3);
    add_background_object(create_bgsnow2_3238(-520, 1432), 3);
    add_background_object(create_bgsnow3_3237(-520, 1424), 3);
    add_background_object(create_bgsnow4_3239(-520, 1424), 3);
    add_background_object(create_bgsnow5_3232(-504, 1432), 3);
    add_background_object(create_bgsnow6_3233(-504, 1424), 3);
    add_background_object(create_bgsnow7_3236(-496, 1432), 3);
    add_background_object(create_bgsnow8_3229(-480, 1440), 3);
    add_background_object(create_bgsnow9_3222(-448, 1440), 3);
    add_background_object(create_bgsnowdune1_3206(-568, 1424), 3);
    add_background_object(create_bgsnowdune2_3203(-576, 1416), 3);
    add_background_object(create_bgsnowflat_3235(-504, 1440), 3);
    add_background_object(create_bgsnowmound_3207(-512, 1448), 3);
    add_background_object(create_bgsnowslope1_3225(-496, 1424), 3);
    add_background_object(create_bgsnowslope2_3223(-488, 1440), 3);
    add_background_object(create_bgsolarpanelpipe_3205(-464, 1440), 3);
    add_background_object(create_bgsnow1_3224(-128, 1072), 3);
    add_background_object(create_bgspiralslide_3241(2480, 656), 3);
    add_background_object(create_bgspiralslidebottom_3243(2480, 800), 3);
    add_background_object(create_bgrocks1_3213(256, 1088), 3);
    add_background_object(create_bgrocks1_3213(256, 1216), 3);
    add_background_object(create_bgsnow1_3224(384, 1072), 3);
    add_background_object(create_bgsnow1_3224(256, 1072), 3);
    add_background_object(create_bgrocks1_3213(0, 1344), 3);
    add_background_object(create_bgrocks1_3213(256, 1344), 3);
    add_background_object(create_bgrocks1_3213(0, 1472), 3);
    add_background_object(create_bgrocks1_3213(256, 1472), 3);
    add_background_object(create_bgrocks1_3213(512, 1088), 3);
    add_background_object(create_bgrocks1_3213(512, 1216), 3);
    add_background_object(create_bgsnow1_3224(640, 1072), 3);
    add_background_object(create_bgsnow1_3224(512, 1072), 3);
    add_background_object(create_bgrocks1_3213(512, 1344), 3);
    add_background_object(create_bgrocks1_3213(512, 1472), 3);
    add_background_object(create_bgrocks1_3213(768, 1088), 3);
    add_background_object(create_bgrocks1_3213(768, 1216), 3);
    add_background_object(create_bgsnow1_3224(896, 1072), 3);
    add_background_object(create_bgsnow1_3224(768, 1072), 3);
    add_background_object(create_bgrocks1_3213(768, 1344), 3);
    add_background_object(create_bgrocks1_3213(768, 1472), 3);
    add_background_object(create_bgrocks1_3213(1024, 1088), 3);
    add_background_object(create_bgrocks1_3213(1024, 1216), 3);
    add_background_object(create_bgsnow1_3224(1152, 1072), 3);
    add_background_object(create_bgsnow1_3224(1024, 1072), 3);
    add_background_object(create_bgrocks1_3213(1024, 1344), 3);
    add_background_object(create_bgrocks1_3213(1024, 1472), 3);
    add_background_object(create_bgrocks1_3213(1280, 1216), 3);
    add_background_object(create_bgrocks1_3213(1280, 1344), 3);
    add_background_object(create_bgrocks1_3213(1280, 1472), 3);
    add_background_object(create_bgrocks1_3213(1536, 832), 3);
    add_background_object(create_bgrocks1_3213(1536, 960), 3);
    add_background_object(create_bgrocks1_3213(1280, 1088), 3);
    add_background_object(create_bgrocks10_3228(1264, 832), 3);
    add_background_object(create_bgrocks10_3228(1264, 960), 3);
    add_background_object(create_bgrocks1_3213(1280, 704), 3);
    add_background_object(create_bgrocks1_3213(1024, 704), 3);
    add_background_object(create_bgrocks10_3228(1008, 704), 3);
    add_background_object(create_bgrocks1_3213(1280, 576), 3);
    add_background_object(create_bgrocks1_3213(1024, 576), 3);
    add_background_object(create_bgrocks10_3228(1008, 576), 3);
    add_background_object(create_bgsnow1_3224(1024, 560), 3);
    add_background_object(create_bgsnow9_3222(1008, 560), 3);
    add_background_object(create_bgsnow1_3224(1152, 560), 3);
    add_background_object(create_bgsnow1_3224(1280, 560), 3);
    add_background_object(create_bgsnow1_3224(1408, 560), 3);
    add_background_object(create_bgrocks4_3217(1536, 576), 3);
    add_background_object(create_bgrocks2_3218(1664, 608), 3);
    add_background_object(create_bgrocks7_3219(1792, 672), 3);
    add_background_object(create_bgrocks1_3213(1536, 704), 3);
    add_background_object(create_bgrocks1_3213(1792, 704), 3);
    add_background_object(create_bgsnow1_3224(1920, 688), 3);
    add_background_object(create_bgrocks9_3227(2048, 704), 3);
    add_background_object(create_bgsnow8_3229(2048, 688), 3);
    add_background_object(create_bgrocks8_3231(1920, 824), 3);
    add_background_object(create_bgrocks1_3213(2560, 576), 3);
    add_background_object(create_bgrocks10_3228(2544, 576), 3);
    add_background_object(create_bgrocks1_3213(2560, 448), 3);
    add_background_object(create_bgrocks10_3228(2544, 448), 3);
    add_background_object(create_bgrocks1_3213(2048, 320), 3);
    add_background_object(create_bgrocks10_3228(2032, 320), 3);
    add_background_object(create_bgrocks1_3213(2560, 320), 3);
    add_background_object(create_bgrocks8_3231(2048, 432), 3);
    add_background_object(create_bgrocks8_3231(2176, 432), 3);
    add_background_object(create_bgrocks1_3213(2048, 192), 3);
    add_background_object(create_bgrocks10_3228(2032, 192), 3);
    add_background_object(create_bgrocks1_3213(2560, 192), 3);
    add_background_object(create_bgrocks1_3213(2304, 320), 3);
    add_background_object(create_bgrocks8_3231(2304, 432), 3);
    add_background_object(create_bgrocks8_3231(2432, 432), 3);
    add_background_object(create_bgrocks1_3213(2304, 192), 3);
    add_background_object(create_bgrocks1_3213(2048, 64), 3);
    add_background_object(create_bgrocks10_3228(2032, 64), 3);
    add_background_object(create_bgrocks1_3213(2560, 64), 3);
    add_background_object(create_bgrocks1_3213(2304, 64), 3);
    add_background_object(create_bgrocks1_3213(2048, -64), 3);
    add_background_object(create_bgrocks10_3228(2032, -64), 3);
    add_background_object(create_bgrocks1_3213(2560, -64), 3);
    add_background_object(create_bgrocks1_3213(2304, -64), 3);
    add_background_object(create_bgsnow1_3224(2336, 560), 3);
    add_background_object(create_bgsnow8_3229(2464, 560), 3);
    add_background_object(create_bgsnow9_3222(2320, 560), 3);
    add_background_object(create_bgspiralslidetop_3242(2464, 560), 3);
    add_background_object(create_bgrocks1_3213(1280, 832), 3);
    add_background_object(create_bgrocks1_3213(1280, 960), 3);
    add_background_object(create_bgrocks1_3213(1536, 1088), 3);
    add_background_object(create_bgrocks1_3213(1792, 1088), 3);
    add_background_object(create_bgrocks1_3213(1536, 1216), 3);
    add_background_object(create_bgrocks1_3213(1792, 1216), 3);
    add_background_object(create_bgrocks1_3213(2048, 1216), 3);
    add_background_object(create_bgrocks1_3213(2304, 1216), 3);
    add_background_object(create_bgrocks1_3213(2560, 960), 3);
    add_background_object(create_bgrocks1_3213(2560, 1088), 3);
    add_background_object(create_bgrocks1_3213(2560, 1216), 3);
    add_background_object(create_bgsnow1_3224(2560, 944), 3);
    add_background_object(create_bgsnow1_3224(2688, 944), 3);
    add_background_object(create_bgspiralslide_3241(2064, 784), 3);
    add_background_object(create_bgspiralslidebottom_3243(2064, 928), 3);
    add_background_object(create_bgspiralslidetop_3242(2048, 688), 3);
    add_background_object(create_bgrocks1_3213(2816, 960), 3);
    add_background_object(create_bgrocks1_3213(2816, 832), 3);
    add_background_object(create_bgrocks1_3213(2816, 1088), 3);
    add_background_object(create_bgrocks10_3228(2800, 832), 3);
    add_background_object(create_bgsnow1_3224(2816, 816), 3);
    add_background_object(create_bgsnow9_3222(2800, 816), 3);
    add_background_object(create_bgrocks9_3227(2816, 576), 3);
    add_background_object(create_bgrocks9_3227(2816, 448), 3);
    add_background_object(create_bgrocks17_3270(2912, 568), 3);
    add_background_object(create_bgrocks16_3260(3056, 568), 3);
    add_background_object(create_bgrocks13_3212(2928, 568), 3);
    add_background_object(create_bgrocks13_3212(2992, 568), 3);
    add_background_object(create_bgsnow1_3224(2928, 552), 3);
    add_background_object(create_bgsnow8_3229(3056, 552), 3);
    add_background_object(create_bgsnow9_3222(2912, 552), 3);
    add_background_object(create_bgsnow1_3224(2944, 816), 3);
    add_background_object(create_bgrocks1_3213(3072, 832), 3);
    add_background_object(create_bgrocks13_3212(3072, 768), 3);
    add_background_object(create_bgrocks13_3212(3136, 768), 3);
    add_background_object(create_bgrocks11_3215(3200, 704), 3);
    add_background_object(create_bgrocks1_3213(3072, 960), 3);
    add_background_object(create_bgrocks17_3270(3056, 768), 3);
    add_background_object(create_bgrocks1_3213(3328, 832), 3);
    add_background_object(create_bgrocks1_3213(3328, 960), 3);
    add_background_object(create_bgsnow1_3224(3200, 688), 3);
    add_background_object(create_bgsnowflat_3235(3328, 688), 3);
    add_background_object(create_bgrocks11_3215(2688, 320), 3);
    add_background_object(create_bgrocks1_3213(2816, 192), 3);
    add_background_object(create_bgrocks1_3213(2816, 64), 3);
    add_background_object(create_bgrocks1_3213(2816, -64), 3);
    add_background_object(create_bgrocks1_3213(3072, 192), 3);
    add_background_object(create_bgrocks1_3213(3072, -24), 3);
    add_background_object(create_bgrocks9_3227(3328, 192), 3);
    add_background_object(create_bgrocks9_3227(3328, -24), 3);
    add_background_object(create_bgrocks9_3227(2944, 320), 3);
    add_background_object(create_bgsnowflat_3235(3456, 688), 3);
    add_background_object(create_bgrocks1_3213(3584, 704), 3);
    add_background_object(create_bgsnow1_3224(3584, 688), 3);
    add_background_object(create_bgsnow1_3224(3712, 688), 3);
    add_background_object(create_bgrocks1_3213(3840, 704), 3);
    add_background_object(create_bgsnowflat_3235(3840, 688), 3);
    add_background_object(create_bgsnowflat_3235(3968, 688), 3);
    add_background_object(create_bgrocks1_3213(3840, 368), 3);
    add_background_object(create_bgrocks1_3213(3840, 240), 3);
    add_background_object(create_bgrocks1_3213(3840, -24), 3);
    add_background_object(create_bgrocks10_3228(3824, 368), 3);
    add_background_object(create_bgrocks10_3228(3824, 240), 3);
    add_background_object(create_bgrocks10_3228(3824, -24), 3);
    add_background_object(create_bgrocks17_3270(3472, 432), 3);
    add_background_object(create_bgrocks16_3260(3616, 432), 3);
    add_background_object(create_bgrocks13_3212(3488, 432), 3);
    add_background_object(create_bgrocks13_3212(3552, 432), 3);
    add_background_object(create_bgsnow1_3224(3488, 416), 3);
    add_background_object(create_bgsnow8_3229(3616, 416), 3);
    add_background_object(create_bgsnow9_3222(3472, 416), 3);
    add_background_object(create_bgsnow9_3222(3824, 232), 3);
    add_background_object(create_bgsnowflat_3235(3840, 232), 3);
    add_background_object(create_bgsnow1_3224(3968, 232), 3);
    add_background_object(create_bgsnow8_3229(3616, 232), 3);
    add_background_object(create_bgsnow9_3222(3344, 232), 3);
    add_background_object(create_bgsnow1_3224(3488, 232), 3);
    add_background_object(create_bgsnowflat_3235(3360, 232), 3);
    add_background_object(create_bgrocks9_3227(4096, 368), 3);
    add_background_object(create_bgrocks9_3227(4096, 240), 3);
    add_background_object(create_bgsnow8_3229(4096, 232), 3);
    add_background_object(create_bgrocks1_3213(3584, 832), 3);
    add_background_object(create_bgrocks1_3213(3840, 832), 3);
    add_background_object(create_bgrocks1_3213(3584, 960), 3);
    add_background_object(create_bgrocks1_3213(3840, 960), 3);
    add_background_object(create_bgsnow9_3222(1096, 920), 3);
    add_background_object(create_bgsnow8_3229(1112, 920), 3);
    add_background_object(create_bgrocks1_3213(4096, 704), 3);
    add_background_object(create_bgrocks1_3213(4096, 832), 3);
    add_background_object(create_bgrocks11_3215(4224, 576), 3);
    add_background_object(create_bgrocks13_3212(4096, 640), 3);
    add_background_object(create_bgrocks13_3212(4160, 640), 3);
    add_background_object(create_bgrocks17_3270(4080, 640), 3);
    add_background_object(create_bgsnow1_3224(4224, 560), 3);
    add_background_object(create_bgsnow1_3224(4352, 560), 3);
    add_background_object(create_bgrocks1_3213(4352, 704), 3);
    add_background_object(create_bgrocks11_3215(4992, 576), 3);
    add_background_object(create_bgrocks1_3213(5120, 704), 3);
    add_background_object(create_bgrocks1_3213(5120, 576), 3);
    add_background_object(create_bgrocks1_3213(4352, 832), 3);
    add_background_object(create_bgrocks1_3213(5120, 832), 3);
    add_background_object(create_bgrocks1_3213(4096, 960), 3);
    add_background_object(create_bgrocks1_3213(5120, 448), 3);
    add_background_object(create_bgrocks1_3213(5120, 320), 3);
    add_background_object(create_bgrocks10_3228(5104, 320), 3);
    add_background_object(create_bgsnowflat_3235(4992, 560), 3);
    add_background_object(create_bgrocks10_3228(5104, 448), 3);
    add_background_object(create_bgrocks16_3260(4224, 368), 3);
    add_background_object(create_bgsnow8_3229(4224, 352), 3);
    add_background_object(create_bgrocks1_3213(4608, 704), 3);
    add_background_object(create_bgrocks1_3213(4608, 832), 3);
    add_background_object(create_bgrocks1_3213(4864, 704), 3);
    add_background_object(create_bgrocks1_3213(4864, 832), 3);
    add_background_object(create_bgsnowmound_3207(4624, 544), 3);
    add_background_object(create_bgsnowmound_3207(4496, 544), 3);
    add_background_object(create_bgrocks11_3215(4480, 576), 3);
    add_background_object(create_bgsnow1_3224(4480, 560), 3);
    add_background_object(create_bgsnow1_3224(4608, 560), 3);
    add_background_object(create_bgsnowmound_3207(4752, 544), 3);
    add_background_object(create_bgrocks11_3215(4736, 576), 3);
    add_background_object(create_bgsnow1_3224(4736, 560), 3);
    add_background_object(create_bgsnow1_3224(4864, 560), 3);
    add_background_object(create_bgsnowmound_3207(4488, 168), 3);
    add_background_object(create_bgsnowmound_3207(4360, 168), 3);
    add_background_object(create_bgsnow1_3224(4344, 184), 3);
    add_background_object(create_bgsnow1_3224(4472, 184), 3);
    add_background_object(create_bgsnowmound_3207(4744, 168), 3);
    add_background_object(create_bgsnowmound_3207(4616, 168), 3);
    add_background_object(create_bgsnow1_3224(4600, 184), 3);
    add_background_object(create_bgsnow1_3224(4728, 184), 3);
    add_background_object(create_bgsnowmound_3207(4872, 168), 3);
    add_background_object(create_bgsnow1_3224(4856, 184), 3);
    add_background_object(create_bgrocks8_3231(4344, 312), 3);
    add_background_object(create_bgrocks8_3231(4472, 312), 3);
    add_background_object(create_bgrocks8_3231(4600, 312), 3);
    add_background_object(create_bgrocks8_3231(4728, 312), 3);
    add_background_object(create_bgrocks8_3231(4856, 312), 3);
    add_background_object(create_bgrocks10_3228(4328, 200), 3);
    add_background_object(create_bgrocks9_3227(4984, 200), 3);
    add_background_object(create_bgsnow8_3229(4984, 184), 3);
    add_background_object(create_bgsnow9_3222(4328, 184), 3);
    add_background_object(create_bgsnow9_3222(5104, 304), 3);
    add_background_object(create_bgrocks1_3213(5376, 320), 3);
    add_background_object(create_bgrocks1_3213(5632, 320), 3);
    add_background_object(create_bgsnowflat_3235(5248, 304), 3);
    add_background_object(create_bgsnowflat_3235(5376, 304), 3);
    add_background_object(create_bgsnowflat_3235(5504, 304), 3);
    add_background_object(create_bgsnowflat_3235(5632, 304), 3);
    add_background_object(create_bgsnowflat_3235(5760, 304), 3);
    add_background_object(create_bgrocks16_3260(5888, 320), 3);
    add_background_object(create_bgrocks1_3213(5376, 448), 3);
    add_background_object(create_bgrocks1_3213(5632, 448), 3);
    add_background_object(create_bgrocks16_3260(6016, 384), 3);
    add_background_object(create_bgsnow8_3229(5888, 304), 3);
    add_background_object(create_bgsnow8_3229(6016, 376), 3);
    add_background_object(create_bgsnowflat_3235(5120, 304), 3);
    add_background_object(create_bgrocks1_3213(6144, 448), 3);
    add_background_object(create_bgsnow1_3224(6144, 432), 3);
    add_background_object(create_bgsnow1_3224(6272, 432), 3);
    add_background_object(create_bgrocks1_3213(5872, -8), 3);
    add_background_object(create_bgrocks10_3228(5856, -8), 3);
    add_background_object(create_bgrocks9_3227(6128, -8), 3);
    add_background_object(create_bgrocks13_3212(6400, 448), 3);
    add_background_object(create_bgrocks13_3212(6464, 448), 3);
    add_background_object(create_bgsnow1_3224(6400, 432), 3);
    add_background_object(create_bgrocks8_3231(6400, 504), 3);
    add_background_object(create_bgrocks8_3231(6272, 568), 3);
    add_background_object(create_bgrocks8_3231(6144, 568), 3);
    add_background_object(create_bgrocks1_3213(5376, 576), 3);
    add_background_object(create_bgrocks1_3213(5632, 704), 3);
    add_background_object(create_bgrocks1_3213(5632, 832), 3);
    add_background_object(create_bgrocks8_3231(6016, 568), 3);
    add_background_object(create_bgrocks1_3213(5632, 576), 3);
    add_background_object(create_bgrocks9_3227(6144, 832), 3);
    add_background_object(create_bgrocks16_3260(6528, 448), 3);
    add_background_object(create_bgsnow8_3229(6528, 432), 3);
    add_background_object(create_bgrocks1_3213(6328, 0), 3);
    add_background_object(create_bgrocks1_3213(6328, 128), 3);
    add_background_object(create_bgrocks10_3228(6312, 0), 3);
    add_background_object(create_bgrocks10_3228(6312, 128), 3);
    add_background_object(create_bgrocks9_3227(6584, 128), 3);
    add_background_object(create_bgrocks9_3227(6584, 0), 3);
    add_background_object(create_bgrocks8_3231(6328, 248), 3);
    add_background_object(create_bgrocks8_3231(6456, 248), 3);
    add_background_object(create_bgrocks1_3213(6752, 0), 3);
    add_background_object(create_bgrocks1_3213(6752, 128), 3);
    add_background_object(create_bgrocks10_3228(6736, 0), 3);
    add_background_object(create_bgrocks10_3228(6736, 128), 3);
    add_background_object(create_bgrocks1_3213(6752, 256), 3);
    add_background_object(create_bgrocks1_3213(6752, 384), 3);
    add_background_object(create_bgrocks10_3228(6736, 256), 3);
    add_background_object(create_bgrocks1_3213(6752, 512), 3);
    add_background_object(create_bgrocks14_3216(6688, 480), 3);
    add_background_object(create_bgrocks14_3216(6624, 576), 3);
    add_background_object(create_bgrocks13_3212(6688, 576), 3);
    add_background_object(create_bgrocks1_3213(6752, 640), 3);
    add_background_object(create_bgrocks1_3213(6752, 768), 3);
    add_background_object(create_bgrocks1_3213(6496, 768), 3);
    add_background_object(create_bgrocks13_3212(6688, 640), 3);
    add_background_object(create_bgrocks13_3212(6624, 672), 3);
    add_background_object(create_bgrocks13_3212(6688, 704), 3);
    add_background_object(create_bgrocks1_3213(6240, 768), 3);
    add_background_object(create_bgsnow1_3224(6240, 760), 3);
    add_background_object(create_bgrocks1_3213(5376, 704), 3);
    add_background_object(create_bgrocks1_3213(5376, 832), 3);
    add_background_object(create_bgrocks1_3213(5888, 832), 3);
    add_background_object(create_bgsnow1_3224(6016, 816), 3);
    add_background_object(create_bgsnow8_3229(6144, 816), 3);
    add_background_object(create_bgrocks10_3228(6224, 768), 3);
    add_background_object(create_bgsnow9_3222(6224, 760), 3);
    add_background_object(create_bgspiralslide_3241(6160, 912), 3);
    add_background_object(create_bgspiralslidebottom_3243(6160, 1056), 3);
    add_background_object(create_bgspiralslidetop_3242(6144, 816), 3);
    add_background_object(create_bgrocks9_3227(6016, 704), 3);
    add_background_object(create_bgrocks11_3215(5760, 576), 3);
    add_background_object(create_bgrocks11_3215(5760, 704), 3);
    add_background_object(create_bgrocks8_3231(6240, 888), 3);
    add_background_object(create_bgrocks8_3231(6368, 888), 3);
    add_background_object(create_bgrocks8_3231(6496, 888), 3);
    add_background_object(create_bgrocks1_3213(5888, 960), 3);
    add_background_object(create_bgrocks1_3213(5632, 960), 3);
    add_background_object(create_bgrocks1_3213(5632, 1088), 3);
    add_background_object(create_bgrocks1_3213(5888, 1088), 3);
    add_background_object(create_bgrocks1_3213(5888, 1216), 3);
    add_background_object(create_bgrocks1_3213(5632, 1216), 3);
    add_background_object(create_bgrocks1_3213(6144, 1216), 3);
    add_background_object(create_bgrocks9_3227(6144, 960), 3);
    add_background_object(create_bgrocks9_3227(6144, 1088), 3);
    add_background_object(create_bgsnow4_3239(6272, 1176), 3);
    add_background_object(create_bgrocks1_3213(6144, 1344), 3);
    add_background_object(create_bgrocks1_3213(5888, 1344), 3);
    add_background_object(create_bgrocks1_3213(6400, 1344), 3);
    add_background_object(create_bgrocks10_3228(6512, 1088), 3);
    add_background_object(create_bgrocks10_3228(6512, 1216), 3);
    add_background_object(create_bgrocks9_3227(6400, 1216), 3);
    add_background_object(create_bgsnow8_3229(6400, 1208), 3);
    add_background_object(create_bgsnow9_3222(6512, 1080), 3);
    add_background_object(create_bgrocks13_3212(6528, 1280), 3);
    add_background_object(create_bgrocks13_3212(6528, 1216), 3);
    add_background_object(create_bgrocks13_3212(6528, 1152), 3);
    add_background_object(create_bgrocks13_3212(6528, 1088), 3);
    add_background_object(create_bgsnow12_3245(6528, 1080), 3);
    add_background_object(create_bgsnow1_3224(6592, 1328), 3);
    add_background_object(create_bgrocks9_3227(6592, 1216), 3);
    add_background_object(create_bgrocks9_3227(6592, 1088), 3);
    add_background_object(create_bgsnow8_3229(6592, 1080), 3);
    add_background_object(create_bgrocks10_3228(6736, 896), 3);
    add_background_object(create_bgrocks8_3231(6624, 888), 3);
    add_background_object(create_bgrocks1_3213(6752, 896), 3);
    add_background_object(create_bgrocks13_3212(6752, 1024), 3);
    add_background_object(create_bgrocks13_3212(6752, 1088), 3);
    add_background_object(create_bgrocks10_3228(6736, 1024), 3);
    add_background_object(create_bgrocks13_3212(6720, 1280), 3);
    add_background_object(create_bgrocks17_3270(6704, 1280), 3);
    add_background_object(create_bgrocks16_3260(6784, 1280), 3);
    add_background_object(create_bgsnow9_3222(6704, 1272), 3);
    add_background_object(create_bgsnow8_3229(6784, 1272), 3);
    add_background_object(create_bgsnow12_3245(6720, 1272), 3);
    add_background_object(create_bgrocks1_3213(6656, 1472), 3);
    add_background_object(create_bgrocks1_3213(6400, 1472), 3);
    add_background_object(create_bgrocks1_3213(6144, 1472), 3);
    add_background_object(create_bgrocks1_3213(5888, 1472), 3);
    add_background_object(create_bgrocks13_3212(6816, 1088), 3);
    add_background_object(create_bgrocks13_3212(6816, 1024), 3);
    add_background_object(create_bgrocks9_3227(6880, 1024), 3);
    add_background_object(create_bgrocks1_3213(7168, 1472), 3);
    add_background_object(create_bgrocks1_3213(7168, 1344), 3);
    add_background_object(create_bgrocks13_3212(6912, 1280), 3);
    add_background_object(create_bgrocks17_3270(6896, 1280), 3);
    add_background_object(create_bgsnow9_3222(6896, 1272), 3);
    add_background_object(create_bgsnow12_3245(6912, 1272), 3);
    add_background_object(create_bgrocks13_3212(6976, 1280), 3);
    add_background_object(create_bgrocks13_3212(6976, 1216), 3);
    add_background_object(create_bgrocks13_3212(6976, 1152), 3);
    add_background_object(create_bgrocks10_3228(6960, 1152), 3);
    add_background_object(create_bgsnow12_3245(6976, 1144), 3);
    add_background_object(create_bgsnow9_3222(6960, 1144), 3);
    add_background_object(create_bgrocks8_3231(6880, 1008), 3);
    add_background_object(create_bgrocks1_3213(7008, 0), 3);
    add_background_object(create_bgrocks1_3213(7008, 128), 3);
    add_background_object(create_bgrocks1_3213(7008, 256), 3);
    add_background_object(create_bgrocks1_3213(7008, 384), 3);
    add_background_object(create_bgrocks1_3213(7008, 512), 3);
    add_background_object(create_bgrocks1_3213(7008, 640), 3);
    add_background_object(create_bgrocks1_3213(7008, 768), 3);
    add_background_object(create_bgrocks9_3227(7008, 896), 3);
    add_background_object(create_bgrocks1_3213(7264, 640), 3);
    add_background_object(create_bgrocks1_3213(7264, 768), 3);
    add_background_object(create_bgrocks1_3213(7520, 896), 3);
    add_background_object(create_bgrocks1_3213(7520, 1024), 3);
    add_background_object(create_bgrocks10_3228(7504, 1024), 3);
    add_background_object(create_bgrocks1_3213(7424, 1472), 3);
    add_background_object(create_bgsnowflat_3235(7296, 1328), 3);
    add_background_object(create_bgrocks11_3215(7536, 1280), 3);
    add_background_object(create_bgrocks1_3213(7680, 1472), 3);
    add_background_object(create_bgrocks9_3227(7776, 1024), 3);
    add_background_object(create_bgrocks1_3213(7776, 896), 3);
    add_background_object(create_bgrocks8_3231(7904, 1016), 3);
    add_background_object(create_bgrocks8_3231(7776, 1016), 3);
    add_background_object(create_bgrocks1_3213(7936, 1344), 3);
    add_background_object(create_bgrocks1_3213(7936, 1472), 3);
    add_background_object(create_bgsnow1_3224(7936, 1336), 3);
    add_background_object(create_bgsnow1_3224(8064, 1336), 3);
    add_background_object(create_bgrocks1_3213(7520, 768), 3);
    add_background_object(create_bgrocks1_3213(7520, 640), 3);
    add_background_object(create_bgsnow1_3224(7168, 1328), 3);
    add_background_object(create_bgrocks8_3231(7392, 888), 3);
    add_background_object(create_bgrocks8_3231(7264, 888), 3);
    add_background_object(create_bgrocks8_3231(7136, 888), 3);
    add_background_object(create_bgrocks8_3231(7008, 888), 3);
    add_background_object(create_bgsnow12_3245(7104, 1272), 3);
    add_background_object(create_bgrocks13_3212(7040, 1280), 3);
    add_background_object(create_bgrocks13_3212(7040, 1216), 3);
    add_background_object(create_bgsnow12_3245(7040, 1216), 3);
    add_background_object(create_bgrocks16_3260(7040, 1168), 3);
    add_background_object(create_bgsnow8_3229(7040, 1144), 3);
    add_background_object(create_bgrocks16_3260(7104, 1224), 3);
    add_background_object(create_bgsnow8_3229(7104, 1216), 3);
    add_background_object(create_bgrocks16_3260(7168, 1280), 3);
    add_background_object(create_bgsnow8_3229(7168, 1272), 3);
    add_background_object(create_bgsnow1_3224(3200, 176), 3);
    add_background_object(create_bgsnowflat_3235(3072, 176), 3);
    add_background_object(create_bgrocks9_3227(3072, 64), 3);
    add_background_object(create_bgsnow8_3229(3328, 176), 3);
    add_background_object(create_bgsnow9_3222(6168, 320), 3);
    add_background_object(create_bgsnow8_3229(6184, 320), 3);
    add_background_object(create_bgsnow9_3222(6248, 320), 3);
    add_background_object(create_bgsnow8_3229(6264, 320), 3);
    add_background_object(create_bgrocks1_3213(7776, 768), 3);
    add_background_object(create_bgrocks1_3213(7776, 640), 3);
    add_background_object(create_bgrocks9_3227(8032, 640), 3);
    add_background_object(create_bgrocks9_3227(8032, 768), 3);
    add_background_object(create_bgrocks9_3227(8032, 896), 3);
    add_background_object(create_bgrocks1_3213(7776, 512), 3);
    add_background_object(create_bgrocks1_3213(7776, 384), 3);
    add_background_object(create_bgrocks9_3227(8032, 384), 3);
    add_background_object(create_bgrocks9_3227(8032, 512), 3);
    add_background_object(create_bgrocks1_3213(7776, 256), 3);
    add_background_object(create_bgrocks1_3213(7776, 128), 3);
    add_background_object(create_bgrocks9_3227(8032, 128), 3);
    add_background_object(create_bgrocks9_3227(8032, 256), 3);
    add_background_object(create_bgrocks1_3213(7776, 0), 3);
    add_background_object(create_bgrocks9_3227(8032, 0), 3);
    add_background_object(create_bgrocks1_3213(8192, 1344), 3);
    add_background_object(create_bgrocks1_3213(8192, 1472), 3);
    add_background_object(create_bgsnow1_3224(8192, 1336), 3);
    add_background_object(create_bgsnow1_3224(8320, 1336), 3);
    add_background_object(create_bgrocks1_3213(8448, 1472), 3);
    add_background_object(create_bgsnow1_3224(8448, 1336), 3);
    add_background_object(create_bgrocks1_3213(8704, 1472), 3);
    add_background_object(create_bgrocks1_3213(8704, 1344), 3);
    add_background_object(create_bgrocks1_3213(8704, 1216), 3);
    add_background_object(create_bgrocks1_3213(8960, 1088), 3);
    add_background_object(create_bgrocks1_3213(8960, 960), 3);
    add_background_object(create_bgrocks10_3228(8688, 1216), 3);
    add_background_object(create_bgrocks10_3228(8944, 960), 3);
    add_background_object(create_bgrocks1_3213(8960, 1216), 3);
    add_background_object(create_bgrocks1_3213(8960, 1344), 3);
    add_background_object(create_bgrocks1_3213(8960, 1472), 3);
    add_background_object(create_bgsnow9_3222(8688, 1208), 3);
    add_background_object(create_bgsnowflat_3235(8704, 1208), 3);
    add_background_object(create_bgsnowflat_3235(8832, 1208), 3);
    add_background_object(create_bgrocks10_3228(8944, 1088), 3);
    add_background_object(create_bgsnow9_3222(8944, 944), 3);
    add_background_object(create_bgsnow1_3224(8960, 944), 3);
    add_background_object(create_bgsnow1_3224(9088, 944), 3);
    add_background_object(create_bgrocks1_3213(9248, 1088), 3);
    add_background_object(create_bgrocks9_3227(9216, 960), 3);
    add_background_object(create_bgsnow8_3229(9216, 944), 3);
    add_background_object(create_bgfacility1_3271(9248, 1024), 3);
    add_background_object(create_bgfacility3_3272(9504, 1024), 3);
    add_background_object(create_bgfacility2_3273(9216, 1024), 3);
    add_background_object(create_bgfacility6_3274(9504, 1088), 3);
    add_background_object(create_bgfacility4_3275(9216, 1088), 3);
    add_background_object(create_bgfacility5_3276(9216, 1152), 3);
    add_background_object(create_bgfacility7_3277(9504, 1152), 3);
    add_background_object(create_bgfacility1_3271(9376, 1024), 3);
    add_background_object(create_bgrocks1_3213(9248, 1216), 3);
    add_background_object(create_bgfacility6_3274(9504, 1216), 3);
    add_background_object(create_bgfacility4_3275(9216, 1216), 3);
    add_background_object(create_bgfacility5_3276(9216, 1280), 3);
    add_background_object(create_bgfacility7_3277(9504, 1280), 3);
    add_background_object(create_bgrocks1_3213(9248, 1344), 3);
    add_background_object(create_bgfacility6_3274(9504, 1344), 3);
    add_background_object(create_bgfacility4_3275(9216, 1344), 3);
    add_background_object(create_bgfacility5_3276(9216, 1408), 3);
    add_background_object(create_bgfacility7_3277(9504, 1408), 3);
    add_background_object(create_bgrocks1_3213(9248, 1472), 3);
    add_background_object(create_bgfacility6_3274(9504, 1472), 3);
    add_background_object(create_bgfacility4_3275(9216, 1472), 3);
    add_background_object(create_bgfacility5_3276(9216, 1536), 3);
    add_background_object(create_bgfacility7_3277(9504, 1536), 3);
    add_background_object(create_bgfacility1_3271(7536, 1216), 3);
    add_background_object(create_bgfacility3_3272(7792, 1216), 3);
    add_background_object(create_bgfacility2_3273(7504, 1216), 3);
    add_background_object(create_bgfacility6_3274(7792, 1280), 3);
    add_background_object(create_bgfacility4_3275(7504, 1280), 3);
    add_background_object(create_bgfacility5_3276(7504, 1344), 3);
    add_background_object(create_bgfacility7_3277(7792, 1344), 3);
    add_background_object(create_bgfacility1_3271(7664, 1216), 3);
    add_background_object(create_bgfacility6_3274(7792, 1408), 3);
    add_background_object(create_bgfacility4_3275(7504, 1408), 3);
    add_background_object(create_bgfacility5_3276(7504, 1472), 3);
    add_background_object(create_bgfacility7_3277(7792, 1472), 3);
    add_background_object(create_bgfacility6_3274(7792, 1536), 3);
    add_background_object(create_bgfacility4_3275(7504, 1536), 3);
    add_background_object(create_bgfacility2_3273(10176, 1536), 3);
    add_background_object(create_bgfacility1_3271(10208, 1536), 3);
    add_background_object(create_bgfacility1_3271(10464, 1536), 3);
    add_background_object(create_bgrocks1_3213(7520, 512), 3);
    add_background_object(create_bgrocks1_3213(7520, 384), 3);
    add_background_object(create_bgrocks1_3213(7520, 256), 3);
    add_background_object(create_bgrocks1_3213(7520, 128), 3);
    add_background_object(create_bgrocks1_3213(7520, 0), 3);
    add_background_object(create_bgrocks1_3213(7264, 512), 3);
    add_background_object(create_bgrocks1_3213(7264, 384), 3);
    add_background_object(create_bgrocks1_3213(7264, 256), 3);
    add_background_object(create_bgrocks1_3213(7264, 128), 3);
    add_background_object(create_bgrocks1_3213(7264, 0), 3);
    add_background_object(create_bgrocks1_3213(9248, 672), 3);
    add_background_object(create_bgrocks1_3213(8992, 672), 3);
    add_background_object(create_bgrocks8_3231(8992, 792), 3);
    add_background_object(create_bgrocks8_3231(9120, 792), 3);
    add_background_object(create_bgrocks8_3231(9248, 792), 3);
    add_background_object(create_bgrocks8_3231(9376, 792), 3);
    add_background_object(create_bgrocks10_3228(8976, 672), 3);
    add_background_object(create_bgrocks1_3213(9248, 544), 3);
    add_background_object(create_bgrocks1_3213(8992, 544), 3);
    add_background_object(create_bgrocks10_3228(8976, 544), 3);
    add_background_object(create_bgrocks1_3213(9248, 416), 3);
    add_background_object(create_bgrocks1_3213(8992, 416), 3);
    add_background_object(create_bgrocks10_3228(8976, 416), 3);
    add_background_object(create_bgrocks1_3213(8992, 288), 3);
    add_background_object(create_bgrocks10_3228(8976, 288), 3);
    add_background_object(create_bgrocks1_3213(8992, 160), 3);
    add_background_object(create_bgrocks10_3228(8976, 160), 3);
    add_background_object(create_bgrocks1_3213(8992, 32), 3);
    add_background_object(create_bgrocks10_3228(8976, 32), 3);
    add_background_object(create_bgfacility1_3271(10592, 1536), 3);
    add_background_object(create_bgfacility1_3271(10720, 1536), 3);
    add_background_object(create_bgfacility1_3271(10848, 1536), 3);
    add_background_object(create_bgfacility1_3271(10976, 1536), 3);
    add_background_object(create_bgfacility1_3271(11104, 1536), 3);
    add_background_object(create_bgfacility13_3278(10784, 1344), 3);
    add_background_object(create_bgfacility14_3279(10944, 1344), 3);
    add_background_object(create_bgfacility12_3280(10816, 1344), 3);
    add_background_object(create_bgfacility4_3275(10784, 1280), 3);
    add_background_object(create_bgfacility5_3276(10784, 1216), 3);
    add_background_object(create_bgfacility6_3274(10944, 1280), 3);
    add_background_object(create_bgfacility7_3277(10944, 1216), 3);
    add_background_object(create_bgfacility4_3275(10784, 1152), 3);
    add_background_object(create_bgfacility5_3276(10784, 1088), 3);
    add_background_object(create_bgfacility6_3274(10944, 1152), 3);
    add_background_object(create_bgfacility7_3277(10944, 1088), 3);
    add_background_object(create_bgfacility13_3278(10592, 1344), 3);
    add_background_object(create_bgfacility14_3279(10752, 1344), 3);
    add_background_object(create_bgfacility12_3280(10624, 1344), 3);
    add_background_object(create_bgfacility4_3275(10592, 1280), 3);
    add_background_object(create_bgfacility5_3276(10592, 1216), 3);
    add_background_object(create_bgfacility6_3274(10752, 1280), 3);
    add_background_object(create_bgfacility7_3277(10752, 1216), 3);
    add_background_object(create_bgfacility4_3275(10592, 1152), 3);
    add_background_object(create_bgfacility5_3276(10592, 1088), 3);
    add_background_object(create_bgfacility6_3274(10752, 1152), 3);
    add_background_object(create_bgfacility7_3277(10752, 1088), 3);
    add_background_object(create_bgfacility13_3278(10976, 1344), 3);
    add_background_object(create_bgfacility12_3280(11008, 1344), 3);
    add_background_object(create_bgfacility4_3275(10976, 1280), 3);
    add_background_object(create_bgfacility5_3276(10976, 1216), 3);
    add_background_object(create_bgfacility4_3275(10976, 1152), 3);
    add_background_object(create_bgfacility5_3276(10976, 1088), 3);
    add_background_object(create_bgrocks11_3215(7536, 1408), 3);
    add_background_object(create_bgrocks1_3213(8992, -96), 3);
    add_background_object(create_bgrocks10_3228(8976, -96), 3);
    add_background_object(create_bgrocks1_3213(9504, 672), 3);
    add_background_object(create_bgrocks8_3231(9504, 792), 3);
    add_background_object(create_bgrocks8_3231(9632, 792), 3);
    add_background_object(create_bgrocks1_3213(9504, 544), 3);
    add_background_object(create_bgrocks1_3213(9504, 416), 3);
    add_background_object(create_bgrocks1_3213(9760, 672), 3);
    add_background_object(create_bgrocks8_3231(9760, 792), 3);
    add_background_object(create_bgrocks8_3231(9888, 792), 3);
    add_background_object(create_bgrocks1_3213(9760, 544), 3);
    add_background_object(create_bgrocks1_3213(9760, 416), 3);
    add_background_object(create_bgrocks1_3213(9568, 1152), 3);
    add_background_object(create_bgfacility1_3271(9568, 1088), 3);
    add_background_object(create_bgfacility3_3272(9824, 1088), 3);
    add_background_object(create_bgfacility2_3273(9536, 1088), 3);
    add_background_object(create_bgfacility6_3274(9824, 1152), 3);
    add_background_object(create_bgfacility4_3275(9536, 1152), 3);
    add_background_object(create_bgfacility5_3276(9536, 1216), 3);
    add_background_object(create_bgfacility7_3277(9824, 1216), 3);
    add_background_object(create_bgfacility1_3271(9696, 1088), 3);
    add_background_object(create_bgrocks1_3213(9568, 1280), 3);
    add_background_object(create_bgfacility6_3274(9824, 1280), 3);
    add_background_object(create_bgfacility4_3275(9536, 1280), 3);
    add_background_object(create_bgfacility5_3276(9536, 1344), 3);
    add_background_object(create_bgfacility7_3277(9824, 1344), 3);
    add_background_object(create_bgrocks1_3213(9568, 1408), 3);
    add_background_object(create_bgfacility6_3274(9824, 1408), 3);
    add_background_object(create_bgfacility4_3275(9536, 1408), 3);
    add_background_object(create_bgfacility5_3276(9536, 1472), 3);
    add_background_object(create_bgfacility7_3277(9824, 1472), 3);
    add_background_object(create_bgrocks1_3213(9568, 1536), 3);
    add_background_object(create_bgfacility6_3274(9824, 1536), 3);
    add_background_object(create_bgfacility4_3275(9536, 1536), 3);
    add_background_object(create_bgfacility5_3276(9536, 1600), 3);
    add_background_object(create_bgfacility7_3277(9824, 1600), 3);
    add_background_object(create_bgrocks1_3213(9888, 1088), 3);
    add_background_object(create_bgfacility1_3271(9888, 1024), 3);
    add_background_object(create_bgfacility3_3272(10144, 1024), 3);
    add_background_object(create_bgfacility2_3273(9856, 1024), 3);
    add_background_object(create_bgfacility6_3274(10144, 1088), 3);
    add_background_object(create_bgfacility4_3275(9856, 1088), 3);
    add_background_object(create_bgfacility5_3276(9856, 1152), 3);
    add_background_object(create_bgfacility7_3277(10144, 1152), 3);
    add_background_object(create_bgfacility1_3271(10016, 1024), 3);
    add_background_object(create_bgrocks1_3213(9888, 1216), 3);
    add_background_object(create_bgfacility6_3274(10144, 1216), 3);
    add_background_object(create_bgfacility4_3275(9856, 1216), 3);
    add_background_object(create_bgfacility5_3276(9856, 1280), 3);
    add_background_object(create_bgfacility7_3277(10144, 1280), 3);
    add_background_object(create_bgrocks1_3213(9888, 1344), 3);
    add_background_object(create_bgfacility6_3274(10144, 1344), 3);
    add_background_object(create_bgfacility4_3275(9856, 1344), 3);
    add_background_object(create_bgfacility5_3276(9856, 1408), 3);
    add_background_object(create_bgfacility7_3277(10144, 1408), 3);
    add_background_object(create_bgrocks1_3213(9888, 1472), 3);
    add_background_object(create_bgfacility6_3274(10144, 1472), 3);
    add_background_object(create_bgfacility4_3275(9856, 1472), 3);
    add_background_object(create_bgfacility5_3276(9856, 1536), 3);
    add_background_object(create_bgfacility7_3277(10144, 1536), 3);
    add_background_object(create_bgrocks1_3213(10016, 672), 3);
    add_background_object(create_bgrocks8_3231(10016, 792), 3);
    add_background_object(create_bgrocks8_3231(10144, 792), 3);
    add_background_object(create_bgrocks1_3213(10016, 544), 3);
    add_background_object(create_bgrocks1_3213(10016, 416), 3);
    add_background_object(create_bgfacility5_3276(10272, 960), 3);
    add_background_object(create_bgfacility4_3275(10272, 1024), 3);
    add_background_object(create_bgfacility5_3276(10272, 1088), 3);
    add_background_object(create_bgfacility4_3275(10272, 1152), 3);
    add_background_object(create_bgfacility5_3276(10272, 832), 3);
    add_background_object(create_bgfacility4_3275(10272, 896), 3);
    add_background_object(create_bgfacility4_3275(10272, 768), 3);
    add_background_object(create_bgfacility5_3276(10272, 704), 3);
    add_background_object(create_bgfacility13_3278(10272, 1216), 3);
    add_background_object(create_bgfacility14_3279(10560, 1216), 3);
    add_background_object(create_bgfacility12_3280(10432, 1216), 3);
    add_background_object(create_bgfacility7_3277(10560, 960), 3);
    add_background_object(create_bgfacility6_3274(10560, 1024), 3);
    add_background_object(create_bgfacility7_3277(10560, 1088), 3);
    add_background_object(create_bgfacility6_3274(10560, 1152), 3);
    add_background_object(create_bgfacility7_3277(10560, 704), 3);
    add_background_object(create_bgfacility6_3274(10560, 768), 3);
    add_background_object(create_bgfacility7_3277(10560, 832), 3);
    add_background_object(create_bgfacility6_3274(10560, 896), 3);
    add_background_object(create_bgfacility12_3280(10304, 1216), 3);
    add_background_object(create_bgrocks1_3213(10304, 1088), 3);
    add_background_object(create_bgrocks1_3213(10304, 960), 3);
    add_background_object(create_bgrocks1_3213(10304, 832), 3);
    add_background_object(create_bgrocks1_3213(10304, 704), 3);
    add_background_object(create_bgfacility4_3275(10272, 640), 3);
    add_background_object(create_bgfacility5_3276(10272, 576), 3);
    add_background_object(create_bgfacility7_3277(10560, 576), 3);
    add_background_object(create_bgfacility6_3274(10560, 640), 3);
    add_background_object(create_bgrocks1_3213(10304, 576), 3);
    add_background_object(create_bgfacility4_3275(10272, 512), 3);
    add_background_object(create_bgfacility5_3276(10272, 448), 3);
    add_background_object(create_bgfacility7_3277(10560, 448), 3);
    add_background_object(create_bgfacility6_3274(10560, 512), 3);
    add_background_object(create_bgrocks1_3213(10304, 448), 3);
    add_background_object(create_bgrocks1_3213(10624, 960), 3);
    add_background_object(create_bgrocks1_3213(10880, 960), 3);
    add_background_object(create_bgfacility4_3275(10784, 1024), 3);
    add_background_object(create_bgfacility5_3276(10784, 960), 3);
    add_background_object(create_bgfacility6_3274(10944, 1024), 3);
    add_background_object(create_bgfacility7_3277(10944, 960), 3);
    add_background_object(create_bgfacility4_3275(10592, 1024), 3);
    add_background_object(create_bgfacility5_3276(10592, 960), 3);
    add_background_object(create_bgfacility6_3274(10752, 1024), 3);
    add_background_object(create_bgfacility7_3277(10752, 960), 3);
    add_background_object(create_bgfacility4_3275(10976, 1024), 3);
    add_background_object(create_bgfacility5_3276(10976, 960), 3);
    add_background_object(create_bgrocks1_3213(10624, 832), 3);
    add_background_object(create_bgrocks1_3213(10880, 832), 3);
    add_background_object(create_bgfacility4_3275(10784, 896), 3);
    add_background_object(create_bgfacility5_3276(10784, 832), 3);
    add_background_object(create_bgfacility6_3274(10944, 896), 3);
    add_background_object(create_bgfacility7_3277(10944, 832), 3);
    add_background_object(create_bgfacility4_3275(10592, 896), 3);
    add_background_object(create_bgfacility5_3276(10592, 832), 3);
    add_background_object(create_bgfacility6_3274(10752, 896), 3);
    add_background_object(create_bgfacility7_3277(10752, 832), 3);
    add_background_object(create_bgfacility4_3275(10976, 896), 3);
    add_background_object(create_bgfacility5_3276(10976, 832), 3);
    add_background_object(create_bgfacility2_3273(10432, 1536), 3);
    add_background_object(create_bgfacility3_3272(10336, 1536), 3);
    add_background_object(create_bgsnow12_3245(10368, 1536), 3);
    add_background_object(create_bgrocks15_3214(1576, 616), 3);
    add_background_object(create_bgrocks15_3214(1696, 672), 3);
    add_background_object(create_bgsnow4_3239(1792, 656), 3);
    add_background_object(create_bgsnow3_3237(1664, 592), 3);
    add_background_object(create_bgsnow2_3238(1536, 560), 3);
    add_background_object(create_bgrocks15_3214(1856, 960), 3);
    add_background_object(create_bgrocks15_3214(1944, 1008), 3);
    add_background_object(create_bgrocks15_3214(2024, 1080), 3);
    add_background_object(create_bgsnow4_3239(2112, 1072), 3);
    add_background_object(create_bgsnow10_3244(2048, 976), 3);
    add_background_object(create_bgsnow2_3238(1920, 944), 3);
    add_background_object(create_bgsnowflat_3235(1792, 944), 3);
    add_background_object(create_bgrocks9_3227(1792, 832), 3);
    add_background_object(create_bgrocks8_3231(1792, 824), 3);
    add_background_object(create_bgrocks15_3214(2056, 1184), 3);
    add_background_object(create_bgrocks15_3214(2176, 1192), 3);
    add_background_object(create_bgrocks15_3214(2304, 1192), 3);
    add_background_object(create_bgrocks15_3214(2352, 1072), 3);
    add_background_object(create_bgsnow5_3232(2432, 944), 3);
    add_background_object(create_bgsnow11_3230(2368, 976), 3);
    add_background_object(create_bgsnow7_3236(2240, 1072), 3);
    add_background_object(create_bgrocks15_3214(3072, 768), 3);
    add_background_object(create_bgsnowflat_3235(3072, 752), 3);
    add_background_object(create_bgsnow9_3222(3056, 752), 3);
    add_background_object(create_bgrocks17_3270(3184, 704), 3);
    add_background_object(create_bgsnow9_3222(3184, 688), 3);
    add_background_object(create_bgrocks15_3214(4096, 640), 3);
    add_background_object(create_bgsnow9_3222(4080, 632), 3);
    add_background_object(create_bgsnow1_3224(4096, 632), 3);
    add_background_object(create_bgrocks17_3270(4208, 576), 3);
    add_background_object(create_bgsnow9_3222(4208, 560), 3);
    add_background_object(create_bgrocks15_3214(6696, 552), 3);
    add_background_object(create_bgrocks15_3214(6632, 656), 3);
    add_background_object(create_bgrocks15_3214(6544, 712), 3);
    add_background_object(create_bgrocks15_3214(6448, 744), 3);
    add_background_object(create_bgsnow7_3236(6368, 728), 3);
    add_background_object(create_bgsnow6_3233(6496, 664), 3);
    add_background_object(create_bgsnow11_3230(6624, 568), 3);
    add_background_object(create_bgsnow11_3230(6688, 472), 3);
    add_background_object(create_bgrocks10_3228(6736, 384), 3);
    add_background_object(create_bgrocks15_3214(6752, 1008), 3);
    add_background_object(create_bgrocks15_3214(6400, 1280), 3);
    add_background_object(create_bgrocks15_3214(6472, 1328), 3);
    add_background_object(create_bgrocks15_3214(6976, 1248), 3);
    add_background_object(create_bgrocks15_3214(6904, 1312), 3);
    add_background_object(create_bgrocks15_3214(7048, 1320), 3);
    add_object(create_objectdigspot_734(6640, 1296), 3);
    add_object(create_objectdigspot_734(6248, 400), 3);
    add_object(create_objectdigspot_734(3536, 384), 3);
    add_object(create_objectdigspot_734(1904, 656), 3);
    add_object(create_objectdigspot_734(744, 1040), 3);
    add_object(create_objectexplosiveblock_2708(5904, 312), 3);
    add_object(create_objectexplosiveblock_2708(5904, 248), 3);
    add_object(create_objectexplosiveblock_2708(5904, 184), 3);
    add_object(create_objectexplosiveblock_2708(5904, 120), 3);
    add_object(create_objectexplosiveblock_2708(5968, 312), 3);
    add_object(create_objectexplosiveblock_2708(5968, 248), 3);
    add_object(create_objectexplosiveblock_2708(5968, 184), 3);
    add_object(create_objectexplosiveblock_2708(5968, 120), 3);
    add_object(create_levelglacierplatform1_3251(1312, 480), 3);
    add_object(create_playerstartingpoint_358(45, 1053), 3);
    add_object(create_effectwarning_1513(-172, 1384), 3);
    add_object(create_gimmicksnowspiremask_3247(-472, 1032), 3);
    add_object(create_slidecheck_3250(-304, 904), 3);
    add_object(create_enemysaucerleg4_2810(5472, 280), 3);
    add_object(create_enemysaucerleg1_2811(5440, 280), 3);
    add_object(create_enemysaucer_2812(5440, 280), 3);
    add_object(create_enemysaucerleg2_2813(5408, 280), 3);
    add_object(create_enemysaucerleg3_2814(5440, 280), 3);
    add_object(create_enemysaucerlimiter_2815(5144, 280), 3);
    add_object(create_enemysaucerlimiter_2815(5856, 280), 3);
    add_object(create_objectteleblockmask_3246(8656, 1304), 3);
    add_object(create_enemydragonfly_944(-545, 1797), 3);
    add_object(create_enemyextractorbase_1176(1520, 516), 3);
    add_object(create_enemyextractorhead_1177(1520, 516), 3);
    add_object(create_enemymeteorroller_2421(-289, 1820), 3);
    add_object(create_enemymeteorrollerflame_2420(-296, 1816), 3);
    add_object(create_gimmickspiralslidestart_3248(2512, 544), 3);
    add_object(create_gimmickspiralslideend_3249(2512, 840), 3);
    add_object(create_enemydrillsat_3281(2984, 776), 3);
    add_object(create_levelglacierplatform1_3251(288, 984), 3);
    add_object(create_levelglacierplatform1_3251(448, 896), 3);
    add_object(create_levelglacierplatform1_3251(608, 976), 3);
    add_object(create_levelglacierplatform1_3251(288, 808), 3);
    add_object(create_levelglacierplatform1_3251(608, 800), 3);
    add_object(create_levelglacierplatform1_3251(768, 888), 3);
    add_object(create_levelglacierplatform1_3251(448, 720), 3);
    add_object(create_levelglacierplatform1_3251(608, 624), 3);
    add_object(create_levelglacierplatform1_3251(768, 712), 3);
    add_object(create_levelglacierplatform1_3251(928, 984), 3);
    add_object(create_levelglacierplatform1_3251(928, 808), 3);
    add_object(create_levelglacierplatform1_3251(928, 632), 3);
    add_object(create_objectcrystal_279(245, 970), 3);
    add_object(create_objectcrystal_279(325, 970), 3);
    add_object(create_objectcrystal_279(285, 970), 3);
    add_object(create_objectcrystal_279(245, 794), 3);
    add_object(create_objectcrystal_279(325, 794), 3);
    add_object(create_objectcrystal_279(285, 794), 3);
    add_object(create_objectcrystal_279(405, 882), 3);
    add_object(create_objectcrystal_279(485, 882), 3);
    add_object(create_objectcrystal_279(445, 882), 3);
    add_object(create_objectcrystal_279(405, 706), 3);
    add_object(create_objectcrystal_279(485, 706), 3);
    add_object(create_objectcrystal_279(445, 706), 3);
    add_object(create_objectcrystal_279(565, 962), 3);
    add_object(create_objectcrystal_279(645, 962), 3);
    add_object(create_objectcrystal_279(605, 962), 3);
    add_object(create_objectcrystal_279(565, 786), 3);
    add_object(create_objectcrystal_279(645, 786), 3);
    add_object(create_objectcrystal_279(605, 786), 3);
    add_object(create_objectcrystal_279(725, 874), 3);
    add_object(create_objectcrystal_279(805, 874), 3);
    add_object(create_objectcrystal_279(765, 874), 3);
    add_object(create_objectcrystal_279(725, 698), 3);
    add_object(create_objectcrystal_279(805, 698), 3);
    add_object(create_objectcrystal_279(765, 698), 3);
    add_object(create_objectcrystal_279(885, 970), 3);
    add_object(create_objectcrystal_279(965, 970), 3);
    add_object(create_objectcrystal_279(925, 970), 3);
    add_object(create_objectcrystal_279(885, 794), 3);
    add_object(create_objectcrystal_279(965, 794), 3);
    add_object(create_objectcrystal_279(925, 794), 3);
    add_object(create_objectcrystal_279(565, 610), 3);
    add_object(create_objectcrystal_279(645, 610), 3);
    add_object(create_objectcrystal_279(605, 610), 3);
    add_object(create_objectcrystal_279(885, 618), 3);
    add_object(create_objectcrystal_279(965, 618), 3);
    add_object(create_objectcrystal_279(925, 618), 3);
    add_object(create_enemylavasquid_2721(490, 1000), 3);
    add_object(create_enemylavasquid_2721(586, 912), 3);
    add_object(create_enemylavasquid_2721(1042, 1000), 3);
    add_object(create_enemylavasquid_2721(922, 728), 3);
    add_object(create_enemylimiter_350(1029, 730), 3);
    add_object(create_enemylimiter_350(709, 914), 3);
    add_object(create_enemylimiter_350(533, 914), 3);
    add_object(create_enemylimiter_350(549, 1002), 3);
    add_object(create_enemylimiter_350(373, 1002), 3);
    add_object(create_enemylimiter_350(1285, 1002), 3);
    add_object(create_enemylimiter_350(1013, 1002), 3);
    add_object(create_enemylimiter_350(853, 730), 3);
    add_object(create_enemylavasquid_2721(746, 648), 3);
    add_object(create_enemylimiter_350(869, 650), 3);
    add_object(create_enemylimiter_350(693, 650), 3);
    add_object(create_enemylavasquid_2721(562, 736), 3);
    add_object(create_enemylimiter_350(709, 738), 3);
    add_object(create_enemylimiter_350(533, 738), 3);
    add_object(create_enemylavasquid_2721(1130, 520), 3);
    add_object(create_enemylimiter_350(1253, 522), 3);
    add_object(create_enemylimiter_350(1013, 522), 3);
    add_object(create_objectpetal_302(1265, 409), 3);
    add_object(create_objectpetal_302(1289, 393), 3);
    add_object(create_objectpetal_302(1361, 409), 3);
    add_object(create_objectpetal_302(1337, 393), 3);
    add_object(create_objectpetal_302(1313, 385), 3);
    add_object(create_gimmickspiralslidestart_3248(2096, 672), 3);
    add_object(create_gimmickspiralslideend_3249(2096, 968), 3);
    add_object(create_levelglacierplatform2_3282(2272, 816), 3);
    add_object(create_enemydrillsat_3281(3136, 712), 3);
    add_object(create_enemydrillsat_3281(3328, 648), 3);
    add_object(create_objectcrystal_279(2853, 562), 3);
    add_object(create_objectcrystal_279(2893, 562), 3);
    add_object(create_objectcrystal_279(2893, 610), 3);
    add_object(create_objectcrystal_279(2853, 610), 3);
    add_object(create_objectcrystal_279(2861, 586), 3);
    add_object(create_objectcrystal_279(2885, 586), 3);
    add_object(create_enemydrillsat_3281(3024, 512), 3);
    add_object(create_levelglacierplatform1_3251(3272, 488), 3);
    add_object(create_objectexplosiveblock_2708(3520, 624), 3);
    add_object(create_objectexplosiveblock_2708(3520, 560), 3);
    add_object(create_objectexplosiveblock_2708(3520, 496), 3);
    add_object(create_objectexplosiveblock_2708(3936, 624), 3);
    add_object(create_objectexplosiveblock_2708(3936, 560), 3);
    add_object(create_objectexplosiveblock_2708(3936, 496), 3);
    add_object(create_enemydrillsat_3281(3752, 648), 3);
    add_object(create_objectexplosiveblock_2708(3864, 168), 3);
    add_object(create_objectexplosiveblock_2708(3864, 104), 3);
    add_object(create_enemydrillsat_3281(3584, 192), 3);
    add_object(create_objectexplosiveblock_2708(3344, 168), 3);
    add_object(create_objectexplosiveblock_2708(3344, 104), 3);
    add_object(create_objectcrystal_279(3141, 658), 3);
    add_object(create_objectcrystal_279(3141, 626), 3);
    add_object(create_objectcrystal_279(2989, 722), 3);
    add_object(create_objectcrystal_279(2989, 690), 3);
    add_object(create_objectcrystal_279(3213, 402), 3);
    add_object(create_objectcrystal_279(3253, 386), 3);
    add_object(create_objectcrystal_279(3293, 386), 3);
    add_object(create_objectcrystal_279(3333, 402), 3);
    add_object(create_monitorcrystals_324(3312, 656), 3);
    add_object(create_monitorinvincibility_408(1096, 888), 3);
    add_object(create_monitorfireshield_328(1856, 912), 3);
    add_object(create_yellowspringup_434(5072, 544), 3);
    add_object(create_yellowspringup_434(5040, 544), 3);
    add_object(create_yellowspringup_434(5008, 544), 3);
    add_object(create_yellowspringupright_433(4112, 320), 3);
    add_object(create_enemydrillsat_3281(4152, 592), 3);
    add_object(create_enemydrillsat_3281(4288, 520), 3);
    add_object(create_enemydrillsat_3281(4416, 520), 3);
    add_object(create_enemydrillsat_3281(4544, 520), 3);
    add_object(create_enemydrillsat_3281(4672, 520), 3);
    add_object(create_enemydrillsat_3281(4800, 520), 3);
    add_object(create_enemydrillsat_3281(4408, 144), 3);
    add_object(create_enemydrillsat_3281(4536, 144), 3);
    add_object(create_enemydrillsat_3281(4664, 144), 3);
    add_object(create_enemydrillsat_3281(4792, 144), 3);
    add_object(create_enemydrillsat_3281(4920, 144), 3);
    add_object(create_enemysuperturretus_1828(5051, 240), 3);
    add_object(create_enemysuperturretus_1828(5123, 184), 3);
    add_object(create_enemysuperturretus_1828(4475, 120), 3);
    add_object(create_enemysuperturretus_1828(4579, 64), 3);
    add_object(create_minibosstreddright2_1039(4784, 496), 3);
    add_object(create_minibosstreddright4_1040(4753, 457), 3);
    add_object(create_minibosstreddright6_1041(4746, 440), 3);
    add_object(create_minibosstreddright5_1042(4762, 448), 3);
    add_object(create_minibosstreddright3_1043(4784, 520), 3);
    add_object(create_minibosstredd_1044(4736, 456), 3);
    add_object(create_minibosstreddright1_1045(4784, 457), 3);
    add_object(create_minibosstreddleft6_1046(4714, 440), 3);
    add_object(create_minibosstreddleft4_1047(4721, 457), 3);
    add_object(create_minibosstreddleft5_1048(4698, 448), 3);
    add_object(create_minibosstreddleft2_1049(4688, 496), 3);
    add_object(create_minibosstreddleft3_1050(4688, 520), 3);
    add_object(create_minibosstreddleft1_1051(4688, 457), 3);
    add_object(create_minibosstreddright2_1039(10440, 1472), 3);
    add_object(create_minibosstreddright4_1040(10409, 1433), 3);
    add_object(create_minibosstreddright6_1041(10410, 1416), 3);
    add_object(create_minibosstreddright5_1042(10426, 1424), 3);
    add_object(create_minibosstreddright3_1043(10440, 1496), 3);
    add_object(create_minibosstredd_1044(10392, 1432), 3);
    add_object(create_minibosstreddright1_1045(10440, 1433), 3);
    add_object(create_minibosstreddleft6_1046(10378, 1416), 3);
    add_object(create_minibosstreddleft4_1047(10377, 1433), 3);
    add_object(create_minibosstreddleft5_1048(10362, 1424), 3);
    add_object(create_minibosstreddleft2_1049(10344, 1472), 3);
    add_object(create_minibosstreddleft3_1050(10344, 1496), 3);
    add_object(create_minibosstreddleft1_1051(10344, 1433), 3);
    add_object(create_enemydrillsat_3281(5216, 264), 3);
    add_object(create_enemydrillsat_3281(5520, 264), 3);
    add_object(create_gimmickspiralslidestart_3248(6192, 800), 3);
    add_object(create_gimmickspiralslideend_3249(6192, 1096), 3);
    add_object(create_yellowspringright_435(6032, 784), 3);
    add_object(create_yellowspringright_435(6032, 752), 3);
    add_object(create_yellowspringright_435(6032, 720), 3);
    add_object(create_yellowspringup_434(6480, 1256), 3);
    add_object(create_yellowspringup_434(6448, 1256), 3);
    add_object(create_yellowspringup_434(6416, 1256), 3);
    add_object(create_objectcrystal_279(6573, 442), 3);
    add_object(create_objectcrystal_279(6605, 442), 3);
    add_object(create_objectcrystal_279(6637, 442), 3);
    add_object(create_objectcrystal_279(6669, 442), 3);
    add_object(create_objectcrystal_279(6701, 442), 3);
    add_object(create_objectcrystal_279(6573, 474), 3);
    add_object(create_objectcrystal_279(6605, 474), 3);
    add_object(create_objectcrystal_279(6637, 474), 3);
    add_object(create_objectcrystal_279(6669, 474), 3);
    add_object(create_objectcrystal_279(6701, 474), 3);
    add_object(create_objectcrystal_279(6573, 506), 3);
    add_object(create_objectcrystal_279(6605, 506), 3);
    add_object(create_objectcrystal_279(6637, 506), 3);
    add_object(create_objectcrystal_279(6669, 506), 3);
    add_object(create_objectcrystal_279(6701, 506), 3);
    add_object(create_objectcrystal_279(6525, 994), 3);
    add_object(create_objectcrystal_279(6557, 994), 3);
    add_object(create_objectcrystal_279(6589, 994), 3);
    add_object(create_objectcrystal_279(6525, 1026), 3);
    add_object(create_objectcrystal_279(6557, 1026), 3);
    add_object(create_objectcrystal_279(6589, 1026), 3);
    add_object(create_objectcrystal_279(6525, 1058), 3);
    add_object(create_objectcrystal_279(6557, 1058), 3);
    add_object(create_objectcrystal_279(6589, 1058), 3);
    add_object(create_objectcrystal_279(6717, 1194), 3);
    add_object(create_objectcrystal_279(6749, 1194), 3);
    add_object(create_objectcrystal_279(6781, 1194), 3);
    add_object(create_objectcrystal_279(6717, 1226), 3);
    add_object(create_objectcrystal_279(6749, 1226), 3);
    add_object(create_objectcrystal_279(6781, 1226), 3);
    add_object(create_objectcrystal_279(6717, 1258), 3);
    add_object(create_objectcrystal_279(6749, 1258), 3);
    add_object(create_objectcrystal_279(6781, 1258), 3);
    add_object(create_yellowspringup_434(6928, 1256), 3);
    add_object(create_yellowspringup_434(6896, 1256), 3);
    add_object(create_objectcodec_354(2402, 525), 3);
    add_object(create_enemydrillsat_3281(7368, 1288), 3);
    add_object(create_enemydrillsat_3281(7320, 1288), 3);
    add_object(create_objectexplosiveblock_2708(7576, 1152), 3);
    add_object(create_objectexplosiveblock_2708(7640, 1152), 3);
    add_object(create_objectexplosiveblock_2708(7704, 1152), 3);
    add_object(create_enemydrillsat_3281(7272, 1288), 3);
    add_object(create_monitormetalshield_329(6960, 1112), 3);
    add_object(create_monitor1up_410(3120, 144), 3);
    add_object(create_objectpetal_302(6265, 297), 3);
    add_object(create_objectpetal_302(6185, 297), 3);
    add_object(create_objectpetal_302(6225, 249), 3);
    add_object(create_objectteleblockmask_3246(8912, 1176), 3);
    add_object(create_objectteleblockmask_3246(8848, 1176), 3);
    add_object(create_objectteleblockmask_3246(8912, 1112), 3);
    add_object(create_objectteleblockmask_3246(8784, 1176), 3);
    add_object(create_objectteleblockmask_3246(8848, 1112), 3);
    add_object(create_objectteleblockmask_3246(8912, 1048), 3);
    add_object(create_enemymeteorroller_2421(8191, 1316), 3);
    add_object(create_enemymeteorrollerflame_2420(8184, 1312), 3);
    add_object(create_enemymeteorroller_2421(8359, 1316), 3);
    add_object(create_enemymeteorrollerflame_2420(8352, 1312), 3);
    add_object(create_enemymeteorroller_2421(8519, 1316), 3);
    add_object(create_enemymeteorrollerflame_2420(8512, 1312), 3);
    add_object(create_enemylimiter_350(8637, 1322), 3);
    add_object(create_enemylimiter_350(7837, 1322), 3);
    add_object(create_enemymeteorroller_2421(8983, 924), 3);
    add_object(create_enemymeteorrollerflame_2420(8976, 920), 3);
    add_object(create_enemylimiter_350(8949, 930), 3);
    add_object(create_enemylimiter_350(9253, 922), 3);
    add_object(create_enemymeteorroller_2421(9111, 924), 3);
    add_object(create_enemymeteorrollerflame_2420(9104, 920), 3);
    add_object(create_enemylavasquid_2721(9498, 984), 3);
    add_object(create_enemylavasquid_2721(9690, 1048), 3);
    add_object(create_enemylimiter_350(9237, 994), 3);
    add_object(create_enemylimiter_350(9541, 1058), 3);
    add_object(create_enemylimiter_350(9877, 1058), 3);
    add_object(create_enemysuperturretus_1828(9155, 880), 3);
    add_object(create_enemysuperturretus_1828(9371, 976), 3);
    add_object(create_monitorrings_407(10000, 992), 3);
    add_object(create_monitorbomb_563(9968, 992), 3);
    add_object(create_monitorbomb_563(10032, 992), 3);
    add_object(create_monitorbomb_563(9536, 1056), 3);
    add_object(create_monitorbomb_563(9568, 1056), 3);
    add_object(create_monitorbomb_563(9936, 992), 3);
    add_object(create_monitorbomb_563(9904, 992), 3);
    add_object(create_monitorbomb_563(10064, 992), 3);
    add_object(create_monitorbomb_563(10096, 992), 3);
    add_object(create_enemydrillsat_3281(10400, 1496), 3);
    add_object(create_objectexplosiveblock_2708(10656, 1472), 3);
    add_object(create_objectexplosiveblock_2708(10656, 1408), 3);
    add_object(create_objectcodec_354(3202, 149), 3);
    add_object(create_enemytreddpushleft2_1059(10248, 1432), 3);
    add_object(create_enemytreddpushleft_1060(10536, 1432), 3);
    add_object(create_enemytreddpushleft2_1059(4312, 456), 3);
    add_object(create_enemytreddpushleft_1060(4944, 448), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_bgspiralslidefront_3252(2480, 688), 4);
    add_background_object(create_bgspiralslidetopfront_3253(2464, 560), 4);
    add_background_object(create_bgrocks8_3231(1024, 824), 4);
    add_background_object(create_bgrocks8_3231(1152, 824), 4);
    add_background_object(create_bgspiralslidetopfront_3253(2048, 688), 4);
    add_background_object(create_bgspiralslidefront_3252(2064, 816), 4);
    add_background_object(create_bgrocks8_3231(2560, 696), 4);
    add_background_object(create_bgrocks8_3231(2688, 696), 4);
    add_background_object(create_bgrocks8_3231(2816, 440), 4);
    add_background_object(create_bgrocks8_3231(2928, 616), 4);
    add_background_object(create_bgrocks8_3231(2336, 624), 4);
    add_background_object(create_bgrocks8_3231(2944, 312), 4);
    add_background_object(create_bgrocks8_3231(3200, 312), 4);
    add_background_object(create_bgrocks8_3231(3072, 312), 4);
    add_background_object(create_bgrocks8_3231(3840, 488), 4);
    add_background_object(create_bgrocks8_3231(3968, 488), 4);
    add_background_object(create_bgrocks8_3231(3488, 480), 4);
    add_background_object(create_bgrocks8_3231(3840, 88), 4);
    add_background_object(create_bgrocks8_3231(3968, 88), 4);
    add_background_object(create_bgrocks8_3231(4096, 416), 4);
    add_background_object(create_bgrocks8_3231(5872, 104), 4);
    add_background_object(create_bgrocks8_3231(6000, 104), 4);
    add_background_object(create_bgspiralslidefront_3252(6160, 944), 4);
    add_background_object(create_bgspiralslidetopfront_3253(6144, 816), 4);
    add_background_object(create_bgrocks8_3231(6752, 1136), 4);
    add_background_object(create_bgrocks8_3231(7648, 1128), 4);
    add_background_object(create_bgrocks8_3231(7520, 1128), 4);
    add_background_object(create_bgrocks8_3231(3200, 88), 4);
    add_background_object(create_bgrocks8_3231(3072, 88), 4);
    add_background_object(create_bgrocks10_3228(3312, 88), 4);
    add_background_object(create_bgrocks9_3227(3328, 88), 4);
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
    add_object(create_hazardspikesup_2426(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(702, -150), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(2264, -72), 5);
    add_object(create_cameralimitbossleft_421(2103, -192), 5);
    add_object(create_cameralimitbossright_422(2424, -192), 5);
    add_object(create_cameralimitbosstop_423(2264, -313), 5);
    add_object(create_cameratriggerboss_424(2120, -200), 5);
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
    loop_sound_kick2_running = false;
    loop_sound_kick2_index = 0;
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
    loop_spark_down_running = false;
    loop_spark_down_index = 0;
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
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
    loop_sound_pounce_running = false;
    loop_sound_pounce_index = 0;
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
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
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
    loop_spark_up_running = false;
    loop_spark_up_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_61, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_61, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_61, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_61, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_61, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_61, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_61, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_61, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_61, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_61, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_61, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_61, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_61, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_61, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_61, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_61, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_61, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_61, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_61, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_61, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_61, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_61, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_61, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_61, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_61, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_61, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_61, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_61, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_61, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_61, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_61, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_61, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_61, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_61, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_61, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_61, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_61, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_61, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_61, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_61, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_61, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_61, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_61, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_61, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_61, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_61, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_61, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_61, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_61, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_61, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_61, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_61, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_61, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_61, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_attacks_1 = false;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
    not_always_1550_16 = loop_count;
    not_always_173_8 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_38_wall_running_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_power_cards_1 = false;
    group_sound_events_spade_1 = false;
    not_always_168_0 = loop_count;
    not_always_501_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_39_sitting_1 = false;
    group_main_engine_global_methods_common_objects_collectables_tao_stone_1 = true;
    not_always_449_13 = loop_count;
    not_always_97_0 = loop_count;
    not_always_1449_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_101_0 = loop_count;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
    not_always_1717_17 = loop_count;
    once_condition_138_0 = false;
    not_always_68_13 = loop_count;
    not_always_1149_14 = loop_count;
    not_always_1037_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_21_flash_jump_1 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_milla_s_abilities_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_03_crouch_down_1 = false;
    not_always_1529_13 = loop_count;
    not_always_585_13 = loop_count;
    once_condition_36_13 = false;
    not_always_1482_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_814_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    once_condition_1735_22 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_172_8 = loop_count;
    once_condition_63_0 = false;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1447_13 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_422_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    not_always_45_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    group_main_engine_level_specific_methods_bosses_miniboss_tredd_miniboss_tredd_movement_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_450_13 = loop_count;
    not_always_39_13 = loop_count;
    group_sound_events_lilac_1 = false;
    group_main_engine_global_methods_player_player_control_check_for_being_hurt_1 = true;
    not_always_235_13 = loop_count;
    not_always_1831_16 = loop_count;
    not_always_1456_13 = loop_count;
    not_always_99_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_1740_14 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_234_13 = loop_count;
    not_always_140_0 = loop_count;
    not_always_553_13 = loop_count;
    not_always_813_13 = loop_count;
    not_always_64_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_40_springs_1 = false;
    once_condition_49_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_12_stunned_1 = false;
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1 = false;
    group_pause_1 = false;
    not_always_41_13 = loop_count;
    not_always_240_14 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_43_forced_ball_mode_1 = false;
    group_pc_controls_input_management_record_input_1 = false;
    not_always_540_13 = loop_count;
    once_condition_557_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_06_rolling_1 = false;
    not_always_1421_13 = loop_count;
    not_always_1052_13 = loop_count;
    not_always_70_13 = loop_count;
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_charge_attack_1 = false;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_1450_13 = loop_count;
    once_condition_63_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_44_kick_combo_1 = false;
    not_always_174_8 = loop_count;
    group_main_engine_global_methods_common_objects_shields_3_magnetic_shield_1 = false;
    not_always_171_8 = loop_count;
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
    not_always_103_0 = loop_count;
    not_always_825_13 = loop_count;
    not_always_826_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_02_stand_up_1 = false;
    group_sound_events_carol_1 = false;
    group_main_engine_global_methods_common_objects_shields_2_flame_shield_1 = false;
    every_819_13 = 0.0f;
    once_condition_58_14 = false;
    group_main_engine_interface_and_post_processing_methods_timer_1 = false;
    group_main_engine_1 = true;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_47_wall_cling_1 = false;
    not_always_42_13 = loop_count;
    not_always_744_13 = loop_count;
    not_always_1038_13 = loop_count;
    not_always_1741_14 = loop_count;
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_01_jump_1 = false;
    group_main_engine_interface_and_post_processing_methods_titlecard_1 = true;
    not_always_745_13 = loop_count;
    not_always_66_0 = loop_count;
    once_condition_50_13 = false;
    once_condition_37_13 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_1 = false;
    not_always_1528_13 = loop_count;
    not_always_554_13 = loop_count;
    once_condition_35_13 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_62()
{
    event_func_1176();
    event_func_1177();
    event_func_1178();
    event_func_10018();
    event_func_6950();
    event_func_9425();
    event_func_4327();
    event_func_9423();
    event_func_11380();
    event_func_7520();
    event_func_8591();
    event_func_9230();
}
void Frames::event_func_13183()
{
    // event 1941_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1941_62_end;
        FrameObject * single_instance_1941_62_0; single_instance_1941_62_0 = NULL;
        // select single: true false false
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator p_it(bosssparky_3327_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1941_62_0 == NULL)
                    single_instance_1941_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1941_62_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1941_62_0))->force_frame(151+loop_sparky_index);
    }
    event_1941_62_end: ;
}
void Frames::event_func_13184()
{
    // event 1942_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1)) goto event_1942_62_end;
        FrameObject * single_instance_1942_62_0; single_instance_1942_62_0 = NULL;
        // select single: true false false
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator p_it(bosssparkytail_3305_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdebris_319(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1942_62_0 == NULL)
                    single_instance_1942_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1942_62_0))->get_movement()->set_speed(50+randrange(30));
        ((Active*)((Active*)single_instance_1942_62_0))->force_frame(151+loop_sparky_index);
    }
    event_1942_62_end: ;
}
void Frames::loop_sparky_62()
{
    event_func_13183();
    event_func_13184();
}
void Frames::event_func_13185()
{
    // event 2178_62
    {
        if (!(group_main_engine_1)) goto event_2178_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2178_62_end;
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_2178_62_end: ;
}
void Frames::event_func_13186()
{
    // event 2197_62
    {
        if (!(group_main_engine_1)) goto event_2197_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2197_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_2197_62_end: ;
}
void Frames::event_func_13187()
{
    // event 2207_62
    {
        if (!(group_main_engine_1)) goto event_2207_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2207_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_2207_62_end: ;
}
void Frames::loop_xplode_62()
{
    event_func_13185();
    event_func_13186();
    event_func_13187();
}
void Frames::event_func_13188()
{
    // event 2126_62
    {
        if (!(group_main_engine_1)) goto event_2126_62_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_boss6_ogg_213, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2126_62_end: ;
}
void Frames::loop_play_music_4_62()
{
    event_func_13188();
}
void Frames::event_func_13189()
{
    // event 2127_62
    {
        if (!(group_main_engine_1)) goto event_2127_62_end;
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 0);
            ((Active*)*it)->alterables->values.set(1, 0);
        }
        media.play(str_data_bgm_m_stage9b_ogg_214, 32-1, ((Active*)get_single(controllermusic_128_instances, default_active_instance))->alterables->values.get(2));
    }
    event_2127_62_end: ;
}
void Frames::loop_play_music_5_62()
{
    event_func_13189();
}
void Frames::event_func_13190()
{
    // event 1877_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1877_62_end;
        FrameObject * single_instance_1877_62_0; single_instance_1877_62_0 = NULL;
        // select single: true false false
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechfrontfoot_2545_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1877_62_0 == NULL)
                    single_instance_1877_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1877_62_0))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+125);
        ((Active*)((Active*)single_instance_1877_62_0))->set_direction(loop_shockwave_index*16);
        ((Active*)((Active*)single_instance_1877_62_0))->get_movement()->set_speed((loop_shockwave_index/math_helper/2)*8+16);
        ((Active*)((Active*)single_instance_1877_62_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1877_62_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1877_62_0))->set_y_scale(1+(loop_shockwave_index/math_helper/2)*0.25);
    }
    event_1877_62_end: ;
}
void Frames::event_func_13191()
{
    // event 1878_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1878_62_end;
        FrameObject * single_instance_1878_62_0; single_instance_1878_62_0 = NULL;
        // select single: true false false
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechbackclaw_2515_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1878_62_0 == NULL)
                    single_instance_1878_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1878_62_0))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+125);
        ((Active*)((Active*)single_instance_1878_62_0))->set_direction(loop_shockwave_index*16);
        ((Active*)((Active*)single_instance_1878_62_0))->get_movement()->set_speed((loop_shockwave_index/math_helper/2)*8+16);
        ((Active*)((Active*)single_instance_1878_62_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1878_62_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1878_62_0))->set_y_scale(1+(loop_shockwave_index/math_helper/2)*0.25);
    }
    event_1878_62_end: ;
}
void Frames::event_func_13192()
{
    // event 1879_62
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1)) goto event_1879_62_end;
        FrameObject * single_instance_1879_62_0; single_instance_1879_62_0 = NULL;
        // select single: true false false
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator p_it(brevonmechfrontclaw_2549_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_hazardshockwave_1524(parent->get_action_x() - parent->layer->off_x + 0, parent->get_action_y() - parent->layer->off_y + 0), parent->layer);
                if (single_instance_1879_62_0 == NULL)
                    single_instance_1879_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1879_62_0))->set_y(((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(4)+125);
        ((Active*)((Active*)single_instance_1879_62_0))->set_direction(loop_shockwave_index*16);
        ((Active*)((Active*)single_instance_1879_62_0))->get_movement()->set_speed((loop_shockwave_index/math_helper/2)*8+16);
        ((Active*)((Active*)single_instance_1879_62_0))->alterables->values.set(1, 30);
        ((Active*)((Active*)single_instance_1879_62_0))->set_layer(4-1);
        ((Active*)((Active*)single_instance_1879_62_0))->set_y_scale(1+(loop_shockwave_index/math_helper/2)*0.25);
    }
    event_1879_62_end: ;
}
void Frames::loop_shockwave_62()
{
    event_func_13190();
    event_func_13191();
    event_func_13192();
}
void Frames::loop_wrapper_sound_hurt1_62(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_62(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_62(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_62(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_62(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_62(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_62(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_62(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_62(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_62(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_62(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_62(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_62(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_62(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_62(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_2_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_59();
}
void Frames::loop_wrapper_sound_attack1_62(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_62(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_62(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_play_music_8_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_sound_uppercut3_62(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut3_0();
}
void Frames::loop_wrapper_sound_uppercut1_62(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut1_0();
}
void Frames::loop_wrapper_sound_uppercut0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_uppercut0_0();
}
void Frames::loop_wrapper_process_call_fadein_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadein_music_13();
}
void Frames::loop_wrapper_play_music_0_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_process_call_lock_music_62(void * frame)
{
    ((Frames*)frame)->loop_process_call_lock_music_13();
}
void Frames::loop_wrapper_play_music_3_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_play_music_4_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_62();
}
void Frames::loop_wrapper_play_music_5_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_62();
}
void Frames::loop_wrapper_play_music_6_62(void * frame)
{
    ((Frames*)frame)->loop_play_music_6_59();
}
void Frames::loop_wrapper_sound_go0_62(void * frame)
{
    ((Frames*)frame)->loop_sound_go0_0();
}
