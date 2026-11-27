#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_7715()
{
    // event 1746_32
    {
        if (!(group_main_engine_1)) goto event_1746_32_end;
        ((Active*)get_instance(discolight_1944_instances))->alterables->flags.disable(1);
    }
    event_1746_32_end: ;
}
void Frames::event_func_7716()
{
    // event 1747_32
    {
        if (!(group_main_engine_1)) goto event_1747_32_end;
        objectdiscoball_1955_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball_1955_instances); !it.end(); ++it) {
            if (((Active*)(*it))->is_near_border(-60)) { it.deselect(); continue; }
        }
        if (!objectdiscoball_1955_instances.has_selection()) goto event_1747_32_end;
        ((Active*)get_instance(discolight_1944_instances))->alterables->flags.enable(1);
    }
    event_1747_32_end: ;
}
void Frames::event_func_7717()
{
    // event 1748_32
    {
        if (!(group_main_engine_1)) goto event_1748_32_end;
        if (!(((Active*)get_instance(discolight_1944_instances))->alterables->flags.is_off(1))) goto event_1748_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) > (1))) goto event_1748_32_end;
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.sub(0, 1);
        ((Active*)get_instance(discolight_1944_instances))->blend_color.set_alpha_coefficient(255-((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)*4);
    }
    event_1748_32_end: ;
}
void Frames::event_func_7718()
{
    // event 1749_32
    {
        if (!(group_main_engine_1)) goto event_1749_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) == (1))) goto event_1749_32_end;
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(discolight_1944_instances))->set_visible(false);
    }
    event_1749_32_end: ;
}
void Frames::event_func_7719()
{
    // event 1750_32
    {
        if (!(group_main_engine_1)) goto event_1750_32_end;
        if (!(((Active*)get_instance(discolight_1944_instances))->alterables->flags.is_on(1))) goto event_1750_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) == (0))) goto event_1750_32_end;
        ((Active*)get_instance(discolight_1944_instances))->blend_color.set_alpha_coefficient(255);
        ((Active*)get_instance(discolight_1944_instances))->set_visible(true);
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.add(0, 1);
    }
    event_1750_32_end: ;
}
void Frames::event_func_7720()
{
    // event 1751_32
    {
        if (!(group_main_engine_1)) goto event_1751_32_end;
        if (!(((Active*)get_instance(discolight_1944_instances))->alterables->flags.is_on(1))) goto event_1751_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) > (0))) goto event_1751_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) < (64))) goto event_1751_32_end;
        ((Active*)get_instance(discolight_1944_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(discolight_1944_instances))->blend_color.set_alpha_coefficient(255-((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)*4);
    }
    event_1751_32_end: ;
}
void Frames::event_func_7721()
{
    // event 1752_32
    {
        if (!(group_main_engine_1)) goto event_1752_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) > (0))) goto event_1752_32_end;
        FrameObject * single_instance_1752_32_0; single_instance_1752_32_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(discolight_1944_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_ringsparkle_139(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1752_32_0 == NULL)
                    single_instance_1752_32_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1752_32_0))->set_x(((Active*)single_instance_1752_32_0)->get_x()+randrange(global_values->get(16)));
        ((Active*)((Active*)single_instance_1752_32_0))->set_y(((Active*)single_instance_1752_32_0)->get_y()+randrange(global_values->get(17)));
        ((Active*)((Active*)single_instance_1752_32_0))->alterables->values.set(0, randrange(5));
        ((Active*)((Active*)single_instance_1752_32_0))->force_frame(1);
        ((Active*)((Active*)single_instance_1752_32_0))->restore_frame();
    }
    event_1752_32_end: ;
}
void Frames::event_func_7722()
{
    // event 1753_32
    {
        if (!(group_main_engine_1)) goto event_1753_32_end;
        ringsparkle_139_instances.clear_selection();
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!ringsparkle_139_instances.has_selection()) goto event_1753_32_end;
        for (ObjectIterator it(ringsparkle_139_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-((Active*)*it)->alterables->values.get(0)*0.5);
        }
    }
    event_1753_32_end: ;
}
void Frames::event_func_7723()
{
    // event 1754_32
    {
        if (!(group_main_engine_1)) goto event_1754_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) >= (64))) goto event_1754_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_1754_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (0))) goto event_1754_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1754_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1754_32_end;
        if (((Active*)get_instance(playerskinsash_418_instances))->test_animation(40)) goto event_1754_32_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) > (10))) goto event_1754_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(8);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(8);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(40);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1754_32_end: ;
}
void Frames::event_func_7724()
{
    // event 1755_32
    {
        if (!(group_main_engine_1)) goto event_1755_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) >= (64))) goto event_1755_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_1755_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (2))) goto event_1755_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1755_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1755_32_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1755_32_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) > (10))) goto event_1755_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(8);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(8);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(40);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1755_32_end: ;
}
void Frames::event_func_7725()
{
    // event 1756_32
    {
        if (!(group_main_engine_1)) goto event_1756_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) >= (64))) goto event_1756_32_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(24)) == (0))) goto event_1756_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(0)) == (4))) goto event_1756_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (0))) goto event_1756_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) == (0))) goto event_1756_32_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            if (((Active*)(*it))->test_animation(40)) { it.deselect(); continue; }
        }
        if (!playerskinmilla_446_instances.has_selection()) goto event_1756_32_end;
        if (!((((Active*)get_instance(playerskinsash_418_instances))->get_frame()) > (10))) goto event_1756_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 50);
        ((Active*)get_instance(playerskinsash_418_instances))->set_direction(8);
        ((Active*)get_instance(playerskinsash_418_instances))->force_animation(40);
        playerskinspade_419_instances.clear_selection();
        for (ObjectIterator it(playerskinspade_419_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        playerskincarolbike_382_instances.clear_selection();
        for (ObjectIterator it(playerskincarolbike_382_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
        ((Active*)get_instance(playerskinsashhair_417_instances))->set_direction(8);
        ((Active*)get_instance(playerskinsashhair_417_instances))->force_animation(40);
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1756_32_end: ;
}
void Frames::event_func_7726()
{
    // event 1757_32
    {
        if (!(group_main_engine_1)) goto event_1757_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (50))) goto event_1757_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(1)) != (0))) goto event_1757_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1757_32_end: ;
}
void Frames::event_func_7727()
{
    // event 1758_32
    {
        if (!(group_main_engine_1)) goto event_1758_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (50))) goto event_1758_32_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(4)) == (1))) goto event_1758_32_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(12, 0);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(24, 0);
    }
    event_1758_32_end: ;
}
void Frames::event_func_7728()
{
    // event 1760_32
    {
        if (!(group_main_engine_1)) goto event_1760_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(4)) == (1))) goto event_1760_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->set_direction(1);
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(2, -1);
    }
    event_1760_32_end: ;
}
void Frames::event_func_7729()
{
    // event 1761_32
    {
        if (!(group_main_engine_1)) goto event_1761_32_end;
        if (!((((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.get(4)) == (2))) goto event_1761_32_end;
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(4, 0);
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->set_direction(0);
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(gimmicklanternbridge1_1727_instances))->alterables->values.set(3, 1);
    }
    event_1761_32_end: ;
}
void Frames::event_func_7730()
{
    // event 1763_32
    {
        if (!(group_main_engine_1)) goto event_1763_32_end;
        if (!((((Active*)get_instance(discolight_1944_instances))->alterables->values.get(0)) >= (64))) goto event_1763_32_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) == (50))) goto event_1763_32_end;
        if (!((((ArrayObject*)get_instance(recorddata_34_instances))->get_value(2, 20)) == (0))) goto event_1763_32_end;
        ((ArrayObject*)get_instance(recorddata_34_instances))->set_value(1, 2, 20);
    }
    event_1763_32_end: ;
}
void Frames::event_func_7731()
{
    // event 1968_32
    {
        if (!(group_pause_1)) goto event_1968_32_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1968_32_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_1968_32_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_1968_32_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_1968_32_end;
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
            ((Active*)*it)->get_movement()->start();
        }
        ((Active*)get_instance(playerreflect_447_instances))->stop_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectparasol_1959_instances.clear_selection();
        for (ObjectIterator it(objectparasol_1959_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
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
        effectsheart_307_instances.clear_selection();
        for (ObjectIterator it(effectsheart_307_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectswhiteburst_5_instances.clear_selection();
        for (ObjectIterator it(effectswhiteburst_5_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(guienergy_124_instances))->stop_animation();
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        objectdiscoball_1955_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball_1955_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        objectdiscoball2_1956_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball2_1956_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        arrowlight_1896_instances.clear_selection();
        for (ObjectIterator it(arrowlight_1896_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_1968_32_end: ;
}
void Frames::event_func_7732()
{
    // event 1969_32
    bool or_result_1969_32 = false;
    bool or_temp_result_1969_32_0 = false;
    {
        if (!(group_pause_1)) goto or_event_1969_32_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_1969_32_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1969_32_0_end;
        or_result_1969_32 = true;
        or_temp_result_1969_32_0 = true;
    }
    or_event_1969_32_0_end: ;
    // event 1969_32
    bool or_temp_result_1969_32_1 = false;
    {
        if (!(group_pause_1)) goto or_event_1969_32_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_1969_32_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_1969_32_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_1969_32_1_end;
        or_result_1969_32 = true;
        or_temp_result_1969_32_1 = true;
        or_event_1969_32_1_end: ;
        if (!or_result_1969_32) goto or_final_or_event_1969_32_1_end;
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
            ((Active*)*it)->stop_animation();
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(playerreflect_447_instances))->start_animation();
        playerprojectile_320_instances.clear_selection();
        for (ObjectIterator it(playerprojectile_320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickairballoon_1972_instances.clear_selection();
        for (ObjectIterator it(gimmickairballoon_1972_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectswaterhit_655_instances.clear_selection();
        for (ObjectIterator it(effectswaterhit_655_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        objectjumppad_530_instances.clear_selection();
        for (ObjectIterator it(objectjumppad_530_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectparasol_1959_instances.clear_selection();
        for (ObjectIterator it(objectparasol_1959_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
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
        effectflareburst_1788_instances.clear_selection();
        for (ObjectIterator it(effectflareburst_1788_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemypellet_863_instances.clear_selection();
        for (ObjectIterator it(enemypellet_863_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        objectdiscoball_1955_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball_1955_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        objectdiscoball2_1956_instances.clear_selection();
        for (ObjectIterator it(objectdiscoball2_1956_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gachaponfront_1859_instances.clear_selection();
        for (ObjectIterator it(gachaponfront_1859_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gachaponwheel_1843_instances.clear_selection();
        for (ObjectIterator it(gachaponwheel_1843_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyflare_1787_instances.clear_selection();
        for (ObjectIterator it(enemyflare_1787_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        paperlantern_527_instances.clear_selection();
        for (ObjectIterator it(paperlantern_527_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        arrowlight_1896_instances.clear_selection();
        for (ObjectIterator it(arrowlight_1896_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_1969_32_1_end: ;
}
void Frames::handle_frame_33_events()
{
    test_collisions_32();
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
    event_func_6749();
    event_func_6752();
    event_func_2650();
    if (!group_main_engine_1) goto group_main_engine_1_end;
    event_func_7530();
    event_func_7531();
    event_func_7532();
    event_func_7533();
    event_func_7534();
    event_func_7535();
    event_func_7536();
    event_func_7537();
    event_func_7538();
    event_func_7539();
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
    event_func_7540();
    event_func_1425();
    event_func_1426();
    event_func_1427();
    event_func_1428();
    event_func_5410();
    event_func_5411();
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
    event_func_6649();
    event_func_6650();
    event_func_6651();
    event_func_2774();
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
    event_func_3724();
    event_func_3725();
    event_func_1748();
    event_func_3726();
    event_func_3727();
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
    event_func_7541();
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
    event_func_7542();
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
    event_func_7543();
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
    event_func_4529();
    event_func_4530();
    event_func_1980();
    event_func_1981();
    event_func_1982();
    event_func_1983();
    event_func_1984();
    event_func_1985();
    event_func_1986();
    event_func_4531();
    event_func_1987();
    event_func_4532();
    event_func_1988();
    event_func_1989();
    event_func_4533();
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
    event_func_2924();
    event_func_2925();
    event_func_2926();
    event_func_2927();
    event_func_2928();
    event_func_2929();
    event_func_2930();
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
    event_func_3730();
    event_func_3731();
    event_func_2425();
    event_func_3732();
    event_func_3733();
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
    event_func_4534();
    event_func_4535();
    event_func_2962();
    event_func_4536();
    event_func_4537();
    event_func_4538();
    event_func_4539();
    event_func_4540();
    event_func_4541();
    event_func_7544();
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
    if (!group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1) goto group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end;
    event_func_3737();
    event_func_3738();
    event_func_3739();
    group_main_engine_level_specific_methods_gimmicks_and_special_objects_dimensionwarped_basic_hanging_bar_s2_sky_fortress_zone_1_end: ;
    event_func_7545();
    event_func_7546();
    event_func_7547();
    event_func_7548();
    event_func_7549();
    event_func_7550();
    event_func_7551();
    event_func_7552();
    event_func_7553();
    event_func_7554();
    event_func_7555();
    event_func_7556();
    event_func_7557();
    event_func_7558();
    event_func_7559();
    event_func_7560();
    event_func_7561();
    event_func_7562();
    event_func_7563();
    event_func_7564();
    event_func_7565();
    event_func_7566();
    event_func_7567();
    event_func_7568();
    event_func_7569();
    event_func_7570();
    event_func_7571();
    event_func_7572();
    event_func_7573();
    event_func_4152();
    event_func_5214();
    event_func_7574();
    event_func_7575();
    event_func_7576();
    event_func_7577();
    event_func_7578();
    event_func_6996();
    event_func_7579();
    event_func_6666();
    event_func_7580();
    event_func_7581();
    event_func_7582();
    event_func_7583();
    event_func_6735();
    event_func_6736();
    event_func_6737();
    event_func_6738();
    event_func_7584();
    event_func_7585();
    event_func_7586();
    event_func_7587();
    event_func_7588();
    event_func_7589();
    event_func_7590();
    event_func_7591();
    event_func_7592();
    event_func_7593();
    event_func_7594();
    event_func_7595();
    event_func_7596();
    event_func_7597();
    event_func_7598();
    event_func_7599();
    event_func_7600();
    event_func_5399();
    event_func_7601();
    event_func_5401();
    event_func_7096();
    event_func_7112();
    event_func_7113();
    event_func_7114();
    event_func_7115();
    event_func_7116();
    event_func_7117();
    event_func_7118();
    event_func_7119();
    event_func_7120();
    event_func_7121();
    event_func_7122();
    event_func_7123();
    event_func_7124();
    event_func_7125();
    event_func_7126();
    event_func_7127();
    event_func_7128();
    event_func_7129();
    event_func_7130();
    event_func_7131();
    event_func_7132();
    event_func_7133();
    event_func_7602();
    event_func_7603();
    event_func_7604();
    event_func_7605();
    event_func_7606();
    event_func_7607();
    event_func_7608();
    event_func_7609();
    event_func_7610();
    event_func_7611();
    event_func_7612();
    event_func_7613();
    event_func_7614();
    event_func_7615();
    event_func_7616();
    event_func_7617();
    event_func_7618();
    event_func_7619();
    event_func_7620();
    event_func_7621();
    event_func_7622();
    event_func_7623();
    event_func_7624();
    event_func_7625();
    event_func_7626();
    event_func_7627();
    event_func_7628();
    event_func_7629();
    event_func_7630();
    event_func_7631();
    event_func_7632();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_7633();
    event_func_7634();
    event_func_7635();
    event_func_7636();
    event_func_7637();
    event_func_7638();
    event_func_7639();
    event_func_7640();
    event_func_6748();
    event_func_6750();
    event_func_6751();
    event_func_6753();
    event_func_7641();
    event_func_7642();
    event_func_7643();
    event_func_7644();
    event_func_7645();
    event_func_7646();
    event_func_7647();
    event_func_7648();
    event_func_7649();
    event_func_7650();
    event_func_7651();
    event_func_7652();
    event_func_6766();
    event_func_6767();
    event_func_7653();
    event_func_6769();
    event_func_7654();
    event_func_7655();
    event_func_7656();
    event_func_7657();
    event_func_7658();
    event_func_7659();
    event_func_7660();
    event_func_7661();
    event_func_7662();
    event_func_7663();
    event_func_7664();
    event_func_7665();
    event_func_7666();
    event_func_7667();
    event_func_7668();
    event_func_7669();
    event_func_7670();
    event_func_7671();
    event_func_7672();
    event_func_7673();
    event_func_7674();
    event_func_7675();
    event_func_7676();
    event_func_7677();
    event_func_7678();
    event_func_7679();
    event_func_7680();
    event_func_7680();
    event_func_7681();
    event_func_7682();
    event_func_7683();
    event_func_7684();
    event_func_7685();
    event_func_7686();
    event_func_7687();
    event_func_7688();
    event_func_7689();
    event_func_7690();
    event_func_7691();
    event_func_7692();
    event_func_7693();
    event_func_7694();
    event_func_6999();
    event_func_7000();
    event_func_7001();
    event_func_7002();
    event_func_7003();
    event_func_7004();
    event_func_7005();
    event_func_7006();
    event_func_7695();
    event_func_7008();
    event_func_7009();
    event_func_7010();
    event_func_7011();
    event_func_7012();
    event_func_7013();
    event_func_7014();
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
    event_func_7696();
    event_func_7036();
    event_func_7697();
    event_func_7698();
    event_func_7699();
    event_func_7700();
    event_func_7701();
    event_func_7702();
    event_func_7703();
    event_func_7704();
    event_func_7705();
    event_func_7706();
    event_func_7707();
    event_func_7708();
    event_func_7709();
    event_func_7710();
    event_func_7711();
    event_func_7712();
    event_func_5707();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_3867();
    event_func_3000();
    event_func_7713();
    event_func_2491();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4638();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_7714();
    event_func_7715();
    event_func_7716();
    event_func_7717();
    event_func_7718();
    event_func_7719();
    event_func_7720();
    event_func_7721();
    event_func_7722();
    event_func_7723();
    event_func_7724();
    event_func_7725();
    event_func_7726();
    event_func_7727();
    event_func_7728();
    event_func_7729();
    event_func_7730();
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
    event_func_2576();
    event_func_2577();
    event_func_2578();
    event_func_2579();
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
    event_func_2603();
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
    event_func_7731();
    event_func_7732();
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
void Frames::handle_frame_33_pre_events()
{
}
void Frames::event_func_7733()
{
    // event 13_32
    {
        if (!(group_main_engine_1)) goto event_13_32_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 2000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 37);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 15);
        objectkeystone_311_instances.clear_selection();
        for (ObjectIterator it(objectkeystone_311_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
        }
    }
    event_13_32_end: ;
}
void Frames::event_func_7734()
{
    // event 30_32
    {
        if (!(group_main_engine_1)) goto event_30_32_end;
        ((SystemBox*)get_instance(levelparallaxpiece0m_1881_instances))->alterables->values.set(3, 0.99);
        ((SystemBox*)get_instance(levelparallaxpiece0m_1881_instances))->alterables->values.set(4, 0.94);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.72);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.72);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.6);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.7);
    }
    event_30_32_end: ;
}
void Frames::event_func_7735()
{
    // event 1443_32
    {
        if (!(group_main_engine_1)) goto event_1443_32_end;
        gimmickhangingmovingbar_1963_instances.clear_selection();
        for (ObjectIterator it(gimmickhangingmovingbar_1963_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)*it)->get_x());
        }
    }
    event_1443_32_end: ;
}
void Frames::event_func_7736()
{
    // event 1489_32
    {
        if (!(group_main_engine_1)) goto event_1489_32_end;
        enemyballoon_1947_instances.clear_selection();
        for (ObjectIterator it(enemyballoon_1947_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1489_32_end: ;
}
void Frames::event_func_7737()
{
    // event 1501_32
    {
        if (!(group_main_engine_1)) goto event_1501_32_end;
        platformstilt1_1892_instances.clear_selection();
        for (ObjectIterator it(platformstilt1_1892_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
        }
        platformstilt2_1893_instances.clear_selection();
        for (ObjectIterator it(platformstilt2_1893_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_x());
        }
    }
    event_1501_32_end: ;
}
void Frames::event_func_7738()
{
    // event 1562_32
    {
        if (!(group_main_engine_1)) goto event_1562_32_end;
        keyboard_1940_instances.clear_selection();
        spread_value(keyboard_1940_instances, 0, 0);
        for (ObjectIterator it(keyboard_1940_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(0)%math_helper%8);
        }
    }
    event_1562_32_end: ;
}
void Frames::event_func_7739()
{
    // event 1624_32
    {
        if (!(group_main_engine_1)) goto event_1624_32_end;
        enemyroller_1943_instances.clear_selection();
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
        }
        spread_value(enemyroller_1943_instances, 10, 0);
        for (ObjectIterator it(enemyroller_1943_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(10, (((Active*)*it)->alterables->values.get(10)%math_helper%3)*10-10);
        }
    }
    event_1624_32_end: ;
}
void Frames::event_func_7740()
{
    // event 1650_32
    {
        if (!(group_main_engine_1)) goto event_1650_32_end;
        enemyduster_1958_instances.clear_selection();
        for (ObjectIterator it(enemyduster_1958_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1650_32_end: ;
}
void Frames::event_func_7741()
{
    // event 1712_32
    {
        if (!(group_main_engine_1)) goto event_1712_32_end;
        enemyghettoshell_1971_instances.clear_selection();
        for (ObjectIterator it(enemyghettoshell_1971_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1712_32_end: ;
}
void Frames::event_func_7742()
{
    // event 1735_32
    {
        if (!(group_main_engine_1)) goto event_1735_32_end;
        if (!((global_values->get(4)) >= (-1))) goto event_1735_32_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1735_32_end: ;
}
void Frames::event_func_7743()
{
    // event 1745_32
    {
        if (!(group_main_engine_1)) goto event_1745_32_end;
        ((Active*)get_instance(discolight_1944_instances))->set_x_scale(global_values->get(16));
        ((Active*)get_instance(discolight_1944_instances))->set_y_scale(global_values->get(17));
        ((Active*)get_instance(discolight_1944_instances))->move_back();
    }
    event_1745_32_end: ;
}
void Frames::on_frame_33_start_events()
{
    event_func_5375();
    event_func_4133();
    event_func_7733();
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
    event_func_7734();
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
    event_func_3271();
    event_func_2685();
    event_func_3272();
    event_func_3273();
    event_func_3986();
    event_func_3987();
    event_func_7735();
    event_func_6941();
    event_func_7736();
    event_func_7737();
    event_func_5881();
    event_func_7738();
    event_func_7739();
    event_func_7740();
    event_func_7061();
    event_func_7062();
    event_func_7741();
    event_func_2686();
    event_func_7742();
    event_func_7743();
    event_func_6946();
    event_func_2689();
    event_func_2690();
    event_func_2691();
    event_func_7063();
    event_func_4145();
    event_func_4146();
    event_func_2694();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_33_init()
{
    index = 32;
    width = 11624;
    height = 1280;
    virtual_width = 11624;
    virtual_height = 1280;
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
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &escalatorleft_1951_instances, &levelwaterplatform_1954_instances, &levelmovingplatform1_1965_instances, &escalatorright_1966_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_8.set(18, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &hazardspikesup_558_instances, &escalatorleft_1951_instances, &levelwaterplatform_1954_instances, &turningspring_1960_instances, &levelmovingplatform1_1965_instances, &escalatorright_1966_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_9.set(42, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&lamppostfront_1778_instances, &enemycoilhead_1782_instances, &enemyflarecannon_1820_instances, &enemysuperturretus_1828_instances, &enemyroller_1943_instances, &enemyballoon_1947_instances, &objectwastebin_1948_instances, &enemyduster_1958_instances, &enemyghettoshell_1971_instances, NULL};
    qualifier_20.set(9, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece0m_1881_instances, &levelparallaxpiece1_2_instances, &levelparallaxpiece2_467_instances, NULL};
    qualifier_0.set(3, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &gimmicklanternbridge1_1727_instances, &gimmicklanternbridge2_1728_instances, &gimmicklanternbridge3_1729_instances, &gimmicklanternbridge4_1730_instances, &gimmicklanternbridge5_1731_instances, &gimmicklanternbridge6_1732_instances, &gimmicklanternbridge7_1733_instances, &gimmicklanternbridge8_1734_instances, &layer0loop2_1743_instances, &layer1loop2_1744_instances, &hazardspikesup_558_instances, &gimmickteetertotter_1827_instances, &layer0loop3_1857_instances, &keyboard_1940_instances, &layer0loop4_1945_instances, &layer0loop5_1946_instances, &turningspring_1960_instances, &layer0loop6_1969_instances, NULL};
    qualifier_7.set(43, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemysuperturretus_1828_instances, NULL};
    qualifier_4.set(35, &qualifier_4_instances[0]);
    static ObjectList* qualifier_21_instances[] = {&shieldwood_313_instances, &shieldearth_314_instances, &shieldflameback_315_instances, &shieldflamefront_316_instances, &shieldmagnetic_317_instances, &shieldwater_318_instances, NULL};
    qualifier_21.set(6, &qualifier_21_instances[0]);
    static ObjectList* qualifier_18_instances[] = {&mastergroupsb_385_instances, &generalanglechanger75_386_instances, NULL};
    qualifier_18.set(2, &qualifier_18_instances[0]);
    static ObjectList* qualifier_19_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, NULL};
    qualifier_19.set(12, &qualifier_19_instances[0]);
    static ObjectList* qualifier_23_instances[] = {&gimmickhangingidleswitch_1257_instances, &gimmickhangingmovingsensor_1962_instances, &gimmickhangingidleballoon_1973_instances, NULL};
    qualifier_23.set(3, &qualifier_23_instances[0]);
    static ObjectList* qualifier_22_instances[] = {&objectchair_522_instances, &restroommen_1941_instances, &restroomwomen_1942_instances, NULL};
    qualifier_22.set(3, &qualifier_22_instances[0]);
    static ObjectList* qualifier_14_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_14.set(1, &qualifier_14_instances[0]);
    static ObjectList* qualifier_15_instances[] = {&laddertop_357_instances, &mastergroupsb_385_instances, NULL};
    qualifier_15.set(2, &qualifier_15_instances[0]);
    static ObjectList* qualifier_16_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_16.set(1, &qualifier_16_instances[0]);
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, NULL};
    qualifier_17.set(1, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &gimmicklanternbridge1_1727_instances, &gimmicklanternbridge2_1728_instances, &layer0loop2_1743_instances, &layer0loop3_1857_instances, &layer0loop4_1945_instances, &layer0loop5_1946_instances, &layer0loop6_1969_instances, NULL};
    qualifier_10.set(10, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &layer1loop2_1744_instances, NULL};
    qualifier_11.set(4, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_12.set(3, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelferriswheel1_1765_instances, &levelferriswheel2_1766_instances, &levelferriswheel3_1767_instances, &levelferriswheel4_1768_instances, &levelmovingplatform1_1965_instances, &levelmovingplatform2_940_instances, NULL};
    qualifier_13.set(7, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0m_1881(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_1882(0, 0), 0);
    add_background_object(create_levelparallaxpiece2_1883(0, 312), 0);
    add_background_object(create_mosaicwall1_1886(5936, 800), 2);
    add_background_object(create_mosaicwall1_1886(5808, 800), 2);
    add_background_object(create_mosaicwall1_1886(3680, 624), 2);
    add_background_object(create_mosaicwall1_1886(800, 1088), 2);
    add_background_object(create_mosaicwall1_1886(928, 1088), 2);
    add_background_object(create_mosaicwall1_1886(1056, 1088), 2);
    add_background_object(create_mosaicwall1_1886(1184, 1088), 2);
    add_background_object(create_mosaicwall2_1887(848, 1088), 2);
    add_background_object(create_mosaicwall2_1887(1248, 1088), 2);
    add_background_object(create_mosaicwall1_1886(3552, 624), 2);
    add_background_object(create_mosaicwall2_1887(3568, 624), 2);
    add_background_object(create_mosaicwall2_1887(3776, 624), 2);
    add_background_object(create_ferriswheelbase2_1644(1600, 672), 2);
    add_background_object(create_ferriswheelbase2_1644(1600, 736), 2);
    add_background_object(create_ferriswheelbase2_1644(1600, 800), 2);
    add_background_object(create_mallscalecolumn1_1888(768, 1216), 2);
    add_background_object(create_mallscalecolumn2_1889(768, 1104), 2);
    add_background_object(create_mallscalecolumn1_1888(768, 1184), 2);
    add_background_object(create_mallscalecolumn1_1888(768, 1152), 2);
    add_background_object(create_mallscalecolumn1_1888(768, 1120), 2);
    add_background_object(create_mallscalecolumn1_1888(1264, 1216), 2);
    add_background_object(create_mallscalecolumn2_1889(1264, 1104), 2);
    add_background_object(create_mallscalecolumn1_1888(1264, 1184), 2);
    add_background_object(create_mallscalecolumn1_1888(1264, 1152), 2);
    add_background_object(create_mallscalecolumn1_1888(1264, 1120), 2);
    add_background_object(create_mosaicwall2_1887(5824, 800), 2);
    add_background_object(create_mosaicwall2_1887(6032, 800), 2);
    add_background_object(create_mallfloor3_1890(2048, 1056), 2);
    add_background_object(create_mallfloor3_1890(2176, 1056), 2);
    add_background_object(create_mallfloor1_1891(4848, 1176), 2);
    add_background_object(create_mallfloor1_1891(4976, 1176), 2);
    add_background_object(create_mallfloor1_1891(5104, 1176), 2);
    add_background_object(create_mosaicwall1_1886(6704, 336), 2);
    add_background_object(create_mosaicwall1_1886(6832, 336), 2);
    add_background_object(create_mosaicwall1_1886(6960, 336), 2);
    add_background_object(create_mosaicwall1_1886(7088, 336), 2);
    add_object(create_gimmickhangingswitch_1842(3887, 336), 2);
    add_object(create_gachaponwheel_1843(3808, 415), 2);
    add_object(create_platformstilt1_1892(4472, 1240), 2);
    add_object(create_platformstilt1_1892(4600, 1240), 2);
    add_object(create_platformstilt1_1892(4728, 1240), 2);
    add_object(create_platformstilt2_1893(4583, 1240), 2);
    add_object(create_platformstilt2_1893(4711, 1240), 2);
    add_object(create_platformstilt2_1893(4839, 1240), 2);
    add_object(create_platformstilt3_1894(4583, 1256), 2);
    add_object(create_platformstilt3_1894(4711, 1256), 2);
    add_object(create_platformstilt3_1894(4839, 1256), 2);
    add_object(create_platformstilt4_1895(4472, 1272), 2);
    add_object(create_platformstilt4_1895(4600, 1272), 2);
    add_object(create_platformstilt4_1895(4728, 1272), 2);
    add_object(create_platformstilt1_1892(5240, 1240), 2);
    add_object(create_platformstilt2_1893(5351, 1240), 2);
    add_object(create_platformstilt3_1894(5351, 1256), 2);
    add_object(create_platformstilt4_1895(5240, 1272), 2);
    add_object(create_objectcrystal_279(5333, 906), 2);
    add_object(create_objectcrystal_279(5381, 890), 2);
    add_object(create_objectcrystal_279(5429, 874), 2);
    add_object(create_paperlantern_527(3280, 632), 2);
    add_object(create_paperlantern_527(3344, 632), 2);
    add_object(create_arrowlight_1896(1600, 792), 2);
    add_object(create_arrowlight_1896(792, 1120), 2);
    add_object(create_arrowlight_1896(792, 1184), 2);
    add_object(create_arrowlight_1896(1288, 1120), 2);
    add_object(create_arrowlight_1896(1288, 1184), 2);
    add_object(create_platformstilt1_1892(5624, 952), 2);
    add_object(create_platformstilt2_1893(5735, 952), 2);
    add_object(create_platformstilt3_1894(5735, 968), 2);
    add_object(create_platformstilt4_1895(5624, 984), 2);
    add_object(create_gimmickhangingswitch_1842(6015, 848), 2);
    add_object(create_gachaponwheel_1843(5936, 927), 2);
    add_object(create_gimmickhangingswitch_1842(7143, 384), 2);
    add_object(create_gachaponwheel_1843(7064, 463), 2);
    add_object(create_gimmickhangingswitch_1842(6935, 384), 2);
    add_object(create_gachaponwheel_1843(6856, 463), 2);
    add_background_object(create_mallfloor4_1897(1343, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 1056), 3);
    add_background_object(create_floor19_1697(10448, 1024), 3);
    add_background_object(create_mosaicwall1_1886(6528, 384), 3);
    add_background_object(create_mosaicwall2_1887(6624, 384), 3);
    add_background_object(create_fnstonetreebase_1898(104, 656), 3);
    add_background_object(create_birchtree_1846(88, 528), 3);
    add_background_object(create_mosaicwall1_1886(11296, 896), 3);
    add_background_object(create_mosaicwall1_1886(11424, 896), 3);
    add_background_object(create_mosaicwall2_1887(11472, 896), 3);
    add_background_object(create_mosaicwall2_1887(11296, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(10976, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(10976, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(10976, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(10976, 448), 3);
    add_background_object(create_fngianttv_1899(11024, 480), 3);
    add_background_object(create_floor31_1708(9160, 1160), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 672), 3);
    add_background_object(create_fnlullaby_1900(11232, 936), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 704), 3);
    add_background_object(create_mallscalecolumn2_1889(11224, 624), 3);
    add_background_object(create_ferriswheelbase2_1644(5920, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 992), 3);
    add_background_object(create_floor31_1708(10056, 1158), 3);
    add_background_object(create_floor30_1707(9736, 1152), 3);
    add_background_object(create_floor26_1653(9160, 936), 3);
    add_background_object(create_mosaicwall1_1886(6400, 384), 3);
    add_background_object(create_labstarposter_1901(6576, 393), 3);
    add_background_object(create_mosaicwall2_1887(6424, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 416), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(6280, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(6280, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(6280, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(6280, 416), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 32), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 0), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 640), 3);
    add_background_object(create_ferriswheelbase2_1644(8352, 592), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 704), 3);
    add_background_object(create_ferriswheelbase2_1644(8216, 832), 3);
    add_background_object(create_mosaicwall1_1886(8176, 896), 3);
    add_background_object(create_mosaicwall2_1887(8272, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 736), 3);
    add_background_object(create_mosaicwall1_1886(5872, 1040), 3);
    add_background_object(create_mosaicwall2_1887(5872, 1040), 3);
    add_background_object(create_mosaicwall1_1886(7664, 896), 3);
    add_background_object(create_mosaicwall2_1887(7680, 896), 3);
    add_background_object(create_mosaicwall2_1887(7776, 896), 3);
    add_background_object(create_mosaicwall1_1886(7792, 896), 3);
    add_background_object(create_mosaicwall1_1886(7616, 704), 3);
    add_background_object(create_mosaicwall1_1886(7744, 704), 3);
    add_background_object(create_mosaicwall1_1886(7872, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 800), 3);
    add_background_object(create_mosaicwall1_1886(7408, 896), 3);
    add_background_object(create_mosaicwall1_1886(7536, 896), 3);
    add_background_object(create_mosaicwall1_1886(7104, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 800), 3);
    add_background_object(create_ferriswheelbase2_1644(5536, 656), 3);
    add_background_object(create_ferriswheelbase2_1644(5536, 528), 3);
    add_background_object(create_ferriswheelbase2_1644(5536, 464), 3);
    add_background_object(create_hamstertunnel9_1902(4912, 920), 3);
    add_background_object(create_hamstertunnel9_1902(4976, 920), 3);
    add_background_object(create_mallscalecolumn2_1889(7072, 912), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 928), 3);
    add_background_object(create_hamstertunnel9_1902(6064, 1096), 3);
    add_background_object(create_hamstertunnel9_1902(6000, 1096), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 720), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 656), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 624), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 592), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 560), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 528), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 496), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 464), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 432), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 400), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 368), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(4112, 304), 3);
    add_background_object(create_ferriswheelbase2_1644(1040, 872), 3);
    add_background_object(create_ferriswheelbase2_1644(1136, 872), 3);
    add_background_object(create_ferriswheelbase2_1644(1040, 936), 3);
    add_background_object(create_ferriswheelbase2_1644(1136, 936), 3);
    add_background_object(create_ferriswheelbase2_1644(1040, 1000), 3);
    add_background_object(create_ferriswheelbase2_1644(1136, 1000), 3);
    add_background_object(create_hamstertunnel10_1903(5024, 896), 3);
    add_background_object(create_mallfloor7_1904(2816, 1048), 3);
    add_background_object(create_mallfloor7_1904(2944, 1048), 3);
    add_background_object(create_mallfloor7_1904(3072, 1048), 3);
    add_background_object(create_mallfloor1_1891(3200, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(1592, 1072), 3);
    add_background_object(create_mallscalecolumn1_1888(1592, 1040), 3);
    add_background_object(create_mallscalecolumn1_1888(1592, 1008), 3);
    add_background_object(create_mallscalecolumn1_1888(1592, 976), 3);
    add_background_object(create_mallscalecolumn2_1889(1592, 960), 3);
    add_background_object(create_mosaicwall1_1886(2176, 896), 3);
    add_background_object(create_mosaicwall1_1886(2048, 896), 3);
    add_background_object(create_mosaicwall2_1887(2272, 896), 3);
    add_background_object(create_mosaicwall2_1887(2048, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(1536, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(1536, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 832), 3);
    add_background_object(create_mallscalecolumn2_1889(3792, 832), 3);
    add_background_object(create_fnlullaby_1900(2016, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 1024), 3);
    add_background_object(create_hamstertunnel8_1905(5048, 848), 3);
    add_background_object(create_hamstertunnel8_1905(5048, 784), 3);
    add_background_object(create_mosaicwall1_1886(5040, 1016), 3);
    add_background_object(create_mosaicwall1_1886(4912, 1016), 3);
    add_background_object(create_mosaicwall2_1887(4928, 1016), 3);
    add_background_object(create_mosaicwall2_1887(5136, 1016), 3);
    add_background_object(create_mallscalecolumn1_1888(4848, 1048), 3);
    add_background_object(create_mallscalecolumn1_1888(4848, 1016), 3);
    add_background_object(create_mallscalecolumn1_1888(5152, 1048), 3);
    add_background_object(create_mallscalecolumn1_1888(5152, 1016), 3);
    add_background_object(create_mallscalecolumn2_1889(5152, 1024), 3);
    add_background_object(create_mallscalecolumn2_1889(4848, 1024), 3);
    add_background_object(create_ferriswheelbase_1664(1584, 664), 3);
    add_background_object(create_ferriswheelbase2_1644(2240, 672), 3);
    add_background_object(create_ferriswheelbase2_1644(2240, 736), 3);
    add_background_object(create_ferriswheelbase2_1644(2240, 800), 3);
    add_background_object(create_ferriswheelbase_1664(2224, 664), 3);
    add_background_object(create_ferriswheelbase2_1644(3904, 1184), 3);
    add_background_object(create_ferriswheelbase2_1644(3904, 864), 3);
    add_background_object(create_ferriswheelbase_1664(3888, 856), 3);
    add_background_object(create_ferriswheelbase2_1644(4488, 1184), 3);
    add_background_object(create_ferriswheelbase2_1644(4488, 864), 3);
    add_background_object(create_ferriswheelbase_1664(4472, 856), 3);
    add_background_object(create_mallscalecolumn1_1888(3936, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(3936, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(3936, 720), 3);
    add_background_object(create_mallscalecolumn1_1888(3936, 656), 3);
    add_background_object(create_mallscalecolumn2_1889(3936, 640), 3);
    add_background_object(create_floor30_1707(5400, 1104), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 832), 3);
    add_background_object(create_mallfloor7_1904(3008, 808), 3);
    add_background_object(create_mallfloor7_1904(3104, 808), 3);
    add_background_object(create_mallfloor7_1904(2560, 808), 3);
    add_background_object(create_mallfloor7_1904(2656, 808), 3);
    add_background_object(create_mallfloor7_1904(4320, 1240), 3);
    add_background_object(create_parasolbase_1906(3640, 1136), 3);
    add_background_object(create_parasolbase2_1907(3616, 1168), 3);
    add_background_object(create_discoballbase_1908(3272, 976), 3);
    add_background_object(create_fntreeshadow_1909(1120, 1104), 3);
    add_background_object(create_fntreeshadow_1909(864, 1104), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(2288, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(2288, 992), 3);
    add_background_object(create_mallfloor1_1891(0, 1248), 3);
    add_background_object(create_lamppostback_1709(240, 1168), 3);
    add_background_object(create_mallfloor1_1891(128, 1248), 3);
    add_background_object(create_mallfloor1_1891(256, 1248), 3);
    add_background_object(create_fnstonetreebase_1898(496, 1232), 3);
    add_background_object(create_mallfountain1_1910(112, 1152), 3);
    add_background_object(create_mallfloor1_1891(384, 1248), 3);
    add_background_object(create_mallfloor1_1891(512, 1248), 3);
    add_background_object(create_birchtree_1846(480, 1104), 3);
    add_background_object(create_fnstonetreebase_1898(16, 1232), 3);
    add_background_object(create_birchtree_1846(0, 1104), 3);
    add_background_object(create_escalatorback1_1911(552, 1216), 3);
    add_background_object(create_escalatorback2_1912(584, 1184), 3);
    add_background_object(create_mallfloor1_1891(640, 1248), 3);
    add_background_object(create_mallfloor1_1891(768, 1248), 3);
    add_background_object(create_mallfloor1_1891(896, 1248), 3);
    add_background_object(create_mallfloor3_1890(832, 1056), 3);
    add_background_object(create_mallfloor5_1913(2304, 864), 3);
    add_background_object(create_mallfloor4_1897(760, 1056), 3);
    add_background_object(create_escalatorback2_1912(616, 1152), 3);
    add_background_object(create_escalatorback2_1912(648, 1120), 3);
    add_background_object(create_escalatorback2_1912(680, 1088), 3);
    add_background_object(create_escalatorback2_1912(712, 1056), 3);
    add_background_object(create_escalatorback3_1914(744, 1032), 3);
    add_background_object(create_mallfloor3_1890(896, 1056), 3);
    add_background_object(create_mallfloor3_1890(2176, 864), 3);
    add_background_object(create_mallfloor1_1891(1024, 1248), 3);
    add_background_object(create_escalatorback4_1915(2520, 1024), 3);
    add_background_object(create_escalatorback5_1916(2488, 992), 3);
    add_background_object(create_escalatorback6_1917(2336, 840), 3);
    add_background_object(create_escalatorback5_1916(2456, 960), 3);
    add_background_object(create_escalatorback5_1916(2424, 928), 3);
    add_background_object(create_escalatorback5_1916(2392, 896), 3);
    add_background_object(create_escalatorback5_1916(2360, 864), 3);
    add_background_object(create_mallfloor3_1890(3456, 784), 3);
    add_background_object(create_mallfloor3_1890(3584, 784), 3);
    add_background_object(create_mallfloor3_1890(1024, 1056), 3);
    add_background_object(create_mallfloor1_1891(3312, 1056), 3);
    add_background_object(create_malllogo_1918(1008, 848), 3);
    add_background_object(create_mallfountain1_1910(272, 1152), 3);
    add_background_object(create_mallfountain1_1910(896, 960), 3);
    add_background_object(create_lamppostback_1709(80, 1168), 3);
    add_background_object(create_lamppostback_1709(400, 1168), 3);
    add_background_object(create_mallfloor3_1890(1152, 1056), 3);
    add_background_object(create_mallfloor5_1913(1280, 1056), 3);
    add_background_object(create_escalatorback4_1915(1496, 1216), 3);
    add_background_object(create_escalatorback5_1916(1464, 1184), 3);
    add_background_object(create_escalatorback6_1917(1312, 1032), 3);
    add_background_object(create_escalatorback5_1916(1432, 1152), 3);
    add_background_object(create_escalatorback5_1916(1400, 1120), 3);
    add_background_object(create_escalatorback5_1916(1368, 1088), 3);
    add_background_object(create_escalatorback5_1916(1336, 1056), 3);
    add_background_object(create_mallfloor1_1891(1152, 1248), 3);
    add_background_object(create_mallfloor1_1891(1280, 1248), 3);
    add_background_object(create_mallfloor1_1891(1408, 1248), 3);
    add_background_object(create_mallfloor1_1891(1536, 1248), 3);
    add_background_object(create_mallfloor1_1891(1792, 1248), 3);
    add_background_object(create_redcarpet_1919(0, 1248), 3);
    add_background_object(create_mallfloor1_1891(3312, 1248), 3);
    add_background_object(create_mallfloor1_1891(3312, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(2288, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(2288, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(2288, 912), 3);
    add_background_object(create_mallfloor3_1890(2048, 864), 3);
    add_background_object(create_mallfloor1_1891(1920, 864), 3);
    add_background_object(create_mallfloor3_1890(1792, 912), 3);
    add_background_object(create_mallfloor3_1890(1664, 912), 3);
    add_background_object(create_mallfloor1_1891(1536, 864), 3);
    add_background_object(create_mallfloor6_1920(1648, 864), 3);
    add_background_object(create_mallfloor1_1891(576, 816), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(448, 960), 3);
    add_background_object(create_mallscalecolumn2_1889(448, 960), 3);
    add_background_object(create_fnstonetreebase_1898(2016, 848), 3);
    add_background_object(create_birchtree_1846(2000, 720), 3);
    add_background_object(create_fnstonetreebase_1898(1456, 848), 3);
    add_background_object(create_birchtree_1846(1440, 720), 3);
    add_background_object(create_fnstonetreebase_1898(896, 1232), 3);
    add_background_object(create_birchtree_1846(880, 1104), 3);
    add_background_object(create_fnstonetreebase_1898(1152, 1232), 3);
    add_background_object(create_birchtree_1846(1136, 1104), 3);
    add_background_object(create_mallfloor6_1920(1920, 864), 3);
    add_background_object(create_mallfloor1_1891(3440, 1248), 3);
    add_background_object(create_mallfloor1_1891(3568, 1248), 3);
    add_background_object(create_mallfloor1_1891(3696, 1248), 3);
    add_background_object(create_mallfloor1_1891(3824, 1248), 3);
    add_background_object(create_mallfloor1_1891(3952, 1248), 3);
    add_background_object(create_mallfloor1_1891(4080, 1248), 3);
    add_background_object(create_mallfloor1_1891(4208, 1248), 3);
    add_background_object(create_mallfloor1_1891(4336, 1248), 3);
    add_background_object(create_mallfloor1_1891(4464, 1248), 3);
    add_background_object(create_mallfloor1_1891(4592, 1248), 3);
    add_background_object(create_switchwallbase_1921(1648, 1200), 3);
    add_background_object(create_mallfloor1_1891(1792, 1104), 3);
    add_background_object(create_mallfloor6_1920(2032, 912), 3);
    add_background_object(create_mallfloor3_1890(1536, 1104), 3);
    add_background_object(create_mallfloor1_1891(3488, 544), 3);
    add_background_object(create_mallfloor1_1891(3360, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(3488, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(3488, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(3488, 720), 3);
    add_background_object(create_mallscalecolumn2_1889(3488, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(3488, 656), 3);
    add_background_object(create_mallfloor1_1891(3616, 544), 3);
    add_background_object(create_mallfloor3_1890(3712, 784), 3);
    add_background_object(create_mallfloor1_1891(3744, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 752), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 720), 3);
    add_background_object(create_mallscalecolumn2_1889(3792, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 656), 3);
    add_background_object(create_mallfloor1_1891(3872, 544), 3);
    add_background_object(create_mallfloor3_1890(3936, 784), 3);
    add_background_object(create_mallfloor1_1891(4000, 544), 3);
    add_background_object(create_mallfloor1_1891(-128, 1248), 3);
    add_background_object(create_mallfloor1_1891(-176, 1152), 3);
    add_background_object(create_mallfloor1_1891(-176, 1056), 3);
    add_background_object(create_mallfloor1_1891(-176, 960), 3);
    add_background_object(create_mallfloor1_1891(576, 720), 3);
    add_background_object(create_mallfloor1_1891(3440, 1152), 3);
    add_background_object(create_mallfloor1_1891(3568, 1200), 3);
    add_background_object(create_parasolbase_1906(3752, 1184), 3);
    add_background_object(create_parasolbase_1906(3752, 1112), 3);
    add_background_object(create_parasolbase_1906(3752, 1040), 3);
    add_background_object(create_parasolbase2_1907(3728, 1216), 3);
    add_background_object(create_mallfloor6_1920(4304, 1240), 3);
    add_background_object(create_mallfloor6_1920(4448, 1240), 3);
    add_background_object(create_birchtree_1846(4328, 1112), 3);
    add_background_object(create_redcarpet_1919(128, 1248), 3);
    add_background_object(create_redcarpet_1919(256, 1248), 3);
    add_background_object(create_redcarpet_1919(384, 1248), 3);
    add_background_object(create_redcarpet_1919(512, 1248), 3);
    add_background_object(create_redcarpet_1919(640, 1248), 3);
    add_background_object(create_redcarpet_1919(768, 1248), 3);
    add_background_object(create_redcarpet_1919(896, 1248), 3);
    add_background_object(create_redcarpet_1919(1024, 1248), 3);
    add_background_object(create_redcarpet_1919(1152, 1248), 3);
    add_background_object(create_redcarpet_1919(1280, 1248), 3);
    add_background_object(create_redcarpet_1919(1408, 1248), 3);
    add_background_object(create_redcarpet_1919(1536, 1248), 3);
    add_background_object(create_mallfloor6_1920(1536, 1104), 3);
    add_background_object(create_redcarpet_1919(3312, 1056), 3);
    add_background_object(create_mallfloor6_1920(3424, 1056), 3);
    add_background_object(create_mallfloor6_1920(3552, 1152), 3);
    add_background_object(create_mallfloor6_1920(3680, 1200), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(3424, 832), 3);
    add_background_object(create_mallscalecolumn2_1889(3424, 832), 3);
    add_background_object(create_parasolbase_1906(1848, 848), 3);
    add_background_object(create_parasolbase2_1907(1824, 880), 3);
    add_background_object(create_parasolbase_1906(1720, 848), 3);
    add_background_object(create_parasolbase2_1907(1696, 880), 3);
    add_background_object(create_mallfloor3_1890(2544, 816), 3);
    add_background_object(create_mallfloor3_1890(2672, 816), 3);
    add_background_object(create_mallfloor6_1920(2784, 808), 3);
    add_background_object(create_mallfloor6_1920(2544, 808), 3);
    add_background_object(create_mallfloor1_1891(3616, 448), 3);
    add_background_object(create_mallfloor1_1891(3744, 448), 3);
    add_background_object(create_mallfloor1_1891(3872, 448), 3);
    add_background_object(create_mallfloor1_1891(4000, 448), 3);
    add_background_object(create_mallfloor3_1890(2992, 816), 3);
    add_background_object(create_mallfloor3_1890(3120, 816), 3);
    add_background_object(create_mallfloor6_1920(3232, 808), 3);
    add_background_object(create_mallfloor6_1920(2992, 808), 3);
    add_background_object(create_mallfloor3_1890(3232, 592), 3);
    add_background_object(create_mallfloor3_1890(3104, 592), 3);
    add_background_object(create_mallfloor6_1920(3104, 592), 3);
    add_background_object(create_birchtree_1846(2624, 680), 3);
    add_background_object(create_birchtree_1846(3072, 680), 3);
    add_background_object(create_mallfloor3_1890(3488, 496), 3);
    add_background_object(create_mallfloor6_1920(3360, 544), 3);
    add_background_object(create_mallfloor6_1920(3488, 496), 3);
    add_background_object(create_mallfloor6_1920(3616, 448), 3);
    add_background_object(create_edgeoverlay_1805(3440, 520), 3);
    add_background_object(create_gachaponbase_1850(3744, 288), 3);
    add_background_object(create_fncable_1922(1624, 688), 3);
    add_background_object(create_fncable_1922(1680, 688), 3);
    add_background_object(create_fncable_1922(1744, 688), 3);
    add_background_object(create_fncable_1922(1808, 688), 3);
    add_background_object(create_fncable_1922(1872, 688), 3);
    add_background_object(create_fncable_1922(1936, 688), 3);
    add_background_object(create_fncable_1922(2000, 688), 3);
    add_background_object(create_fncable_1922(2064, 688), 3);
    add_background_object(create_fncable_1922(2128, 688), 3);
    add_background_object(create_fncable_1922(2192, 688), 3);
    add_background_object(create_hamstertunnel1_1923(4856, 928), 3);
    add_background_object(create_hamstertunnel1_1923(5056, 928), 3);
    add_background_object(create_hamstertunnel3_1924(4848, 912), 3);
    add_background_object(create_mallfloor1_1891(4720, 1248), 3);
    add_background_object(create_mallfloor1_1891(4848, 1176), 3);
    add_background_object(create_mallfloor1_1891(4976, 1176), 3);
    add_background_object(create_mallfloor6_1920(4848, 1224), 3);
    add_background_object(create_mallfloor3_1890(4848, 976), 3);
    add_background_object(create_mallfloor3_1890(4976, 976), 3);
    add_background_object(create_mallfloor6_1920(4848, 976), 3);
    add_background_object(create_mallfloor1_1891(5104, 928), 3);
    add_background_object(create_mallfloor1_1891(5104, 832), 3);
    add_background_object(create_mallfloor6_1920(5104, 928), 3);
    add_background_object(create_mallfloor6_1920(5104, 832), 3);
    add_background_object(create_mallfloor1_1891(5104, 736), 3);
    add_background_object(create_mallfloor6_1920(5104, 736), 3);
    add_background_object(create_edgeoverlay2_1925(4912, 928), 3);
    add_background_object(create_edgeoverlay2_1925(4976, 928), 3);
    add_background_object(create_edgeoverlay3_1926(5056, 784), 3);
    add_background_object(create_edgeoverlay3_1926(5056, 848), 3);
    add_background_object(create_mallfloor1_1891(5104, 640), 3);
    add_background_object(create_mallfloor6_1920(5104, 640), 3);
    add_background_object(create_fncable_1922(3920, 880), 3);
    add_background_object(create_fncable_1922(3984, 880), 3);
    add_background_object(create_fncable_1922(4048, 880), 3);
    add_background_object(create_fncable_1922(4112, 880), 3);
    add_background_object(create_fncable_1922(4176, 880), 3);
    add_background_object(create_fncable_1922(4240, 880), 3);
    add_background_object(create_fncable_1922(4304, 880), 3);
    add_background_object(create_fncable_1922(4432, 880), 3);
    add_background_object(create_mallfloor1_1891(5104, 1176), 3);
    add_background_object(create_mallfloor1_1891(5488, 1200), 3);
    add_background_object(create_mallfloor1_1891(5488, 1104), 3);
    add_background_object(create_mallfloor6_1920(5488, 1104), 3);
    add_background_object(create_mallfloor1_1891(5488, 1008), 3);
    add_background_object(create_mallfloor6_1920(5488, 1008), 3);
    add_background_object(create_mallfloor1_1891(5488, 912), 3);
    add_background_object(create_mallfloor6_1920(5488, 912), 3);
    add_background_object(create_mallfloor6_1920(5104, 880), 3);
    add_background_object(create_mallfloor6_1920(5104, 784), 3);
    add_background_object(create_mallfloor6_1920(5104, 688), 3);
    add_background_object(create_mallfloor6_1920(5488, 1056), 3);
    add_background_object(create_mallfloor6_1920(5488, 1152), 3);
    add_background_object(create_stopperback_1927(3912, 880), 3);
    add_background_object(create_stopperback_1927(1616, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 896), 3);
    add_background_object(create_mallscalecolumn2_1889(4024, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(4024, 1152), 3);
    add_background_object(create_fncable_1922(4368, 880), 3);
    add_background_object(create_mallfloor1_1891(5360, 1200), 3);
    add_background_object(create_mallfloor3_1890(4848, 1272), 3);
    add_background_object(create_mallfloor3_1890(4976, 1272), 3);
    add_background_object(create_mallfloor6_1920(4848, 1176), 3);
    add_background_object(create_mallfloor3_1890(5104, 1272), 3);
    add_background_object(create_mallfloor6_1920(5216, 1176), 3);
    add_background_object(create_mallfloor3_1890(5232, 1248), 3);
    add_background_object(create_mallfloor6_1920(5216, 1224), 3);
    add_background_object(create_mallfloor6_1920(5360, 1200), 3);
    add_background_object(create_mallfloor1_1891(4000, 688), 3);
    add_background_object(create_mallfloor3_1890(4000, 640), 3);
    add_background_object(create_mallfloor6_1920(3936, 784), 3);
    add_background_object(create_mallfloor6_1920(4000, 688), 3);
    add_background_object(create_mallfloor6_1920(4112, 688), 3);
    add_background_object(create_mallfloor6_1920(4000, 640), 3);
    add_background_object(create_mallfloor6_1920(4112, 640), 3);
    add_background_object(create_mallfloor3_1890(4064, 784), 3);
    add_background_object(create_mallfloor6_1920(4176, 784), 3);
    add_background_object(create_ferriswheelbase2_1644(4488, 928), 3);
    add_background_object(create_ferriswheelbase2_1644(4488, 992), 3);
    add_background_object(create_ferriswheelbase2_1644(4488, 1056), 3);
    add_background_object(create_ferriswheelbase2_1644(4488, 1120), 3);
    add_background_object(create_ferriswheelbase2_1644(3904, 928), 3);
    add_background_object(create_ferriswheelbase2_1644(3904, 992), 3);
    add_background_object(create_ferriswheelbase2_1644(3904, 1056), 3);
    add_background_object(create_ferriswheelbase2_1644(3904, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(4848, 1080), 3);
    add_background_object(create_mallscalecolumn1_1888(4848, 1144), 3);
    add_background_object(create_mallscalecolumn1_1888(4848, 1112), 3);
    add_background_object(create_mallscalecolumn1_1888(5152, 1080), 3);
    add_background_object(create_mallscalecolumn1_1888(5152, 1144), 3);
    add_background_object(create_mallscalecolumn1_1888(5152, 1112), 3);
    add_background_object(create_mallfloor8_1928(3840, 832), 3);
    add_background_object(create_mallfloor8_1928(3936, 832), 3);
    add_background_object(create_mallfloor8_1928(3424, 784), 3);
    add_background_object(create_mallfloor8_1928(3424, 808), 3);
    add_background_object(create_mallfloor8_1928(3840, 784), 3);
    add_background_object(create_mallfloor8_1928(3840, 808), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(3792, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(1536, 1152), 3);
    add_background_object(create_mallscalecolumn2_1889(1536, 1152), 3);
    add_background_object(create_redcarpet_1919(3456, 784), 3);
    add_background_object(create_redcarpet_1919(3584, 784), 3);
    add_background_object(create_redcarpet_1919(3712, 784), 3);
    add_background_object(create_fntreeshadow_1909(4976, 1032), 3);
    add_background_object(create_fnstonetreebase_1898(5008, 1160), 3);
    add_background_object(create_birchtree_1846(4992, 1032), 3);
    add_background_object(create_mallfloor3_1890(1408, 864), 3);
    add_background_object(create_escalatorback2_1912(1256, 896), 3);
    add_background_object(create_escalatorback2_1912(1224, 928), 3);
    add_background_object(create_escalatorback2_1912(1192, 960), 3);
    add_background_object(create_escalatorback2_1912(1160, 992), 3);
    add_background_object(create_escalatorback2_1912(1288, 864), 3);
    add_background_object(create_escalatorback3_1914(1320, 840), 3);
    add_background_object(create_escalatorback1_1911(1128, 1024), 3);
    add_background_object(create_mallfloor9_1929(816, 1352), 3);
    add_background_object(create_mallfloor3_1890(576, 912), 3);
    add_background_object(create_mallfloor6_1920(688, 912), 3);
    add_background_object(create_mallfloor1_1891(1792, 960), 3);
    add_background_object(create_mallfloor3_1890(1792, 1056), 3);
    add_background_object(create_mallfloor3_1890(1792, 1200), 3);
    add_background_object(create_mallfloor3_1890(1920, 960), 3);
    add_background_object(create_mallfloor1_1891(1920, 1008), 3);
    add_background_object(create_mallfloor3_1890(1920, 1104), 3);
    add_background_object(create_mallfloor1_1891(1920, 1152), 3);
    add_background_object(create_mallfloor3_1890(1920, 1248), 3);
    add_background_object(create_mallfloor1_1891(2048, 1248), 3);
    add_background_object(create_mallfloor1_1891(2048, 1104), 3);
    add_background_object(create_mallfloor3_1890(2048, 1056), 3);
    add_background_object(create_mallfloor3_1890(2048, 1200), 3);
    add_background_object(create_mallfloor3_1890(1664, 960), 3);
    add_background_object(create_mallfloor1_1891(1664, 1008), 3);
    add_background_object(create_mallfloor3_1890(1664, 1104), 3);
    add_background_object(create_mallfloor1_1891(1664, 1152), 3);
    add_background_object(create_mallfloor3_1890(1664, 1248), 3);
    add_background_object(create_mallfloor6_1920(1664, 1008), 3);
    add_background_object(create_mallfloor6_1920(1664, 960), 3);
    add_background_object(create_mallfloor6_1920(1664, 1056), 3);
    add_background_object(create_mallfloor6_1920(1664, 1152), 3);
    add_background_object(create_mallfloor6_1920(1664, 1200), 3);
    add_background_object(create_mallfloor1_1891(2176, 1104), 3);
    add_background_object(create_mallfloor1_1891(2176, 1200), 3);
    add_background_object(create_mallfloor3_1890(2176, 1056), 3);
    add_background_object(create_mallfloor1_1891(2304, 1104), 3);
    add_background_object(create_mallfloor1_1891(2304, 1200), 3);
    add_background_object(create_mallfloor3_1890(2304, 1056), 3);
    add_background_object(create_mallfloor6_1920(2032, 960), 3);
    add_background_object(create_mallfloor6_1920(2032, 1008), 3);
    add_background_object(create_mallfloor1_1891(2432, 1104), 3);
    add_background_object(create_mallfloor1_1891(2432, 1200), 3);
    add_background_object(create_mallfloor3_1890(2432, 1056), 3);
    add_background_object(create_mallfloor1_1891(2560, 1104), 3);
    add_background_object(create_mallfloor1_1891(2560, 1200), 3);
    add_background_object(create_mallfloor3_1890(2560, 1056), 3);
    add_background_object(create_mallfloor1_1891(2688, 1104), 3);
    add_background_object(create_mallfloor1_1891(2688, 1200), 3);
    add_background_object(create_mallfloor3_1890(2688, 1056), 3);
    add_background_object(create_mallfloor1_1891(2816, 1104), 3);
    add_background_object(create_mallfloor1_1891(2816, 1200), 3);
    add_background_object(create_mallfloor3_1890(2816, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(2544, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(2720, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(2720, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(2720, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(2720, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(2720, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(2720, 864), 3);
    add_background_object(create_mallscalecolumn2_1889(2544, 864), 3);
    add_background_object(create_mallscalecolumn2_1889(2720, 864), 3);
    add_background_object(create_mallfloor3_1890(320, 912), 3);
    add_background_object(create_mallfloor3_1890(192, 912), 3);
    add_background_object(create_mallfloor3_1890(64, 912), 3);
    add_background_object(create_mallfloor3_1890(-64, 912), 3);
    add_background_object(create_mallfloor1_1891(320, 816), 3);
    add_background_object(create_mallfloor1_1891(320, 720), 3);
    add_background_object(create_mallfloor1_1891(192, 816), 3);
    add_background_object(create_mallfloor1_1891(192, 720), 3);
    add_background_object(create_mallfloor1_1891(64, 816), 3);
    add_background_object(create_mallfloor1_1891(64, 720), 3);
    add_background_object(create_mallfloor1_1891(-64, 816), 3);
    add_background_object(create_mallfloor1_1891(-64, 720), 3);
    add_background_object(create_mallfloor3_1890(576, 672), 3);
    add_background_object(create_mallfloor6_1920(688, 672), 3);
    add_background_object(create_mallfloor3_1890(320, 672), 3);
    add_background_object(create_mallfloor3_1890(192, 672), 3);
    add_background_object(create_mallfloor3_1890(64, 672), 3);
    add_background_object(create_mallfloor3_1890(-64, 672), 3);
    add_background_object(create_mallfloor1_1891(-64, 576), 3);
    add_background_object(create_mallfloor3_1890(-64, 528), 3);
    add_background_object(create_mallfloor8_1928(48, 528), 3);
    add_background_object(create_mallfloor8_1928(64, 552), 3);
    add_background_object(create_mallfloor8_1928(48, 576), 3);
    add_background_object(create_mallfloor8_1928(64, 600), 3);
    add_background_object(create_mallfloor8_1928(48, 624), 3);
    add_background_object(create_mallfloor8_1928(64, 648), 3);
    add_background_object(create_fnstonetreebase_1898(608, 656), 3);
    add_background_object(create_birchtree_1846(592, 528), 3);
    add_background_object(create_fnstonetreebase_1898(352, 656), 3);
    add_background_object(create_birchtree_1846(336, 528), 3);
    add_background_object(create_mallfloor6_1920(688, 720), 3);
    add_background_object(create_mallfloor6_1920(688, 768), 3);
    add_background_object(create_mallfloor6_1920(688, 816), 3);
    add_background_object(create_mallfloor6_1920(688, 864), 3);
    add_background_object(create_mallfloor1_1891(2944, 1104), 3);
    add_background_object(create_mallfloor1_1891(2944, 1200), 3);
    add_background_object(create_mallfloor3_1890(2944, 1056), 3);
    add_background_object(create_mallfloor1_1891(3072, 1104), 3);
    add_background_object(create_mallfloor1_1891(3072, 1200), 3);
    add_background_object(create_mallfloor3_1890(3072, 1056), 3);
    add_background_object(create_redcarpet_1919(3200, 1056), 3);
    add_background_object(create_mallfloor6_1920(3312, 1104), 3);
    add_background_object(create_mallfloor1_1891(3200, 1152), 3);
    add_background_object(create_mallfloor1_1891(3200, 1248), 3);
    add_background_object(create_mallfloor6_1920(3312, 1200), 3);
    add_background_object(create_mallfloor6_1920(3312, 1152), 3);
    add_background_object(create_mallfloor6_1920(3312, 1248), 3);
    add_background_object(create_redcarpet_1919(2672, 1056), 3);
    add_background_object(create_redcarpet_1919(2560, 1056), 3);
    add_background_object(create_redcarpet_1919(2432, 1056), 3);
    add_background_object(create_redcarpet_1919(2304, 1056), 3);
    add_background_object(create_redcarpet_1919(2176, 1056), 3);
    add_background_object(create_mallfloor6_1920(2800, 1048), 3);
    add_background_object(create_mallfloor6_1920(3184, 1048), 3);
    add_background_object(create_birchtree_1846(2840, 920), 3);
    add_background_object(create_birchtree_1846(3064, 920), 3);
    add_background_object(create_mallfloor6_1920(5600, 912), 3);
    add_background_object(create_mallfloor1_1891(5616, 1056), 3);
    add_background_object(create_mallfloor1_1891(5616, 1152), 3);
    add_background_object(create_mallfloor3_1890(5616, 1248), 3);
    add_background_object(create_mallfloor3_1890(5744, 960), 3);
    add_background_object(create_mallfloor1_1891(5744, 1008), 3);
    add_background_object(create_mallfloor1_1891(5744, 1104), 3);
    add_background_object(create_mallfloor1_1891(5744, 1200), 3);
    add_background_object(create_mallfloor1_1891(5872, 960), 3);
    add_background_object(create_mallfloor1_1891(5872, 1152), 3);
    add_background_object(create_mallfloor3_1890(5872, 1248), 3);
    add_background_object(create_mallfloor1_1891(5616, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(5512, 880), 3);
    add_background_object(create_mallscalecolumn1_1888(5512, 848), 3);
    add_background_object(create_mallscalecolumn1_1888(5512, 816), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 928), 3);
    add_background_object(create_mallfloor3_1890(5776, 688), 3);
    add_background_object(create_mallfloor3_1890(5488, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(5512, 784), 3);
    add_background_object(create_mallscalecolumn1_1888(5512, 752), 3);
    add_background_object(create_mallscalecolumn2_1889(5512, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(5744, 736), 3);
    add_background_object(create_mallscalecolumn2_1889(5744, 736), 3);
    add_background_object(create_mallfloor3_1890(6000, 960), 3);
    add_background_object(create_mallfloor1_1891(6000, 1008), 3);
    add_background_object(create_mallfloor1_1891(6000, 1200), 3);
    add_background_object(create_mallfloor3_1890(6128, 1248), 3);
    add_background_object(create_mallfloor3_1890(5968, 688), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(6048, 736), 3);
    add_background_object(create_mallscalecolumn2_1889(6048, 736), 3);
    add_background_object(create_mallfloor6_1920(5488, 688), 3);
    add_background_object(create_gachaponbase_1850(5872, 800), 3);
    add_background_object(create_mallfloor8_1928(5744, 688), 3);
    add_background_object(create_mallfloor8_1928(5744, 712), 3);
    add_background_object(create_mallfloor8_1928(5904, 688), 3);
    add_background_object(create_mallfloor8_1928(5904, 712), 3);
    add_background_object(create_mallfloor8_1928(6096, 688), 3);
    add_background_object(create_mallfloor8_1928(6096, 712), 3);
    add_background_object(create_mallfloor8_1928(5936, 712), 3);
    add_background_object(create_mallfloor8_1928(5936, 688), 3);
    add_background_object(create_mallfloor6_1920(5600, 688), 3);
    add_background_object(create_mallfountain1_1910(5104, 544), 3);
    add_background_object(create_mallfloor6_1920(5216, 640), 3);
    add_background_object(create_mallfloor6_1920(5216, 688), 3);
    add_background_object(create_mallfloor6_1920(5216, 736), 3);
    add_background_object(create_mallfloor6_1920(5216, 784), 3);
    add_background_object(create_mallfloor6_1920(5216, 832), 3);
    add_background_object(create_mallfloor6_1920(5216, 880), 3);
    add_background_object(create_mallfloor6_1920(5216, 928), 3);
    add_background_object(create_mallfloor6_1920(5216, 976), 3);
    add_background_object(create_mallfloor6_1920(5488, 960), 3);
    add_background_object(create_hamstertunnel1_1923(5752, 640), 3);
    add_background_object(create_hamstertunnel9_1902(5808, 632), 3);
    add_background_object(create_hamstertunnel9_1902(5872, 632), 3);
    add_background_object(create_hamstertunnel1_1923(6072, 640), 3);
    add_background_object(create_hamstertunnel9_1902(5936, 632), 3);
    add_background_object(create_hamstertunnel9_1902(6000, 632), 3);
    add_background_object(create_hamstertunnel3_1924(5744, 624), 3);
    add_background_object(create_hamstertunnel3_1924(6064, 624), 3);
    add_background_object(create_edgeoverlay2_1925(5808, 638), 3);
    add_background_object(create_edgeoverlay2_1925(5872, 638), 3);
    add_background_object(create_edgeoverlay2_1925(5936, 638), 3);
    add_background_object(create_edgeoverlay2_1925(6000, 638), 3);
    add_background_object(create_restroomback_1930(4944, 1112), 3);
    add_background_object(create_restroomback_1930(5088, 1112), 3);
    add_background_object(create_restroomback_1930(2208, 992), 3);
    add_background_object(create_redcarpet_1919(2048, 1056), 3);
    add_background_object(create_restroomback_1930(2080, 992), 3);
    add_background_object(create_restroomback_1930(1056, 1184), 3);
    add_background_object(create_mallfloor1_1891(4096, 192), 3);
    add_background_object(create_mallfloor6_1920(4112, 448), 3);
    add_background_object(create_mallfloor6_1920(4112, 496), 3);
    add_background_object(create_mallfloor6_1920(4112, 544), 3);
    add_background_object(create_mallfloor6_1920(4112, 592), 3);
    add_background_object(create_mallfloor6_1920(4112, 736), 3);
    add_background_object(create_mallfloor6_1920(4000, 736), 3);
    add_background_object(create_mallfloor6_1920(4096, 192), 3);
    add_background_object(create_mallfloor6_1920(4208, 192), 3);
    add_background_object(create_mallfloor6_1920(4208, 240), 3);
    add_background_object(create_mallfloor6_1920(4096, 240), 3);
    add_background_object(create_mallscalecolumn2_1889(4112, 288), 3);
    add_background_object(create_birchtree_1846(4112, 48), 3);
    add_background_object(create_fnstonetreebase_1898(4128, 176), 3);
    add_background_object(create_fngianttv_1899(3152, 496), 3);
    add_background_object(create_velvetrope_1931(3128, 560), 3);
    add_background_object(create_velvetrope_1931(3184, 560), 3);
    add_background_object(create_velvetrope_1931(3240, 560), 3);
    add_background_object(create_mallfloor3_1890(6384, 1248), 3);
    add_background_object(create_mallfloor3_1890(6256, 1248), 3);
    add_background_object(create_floor34_1657(6464, 938), 3);
    add_background_object(create_floor19_1697(6128, 688), 3);
    add_background_object(create_floor22_1698(6352, 904), 3);
    add_background_object(create_floor30_1707(6496, 840), 3);
    add_background_object(create_floor25_1654(6488, 712), 3);
    add_background_object(create_mallfloor1_1891(6128, 1152), 3);
    add_background_object(create_mallfloor1_1891(6256, 1152), 3);
    add_background_object(create_mallfloor1_1891(6384, 1152), 3);
    add_background_object(create_parasolbase_1906(6440, 1088), 3);
    add_background_object(create_parasolbase2_1907(6416, 1120), 3);
    add_background_object(create_mallfloor3_1890(6512, 1248), 3);
    add_background_object(create_mallfloor1_1891(6512, 1152), 3);
    add_background_object(create_parasolbase_1906(6568, 1088), 3);
    add_background_object(create_parasolbase2_1907(6544, 1120), 3);
    add_background_object(create_parasolbase_1906(6312, 1088), 3);
    add_background_object(create_parasolbase2_1907(6288, 1120), 3);
    add_background_object(create_mallfloor6_1920(6112, 1008), 3);
    add_background_object(create_mallfloor6_1920(6112, 1056), 3);
    add_background_object(create_mallfloor3_1890(6000, 1152), 3);
    add_background_object(create_mallfloor6_1920(5856, 1056), 3);
    add_background_object(create_mallfloor6_1920(5856, 1104), 3);
    add_background_object(create_birchtree_1846(6144, 1008), 3);
    add_background_object(create_fnstonetreebase_1898(6160, 1136), 3);
    add_background_object(create_discoballbase_1908(4936, 104), 3);
    add_background_object(create_mallfloor3_1890(4912, 184), 3);
    add_background_object(create_floor19_1697(5040, 184), 3);
    add_background_object(create_floor22_1698(5120, 256), 3);
    add_background_object(create_mallfloor3_1890(5256, 288), 3);
    add_background_object(create_mallfloor3_1890(6640, 1248), 3);
    add_background_object(create_mallfloor1_1891(6640, 1152), 3);
    add_background_object(create_mallfloor3_1890(6768, 1248), 3);
    add_background_object(create_mallfloor1_1891(6768, 1152), 3);
    add_background_object(create_escalatorback2_1912(6856, 1056), 3);
    add_background_object(create_escalatorback2_1912(6824, 1088), 3);
    add_background_object(create_escalatorback1_1911(6792, 1120), 3);
    add_background_object(create_mallfloor3_1890(6896, 1248), 3);
    add_background_object(create_mallfloor1_1891(6896, 1152), 3);
    add_background_object(create_escalatorback2_1912(7048, 864), 3);
    add_background_object(create_escalatorback2_1912(6888, 1024), 3);
    add_background_object(create_escalatorback3_1914(7080, 840), 3);
    add_background_object(create_mallfloor3_1890(7168, 864), 3);
    add_background_object(create_mallfloor4_1897(7096, 864), 3);
    add_background_object(create_mallfloor3_1890(7024, 1248), 3);
    add_background_object(create_mallfloor1_1891(7024, 1152), 3);
    add_background_object(create_mallfloor3_1890(7152, 1248), 3);
    add_background_object(create_mallfloor1_1891(7152, 1152), 3);
    add_background_object(create_mallfloor1_1891(7152, 1056), 3);
    add_background_object(create_escalatorback2_1912(7016, 896), 3);
    add_background_object(create_escalatorback2_1912(6920, 992), 3);
    add_background_object(create_escalatorback2_1912(6952, 960), 3);
    add_background_object(create_escalatorback2_1912(6984, 928), 3);
    add_background_object(create_mallfloor1_1891(7152, 960), 3);
    add_background_object(create_mallfloor3_1890(7152, 912), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 1120), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 1088), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 960), 3);
    add_background_object(create_mallfloor6_1920(7152, 912), 3);
    add_background_object(create_mallfloor6_1920(7152, 960), 3);
    add_background_object(create_mallfloor6_1920(7152, 1008), 3);
    add_background_object(create_mallfloor6_1920(7152, 1056), 3);
    add_background_object(create_mallfloor6_1920(7152, 1104), 3);
    add_background_object(create_mallfloor1_1891(7280, 912), 3);
    add_background_object(create_mallfloor1_1891(7280, 1008), 3);
    add_background_object(create_mallfloor1_1891(7280, 1104), 3);
    add_background_object(create_mallfloor1_1891(7280, 1200), 3);
    add_background_object(create_hamstertunnel8_1905(7096, 1024), 3);
    add_background_object(create_hamstertunnel9_1902(7024, 1096), 3);
    add_background_object(create_hamstertunnel1_1923(7104, 1104), 3);
    add_background_object(create_edgeoverlay2_1925(7024, 1102), 3);
    add_background_object(create_edgeoverlay3_1926(7102, 1024), 3);
    add_background_object(create_discoballbase_1908(5280, 208), 3);
    add_background_object(create_mallfloor6_1920(5256, 288), 3);
    add_background_object(create_mallfloor6_1920(5368, 288), 3);
    add_background_object(create_ferriswheelbase_1664(5520, 432), 3);
    add_background_object(create_ferriswheelbase2_1644(5536, 592), 3);
    add_background_object(create_mallfloor3_1890(6384, 544), 3);
    add_background_object(create_mallfloor1_1891(6512, 496), 3);
    add_background_object(create_mallfloor3_1890(6256, 544), 3);
    add_background_object(create_redcarpet_1919(5744, 960), 3);
    add_background_object(create_redcarpet_1919(5872, 960), 3);
    add_background_object(create_redcarpet_1919(6000, 960), 3);
    add_background_object(create_mallfloor6_1920(6112, 960), 3);
    add_background_object(create_mallfloor6_1920(5744, 960), 3);
    add_background_object(create_fnstonetreebase_1898(6288, 528), 3);
    add_background_object(create_mallfloor6_1920(6512, 496), 3);
    add_background_object(create_mallfloor6_1920(6256, 544), 3);
    add_background_object(create_mallfloor6_1920(4912, 184), 3);
    add_background_object(create_mallfloor6_1920(5024, 184), 3);
    add_background_object(create_mallfloor3_1890(6640, 544), 3);
    add_background_object(create_mallfloor1_1891(6768, 496), 3);
    add_background_object(create_mallfloor3_1890(6768, -32), 3);
    add_background_object(create_mallfloor1_1891(6896, -32), 3);
    add_background_object(create_mallfloor3_1890(6896, 544), 3);
    add_background_object(create_mallfloor1_1891(7024, 496), 3);
    add_background_object(create_mallfloor1_1891(7024, 16), 3);
    add_background_object(create_mallfloor3_1890(7024, -32), 3);
    add_background_object(create_mallfloor1_1891(7152, 64), 3);
    add_background_object(create_mallfloor1_1891(7152, -32), 3);
    add_background_object(create_mallfloor3_1890(7296, 864), 3);
    add_background_object(create_mallfloor1_1891(7280, 112), 3);
    add_background_object(create_mallfloor1_1891(7280, 16), 3);
    add_background_object(create_mallfloor3_1890(7280, -32), 3);
    add_background_object(create_mallfloor1_1891(7408, 448), 3);
    add_background_object(create_mallfloor1_1891(7408, 352), 3);
    add_background_object(create_mallfloor1_1891(7408, 256), 3);
    add_background_object(create_mallfloor1_1891(7408, 160), 3);
    add_background_object(create_mallfloor1_1891(7408, 64), 3);
    add_background_object(create_mallfloor1_1891(7408, -32), 3);
    add_background_object(create_mallfloor3_1890(7424, 864), 3);
    add_background_object(create_mallfloor1_1891(7024, 592), 3);
    add_background_object(create_mallfloor1_1891(7152, 544), 3);
    add_background_object(create_mallfloor1_1891(7408, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(7072, 704), 3);
    add_background_object(create_mallscalecolumn2_1889(7072, 688), 3);
    add_background_object(create_mosaicwall1_1886(7232, 704), 3);
    add_background_object(create_mosaicwall1_1886(7360, 704), 3);
    add_background_object(create_mallfloor3_1890(7552, 864), 3);
    add_background_object(create_mallfloor3_1890(7536, 592), 3);
    add_background_object(create_mallfloor1_1891(7536, 496), 3);
    add_background_object(create_mallfloor1_1891(7536, 400), 3);
    add_background_object(create_mallfloor1_1891(7536, 304), 3);
    add_background_object(create_mallfloor1_1891(7536, 208), 3);
    add_background_object(create_mallfloor1_1891(7536, 112), 3);
    add_background_object(create_mallfloor1_1891(7536, 16), 3);
    add_background_object(create_mallfloor3_1890(7536, -32), 3);
    add_background_object(create_mallfloor1_1891(7664, 448), 3);
    add_background_object(create_mallfloor1_1891(7664, 352), 3);
    add_background_object(create_mallfloor1_1891(7664, 256), 3);
    add_background_object(create_mallfloor1_1891(7664, 160), 3);
    add_background_object(create_mallfloor1_1891(7664, 64), 3);
    add_background_object(create_mallfloor1_1891(7664, -32), 3);
    add_background_object(create_mallfloor1_1891(7664, 544), 3);
    add_background_object(create_mosaicwall1_1886(7488, 704), 3);
    add_background_object(create_mallfloor3_1890(7792, 864), 3);
    add_background_object(create_mallfloor8_1928(4440, 448), 3);
    add_background_object(create_mallfloor8_1928(4408, 448), 3);
    add_background_object(create_mallfloor8_1928(4376, 448), 3);
    add_background_object(create_mallfloor8_1928(4440, 472), 3);
    add_background_object(create_mallfloor8_1928(4408, 472), 3);
    add_background_object(create_mallfloor8_1928(4376, 472), 3);
    add_background_object(create_mallfloor8_1928(4976, 256), 3);
    add_background_object(create_mallfloor8_1928(4944, 256), 3);
    add_background_object(create_mallfloor8_1928(4912, 256), 3);
    add_background_object(create_mallfloor8_1928(4896, 232), 3);
    add_background_object(create_mallfloor8_1928(4928, 232), 3);
    add_background_object(create_mallfloor8_1928(4960, 232), 3);
    add_background_object(create_mallfloor8_1928(4992, 232), 3);
    add_background_object(create_mallfloor8_1928(4472, 472), 3);
    add_background_object(create_mallfloor8_1928(4504, 472), 3);
    add_background_object(create_mallfloor8_1928(4536, 472), 3);
    add_background_object(create_mallfloor8_1928(4568, 472), 3);
    add_background_object(create_parasolbase_1906(6696, 1088), 3);
    add_background_object(create_parasolbase2_1907(6672, 1120), 3);
    add_background_object(create_parasolbase_1906(6696, 1016), 3);
    add_background_object(create_mallfloor3_1890(7536, 1056), 3);
    add_background_object(create_mallfloor1_1891(7408, 1056), 3);
    add_background_object(create_mallfloor1_1891(7408, 1152), 3);
    add_background_object(create_mallfloor3_1890(7408, 1248), 3);
    add_background_object(create_mallfloor1_1891(7536, 1104), 3);
    add_background_object(create_mallfloor1_1891(7536, 1200), 3);
    add_background_object(create_mallfloor3_1890(7792, 1056), 3);
    add_background_object(create_mallfloor1_1891(7664, 1056), 3);
    add_background_object(create_mallfloor1_1891(7664, 1152), 3);
    add_background_object(create_mallfloor3_1890(7664, 1248), 3);
    add_background_object(create_mallfloor1_1891(7792, 1104), 3);
    add_background_object(create_mallfloor1_1891(7792, 1200), 3);
    add_background_object(create_mallfloor6_1920(7136, 640), 3);
    add_background_object(create_mallfloor8_1928(7680, 864), 3);
    add_background_object(create_mallfloor8_1928(7680, 888), 3);
    add_background_object(create_mallfloor8_1928(7760, 888), 3);
    add_background_object(create_mallfloor8_1928(7760, 864), 3);
    add_background_object(create_fnladder_1662(7716, 864), 3);
    add_background_object(create_fnladder_1662(7716, 896), 3);
    add_background_object(create_fnladder_1662(7716, 928), 3);
    add_background_object(create_fnladder_1662(7716, 960), 3);
    add_background_object(create_fnladder_1662(7716, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(7696, 640), 3);
    add_background_object(create_mallscalecolumn2_1889(7696, 640), 3);
    add_background_object(create_mosaicwall1_1886(7920, 896), 3);
    add_background_object(create_mosaicwall1_1886(8048, 896), 3);
    add_background_object(create_mallfloor3_1890(7920, 864), 3);
    add_background_object(create_mallfloor3_1890(8048, 1056), 3);
    add_background_object(create_mallfloor1_1891(7920, 1056), 3);
    add_background_object(create_mallfloor1_1891(7920, 1152), 3);
    add_background_object(create_mallfloor3_1890(7920, 1248), 3);
    add_background_object(create_mallfloor1_1891(8048, 1104), 3);
    add_background_object(create_mallfloor1_1891(8048, 1200), 3);
    add_background_object(create_mallfloor6_1920(7392, 960), 3);
    add_background_object(create_mallfloor6_1920(7392, 912), 3);
    add_background_object(create_mallfloor6_1920(7392, 1008), 3);
    add_background_object(create_restroomback_1930(7808, 992), 3);
    add_background_object(create_restroomback_1930(7968, 992), 3);
    add_background_object(create_fnstonetreebase_1898(7880, 1040), 3);
    add_background_object(create_mallfloor3_1890(8048, 864), 3);
    add_background_object(create_mallfloor3_1890(8176, 864), 3);
    add_background_object(create_mosaicwall1_1886(8000, 704), 3);
    add_background_object(create_mallfloor1_1891(8048, 768), 3);
    add_background_object(create_mallfloor1_1891(8048, 672), 3);
    add_background_object(create_mallfloor3_1890(7792, 592), 3);
    add_background_object(create_mallfloor1_1891(7792, 496), 3);
    add_background_object(create_mallfloor1_1891(7792, 400), 3);
    add_background_object(create_mallfloor1_1891(7792, 304), 3);
    add_background_object(create_mallfloor1_1891(7792, 208), 3);
    add_background_object(create_mallfloor1_1891(7792, 112), 3);
    add_background_object(create_mallfloor1_1891(7792, 16), 3);
    add_background_object(create_mallfloor3_1890(7792, -32), 3);
    add_background_object(create_mallfloor1_1891(7920, 448), 3);
    add_background_object(create_mallfloor1_1891(7920, 352), 3);
    add_background_object(create_mallfloor1_1891(7920, 256), 3);
    add_background_object(create_mallfloor1_1891(7920, 160), 3);
    add_background_object(create_mallfloor1_1891(7920, 64), 3);
    add_background_object(create_mallfloor1_1891(7920, -32), 3);
    add_background_object(create_mallfloor1_1891(7920, 544), 3);
    add_background_object(create_mallfloor1_1891(8048, 480), 3);
    add_background_object(create_mallfloor1_1891(8048, 384), 3);
    add_background_object(create_mallfloor1_1891(8048, 288), 3);
    add_background_object(create_mallfloor1_1891(8048, 192), 3);
    add_background_object(create_mallfloor1_1891(8048, 96), 3);
    add_background_object(create_mallfloor1_1891(8048, 0), 3);
    add_background_object(create_mallfloor1_1891(8176, 528), 3);
    add_background_object(create_mallfloor1_1891(8176, 336), 3);
    add_background_object(create_mallfloor1_1891(8176, 240), 3);
    add_background_object(create_mallfloor1_1891(8176, 144), 3);
    add_background_object(create_mallfloor1_1891(8176, 48), 3);
    add_background_object(create_mallfloor1_1891(8176, -48), 3);
    add_background_object(create_mallfloor1_1891(8176, 432), 3);
    add_background_object(create_mallfloor1_1891(8048, 576), 3);
    add_background_object(create_mallfloor6_1920(7792, 864), 3);
    add_background_object(create_mallfloor6_1920(7664, 864), 3);
    add_background_object(create_mallfloor6_1920(8048, 672), 3);
    add_background_object(create_mallfloor6_1920(8048, 624), 3);
    add_background_object(create_mallfloor6_1920(8048, 576), 3);
    add_background_object(create_mallfloor6_1920(8032, 592), 3);
    add_background_object(create_mallfloor6_1920(8032, 544), 3);
    add_background_object(create_mallfloor6_1920(8048, 528), 3);
    add_background_object(create_mallfloor6_1920(8048, 720), 3);
    add_background_object(create_mallfloor6_1920(8048, 768), 3);
    add_background_object(create_mallfloor6_1920(8048, 816), 3);
    add_background_object(create_mallfloor6_1920(8160, 720), 3);
    add_background_object(create_mallfloor6_1920(8160, 768), 3);
    add_background_object(create_mallfloor6_1920(8160, 816), 3);
    add_background_object(create_mallstorebase_1932(7328, 784), 3);
    add_background_object(create_mallstorebase_1932(7456, 976), 3);
    add_background_object(create_mallstorebase2_1933(7368, 816), 3);
    add_background_object(create_mallstorebase3_1934(7864, 824), 3);
    add_background_object(create_mallstorebase_1932(7856, 784), 3);
    add_background_object(create_edgeoverlay_1805(6400, 520), 3);
    add_background_object(create_edgeoverlay_1805(7792, 840), 3);
    add_background_object(create_fnstonetreebase_1898(7216, 848), 3);
    add_background_object(create_fntreeshadow_1909(7184, 720), 3);
    add_background_object(create_birchtree_1846(7200, 720), 3);
    add_background_object(create_fntreeshadow_1909(7848, 912), 3);
    add_background_object(create_birchtree_1846(7864, 912), 3);
    add_background_object(create_mosaicwall2_1887(7680, 704), 3);
    add_background_object(create_mosaicwall2_1887(7776, 704), 3);
    add_background_object(create_mallstorebase_1932(8080, 976), 3);
    add_background_object(create_mallfloor3_1890(8304, 1056), 3);
    add_background_object(create_mallfloor1_1891(8176, 1056), 3);
    add_background_object(create_mallfloor1_1891(8176, 1152), 3);
    add_background_object(create_mallfloor3_1890(8176, 1248), 3);
    add_background_object(create_mallfloor1_1891(8304, 1104), 3);
    add_background_object(create_mallfloor1_1891(8304, 1200), 3);
    add_background_object(create_mallfloor3_1890(8176, 624), 3);
    add_background_object(create_mallfloor1_1891(8432, 1152), 3);
    add_background_object(create_mallfloor3_1890(8432, 1248), 3);
    add_background_object(create_mallfloor3_1890(8560, 1152), 3);
    add_background_object(create_mallfloor1_1891(8560, 1200), 3);
    add_background_object(create_mallfloor6_1920(8416, 1056), 3);
    add_background_object(create_mallfloor6_1920(8416, 1104), 3);
    add_background_object(create_ferriswheelbase2_1644(8216, 704), 3);
    add_background_object(create_ferriswheelbase_1664(8200, 696), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 704), 3);
    add_background_object(create_ferriswheelbase_1664(9104, 696), 3);
    add_background_object(create_fncable_1922(8232, 720), 3);
    add_background_object(create_fncable_1922(8296, 720), 3);
    add_background_object(create_fncable_1922(8360, 720), 3);
    add_background_object(create_fncable_1922(8424, 720), 3);
    add_background_object(create_fncable_1922(8488, 720), 3);
    add_background_object(create_fncable_1922(8552, 720), 3);
    add_background_object(create_fncable_1922(8808, 720), 3);
    add_background_object(create_fncable_1922(9064, 720), 3);
    add_background_object(create_stopperback_1927(8224, 720), 3);
    add_background_object(create_fncable_1922(8872, 720), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 768), 3);
    add_background_object(create_ferriswheelbase2_1644(8216, 768), 3);
    add_background_object(create_mallfloor3_1890(8304, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(8288, 672), 3);
    add_background_object(create_mallscalecolumn2_1889(8288, 672), 3);
    add_background_object(create_mallfloor6_1920(8416, 864), 3);
    add_background_object(create_mallfloor1_1891(8688, 1152), 3);
    add_background_object(create_mallfloor3_1890(8688, 1248), 3);
    add_background_object(create_mallfloor3_1890(8816, 1056), 3);
    add_background_object(create_mallfloor1_1891(8816, 1104), 3);
    add_background_object(create_mallfloor1_1891(8816, 1200), 3);
    add_background_object(create_mallfloor6_1920(8816, 1056), 3);
    add_background_object(create_mallfloor6_1920(8816, 1104), 3);
    add_background_object(create_mallfloor3_1890(8816, 864), 3);
    add_background_object(create_fncable_1922(8616, 720), 3);
    add_background_object(create_mallfloor1_1891(8944, 1152), 3);
    add_background_object(create_mallfloor3_1890(8944, 1248), 3);
    add_background_object(create_mallfloor1_1891(8944, 1056), 3);
    add_background_object(create_mallfloor1_1891(8944, 960), 3);
    add_background_object(create_mallfloor1_1891(8944, 864), 3);
    add_background_object(create_mallfloor6_1920(8944, 1008), 3);
    add_background_object(create_mallfloor6_1920(8944, 960), 3);
    add_background_object(create_mallfloor6_1920(8944, 912), 3);
    add_background_object(create_fncable_1922(8680, 720), 3);
    add_background_object(create_fncable_1922(8744, 720), 3);
    add_background_object(create_mallfloor6_1920(8816, 864), 3);
    add_background_object(create_mallfloor3_1890(8688, 624), 3);
    add_background_object(create_mallfloor3_1890(8560, 624), 3);
    add_background_object(create_mallfloor3_1890(8432, 624), 3);
    add_background_object(create_mallfloor3_1890(9072, 864), 3);
    add_background_object(create_mallfloor1_1891(9072, 1200), 3);
    add_background_object(create_mallfloor1_1891(9072, 1104), 3);
    add_background_object(create_mallfloor1_1891(9072, 1008), 3);
    add_background_object(create_mallfloor1_1891(9072, 912), 3);
    add_background_object(create_fncable_1922(8936, 720), 3);
    add_background_object(create_fncable_1922(9000, 720), 3);
    add_background_object(create_mallfloor3_1890(8816, 624), 3);
    add_background_object(create_mallfloor6_1920(8928, 624), 3);
    add_background_object(create_mallscalecolumn1_1888(8840, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(8840, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(8840, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(8840, 928), 3);
    add_background_object(create_mallscalecolumn2_1889(8840, 912), 3);
    add_background_object(create_mallscalecolumn2_1889(8288, 912), 3);
    add_background_object(create_mallfloor3_1890(9200, 1248), 3);
    add_background_object(create_mallfloor3_1890(9328, 1248), 3);
    add_background_object(create_mallfloor3_1890(8304, 624), 3);
    add_background_object(create_ferriswheelbase2_1644(8352, 464), 3);
    add_background_object(create_ferriswheelbase_1664(8336, 456), 3);
    add_background_object(create_fncable_1922(8368, 480), 3);
    add_background_object(create_fncable_1922(8432, 480), 3);
    add_background_object(create_fncable_1922(8496, 480), 3);
    add_background_object(create_fncable_1922(8560, 480), 3);
    add_background_object(create_fncable_1922(8624, 480), 3);
    add_background_object(create_fncable_1922(8688, 480), 3);
    add_background_object(create_stopperback_1927(8360, 480), 3);
    add_background_object(create_ferriswheelbase2_1644(8352, 528), 3);
    add_background_object(create_fncable_1922(8752, 480), 3);
    add_background_object(create_fncable_1922(8816, 480), 3);
    add_background_object(create_fncable_1922(8880, 480), 3);
    add_background_object(create_fncable_1922(8944, 480), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 512), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 576), 3);
    add_background_object(create_ferriswheelbase2_1644(9120, 464), 3);
    add_background_object(create_ferriswheelbase_1664(9104, 456), 3);
    add_background_object(create_fncable_1922(9064, 480), 3);
    add_background_object(create_fncable_1922(9000, 480), 3);
    add_background_object(create_mallfloor3_1890(9456, 1248), 3);
    add_background_object(create_mallfloor3_1890(9584, 1248), 3);
    add_background_object(create_mallfloor3_1890(9712, 1248), 3);
    add_background_object(create_mallfloor3_1890(9840, 1248), 3);
    add_background_object(create_gachaponbase_1850(7000, 336), 3);
    add_background_object(create_floor19_1697(9296, 936), 3);
    add_background_object(create_floor22_1698(9424, 1056), 3);
    add_background_object(create_floor30_1707(9560, 992), 3);
    add_background_object(create_floor25_1654(9552, 864), 3);
    add_background_object(create_dragonslope1_1702(9376, 1008), 3);
    add_background_object(create_floor34_1657(9520, 864), 3);
    add_background_object(create_floor34_1657(9488, 864), 3);
    add_background_object(create_floor34_1657(9456, 864), 3);
    add_background_object(create_mallfloor6_1920(9184, 1200), 3);
    add_background_object(create_mallfloor6_1920(9184, 1152), 3);
    add_background_object(create_mallfloor6_1920(9184, 1104), 3);
    add_background_object(create_mallfloor6_1920(9184, 1056), 3);
    add_background_object(create_mallfloor6_1920(9184, 1008), 3);
    add_background_object(create_mallfloor6_1920(9184, 960), 3);
    add_background_object(create_mallfloor6_1920(9184, 912), 3);
    add_background_object(create_fngianttv_1899(8560, 1056), 3);
    add_background_object(create_velvetrope_1931(8536, 1120), 3);
    add_background_object(create_velvetrope_1931(8592, 1120), 3);
    add_background_object(create_velvetrope_1931(8648, 1120), 3);
    add_background_object(create_floor25_1654(9960, 1032), 3);
    add_background_object(create_mallfloor3_1890(9968, 1248), 3);
    add_background_object(create_floor26_1653(9824, 1032), 3);
    add_background_object(create_mallfloor3_1890(10096, 1248), 3);
    add_background_object(create_floor30_1707(10224, 1152), 3);
    add_background_object(create_mallfloor3_1890(10224, 1248), 3);
    add_background_object(create_floor26_1653(10312, 1024), 3);
    add_background_object(create_mallfloor3_1890(9200, 864), 3);
    add_background_object(create_mallfloor3_1890(9328, 864), 3);
    add_background_object(create_mallfloor6_1920(9440, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1216), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1184), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1152), 3);
    add_background_object(create_mallscalecolumn1_1888(9376, 1120), 3);
    add_background_object(create_mallscalecolumn2_1889(9376, 912), 3);
    add_background_object(create_mallstorebase3_1934(7960, 824), 3);
    add_background_object(create_mallstorebase3_1934(7912, 824), 3);
    add_background_object(create_mallstorebase4_1935(7472, 992), 3);
    add_background_object(create_mallfloor3_1890(10976, 576), 3);
    add_background_object(create_mallfloor3_1890(11104, 576), 3);
    add_background_object(create_mallfloor3_1890(11232, 576), 3);
    add_background_object(create_mallfloor3_1890(11360, 576), 3);
    add_background_object(create_mallfloor3_1890(11488, 576), 3);
    add_background_object(create_mallfloor3_1890(11616, 576), 3);
    add_background_object(create_mallfloor3_1890(10352, 1248), 3);
    add_background_object(create_mallfloor3_1890(10480, 1248), 3);
    add_background_object(create_mallfloor3_1890(10608, 1248), 3);
    add_background_object(create_mallfloor3_1890(10736, 1248), 3);
    add_background_object(create_mallfloor3_1890(10864, 1248), 3);
    add_background_object(create_mallfloor3_1890(10992, 1248), 3);
    add_background_object(create_mallfloor3_1890(11120, 1248), 3);
    add_background_object(create_mallfloor3_1890(11248, 1248), 3);
    add_background_object(create_mallfloor3_1890(11376, 1248), 3);
    add_background_object(create_mallfloor3_1890(11504, 1248), 3);
    add_background_object(create_mallfloor6_1920(8288, 576), 3);
    add_background_object(create_mallfloor6_1920(8288, 528), 3);
    add_background_object(create_mallfloor6_1920(8288, 480), 3);
    add_background_object(create_mallfloor6_1920(8288, 432), 3);
    add_background_object(create_ferriswheelbase2_1644(5920, 448), 3);
    add_background_object(create_ferriswheelbase2_1644(5920, 384), 3);
    add_background_object(create_ferriswheelbase_1664(5904, 352), 3);
    add_background_object(create_ferriswheelbase2_1644(5920, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(11032, 1024), 3);
    add_background_object(create_mallfloor1_1891(10480, 1152), 3);
    add_background_object(create_mallfloor1_1891(10480, 1056), 3);
    add_background_object(create_mallscalecolumn2_1889(11032, 624), 3);
    add_background_object(create_mallfloor6_1920(10480, 1056), 3);
    add_background_object(create_mallfloor6_1920(10480, 1104), 3);
    add_background_object(create_mallfloor6_1920(10480, 1152), 3);
    add_background_object(create_mallfloor6_1920(10480, 1200), 3);
    add_background_object(create_mallfloor1_1891(10992, 1152), 3);
    add_background_object(create_mallfloor1_1891(11120, 1056), 3);
    add_background_object(create_mallfloor1_1891(11120, 1152), 3);
    add_background_object(create_mallfloor1_1891(11248, 1056), 3);
    add_background_object(create_mallfloor1_1891(11248, 1152), 3);
    add_background_object(create_mallfloor1_1891(11376, 1056), 3);
    add_background_object(create_mallfloor1_1891(11376, 1152), 3);
    add_background_object(create_mallfloor1_1891(11504, 1056), 3);
    add_background_object(create_mallfloor1_1891(11504, 1152), 3);
    add_background_object(create_mallfloor1_1891(11632, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 1024), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 704), 3);
    add_background_object(create_mallscalecolumn2_1889(11672, 624), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(11480, 1024), 3);
    add_background_object(create_mallscalecolumn2_1889(11480, 624), 3);
    add_background_object(create_mallfloor1_1891(11552, 624), 3);
    add_background_object(create_mallfloor6_1920(11552, 624), 3);
    add_background_object(create_mallfloor6_1920(11552, 672), 3);
    add_background_object(create_mallfloor6_1920(11664, 624), 3);
    add_background_object(create_mallfloor6_1920(11664, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(11672, 1024), 3);
    add_background_object(create_keyboardback_1936(11088, 568), 3);
    add_background_object(create_keyboardback_1936(11184, 568), 3);
    add_background_object(create_keyboardback_1936(11280, 568), 3);
    add_background_object(create_keyboardback_1936(11376, 568), 3);
    add_background_object(create_keyboardsharpnote_1937(11120, 568), 3);
    add_background_object(create_keyboardsharpnote_1937(11216, 568), 3);
    add_background_object(create_keyboardsharpnote_1937(11264, 568), 3);
    add_background_object(create_keyboardsharpnote_1937(11360, 568), 3);
    add_background_object(create_keyboardsharpnote_1937(11408, 568), 3);
    add_background_object(create_keyboardback_1936(9312, 1240), 3);
    add_background_object(create_keyboardback_1936(9408, 1240), 3);
    add_background_object(create_keyboardback_1936(9504, 1240), 3);
    add_background_object(create_keyboardback_1936(9600, 1240), 3);
    add_background_object(create_keyboardsharpnote_1937(9344, 1240), 3);
    add_background_object(create_keyboardsharpnote_1937(9440, 1240), 3);
    add_background_object(create_keyboardsharpnote_1937(9488, 1240), 3);
    add_background_object(create_keyboardsharpnote_1937(9584, 1240), 3);
    add_background_object(create_keyboardsharpnote_1937(9632, 1240), 3);
    add_background_object(create_mallfloor1_1891(11488, 336), 3);
    add_background_object(create_mallfloor1_1891(11360, 336), 3);
    add_background_object(create_mallfloor1_1891(11232, 336), 3);
    add_background_object(create_mallfloor1_1891(11104, 336), 3);
    add_background_object(create_mallfloor1_1891(10976, 336), 3);
    add_background_object(create_mallfloor1_1891(10976, 240), 3);
    add_background_object(create_mallfloor1_1891(11488, 240), 3);
    add_background_object(create_mallfloor1_1891(11360, 240), 3);
    add_background_object(create_mallfloor1_1891(11232, 240), 3);
    add_background_object(create_mallfloor1_1891(11104, 240), 3);
    add_background_object(create_mallfloor1_1891(11488, 144), 3);
    add_background_object(create_mallfloor1_1891(11360, 144), 3);
    add_background_object(create_mallfloor1_1891(11232, 144), 3);
    add_background_object(create_mallfloor1_1891(11104, 144), 3);
    add_background_object(create_mallfloor1_1891(10976, 144), 3);
    add_background_object(create_mallfloor1_1891(10720, 48), 3);
    add_background_object(create_mallfloor1_1891(11488, 48), 3);
    add_background_object(create_mallfloor1_1891(11360, 48), 3);
    add_background_object(create_mallfloor1_1891(11232, 48), 3);
    add_background_object(create_mallfloor1_1891(11104, 48), 3);
    add_background_object(create_mallfloor3_1890(10720, 0), 3);
    add_background_object(create_mallfloor3_1890(11104, 0), 3);
    add_background_object(create_mallfloor3_1890(11232, 0), 3);
    add_background_object(create_mallfloor3_1890(11360, 0), 3);
    add_background_object(create_mallfloor3_1890(11488, 0), 3);
    add_background_object(create_mallfloor6_1920(10976, 384), 3);
    add_background_object(create_mallfloor6_1920(10976, 336), 3);
    add_background_object(create_mallfloor6_1920(10976, 288), 3);
    add_background_object(create_mallfloor6_1920(10976, 240), 3);
    add_background_object(create_mallfloor6_1920(10976, 192), 3);
    add_background_object(create_mallfloor6_1920(10976, 144), 3);
    add_background_object(create_mallfloor6_1920(10720, 96), 3);
    add_background_object(create_mallfloor6_1920(10720, 48), 3);
    add_background_object(create_mallscalecolumn2_1889(10976, 432), 3);
    add_background_object(create_mallfloor1_1891(11616, 336), 3);
    add_background_object(create_mallfloor1_1891(11616, 240), 3);
    add_background_object(create_mallfloor1_1891(11616, 144), 3);
    add_background_object(create_mallfloor1_1891(11616, 48), 3);
    add_background_object(create_mallfloor3_1890(11616, 0), 3);
    add_background_object(create_mallscalecolumn1_1888(11504, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(11504, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(11504, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(11504, 448), 3);
    add_background_object(create_mallscalecolumn2_1889(11504, 432), 3);
    add_background_object(create_fnlockedbike_1812(7504, 1024), 3);
    add_background_object(create_velvetrope_1931(7472, 1024), 3);
    add_background_object(create_velvetrope_1931(7528, 1024), 3);
    add_background_object(create_mallfloor3_1890(448, 912), 3);
    add_background_object(create_mallfloor1_1891(448, 816), 3);
    add_background_object(create_mallfloor1_1891(448, 720), 3);
    add_background_object(create_mallfloor3_1890(448, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 96), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 64), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 160), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 128), 3);
    add_background_object(create_mallfloor3_1890(6640, 496), 3);
    add_background_object(create_mallfloor3_1890(6896, 496), 3);
    add_background_object(create_mallfloor3_1890(7152, 496), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 400), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 464), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 432), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 368), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 304), 3);
    add_background_object(create_mosaicwall2_1887(6720, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 272), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 240), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 208), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 176), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 144), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 112), 3);
    add_background_object(create_mallfloor3_1890(6640, -32), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 80), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 48), 3);
    add_background_object(create_mallscalecolumn1_1888(6640, 16), 3);
    add_background_object(create_mallfloor6_1920(6896, 16), 3);
    add_background_object(create_mallfloor6_1920(7024, 64), 3);
    add_background_object(create_mallfloor6_1920(7152, 112), 3);
    add_background_object(create_mallfloor6_1920(7280, 160), 3);
    add_background_object(create_mallfloor6_1920(7408, 208), 3);
    add_background_object(create_mallfloor6_1920(7408, 256), 3);
    add_background_object(create_mallfloor6_1920(7408, 304), 3);
    add_background_object(create_mallfloor6_1920(7408, 352), 3);
    add_background_object(create_mallfloor6_1920(7408, 400), 3);
    add_background_object(create_mallfloor6_1920(7408, 448), 3);
    add_background_object(create_mallfloor6_1920(7408, 496), 3);
    add_background_object(create_mallfloor6_1920(7408, 544), 3);
    add_background_object(create_mallfloor6_1920(7408, 592), 3);
    add_background_object(create_mallfloor6_1920(7264, 592), 3);
    add_background_object(create_mallfloor6_1920(7264, 544), 3);
    add_background_object(create_mallfloor6_1920(7264, 496), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 464), 3);
    add_background_object(create_mosaicwall2_1887(7184, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 400), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 432), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 368), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 304), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 272), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 240), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 208), 3);
    add_background_object(create_mallscalecolumn1_1888(7200, 176), 3);
    add_background_object(create_mallscalecolumn2_1889(7200, 160), 3);
    add_background_object(create_mallscalecolumn2_1889(6640, 16), 3);
    add_background_object(create_gachaponbase_1850(6792, 336), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 320), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 288), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 256), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 224), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 192), 3);
    add_background_object(create_mallscalecolumn1_1888(6344, 352), 3);
    add_background_object(create_mallscalecolumn1_1888(6280, 384), 3);
    add_background_object(create_birchtree_1846(6272, 400), 3);
    add_background_object(create_mallscalecolumn2_1889(6280, 368), 3);
    add_background_object(create_mallfloor1_1891(10864, 1152), 3);
    add_background_object(create_mallfloor1_1891(10864, 1056), 3);
    add_background_object(create_mallfloor1_1891(10736, 1152), 3);
    add_background_object(create_mallfloor1_1891(10736, 1056), 3);
    add_background_object(create_mallfloor1_1891(10608, 1152), 3);
    add_background_object(create_mallfloor1_1891(10608, 1056), 3);
    add_background_object(create_mallfloor3_1890(10720, 576), 3);
    add_background_object(create_mallfloor6_1920(10720, 576), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 640), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 672), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 704), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 736), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 768), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 800), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 832), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 864), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 896), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 928), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 960), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 992), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 1024), 3);
    add_background_object(create_mallscalecolumn2_1889(10720, 624), 3);
    add_background_object(create_mallscalecolumn1_1888(11224, 928), 3);
    add_background_object(create_mallfloor1_1891(11552, 720), 3);
    add_background_object(create_mallfloor6_1920(11552, 720), 3);
    add_background_object(create_mallfloor6_1920(11552, 768), 3);
    add_background_object(create_mallfloor6_1920(11664, 720), 3);
    add_background_object(create_mallfloor6_1920(11664, 768), 3);
    add_background_object(create_mallfloor1_1891(11552, 816), 3);
    add_background_object(create_mallfloor6_1920(11552, 816), 3);
    add_background_object(create_mallfloor6_1920(11552, 864), 3);
    add_background_object(create_mallfloor6_1920(11664, 816), 3);
    add_background_object(create_mallfloor6_1920(11664, 864), 3);
    add_background_object(create_mallfloor1_1891(11552, 912), 3);
    add_background_object(create_mallfloor6_1920(11552, 912), 3);
    add_background_object(create_mallfloor6_1920(11552, 960), 3);
    add_background_object(create_mallfloor6_1920(11664, 912), 3);
    add_background_object(create_mallfloor6_1920(11664, 960), 3);
    add_background_object(create_mallfloor3_1890(11552, 1008), 3);
    add_background_object(create_mallfloor6_1920(11552, 1008), 3);
    add_background_object(create_mallfloor6_1920(11664, 1008), 3);
    add_background_object(create_mallfloor3_1890(10848, 576), 3);
    add_background_object(create_mallfloor3_1890(10992, 1104), 3);
    add_background_object(create_mallfloor8_1928(11104, 1056), 3);
    add_background_object(create_mallfloor8_1928(11088, 1080), 3);
    add_background_object(create_mallfloor8_1928(11056, 1080), 3);
    add_background_object(create_mallfloor8_1928(11024, 1080), 3);
    add_background_object(create_mallfloor8_1928(10992, 1080), 3);
    add_background_object(create_mallfloor6_1920(10976, 1056), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 544), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 512), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 480), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 448), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 416), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 384), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 352), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 320), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 288), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 256), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 224), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 192), 3);
    add_background_object(create_mallfloor1_1891(10848, 48), 3);
    add_background_object(create_mallfloor3_1890(10848, 0), 3);
    add_background_object(create_mallfloor1_1891(10976, 48), 3);
    add_background_object(create_mallfloor3_1890(10976, 0), 3);
    add_background_object(create_mallscalecolumn1_1888(10720, 160), 3);
    add_background_object(create_mallscalecolumn2_1889(10720, 144), 3);
    add_background_object(create_mallfloor6_1920(10720, 0), 3);
    add_background_object(create_edgeoverlay_1805(816, 1056), 3);
    add_background_object(create_edgeoverlay_1805(1392, 864), 3);
    add_background_object(create_edgeoverlay_1805(1256, 1056), 3);
    add_background_object(create_edgeoverlay_1805(2280, 864), 3);
    add_background_object(create_edgeoverlay_1805(7152, 864), 3);
    add_object(create_enemydusterarm2_1938(3883, 1226), 3);
    add_object(create_enemydusterarm2_1938(3659, 762), 3);
    add_object(create_enemydusterarm2_1938(7459, 842), 3);
    add_object(create_enemydusterarm1_1939(3896, 1191), 3);
    add_object(create_enemydusterarm1_1939(3672, 727), 3);
    add_object(create_enemydusterarm1_1939(7472, 807), 3);
    add_object(create_objectcrystal_279(10661, 818), 3);
    add_object(create_objectcrystal_279(10661, 778), 3);
    add_object(create_objectcrystal_279(10661, 738), 3);
    add_object(create_objectcrystal_279(10661, 698), 3);
    add_object(create_keyboard_1940(11424, 568), 3);
    add_object(create_keyboard_1940(11376, 568), 3);
    add_object(create_keyboard_1940(11328, 568), 3);
    add_object(create_keyboard_1940(11280, 568), 3);
    add_object(create_keyboard_1940(11232, 568), 3);
    add_object(create_keyboard_1940(11184, 568), 3);
    add_object(create_keyboard_1940(11136, 568), 3);
    add_object(create_keyboard_1940(11088, 568), 3);
    add_object(create_restroommen_1941(7992, 1024), 3);
    add_object(create_restroomwomen_1942(7832, 1024), 3);
    add_object(create_enemyroller_1943(7663, 1032), 3);
    add_object(create_enemyroller_1943(8047, 1032), 3);
    add_object(create_discolight_1944(0, 0), 3);
    add_object(create_layer0loop2_1743(6306, 784), 3);
    add_object(create_layer0loop2_1743(6258, 832), 3);
    add_object(create_layer0loop4_1945(6210, 880), 3);
    add_object(create_layer0loop5_1946(6128, 928), 3);
    add_object(create_restroommen_1941(4968, 1144), 3);
    add_object(create_restroomwomen_1942(5112, 1144), 3);
    add_object(create_restroommen_1941(2104, 1024), 3);
    add_object(create_restroomwomen_1942(2232, 1024), 3);
    add_object(create_restroomwomen_1942(1080, 1216), 3);
    add_object(create_yellowspringleft_436(4832, 1176), 3);
    add_object(create_enemyballoon_1947(1800, 584), 3);
    add_object(create_enemyballoon_1947(3504, 984), 3);
    add_object(create_enemyroller_1943(4263, 1224), 3);
    add_object(create_enemyroller_1943(4199, 1224), 3);
    add_object(create_sign_351(11992, -51), 3);
    add_object(create_playerstartingpoint_358(45, 1229), 3);
    add_object(create_link_352(88, -96), 3);
    add_object(create_objectcrystal_279(-275, 82), 3);
    add_object(create_objectcodec_354(-295, 108), 3);
    add_object(create_shieldearth_314(-140, 348), 3);
    add_object(create_shieldflameback_315(-96, 344), 3);
    add_object(create_shieldwood_313(-148, 340), 3);
    add_object(create_shieldmagnetic_317(-132, 348), 3);
    add_object(create_shieldwater_318(-84, 348), 3);
    add_object(create_shieldflamefront_316(-100, 348), 3);
    add_object(create_monitorkeystone_562(-216, 168), 3);
    add_object(create_objectjumppad_1510(-296, 168), 3);
    add_object(create_cameratriggerboss_424(6928, -384), 3);
    add_object(create_objectfuel_528(-252, 1212), 3);
    add_object(create_lamppostfront_1778(256, 1186), 3);
    add_object(create_enemylimiter_350(-371, 1554), 3);
    add_object(create_escalatorfront1_1949(568, 1216), 3);
    add_object(create_escalatorfront2_1950(2504, 1024), 3);
    add_object(create_escalatorfront1_1949(600, 1184), 3);
    add_object(create_escalatorfront1_1949(632, 1152), 3);
    add_object(create_escalatorfront1_1949(664, 1120), 3);
    add_object(create_escalatorfront1_1949(696, 1088), 3);
    add_object(create_escalatorfront1_1949(728, 1056), 3);
    add_object(create_escalatorleft_1951(2500, 1024), 3);
    add_object(create_escalatorfront2_1950(2472, 992), 3);
    add_object(create_escalatorfront2_1950(2440, 960), 3);
    add_object(create_escalatorfront2_1950(2408, 928), 3);
    add_object(create_escalatorfront2_1950(2376, 896), 3);
    add_object(create_escalatorfront2_1950(2344, 864), 3);
    add_object(create_fountainfront_1952(160, 1168), 3);
    add_object(create_fountainfront2_1953(136, 1168), 3);
    add_object(create_fountainfront2_1953(208, 1168), 3);
    add_object(create_laddertop_357(-340, 1199), 3);
    add_object(create_levelwaterplatform_1954(136, 1168), 3);
    add_object(create_fountainfront_1952(320, 1168), 3);
    add_object(create_fountainfront2_1953(296, 1168), 3);
    add_object(create_fountainfront2_1953(368, 1168), 3);
    add_object(create_levelwaterplatform_1954(296, 1168), 3);
    add_object(create_fountainfront_1952(944, 976), 3);
    add_object(create_fountainfront2_1953(920, 976), 3);
    add_object(create_fountainfront2_1953(992, 976), 3);
    add_object(create_levelwaterplatform_1954(920, 976), 3);
    add_object(create_lamppostfront_1778(96, 1186), 3);
    add_object(create_lamppostfront_1778(416, 1186), 3);
    add_object(create_objectcrystal_279(365, 1034), 3);
    add_object(create_objectcrystal_279(309, 1034), 3);
    add_object(create_objectcrystal_279(205, 1034), 3);
    add_object(create_objectcrystal_279(149, 1034), 3);
    add_object(create_escalatorfront2_1950(1480, 1216), 3);
    add_object(create_escalatorleft_1951(1476, 1216), 3);
    add_object(create_escalatorfront2_1950(1448, 1184), 3);
    add_object(create_escalatorfront2_1950(1416, 1152), 3);
    add_object(create_escalatorfront2_1950(1384, 1120), 3);
    add_object(create_escalatorfront2_1950(1352, 1088), 3);
    add_object(create_escalatorfront2_1950(1320, 1056), 3);
    add_object(create_objectchair_1779(965, 1225), 3);
    add_object(create_objectchair_1779(1221, 1225), 3);
    add_object(create_objectchair_1779(2085, 841), 3);
    add_object(create_switchwallplate_1167(1648, 1200), 3);
    add_object(create_gimmickteetertotter_1827(8624, 1000), 3);
    add_object(create_objectdiscoball_1955(3297, 960), 3);
    add_object(create_objectdiscoball2_1956(3312, 1032), 3);
    add_object(create_enemyroller_1943(1135, 1224), 3);
    add_object(create_enemyroller_1943(2223, 840), 3);
    add_object(create_enemyroller_1943(1711, 888), 3);
    add_object(create_enemyroller_1943(1039, 1224), 3);
    add_object(create_enemyroller_1943(495, 1224), 3);
    add_object(create_enemyroller_1943(1103, 1032), 3);
    add_object(create_enemyroller_1943(1039, 1032), 3);
    add_object(create_enemydustermouth_1957(3913, 1230), 3);
    add_object(create_enemyduster_1958(3868, 1232), 3);
    add_object(create_enemylimiter_350(3837, 1234), 3);
    add_object(create_enemylimiter_350(4181, 1234), 3);
    add_object(create_objectcrystal_279(1005, 826), 3);
    add_object(create_objectcrystal_279(1045, 826), 3);
    add_object(create_objectcrystal_279(1085, 826), 3);
    add_object(create_objectcrystal_279(885, 1234), 3);
    add_object(create_objectcrystal_279(909, 1210), 3);
    add_object(create_objectcrystal_279(1373, 1234), 3);
    add_object(create_objectcrystal_279(1405, 1234), 3);
    add_object(create_objectcrystal_279(1437, 1234), 3);
    add_object(create_objectcrystal_279(1053, 1170), 3);
    add_object(create_objectcrystal_279(1021, 1170), 3);
    add_object(create_objectcrystal_279(1085, 1170), 3);
    add_object(create_objectcrystal_279(941, 962), 3);
    add_object(create_objectcrystal_279(981, 962), 3);
    add_object(create_objectcrystal_279(1645, 1178), 3);
    add_object(create_objectcrystal_279(1621, 1178), 3);
    add_object(create_objectcrystal_279(1597, 1178), 3);
    add_object(create_objectcrystal_279(1573, 1178), 3);
    add_object(create_objectparasol_1959(3648, 1120), 3);
    add_object(create_objectparasol_1959(3760, 1168), 3);
    add_object(create_objectparasol_1959(3760, 1096), 3);
    add_object(create_objectparasol_1959(3760, 1024), 3);
    add_object(create_objectparasol_1959(1856, 832), 3);
    add_object(create_objectparasol_1959(1728, 832), 3);
    add_object(create_turningspring_1960(2848, 840), 3);
    add_object(create_turningspring_1960(2944, 840), 3);
    add_object(create_enemyflarecannon_1820(3460, 520), 3);
    add_object(create_effectflareburst_1788(-328, 1104), 3);
    add_object(create_objectpetal_302(177, 1033), 3);
    add_object(create_objectpetal_302(337, 1033), 3);
    add_object(create_gimmickhangingidleswitch_1257(3889, 336), 3);
    add_object(create_gachapondoor_1858(3808, 416), 3);
    add_object(create_gachaponfront_1859(3847, 376), 3);
    add_object(create_gimmickhangingmovingstopper_1961(2256, 696), 3);
    add_object(create_gimmickhangingmovingsensor_1962(1617, 757), 3);
    add_object(create_gimmickhangingmovingbar_1963(1616, 696), 3);
    add_object(create_gimmickhangingmovingwheel_1964(1620, 700), 3);
    add_object(create_levelmovingplatform1_1965(4464, 1200), 3);
    add_object(create_levelmovingplatform1_1965(4592, 1200), 3);
    add_object(create_levelmovingplatform1_1965(4720, 1200), 3);
    add_object(create_objectcrystal_279(4933, 954), 3);
    add_object(create_objectcrystal_279(4957, 954), 3);
    add_object(create_objectcrystal_279(4997, 954), 3);
    add_object(create_objectcrystal_279(5021, 954), 3);
    add_object(create_redspringup_440(5064, 976), 3);
    add_object(create_gimmickhangingmovingstopper_1961(4504, 888), 3);
    add_object(create_gimmickhangingmovingsensor_1962(3921, 949), 3);
    add_object(create_gimmickhangingmovingbar_1963(3920, 888), 3);
    add_object(create_gimmickhangingmovingwheel_1964(3924, 892), 3);
    add_object(create_objectcrystal_279(2557, 194), 3);
    add_object(create_objectcrystal_279(2589, 194), 3);
    add_object(create_objectcrystal_279(2557, 234), 3);
    add_object(create_objectcrystal_279(2589, 234), 3);
    add_object(create_objectcrystal_279(2621, 194), 3);
    add_object(create_objectcrystal_279(2653, 194), 3);
    add_object(create_objectcrystal_279(2621, 234), 3);
    add_object(create_objectcrystal_279(2653, 234), 3);
    add_object(create_objectcrystal_279(2685, 194), 3);
    add_object(create_objectcrystal_279(2717, 194), 3);
    add_object(create_objectcrystal_279(2685, 234), 3);
    add_object(create_objectcrystal_279(2717, 234), 3);
    add_object(create_objectcrystal_279(2749, 194), 3);
    add_object(create_objectcrystal_279(2781, 194), 3);
    add_object(create_objectcrystal_279(2749, 234), 3);
    add_object(create_objectcrystal_279(2781, 234), 3);
    add_object(create_objectcrystal_279(2557, 274), 3);
    add_object(create_objectcrystal_279(2589, 274), 3);
    add_object(create_objectcrystal_279(2621, 274), 3);
    add_object(create_objectcrystal_279(2653, 274), 3);
    add_object(create_objectcrystal_279(2685, 274), 3);
    add_object(create_objectcrystal_279(2717, 274), 3);
    add_object(create_objectcrystal_279(2717, 314), 3);
    add_object(create_objectcrystal_279(2749, 274), 3);
    add_object(create_objectcrystal_279(2781, 274), 3);
    add_object(create_objectcrystal_279(2749, 314), 3);
    add_object(create_objectcrystal_279(2781, 314), 3);
    add_object(create_objectcrystal_279(2301, 194), 3);
    add_object(create_objectcrystal_279(2333, 194), 3);
    add_object(create_objectcrystal_279(2301, 234), 3);
    add_object(create_objectcrystal_279(2333, 234), 3);
    add_object(create_objectcrystal_279(2365, 194), 3);
    add_object(create_objectcrystal_279(2397, 194), 3);
    add_object(create_objectcrystal_279(2365, 234), 3);
    add_object(create_objectcrystal_279(2397, 234), 3);
    add_object(create_objectcrystal_279(2429, 194), 3);
    add_object(create_objectcrystal_279(2461, 194), 3);
    add_object(create_objectcrystal_279(2429, 234), 3);
    add_object(create_objectcrystal_279(2461, 234), 3);
    add_object(create_objectcrystal_279(2493, 194), 3);
    add_object(create_objectcrystal_279(2525, 194), 3);
    add_object(create_objectcrystal_279(2493, 234), 3);
    add_object(create_objectcrystal_279(2525, 234), 3);
    add_object(create_objectcrystal_279(2525, 274), 3);
    add_object(create_objectcrystal_279(2813, 194), 3);
    add_object(create_objectcrystal_279(2845, 194), 3);
    add_object(create_objectcrystal_279(2813, 234), 3);
    add_object(create_objectcrystal_279(2845, 234), 3);
    add_object(create_objectcrystal_279(2877, 194), 3);
    add_object(create_objectcrystal_279(2909, 194), 3);
    add_object(create_objectcrystal_279(2877, 234), 3);
    add_object(create_objectcrystal_279(2909, 234), 3);
    add_object(create_objectcrystal_279(2941, 234), 3);
    add_object(create_objectcrystal_279(2973, 234), 3);
    add_object(create_objectcrystal_279(2813, 274), 3);
    add_object(create_objectcrystal_279(2845, 274), 3);
    add_object(create_objectcrystal_279(2813, 314), 3);
    add_object(create_objectcrystal_279(2845, 314), 3);
    add_object(create_objectcrystal_279(2877, 274), 3);
    add_object(create_objectcrystal_279(2909, 274), 3);
    add_object(create_objectcrystal_279(2877, 314), 3);
    add_object(create_objectcrystal_279(2909, 314), 3);
    add_object(create_objectcrystal_279(2941, 274), 3);
    add_object(create_objectcrystal_279(2973, 274), 3);
    add_object(create_objectcrystal_279(2941, 314), 3);
    add_object(create_objectcrystal_279(2973, 314), 3);
    add_object(create_objectcrystal_279(3005, 274), 3);
    add_object(create_objectcrystal_279(2557, 114), 3);
    add_object(create_objectcrystal_279(2589, 114), 3);
    add_object(create_objectcrystal_279(2557, 154), 3);
    add_object(create_objectcrystal_279(2589, 154), 3);
    add_object(create_objectcrystal_279(2621, 114), 3);
    add_object(create_objectcrystal_279(2653, 114), 3);
    add_object(create_objectcrystal_279(2621, 154), 3);
    add_object(create_objectcrystal_279(2653, 154), 3);
    add_object(create_objectcrystal_279(2685, 114), 3);
    add_object(create_objectcrystal_279(2717, 114), 3);
    add_object(create_objectcrystal_279(2685, 154), 3);
    add_object(create_objectcrystal_279(2717, 154), 3);
    add_object(create_objectcrystal_279(2749, 154), 3);
    add_object(create_objectcrystal_279(2781, 154), 3);
    add_object(create_objectcrystal_279(2301, 114), 3);
    add_object(create_objectcrystal_279(2333, 114), 3);
    add_object(create_objectcrystal_279(2301, 154), 3);
    add_object(create_objectcrystal_279(2333, 154), 3);
    add_object(create_objectcrystal_279(2365, 114), 3);
    add_object(create_objectcrystal_279(2397, 114), 3);
    add_object(create_objectcrystal_279(2365, 154), 3);
    add_object(create_objectcrystal_279(2397, 154), 3);
    add_object(create_objectcrystal_279(2429, 114), 3);
    add_object(create_objectcrystal_279(2461, 114), 3);
    add_object(create_objectcrystal_279(2429, 154), 3);
    add_object(create_objectcrystal_279(2461, 154), 3);
    add_object(create_objectcrystal_279(2493, 114), 3);
    add_object(create_objectcrystal_279(2525, 114), 3);
    add_object(create_objectcrystal_279(2493, 154), 3);
    add_object(create_objectcrystal_279(2525, 154), 3);
    add_object(create_objectcrystal_279(2813, 154), 3);
    add_object(create_objectcrystal_279(2845, 154), 3);
    add_object(create_objectcrystal_279(2909, 354), 3);
    add_object(create_objectcrystal_279(2941, 354), 3);
    add_object(create_objectcrystal_279(2109, 194), 3);
    add_object(create_objectcrystal_279(2141, 194), 3);
    add_object(create_objectcrystal_279(2109, 234), 3);
    add_object(create_objectcrystal_279(2141, 234), 3);
    add_object(create_objectcrystal_279(2173, 194), 3);
    add_object(create_objectcrystal_279(2205, 194), 3);
    add_object(create_objectcrystal_279(2173, 234), 3);
    add_object(create_objectcrystal_279(2205, 234), 3);
    add_object(create_objectcrystal_279(2237, 194), 3);
    add_object(create_objectcrystal_279(2269, 194), 3);
    add_object(create_objectcrystal_279(2237, 234), 3);
    add_object(create_objectcrystal_279(2269, 234), 3);
    add_object(create_objectcrystal_279(2109, 114), 3);
    add_object(create_objectcrystal_279(2141, 114), 3);
    add_object(create_objectcrystal_279(2109, 154), 3);
    add_object(create_objectcrystal_279(2141, 154), 3);
    add_object(create_objectcrystal_279(2173, 114), 3);
    add_object(create_objectcrystal_279(2205, 114), 3);
    add_object(create_objectcrystal_279(2173, 154), 3);
    add_object(create_objectcrystal_279(2205, 154), 3);
    add_object(create_objectcrystal_279(2237, 114), 3);
    add_object(create_objectcrystal_279(2269, 114), 3);
    add_object(create_objectcrystal_279(2237, 154), 3);
    add_object(create_objectcrystal_279(2269, 154), 3);
    add_object(create_objectcrystal_279(2877, 354), 3);
    add_object(create_redspringupleft_439(3328, 560), 3);
    add_object(create_objectpetal_302(4025, 953), 3);
    add_object(create_objectpetal_302(4097, 953), 3);
    add_object(create_objectpetal_302(4169, 953), 3);
    add_object(create_objectpetal_302(4241, 953), 3);
    add_object(create_levelmovingplatform1_1965(5232, 1200), 3);
    add_object(create_enemydustermouth_1957(3689, 766), 3);
    add_object(create_enemyduster_1958(3644, 768), 3);
    add_object(create_enemylimiter_350(3613, 770), 3);
    add_object(create_enemylimiter_350(3773, 770), 3);
    add_object(create_objectpetal_302(3137, 705), 3);
    add_object(create_objectpetal_302(3105, 729), 3);
    add_object(create_objectcodec_354(3970, 717), 3);
    add_object(create_redspringup_440(4128, 768), 3);
    add_object(create_redspringup_440(4160, 768), 3);
    add_object(create_escalatorfront1_1949(1272, 896), 3);
    add_object(create_escalatorfront1_1949(1240, 928), 3);
    add_object(create_escalatorfront1_1949(1208, 960), 3);
    add_object(create_escalatorfront1_1949(1176, 992), 3);
    add_object(create_escalatorfront1_1949(1144, 1024), 3);
    add_object(create_escalatorfront1_1949(1304, 864), 3);
    add_object(create_escalatorright_1966(1188, 1024), 3);
    add_object(create_monitorcrate_409(208, 640), 3);
    add_object(create_monitorrings_407(1584, 1072), 3);
    add_object(create_hazardspikesup_1769(1528, 832), 3);
    add_object(create_objectpetal_302(1793, 777), 3);
    add_object(create_objectpetal_302(1857, 777), 3);
    add_object(create_objectpetal_302(1921, 777), 3);
    add_object(create_levelmovingplatform1_1965(5616, 912), 3);
    add_object(create_gimmickhangingidleswitch_1257(6017, 848), 3);
    add_object(create_gachapondoor_1858(5936, 928), 3);
    add_object(create_gachaponfront_1859(5975, 888), 3);
    add_object(create_fountainfront_1952(5152, 560), 3);
    add_object(create_fountainfront2_1953(5128, 560), 3);
    add_object(create_fountainfront2_1953(5200, 560), 3);
    add_object(create_levelwaterplatform_1954(5128, 560), 3);
    add_object(create_enemycoilpiece1_1751(5936, 638), 3);
    add_object(create_enemycoilpiece3_1752(5935, 638), 3);
    add_object(create_enemycoilpiece2_1753(5936, 638), 3);
    add_object(create_enemycoilpiece4_1754(5935, 638), 3);
    add_object(create_enemycoil_1755(5936, 638), 3);
    add_object(create_enemylimiter_350(5805, 626), 3);
    add_object(create_enemylimiter_350(5829, 626), 3);
    add_object(create_enemylimiter_350(6093, 626), 3);
    add_object(create_enemylimiter_350(6069, 626), 3);
    add_object(create_enemysuperturretus_1828(2395, 1008), 3);
    add_object(create_enemycoilflip_1756(-280, 1008), 3);
    add_object(create_monitorwatershield_327(2152, 1024), 3);
    add_object(create_gimmicklanternbridge1_1727(4376, 448), 3);
    add_object(create_gimmicklanternbridge2_1728(4376, 416), 3);
    add_object(create_gimmicklanternbridge3_1729(4384, 416), 3);
    add_object(create_gimmicklanternbridge4_1730(4392, 416), 3);
    add_object(create_gimmicklanternbridge5_1731(4400, 416), 3);
    add_object(create_gimmicklanternbridge6_1732(4408, 416), 3);
    add_object(create_gimmicklanternbridge7_1733(4416, 416), 3);
    add_object(create_gimmicklanternbridge8_1734(4424, 416), 3);
    add_object(create_levelmovingplatform2_1967(4048, 208), 3);
    add_object(create_layer0loop3_1857(6352, 712), 3);
    add_object(create_layer1loop2_1744(6208, 760), 3);
    add_object(create_layer1loop2_1744(6256, 808), 3);
    add_object(create_layer1loop2_1744(6304, 856), 3);
    add_object(create_layerchangeswitch_404(6152, 632), 3);
    add_object(create_layerchangeswitch_404(6152, 568), 3);
    add_object(create_layerchangeswitch2_1239(6480, 760), 3);
    add_object(create_layerchangeswitch2_1239(6104, 896), 3);
    add_object(create_layerchangeswitch2_1239(6104, 832), 3);
    add_object(create_layerchangeswitch2_1239(6104, 768), 3);
    add_object(create_layerchangeswitch_404(6480, 984), 3);
    add_object(create_objectcrystal_279(5837, 754), 3);
    add_object(create_objectcrystal_279(6037, 754), 3);
    add_object(create_objectcrystal_279(5901, 754), 3);
    add_object(create_objectcrystal_279(5973, 754), 3);
    add_object(create_objectcrystal_279(5869, 754), 3);
    add_object(create_objectcrystal_279(6005, 754), 3);
    add_object(create_objectparasol_1959(6448, 1072), 3);
    add_object(create_objectparasol_1959(6576, 1072), 3);
    add_object(create_objectparasol_1959(6320, 1072), 3);
    add_object(create_objectdiscoball_1955(4961, 88), 3);
    add_object(create_objectdiscoball2_1956(4976, 160), 3);
    add_object(create_escalatorfront1_1949(6872, 1056), 3);
    add_object(create_escalatorfront1_1949(6840, 1088), 3);
    add_object(create_escalatorfront1_1949(6808, 1120), 3);
    add_object(create_escalatorright_1966(6852, 1120), 3);
    add_object(create_escalatorfront1_1949(7064, 864), 3);
    add_object(create_escalatorfront1_1949(6904, 1024), 3);
    add_object(create_layerchangeswitch_404(6480, 1040), 3);
    add_object(create_layerchangeswitch_404(6480, 1096), 3);
    add_object(create_enemysuperturretus_1828(6251, 1112), 3);
    add_object(create_escalatorfront1_1949(7032, 896), 3);
    add_object(create_escalatorfront1_1949(6936, 992), 3);
    add_object(create_escalatorfront1_1949(6968, 960), 3);
    add_object(create_escalatorfront1_1949(7000, 928), 3);
    add_object(create_objectcodec_354(7127, 1125), 3);
    add_object(create_objectdiscoball_1955(5305, 192), 3);
    add_object(create_objectdiscoball2_1956(5320, 264), 3);
    add_object(create_objectcrystal_279(6141, 1026), 3);
    add_object(create_objectcrystal_279(6181, 1018), 3);
    add_object(create_objectcrystal_279(6221, 994), 3);
    add_object(create_objectcrystal_279(6261, 962), 3);
    add_object(create_objectcrystal_279(6301, 922), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheelpiece_1720(5552, 464), 3);
    add_object(create_levelferriswheel1_1765(5552, 464), 3);
    add_object(create_levelferriswheel2_1766(5552, 464), 3);
    add_object(create_levelferriswheel3_1767(5552, 464), 3);
    add_object(create_levelferriswheel4_1768(5552, 464), 3);
    add_object(create_objectpetal_302(5153, 545), 3);
    add_object(create_objectpetal_302(5185, 545), 3);
    add_object(create_enemysuperturretus_1828(7051, 808), 3);
    add_object(create_enemysuperturretus_1828(7203, 760), 3);
    add_object(create_yellowspringupleft_432(4880, 200), 3);
    add_object(create_levelmovingplatform2_1967(4544, 216), 3);
    add_object(create_yellowspringup_434(4472, 456), 3);
    add_object(create_yellowspringup_434(4504, 456), 3);
    add_object(create_yellowspringup_434(4536, 456), 3);
    add_object(create_yellowspringup_434(4568, 456), 3);
    add_object(create_yellowspringdown_437(4376, 496), 3);
    add_object(create_yellowspringdown_437(4408, 496), 3);
    add_object(create_yellowspringdown_437(4440, 496), 3);
    add_object(create_yellowspringdown_437(4472, 496), 3);
    add_object(create_yellowspringdown_437(4504, 496), 3);
    add_object(create_yellowspringdown_437(4536, 496), 3);
    add_object(create_yellowspringdown_437(4568, 496), 3);
    add_object(create_levelmovingplatform2_1967(4736, 216), 3);
    add_object(create_objectcrystal_279(4509, 170), 3);
    add_object(create_objectcrystal_279(4581, 170), 3);
    add_object(create_objectcrystal_279(4533, 170), 3);
    add_object(create_objectcrystal_279(4557, 170), 3);
    add_object(create_levelmovingplatform2_1967(4352, 216), 3);
    add_object(create_objectparasol_1959(6704, 1072), 3);
    add_object(create_objectparasol_1959(6704, 1000), 3);
    add_object(create_enemysuperturretus_1828(4259, 128), 3);
    add_object(create_enemydustermouth_1957(7489, 846), 3);
    add_object(create_enemyduster_1958(7444, 848), 3);
    add_object(create_enemylimiter_350(7413, 850), 3);
    add_object(create_enemylimiter_350(7573, 850), 3);
    add_object(create_laddertop_357(7736, 887), 3);
    add_object(create_objectcrystal_279(5013, 450), 3);
    add_object(create_objectcrystal_279(4973, 450), 3);
    add_object(create_objectcrystal_279(5013, 410), 3);
    add_object(create_objectcrystal_279(4973, 410), 3);
    add_object(create_objectcrystal_279(5013, 370), 3);
    add_object(create_objectcrystal_279(4973, 370), 3);
    add_object(create_objectcrystal_279(5013, 330), 3);
    add_object(create_objectcrystal_279(4973, 330), 3);
    add_object(create_objectcrystal_279(4933, 450), 3);
    add_object(create_objectcrystal_279(4893, 450), 3);
    add_object(create_objectcrystal_279(4933, 410), 3);
    add_object(create_objectcrystal_279(4893, 410), 3);
    add_object(create_objectcrystal_279(4933, 370), 3);
    add_object(create_objectcrystal_279(4893, 370), 3);
    add_object(create_objectcrystal_279(4933, 330), 3);
    add_object(create_objectcrystal_279(4893, 330), 3);
    add_object(create_objectcrystal_279(4853, 450), 3);
    add_object(create_objectcrystal_279(4813, 450), 3);
    add_object(create_objectcrystal_279(4853, 410), 3);
    add_object(create_objectcrystal_279(4813, 410), 3);
    add_object(create_objectcrystal_279(4853, 370), 3);
    add_object(create_objectcrystal_279(4813, 370), 3);
    add_object(create_objectcrystal_279(4853, 330), 3);
    add_object(create_objectcrystal_279(4813, 330), 3);
    add_object(create_objectcrystal_279(4773, 450), 3);
    add_object(create_objectcrystal_279(4733, 450), 3);
    add_object(create_objectcrystal_279(4773, 410), 3);
    add_object(create_objectcrystal_279(4733, 410), 3);
    add_object(create_objectcrystal_279(4773, 370), 3);
    add_object(create_objectcrystal_279(4733, 370), 3);
    add_object(create_objectcrystal_279(4773, 330), 3);
    add_object(create_objectcrystal_279(4733, 330), 3);
    add_object(create_objectcrystal_279(5013, 490), 3);
    add_object(create_objectcrystal_279(4973, 490), 3);
    add_object(create_objectcrystal_279(4933, 490), 3);
    add_object(create_objectcrystal_279(4893, 490), 3);
    add_object(create_objectcrystal_279(4853, 490), 3);
    add_object(create_objectcrystal_279(4813, 490), 3);
    add_object(create_objectcrystal_279(4773, 490), 3);
    add_object(create_objectcrystal_279(4733, 490), 3);
    add_object(create_objectcrystal_279(5013, 530), 3);
    add_object(create_objectcrystal_279(4973, 530), 3);
    add_object(create_objectcrystal_279(4933, 530), 3);
    add_object(create_objectcrystal_279(4893, 530), 3);
    add_object(create_objectcrystal_279(4853, 530), 3);
    add_object(create_objectcrystal_279(4813, 530), 3);
    add_object(create_objectcrystal_279(4773, 530), 3);
    add_object(create_objectcrystal_279(4733, 530), 3);
    add_object(create_objectcrystal_279(5013, 570), 3);
    add_object(create_objectcrystal_279(4973, 570), 3);
    add_object(create_objectcrystal_279(4933, 570), 3);
    add_object(create_objectcrystal_279(4893, 570), 3);
    add_object(create_objectcrystal_279(4853, 570), 3);
    add_object(create_objectcrystal_279(4813, 570), 3);
    add_object(create_objectcrystal_279(4773, 570), 3);
    add_object(create_objectcrystal_279(4733, 570), 3);
    add_object(create_objectcrystal_279(5053, 450), 3);
    add_object(create_objectcrystal_279(5053, 410), 3);
    add_object(create_objectcrystal_279(5053, 370), 3);
    add_object(create_objectcrystal_279(5053, 330), 3);
    add_object(create_objectcrystal_279(5053, 490), 3);
    add_object(create_objectcrystal_279(5053, 530), 3);
    add_object(create_objectcrystal_279(5053, 570), 3);
    add_object(create_objectcrystal_279(4693, 450), 3);
    add_object(create_objectcrystal_279(4693, 410), 3);
    add_object(create_objectcrystal_279(4693, 370), 3);
    add_object(create_objectcrystal_279(4693, 330), 3);
    add_object(create_objectcrystal_279(4693, 490), 3);
    add_object(create_objectcrystal_279(4693, 530), 3);
    add_object(create_objectcrystal_279(4693, 570), 3);
    add_object(create_objectcrystal_279(4653, 450), 3);
    add_object(create_objectcrystal_279(4653, 410), 3);
    add_object(create_objectcrystal_279(4653, 370), 3);
    add_object(create_objectcrystal_279(4653, 330), 3);
    add_object(create_objectcrystal_279(4653, 490), 3);
    add_object(create_objectcrystal_279(4653, 530), 3);
    add_object(create_objectcrystal_279(4653, 570), 3);
    add_object(create_gimmickhangingmovingstopper_1961(9136, 728), 3);
    add_object(create_gimmickhangingmovingsensor_1962(8233, 789), 3);
    add_object(create_gimmickhangingmovingbar_1963(8232, 728), 3);
    add_object(create_gimmickhangingmovingwheel_1964(8236, 732), 3);
    add_object(create_layerchangeto0_405(8400, 928), 3);
    add_object(create_layerchangeto0_405(8400, 992), 3);
    add_object(create_layer0loop6_1969(8816, 768), 3);
    add_object(create_layer0loop6_1969(8816, 672), 3);
    add_object(create_layerchangeswitch2_1239(8400, 808), 3);
    add_object(create_layerchangeswitch2_1239(8400, 744), 3);
    add_object(create_layerchangeswitch2_1239(8400, 680), 3);
    add_object(create_gimmickhangingmovingsensor_1962(8369, 549), 3);
    add_object(create_gimmickhangingmovingbar_1963(8368, 488), 3);
    add_object(create_gimmickhangingmovingwheel_1964(8372, 492), 3);
    add_object(create_gimmickhangingmovingstopper_1961(9136, 488), 3);
    add_object(create_yellowspringup_434(8944, 848), 3);
    add_object(create_gimmickhangingidleswitch_1257(7145, 384), 3);
    add_object(create_gachapondoor_1858(7064, 464), 3);
    add_object(create_yellowspringup_434(6480, 528), 3);
    add_object(create_yellowspringup_434(6448, 528), 3);
    add_object(create_turningspring_1960(9936, 552), 3);
    add_object(create_levelmovingplatform2_1967(9840, 712), 3);
    add_object(create_levelmovingplatform2_1967(10240, 616), 3);
    add_object(create_turningspring_1960(10400, 576), 3);
    add_object(create_levelmovingplatform2_1967(9704, 784), 3);
    add_object(create_levelmovingplatform2_1967(9936, 712), 3);
    add_object(create_objectcrystal_279(8461, 562), 3);
    add_object(create_objectcrystal_279(8525, 562), 3);
    add_object(create_objectcrystal_279(8589, 562), 3);
    add_object(create_objectcrystal_279(8653, 562), 3);
    add_object(create_objectcrystal_279(8717, 562), 3);
    add_object(create_objectcrystal_279(8781, 562), 3);
    add_object(create_objectcrystal_279(8845, 562), 3);
    add_object(create_objectcrystal_279(8909, 562), 3);
    add_object(create_objectcrystal_279(9773, 186), 3);
    add_object(create_objectcrystal_279(9733, 186), 3);
    add_object(create_objectcrystal_279(9773, 146), 3);
    add_object(create_objectcrystal_279(9733, 146), 3);
    add_object(create_objectcrystal_279(9773, 106), 3);
    add_object(create_objectcrystal_279(9733, 106), 3);
    add_object(create_objectcrystal_279(9773, 66), 3);
    add_object(create_objectcrystal_279(9733, 66), 3);
    add_object(create_objectcrystal_279(9693, 186), 3);
    add_object(create_objectcrystal_279(9653, 186), 3);
    add_object(create_objectcrystal_279(9693, 146), 3);
    add_object(create_objectcrystal_279(9653, 146), 3);
    add_object(create_objectcrystal_279(9693, 106), 3);
    add_object(create_objectcrystal_279(9653, 106), 3);
    add_object(create_objectcrystal_279(9693, 66), 3);
    add_object(create_objectcrystal_279(9653, 66), 3);
    add_object(create_objectcrystal_279(9613, 186), 3);
    add_object(create_objectcrystal_279(9573, 186), 3);
    add_object(create_objectcrystal_279(9613, 146), 3);
    add_object(create_objectcrystal_279(9573, 146), 3);
    add_object(create_objectcrystal_279(9613, 106), 3);
    add_object(create_objectcrystal_279(9573, 106), 3);
    add_object(create_objectcrystal_279(9613, 66), 3);
    add_object(create_objectcrystal_279(9573, 66), 3);
    add_object(create_objectcrystal_279(9533, 186), 3);
    add_object(create_objectcrystal_279(9493, 186), 3);
    add_object(create_objectcrystal_279(9533, 146), 3);
    add_object(create_objectcrystal_279(9493, 146), 3);
    add_object(create_objectcrystal_279(9533, 106), 3);
    add_object(create_objectcrystal_279(9493, 106), 3);
    add_object(create_objectcrystal_279(9533, 66), 3);
    add_object(create_objectcrystal_279(9493, 66), 3);
    add_object(create_objectcrystal_279(9773, 226), 3);
    add_object(create_objectcrystal_279(9733, 226), 3);
    add_object(create_objectcrystal_279(9693, 226), 3);
    add_object(create_objectcrystal_279(9653, 226), 3);
    add_object(create_objectcrystal_279(9613, 226), 3);
    add_object(create_objectcrystal_279(9573, 226), 3);
    add_object(create_objectcrystal_279(9533, 226), 3);
    add_object(create_objectcrystal_279(9493, 226), 3);
    add_object(create_objectcrystal_279(9773, 266), 3);
    add_object(create_objectcrystal_279(9733, 266), 3);
    add_object(create_objectcrystal_279(9693, 266), 3);
    add_object(create_objectcrystal_279(9653, 266), 3);
    add_object(create_objectcrystal_279(9613, 266), 3);
    add_object(create_objectcrystal_279(9573, 266), 3);
    add_object(create_objectcrystal_279(9533, 266), 3);
    add_object(create_objectcrystal_279(9493, 266), 3);
    add_object(create_objectcrystal_279(9773, 306), 3);
    add_object(create_objectcrystal_279(9733, 306), 3);
    add_object(create_objectcrystal_279(9693, 306), 3);
    add_object(create_objectcrystal_279(9653, 306), 3);
    add_object(create_objectcrystal_279(9613, 306), 3);
    add_object(create_objectcrystal_279(9573, 306), 3);
    add_object(create_objectcrystal_279(9533, 306), 3);
    add_object(create_objectcrystal_279(9493, 306), 3);
    add_object(create_objectcrystal_279(9813, 186), 3);
    add_object(create_objectcrystal_279(9813, 146), 3);
    add_object(create_objectcrystal_279(9813, 106), 3);
    add_object(create_objectcrystal_279(9813, 66), 3);
    add_object(create_objectcrystal_279(9813, 226), 3);
    add_object(create_objectcrystal_279(9813, 266), 3);
    add_object(create_objectcrystal_279(9813, 306), 3);
    add_object(create_objectcrystal_279(9453, 186), 3);
    add_object(create_objectcrystal_279(9453, 146), 3);
    add_object(create_objectcrystal_279(9453, 106), 3);
    add_object(create_objectcrystal_279(9453, 66), 3);
    add_object(create_objectcrystal_279(9453, 226), 3);
    add_object(create_objectcrystal_279(9453, 266), 3);
    add_object(create_objectcrystal_279(9453, 306), 3);
    add_object(create_objectcrystal_279(9413, 186), 3);
    add_object(create_objectcrystal_279(9413, 146), 3);
    add_object(create_objectcrystal_279(9413, 106), 3);
    add_object(create_objectcrystal_279(9413, 66), 3);
    add_object(create_objectcrystal_279(9413, 226), 3);
    add_object(create_objectcrystal_279(9413, 266), 3);
    add_object(create_objectcrystal_279(9413, 306), 3);
    add_object(create_layerchangeswitch_404(8976, 608), 3);
    add_object(create_layerchangeswitch_404(8976, 672), 3);
    add_object(create_layerchangeswitch_404(8976, 736), 3);
    add_object(create_layerchangeswitch_404(8976, 800), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheelpiece_1720(5936, 384), 3);
    add_object(create_levelferriswheel1_1765(5936, 384), 3);
    add_object(create_levelferriswheel2_1766(5936, 384), 3);
    add_object(create_levelferriswheel3_1767(5936, 384), 3);
    add_object(create_levelferriswheel4_1768(5936, 384), 3);
    add_object(create_objectdiscoball_1955(5537, 440), 3);
    add_object(create_objectdiscoball_1955(5921, 360), 3);
    add_object(create_keyboard_1940(9648, 1240), 3);
    add_object(create_keyboard_1940(9600, 1240), 3);
    add_object(create_keyboard_1940(9552, 1240), 3);
    add_object(create_keyboard_1940(9504, 1240), 3);
    add_object(create_keyboard_1940(9456, 1240), 3);
    add_object(create_keyboard_1940(9408, 1240), 3);
    add_object(create_keyboard_1940(9360, 1240), 3);
    add_object(create_keyboard_1940(9312, 1240), 3);
    add_object(create_monitorcrate_409(8912, 1024), 3);
    add_object(create_levelmovingplatform2_1967(10032, 712), 3);
    add_object(create_levelmovingplatform2_1967(10144, 616), 3);
    add_object(create_gimmickclothesline_1970(1720, 692), 3);
    add_object(create_gimmickhanginglongsensor2_1741(2160, 700), 3);
    add_object(create_gimmickhanginglongsensor2_1741(1640, 700), 3);
    add_object(create_gimmickclothesline_1970(1792, 692), 3);
    add_object(create_gimmickclothesline_1970(1864, 692), 3);
    add_object(create_gimmickclothesline_1970(1936, 692), 3);
    add_object(create_gimmickclothesline_1970(2008, 692), 3);
    add_object(create_gimmickclothesline_1970(2080, 692), 3);
    add_object(create_gimmickclothesline_1970(2152, 692), 3);
    add_object(create_gimmickhanginglongsensor2_1741(4480, 892), 3);
    add_object(create_gimmickhanginglongsensor2_1741(3960, 892), 3);
    add_object(create_gimmickclothesline_1970(4040, 884), 3);
    add_object(create_gimmickclothesline_1970(4112, 884), 3);
    add_object(create_gimmickclothesline_1970(4184, 884), 3);
    add_object(create_gimmickclothesline_1970(4256, 884), 3);
    add_object(create_gimmickclothesline_1970(4328, 884), 3);
    add_object(create_gimmickclothesline_1970(4400, 884), 3);
    add_object(create_gimmickclothesline_1970(4472, 884), 3);
    add_object(create_gimmickhanginglongsensor2_1741(8800, 732), 3);
    add_object(create_gimmickhanginglongsensor2_1741(8280, 732), 3);
    add_object(create_gimmickclothesline_1970(8360, 724), 3);
    add_object(create_gimmickclothesline_1970(8432, 724), 3);
    add_object(create_gimmickclothesline_1970(8504, 724), 3);
    add_object(create_gimmickclothesline_1970(8576, 724), 3);
    add_object(create_gimmickclothesline_1970(8648, 724), 3);
    add_object(create_gimmickclothesline_1970(8720, 724), 3);
    add_object(create_gimmickclothesline_1970(8792, 724), 3);
    add_object(create_gimmickhanginglongsensor2_1741(9040, 492), 3);
    add_object(create_gimmickhanginglongsensor2_1741(8392, 492), 3);
    add_object(create_gimmickclothesline_1970(8672, 484), 3);
    add_object(create_gimmickclothesline_1970(8744, 484), 3);
    add_object(create_gimmickclothesline_1970(8816, 484), 3);
    add_object(create_gimmickclothesline_1970(8888, 484), 3);
    add_object(create_gimmickclothesline_1970(8960, 484), 3);
    add_object(create_gimmickclothesline_1970(9032, 484), 3);
    add_object(create_gimmickclothesline_1970(8472, 484), 3);
    add_object(create_gimmickclothesline_1970(8528, 484), 3);
    add_object(create_gimmickclothesline_1970(8600, 484), 3);
    add_object(create_gimmickhanginglongsensor2_1741(8952, 732), 3);
    add_object(create_gimmickclothesline_1970(9032, 724), 3);
    add_object(create_gimmickhanginglongsensor2_1741(9040, 732), 3);
    add_object(create_objectcrystal_279(9373, 186), 3);
    add_object(create_objectcrystal_279(9373, 146), 3);
    add_object(create_objectcrystal_279(9373, 106), 3);
    add_object(create_objectcrystal_279(9373, 66), 3);
    add_object(create_objectcrystal_279(9333, 186), 3);
    add_object(create_objectcrystal_279(9293, 186), 3);
    add_object(create_objectcrystal_279(9333, 146), 3);
    add_object(create_objectcrystal_279(9293, 146), 3);
    add_object(create_objectcrystal_279(9333, 106), 3);
    add_object(create_objectcrystal_279(9293, 106), 3);
    add_object(create_objectcrystal_279(9333, 66), 3);
    add_object(create_objectcrystal_279(9293, 66), 3);
    add_object(create_objectcrystal_279(9373, 226), 3);
    add_object(create_objectcrystal_279(9333, 226), 3);
    add_object(create_objectcrystal_279(9293, 226), 3);
    add_object(create_objectcrystal_279(9373, 266), 3);
    add_object(create_objectcrystal_279(9333, 266), 3);
    add_object(create_objectcrystal_279(9293, 266), 3);
    add_object(create_objectcrystal_279(9373, 306), 3);
    add_object(create_objectcrystal_279(9333, 306), 3);
    add_object(create_objectcrystal_279(9293, 306), 3);
    add_object(create_objectcrystal_279(9253, 186), 3);
    add_object(create_objectcrystal_279(9253, 146), 3);
    add_object(create_objectcrystal_279(9253, 106), 3);
    add_object(create_objectcrystal_279(9253, 66), 3);
    add_object(create_objectcrystal_279(9253, 226), 3);
    add_object(create_objectcrystal_279(9253, 266), 3);
    add_object(create_objectcrystal_279(9253, 306), 3);
    add_object(create_objectcrystal_279(9213, 186), 3);
    add_object(create_objectcrystal_279(9213, 146), 3);
    add_object(create_objectcrystal_279(9213, 106), 3);
    add_object(create_objectcrystal_279(9213, 66), 3);
    add_object(create_objectcrystal_279(9213, 226), 3);
    add_object(create_objectcrystal_279(9213, 266), 3);
    add_object(create_objectcrystal_279(9213, 306), 3);
    add_object(create_enemyghettoshell_1971(8303, 1040), 3);
    add_object(create_enemyghettoshell_1971(1007, 1040), 3);
    add_object(create_enemyghettoshell_1971(1263, 1232), 3);
    add_object(create_enemyghettoshell_1971(6559, 1136), 3);
    add_object(create_enemyghettoshell_1971(11279, 560), 3);
    add_object(create_objectfuel_528(7444, 1044), 3);
    add_object(create_monitorearthshield_326(496, 640), 3);
    add_object(create_gimmickhangingidleswitch_1257(6937, 384), 3);
    add_object(create_gachapondoor_1858(6856, 464), 3);
    add_object(create_levelmovingplatform2_1967(6320, 376), 3);
    add_object(create_levelmovingplatform2_1967(6528, 312), 3);
    add_object(create_levelmovingplatform2_1967(6856, 248), 3);
    add_object(create_levelmovingplatform2_1967(7072, 248), 3);
    add_object(create_objectpetal_302(6833, 201), 3);
    add_object(create_objectpetal_302(6881, 201), 3);
    add_object(create_objectpetal_302(7049, 201), 3);
    add_object(create_objectpetal_302(7097, 201), 3);
    add_object(create_objectjumppad_1510(7344, 208), 3);
    add_object(create_objectjumppad_1510(7200, 496), 3);
    add_object(create_gimmickairballoon_1972(10656, 896), 3);
    add_object(create_gimmickhangingidleballoon_1973(10657, 944), 3);
    add_object(create_monitorkeystone_562(11376, 1024), 3);
    add_object(create_gimmickairballoon_1972(10208, 1096), 3);
    add_object(create_gimmickhangingidleballoon_1973(10209, 1144), 3);
    add_object(create_arrowlight_1896(10744, 976), 3);
    add_object(create_arrowlight_1896(10744, 912), 3);
    add_object(create_arrowlight_1896(10744, 848), 3);
    add_object(create_arrowlight_1896(10744, 784), 3);
    add_object(create_arrowlight_1896(10744, 720), 3);
    add_object(create_arrowlight_1896(10744, 656), 3);
    add_object(create_yellowspringupleft_432(11072, 1048), 3);
    add_object(create_monitorcrate_409(240, 640), 3);
    add_object(create_monitorcrate_409(272, 640), 3);
    add_object(create_monitorinvincibility_408(176, 640), 3);
    add_object(create_monitorcrate_409(8880, 1024), 3);
    add_object(create_escalatorright_1966(644, 1184), 3);
    add_object(create_escalatorright_1966(676, 1152), 3);
    add_object(create_escalatorright_1966(708, 1120), 3);
    add_object(create_escalatorright_1966(740, 1088), 3);
    add_object(create_escalatorright_1966(772, 1056), 3);
    add_object(create_escalatorright_1966(612, 1216), 3);
    add_object(create_escalatorright_1966(1220, 992), 3);
    add_object(create_escalatorright_1966(1252, 960), 3);
    add_object(create_escalatorright_1966(1284, 928), 3);
    add_object(create_escalatorright_1966(1316, 896), 3);
    add_object(create_escalatorright_1966(1348, 864), 3);
    add_object(create_escalatorleft_1951(1444, 1184), 3);
    add_object(create_escalatorleft_1951(1412, 1152), 3);
    add_object(create_escalatorleft_1951(1380, 1120), 3);
    add_object(create_escalatorleft_1951(1348, 1088), 3);
    add_object(create_escalatorleft_1951(1316, 1056), 3);
    add_object(create_escalatorleft_1951(2468, 992), 3);
    add_object(create_escalatorleft_1951(2436, 960), 3);
    add_object(create_escalatorleft_1951(2404, 928), 3);
    add_object(create_escalatorleft_1951(2372, 896), 3);
    add_object(create_escalatorleft_1951(2340, 864), 3);
    add_object(create_escalatorright_1966(6884, 1088), 3);
    add_object(create_escalatorright_1966(6916, 1056), 3);
    add_object(create_escalatorright_1966(6948, 1024), 3);
    add_object(create_escalatorright_1966(6980, 992), 3);
    add_object(create_escalatorright_1966(7012, 960), 3);
    add_object(create_escalatorright_1966(7044, 928), 3);
    add_object(create_escalatorright_1966(7076, 896), 3);
    add_object(create_escalatorright_1966(7108, 864), 3);
    add_object(create_objecttaostone_532(5939, 1106), 3);
    add_object(create_enemycoilhead_1782(5936, 598), 3);
    add_object(create_savedata_28(-104, 16), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_escalatorback1_1911(592, 1216), 4);
    add_background_object(create_escalatorback1_1911(1168, 1024), 4);
    add_background_object(create_escalatorback4_1915(2480, 1024), 4);
    add_background_object(create_escalatorback2_1912(624, 1184), 4);
    add_background_object(create_escalatorback2_1912(656, 1152), 4);
    add_background_object(create_escalatorback2_1912(688, 1120), 4);
    add_background_object(create_escalatorback5_1916(2448, 992), 4);
    add_background_object(create_escalatorback2_1912(720, 1088), 4);
    add_background_object(create_escalatorback2_1912(752, 1056), 4);
    add_background_object(create_escalatorback2_1912(1328, 864), 4);
    add_background_object(create_escalatorback2_1912(1296, 896), 4);
    add_background_object(create_escalatorback2_1912(1264, 928), 4);
    add_background_object(create_escalatorback2_1912(1232, 960), 4);
    add_background_object(create_escalatorback2_1912(1200, 992), 4);
    add_background_object(create_escalatorback3_1914(784, 1032), 4);
    add_background_object(create_escalatorback3_1914(1360, 840), 4);
    add_background_object(create_escalatorback6_1917(2296, 840), 4);
    add_background_object(create_escalatorback5_1916(2416, 960), 4);
    add_background_object(create_escalatorback5_1916(2384, 928), 4);
    add_background_object(create_escalatorback5_1916(2352, 896), 4);
    add_background_object(create_escalatorback5_1916(2320, 864), 4);
    add_background_object(create_escalatorback4_1915(1456, 1216), 4);
    add_background_object(create_escalatorback5_1916(1424, 1184), 4);
    add_background_object(create_escalatorback6_1917(1272, 1032), 4);
    add_background_object(create_escalatorback5_1916(1392, 1152), 4);
    add_background_object(create_escalatorback5_1916(1360, 1120), 4);
    add_background_object(create_escalatorback5_1916(1328, 1088), 4);
    add_background_object(create_escalatorback5_1916(1296, 1056), 4);
    add_background_object(create_fnstonetreebase_1898(624, 1232), 4);
    add_background_object(create_birchtree_1846(608, 1104), 4);
    add_background_object(create_teetertotteraxle_824(8608, 984), 4);
    add_background_object(create_hamstertunnel2_1974(4848, 912), 4);
    add_background_object(create_hamstertunnel6_1975(5040, 912), 4);
    add_background_object(create_hamstertunnel5_1976(4912, 920), 4);
    add_background_object(create_hamstertunnel5_1976(4976, 920), 4);
    add_background_object(create_hamstertunnel7_1977(5048, 848), 4);
    add_background_object(create_hamstertunnel7_1977(5048, 784), 4);
    add_background_object(create_hamstertunnel2_1974(5744, 624), 4);
    add_background_object(create_hamstertunnel5_1976(5808, 632), 4);
    add_background_object(create_hamstertunnel2_1974(6064, 624), 4);
    add_background_object(create_hamstertunnel5_1976(6000, 632), 4);
    add_background_object(create_hamstertunnel5_1976(5872, 632), 4);
    add_background_object(create_hamstertunnel5_1976(5936, 632), 4);
    add_background_object(create_dragonslope1_1702(6208, 760), 4);
    add_background_object(create_dragonslope1_1702(6256, 808), 4);
    add_background_object(create_dragonslope1_1702(6304, 856), 4);
    add_background_object(create_hamstertunnel5_1976(6064, 1096), 4);
    add_background_object(create_hamstertunnel5_1976(6000, 1096), 4);
    add_background_object(create_escalatorback1_1911(6832, 1120), 4);
    add_background_object(create_escalatorback2_1912(6896, 1056), 4);
    add_background_object(create_escalatorback2_1912(6864, 1088), 4);
    add_background_object(create_escalatorback2_1912(7088, 864), 4);
    add_background_object(create_escalatorback2_1912(7056, 896), 4);
    add_background_object(create_escalatorback2_1912(7024, 928), 4);
    add_background_object(create_escalatorback2_1912(6992, 960), 4);
    add_background_object(create_escalatorback2_1912(6960, 992), 4);
    add_background_object(create_escalatorback2_1912(6928, 1024), 4);
    add_background_object(create_escalatorback3_1914(7120, 840), 4);
    add_background_object(create_hamstertunnel6_1975(7088, 1088), 4);
    add_background_object(create_hamstertunnel5_1976(7024, 1096), 4);
    add_background_object(create_hamstertunnel7_1977(7096, 1024), 4);
    add_background_object(create_mallfloor3_1890(4848, 976), 4);
    add_background_object(create_mallfloor3_1890(4976, 976), 4);
    add_background_object(create_knightstatue_1978(6384, 472), 4);
    add_background_object(create_knightstatue_1978(7776, 792), 4);
    add_background_object(create_mallfloor1_1891(8816, 768), 4);
    add_background_object(create_mallfloor1_1891(8816, 672), 4);
    add_background_object(create_mallfloor6_1920(8816, 816), 4);
    add_background_object(create_mallfloor6_1920(8816, 768), 4);
    add_background_object(create_mallfloor6_1920(8816, 720), 4);
    add_background_object(create_mallfloor6_1920(8816, 672), 4);
    add_background_object(create_mallfloor6_1920(8928, 816), 4);
    add_background_object(create_mallfloor6_1920(8928, 768), 4);
    add_background_object(create_mallfloor6_1920(8928, 720), 4);
    add_background_object(create_mallfloor6_1920(8928, 672), 4);
    add_background_object(create_mallfloor3_1890(11104, 1008), 4);
    add_background_object(create_mallfloor1_1891(11104, 912), 4);
    add_background_object(create_mallfloor6_1920(11104, 912), 4);
    add_background_object(create_mallfloor6_1920(11216, 912), 4);
    add_background_object(create_mallfloor6_1920(11104, 960), 4);
    add_background_object(create_mallfloor6_1920(11216, 960), 4);
    add_background_object(create_mallfloor1_1891(11120, 1056), 4);
    add_background_object(create_mallfloor6_1920(11104, 1008), 4);
    add_background_object(create_mallfloor6_1920(11216, 1008), 4);
    add_background_object(create_mallfloor1_1891(11104, 816), 4);
    add_background_object(create_mallfloor6_1920(11104, 816), 4);
    add_background_object(create_mallfloor6_1920(11216, 816), 4);
    add_background_object(create_mallfloor6_1920(11104, 864), 4);
    add_background_object(create_mallfloor6_1920(11216, 864), 4);
    add_background_object(create_mallfloor1_1891(11104, 720), 4);
    add_background_object(create_mallfloor6_1920(11104, 720), 4);
    add_background_object(create_mallfloor6_1920(11216, 720), 4);
    add_background_object(create_mallfloor6_1920(11104, 768), 4);
    add_background_object(create_mallfloor6_1920(11216, 768), 4);
    add_background_object(create_mallfloor1_1891(11104, 624), 4);
    add_background_object(create_mallfloor6_1920(11104, 624), 4);
    add_background_object(create_mallfloor6_1920(11216, 624), 4);
    add_background_object(create_mallfloor6_1920(11104, 672), 4);
    add_background_object(create_mallfloor6_1920(11216, 672), 4);
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
    add_object(create_playerskinmillatail_381(-83, 273), 5);
    add_object(create_playerskincarolbike_382(-112, 264), 5);
    add_object(create_playerskinmilla_446(-83, 273), 5);
    add_object(create_playerskincaroltail_444(-112, 273), 5);
    add_object(create_playerskincarol_445(-108, 273), 5);
    add_object(create_playerskinspade_419(-130, 273), 5);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(7232, -113), 5);
    add_object(create_cameralimitbossleft_421(7032, -248), 5);
    add_object(create_cameralimitbossright_422(7383, -248), 5);
    add_object(create_cameralimitbosstop_423(7216, -368), 5);
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
    add_object(create_layerchangeswitch2_1239(-328, -8), 5);
    add_object(create_objectbike_322(-216, 320), 5);
    add_object(create_playerreflect_447(-64, 232), 5);
    add_object(create_playerdig_448(-56, 242), 5);
    add_object(create_enemylimiter_350(2389, 850), 5);
    add_object(create_playerskintorquearm_449(-88, 224), 5);
    add_object(create_playerskintorque_450(-68, 273), 5);
    add_object(create_functionmusic_231(-152, -88), 5);
    add_object(create_queuemusic_232(-112, -88), 5);
    add_object(create_mapdata_30(-432, 232), 5);
    add_object(create_windowcontrol_27(-432, 200), 5);
    add_object(create_recorddata_34(-432, 248), 5);
    add_object(create_guiicon_452(135, 12), 6);
    add_object(create_guiscoretimerings_451(8, 8), 6);
    add_object(create_guikeystone_455(304, -96), 6);
    add_object(create_guienergy_124(16, 10), 6);
    add_object(create_guitimermilli_360(309, 19), 6);
    add_object(create_guicrystal_121(206, 19), 6);
    add_object(create_guitimermilli2_361(299, 19), 6);
    add_object(create_guitimers_362(283, 19), 6);
    add_object(create_guitimers2_363(273, 19), 6);
    add_object(create_guitimerm_364(257, 19), 6);
    add_object(create_guitimerm2_365(247, 19), 6);
    add_object(create_guirings_122(8, 19), 6);
    add_object(create_guilives_454(164, 19), 6);
    add_object(create_guipause_453(0, 101), 6);
    add_object(create_guikeystone_455(288, -96), 6);
    add_object(create_guikeystone_455(272, -96), 6);
    add_object(create_guikeystone_455(256, -96), 6);
    add_object(create_guikeystone_455(240, -96), 6);
    add_object(create_crystal_456(-53, 141), 6);
    add_object(create_guipowercard_457(91, 7), 6);
    add_object(create_guipowercard_457(75, 7), 6);
    add_object(create_guipowercard_457(59, 7), 6);
    add_object(create_guipowercard_457(43, 7), 6);
    add_object(create_guipowercard_457(27, 7), 6);
    add_object(create_guitimer_564(216, 0), 6);
    add_object(create_timebonustotal_460(-256, -72), 7);
    add_object(create_levelcardfade_461(0, 0), 7);
    add_object(create_levelcardfade2_24(-328, -336), 7);
    add_object(create_levelcardintro1_464(16, -240), 7);
    add_object(create_levelcardintro2_761(0, 248), 7);
    add_object(create_levelcardintro3_760(0, 248), 7);
    add_object(create_levelcardgameover_462(0, 256), 7);
    add_object(create_guilifebasemeter_125(0, 0), 7);
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
    loop_iterate_pushables_running = false;
    loop_iterate_pushables_index = 0;
    loop_death_running = false;
    loop_death_index = 0;
    loop_lamp_running = false;
    loop_lamp_index = 0;
    loop_cutscene_end_running = false;
    loop_cutscene_end_index = 0;
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
    loop_p3_running = false;
    loop_p3_index = 0;
    loop_rise_running = false;
    loop_rise_index = 0;
    loop_p0_running = false;
    loop_p0_index = 0;
    loop_play_music_3_running = false;
    loop_play_music_3_index = 0;
    loop_p6_running = false;
    loop_p6_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_p7_running = false;
    loop_p7_index = 0;
    loop_p4_running = false;
    loop_p4_index = 0;
    loop_p5_running = false;
    loop_p5_index = 0;
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
    loop_sink_running = false;
    loop_sink_index = 0;
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
    loop_p2_running = false;
    loop_p2_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
    loop_player01detectsensortop_running = false;
    loop_player01detectsensortop_index = 0;
    loop_sound_explode1_running = false;
    loop_sound_explode1_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
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
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
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
    loop_p1_running = false;
    loop_p1_index = 0;
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
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_32, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_32, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_32, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_32, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_32, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_32, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_32, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_32, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_32, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_32, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("cp", 2)].set(&loop_wrapper_cp_32, &loop_cp_running, &loop_cp_index);
        frame_loops[std::string("Player01_Interruption_Action", 28)].set(&loop_wrapper_player01_interruption_action_32, &loop_player01_interruption_action_running, &loop_player01_interruption_action_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_32, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_32, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("iterate.pushables", 17)].set(&loop_wrapper_iterate_pushables_32, &loop_iterate_pushables_running, &loop_iterate_pushables_index);
        frame_loops[std::string("Player01DetectAngle", 19)].set(&loop_wrapper_player01detectangle_32, &loop_player01detectangle_running, &loop_player01detectangle_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_32, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_32, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_32, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_32, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_32, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_32, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_32, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_32, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("Player01SlopesDown", 18)].set(&loop_wrapper_player01slopesdown_32, &loop_player01slopesdown_running, &loop_player01slopesdown_index);
        frame_loops[std::string("Player01AllSensors", 18)].set(&loop_wrapper_player01allsensors_32, &loop_player01allsensors_running, &loop_player01allsensors_index);
        frame_loops[std::string("import.deadzones", 16)].set(&loop_wrapper_import_deadzones_32, &loop_import_deadzones_running, &loop_import_deadzones_index);
        frame_loops[std::string("sound_stoppush", 14)].set(&loop_wrapper_sound_stoppush_32, &loop_sound_stoppush_running, &loop_sound_stoppush_index);
        frame_loops[std::string("stop_voices", 11)].set(&loop_wrapper_stop_voices_32, &loop_stop_voices_running, &loop_stop_voices_index);
        frame_loops[std::string("Rings_RingLoss_Step", 19)].set(&loop_wrapper_rings_ringloss_step_32, &loop_rings_ringloss_step_running, &loop_rings_ringloss_step_index);
        frame_loops[std::string("p3", 2)].set(&loop_wrapper_p3_32, &loop_p3_running, &loop_p3_index);
        frame_loops[std::string("sound_pounce", 12)].set(&loop_wrapper_sound_pounce_32, &loop_sound_pounce_running, &loop_sound_pounce_index);
        frame_loops[std::string("p0", 2)].set(&loop_wrapper_p0_32, &loop_p0_running, &loop_p0_index);
        frame_loops[std::string("Player01DetectSensorMain", 24)].set(&loop_wrapper_player01detectsensormain_32, &loop_player01detectsensormain_running, &loop_player01detectsensormain_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_32, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_32, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_32, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_32, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("sound_jump", 10)].set(&loop_wrapper_sound_jump_32, &loop_sound_jump_running, &loop_sound_jump_index);
        frame_loops[std::string("p6", 2)].set(&loop_wrapper_p6_32, &loop_p6_running, &loop_p6_index);
        frame_loops[std::string("p7", 2)].set(&loop_wrapper_p7_32, &loop_p7_running, &loop_p7_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_32, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_32, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_32, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("p1", 2)].set(&loop_wrapper_p1_32, &loop_p1_running, &loop_p1_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_32, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_32, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_32, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("p5", 2)].set(&loop_wrapper_p5_32, &loop_p5_running, &loop_p5_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_32, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_32, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("Player01DetectSensorAngles", 26)].set(&loop_wrapper_player01detectsensorangles_32, &loop_player01detectsensorangles_running, &loop_player01detectsensorangles_index);
        frame_loops[std::string("GUI_shiftup", 11)].set(&loop_wrapper_gui_shiftup_32, &loop_gui_shiftup_running, &loop_gui_shiftup_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_32, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_32, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("Player01_Interruption_Control", 29)].set(&loop_wrapper_player01_interruption_control_32, &loop_player01_interruption_control_running, &loop_player01_interruption_control_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_32, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("Player01Up", 10)].set(&loop_wrapper_player01up_32, &loop_player01up_running, &loop_player01up_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_32, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_32, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_32, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_32, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("spawn.crystals", 14)].set(&loop_wrapper_spawn_crystals_32, &loop_spawn_crystals_running, &loop_spawn_crystals_index);
        frame_loops[std::string("SpawnDebris", 11)].set(&loop_wrapper_spawndebris_32, &loop_spawndebris_running, &loop_spawndebris_index);
        frame_loops[std::string("Player01DetectSensorSlope", 25)].set(&loop_wrapper_player01detectsensorslope_32, &loop_player01detectsensorslope_running, &loop_player01detectsensorslope_index);
        frame_loops[std::string("start_player", 12)].set(&loop_wrapper_start_player_32, &loop_start_player_running, &loop_start_player_index);
        frame_loops[std::string("sound_help", 10)].set(&loop_wrapper_sound_help_32, &loop_sound_help_running, &loop_sound_help_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_32, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("petal_loss", 10)].set(&loop_wrapper_petal_loss_32, &loop_petal_loss_running, &loop_petal_loss_index);
        frame_loops[std::string("Player01Down", 12)].set(&loop_wrapper_player01down_32, &loop_player01down_running, &loop_player01down_index);
        frame_loops[std::string("spawn.rings", 11)].set(&loop_wrapper_spawn_rings_32, &loop_spawn_rings_running, &loop_spawn_rings_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_32, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("Player01SlopesUp", 16)].set(&loop_wrapper_player01slopesup_32, &loop_player01slopesup_running, &loop_player01slopesup_index);
        frame_loops[std::string("lamp", 4)].set(&loop_wrapper_lamp_32, &loop_lamp_running, &loop_lamp_index);
        frame_loops[std::string("Player01DetectSensorEdges", 25)].set(&loop_wrapper_player01detectsensoredges_32, &loop_player01detectsensoredges_running, &loop_player01detectsensoredges_index);
        frame_loops[std::string("Player01DetectSensorBottom", 26)].set(&loop_wrapper_player01detectsensorbottom_32, &loop_player01detectsensorbottom_running, &loop_player01detectsensorbottom_index);
        frame_loops[std::string("Player01DetectSensorLeft", 24)].set(&loop_wrapper_player01detectsensorleft_32, &loop_player01detectsensorleft_running, &loop_player01detectsensorleft_index);
        frame_loops[std::string("iterate.query.ME.stop", 21)].set(&loop_wrapper_iterate_query_me_stop_32, &loop_iterate_query_me_stop_running, &loop_iterate_query_me_stop_index);
        frame_loops[std::string("Plaftorms_UpdatePosition", 24)].set(&loop_wrapper_plaftorms_updateposition_32, &loop_plaftorms_updateposition_running, &loop_plaftorms_updateposition_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_32, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("record.inputs", 13)].set(&loop_wrapper_record_inputs_32, &loop_record_inputs_running, &loop_record_inputs_index);
        frame_loops[std::string("stop_player", 11)].set(&loop_wrapper_stop_player_32, &loop_stop_player_running, &loop_stop_player_index);
        frame_loops[std::string("reposition.skin", 15)].set(&loop_wrapper_reposition_skin_32, &loop_reposition_skin_running, &loop_reposition_skin_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_32, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_32, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_32, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_32, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_32, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_32, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_32, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_32, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("weapon", 6)].set(&loop_wrapper_weapon_32, &loop_weapon_running, &loop_weapon_index);
        frame_loops[std::string("Player01WallCollision", 21)].set(&loop_wrapper_player01wallcollision_32, &loop_player01wallcollision_running, &loop_player01wallcollision_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_32, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("Player01DetectCharacterSensor", 29)].set(&loop_wrapper_player01detectcharactersensor_32, &loop_player01detectcharactersensor_running, &loop_player01detectcharactersensor_index);
        frame_loops[std::string("p2", 2)].set(&loop_wrapper_p2_32, &loop_p2_running, &loop_p2_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_32, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("Player01DetectSensorRight", 25)].set(&loop_wrapper_player01detectsensorright_32, &loop_player01detectsensorright_running, &loop_player01detectsensorright_index);
        frame_loops[std::string("p4", 2)].set(&loop_wrapper_p4_32, &loop_p4_running, &loop_p4_index);
        frame_loops[std::string("Player01DetectSensorTop", 23)].set(&loop_wrapper_player01detectsensortop_32, &loop_player01detectsensortop_running, &loop_player01detectsensortop_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_32, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_32, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_46_ladder_1 = false;
    not_always_1388_13 = loop_count;
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
    not_always_1457_13 = loop_count;
    not_always_150_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_1 = true;
    not_always_1425_13 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    not_always_1104_13 = loop_count;
    not_always_1448_13 = loop_count;
    group_main_engine_global_methods_player_player_movement_1 = true;
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
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_09_die_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_26_dragon_cyclone_1 = false;
    not_always_100_0 = loop_count;
    once_condition_1580_32 = false;
    not_always_43_13 = loop_count;
    not_always_1420_13 = loop_count;
    not_always_121_0 = loop_count;
    not_always_1570_13 = loop_count;
    not_always_40_13 = loop_count;
    not_always_1033_13 = loop_count;
    once_condition_1828_16 = false;
    not_always_1422_13 = loop_count;
    not_always_600_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
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
    not_always_1424_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    not_always_1449_32 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    not_always_98_0 = loop_count;
    not_always_1729_32 = loop_count;
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
    not_always_1455_13 = loop_count;
    not_always_1295_13 = loop_count;
    not_always_522_13 = loop_count;
    once_condition_64_13 = false;
    group_main_engine_global_methods_player_player_control_control_1 = true;
    not_always_1148_14 = loop_count;
    once_condition_57_14 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_actions_37_torque_s_form_switch_1 = false;
    once_condition_38_13 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_20_hair_whip_1 = false;
    not_always_1034_13 = loop_count;
    not_always_1458_13 = loop_count;
    not_always_558_13 = loop_count;
    group_sound_events_torque_1 = false;
    not_always_51_13 = loop_count;
    not_always_175_8 = loop_count;
    once_condition_538_13 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_25_pull_up_from_ladder_1 = false;
    group_debug_mode_debugging_1 = false;
    once_condition_1579_32 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_08_hurt_1 = false;
    group_main_engine_global_methods_common_objects_shields_4_water_shield_1 = false;
    not_always_45_13 = loop_count;
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
    not_always_101_0 = loop_count;
    once_condition_47_13 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_28_wild_slash_unused_1 = false;
    not_always_1532_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1417_32 = loop_count;
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
    not_always_172_8 = loop_count;
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
    not_always_1405_21 = loop_count;
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
    not_always_236_13 = loop_count;
    group_debug_mode_1 = false;
    not_always_1469_32 = loop_count;
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
    not_always_1444_32 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_42_dual_crash_1 = false;
    not_always_67_13 = loop_count;
    group_main_engine_global_methods_player_1 = true;
    once_condition_65_13 = false;
    not_always_59_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_wrapper_sound_explode0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_kick1_33(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_33(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_33(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_33(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_sound_explode2_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_idle7_33(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_33(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_camera_mode0_33(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_cp_33(void * frame)
{
    ((Frames*)frame)->loop_cp_16();
}
void Frames::loop_wrapper_player01_interruption_action_33(void * frame)
{
    ((Frames*)frame)->loop_player01_interruption_action_13();
}
void Frames::loop_wrapper_process_call_play_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
void Frames::loop_wrapper_play_music_3_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_3_13();
}
void Frames::loop_wrapper_iterate_pushables_33(void * frame)
{
    ((Frames*)frame)->loop_iterate_pushables_13();
}
void Frames::loop_wrapper_player01detectangle_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectangle_13();
}
void Frames::loop_wrapper_sound_hurt2_33(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_33(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_hurt1_33(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_explode7_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_sound_explode5_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_33(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_player01slopesdown_33(void * frame)
{
    ((Frames*)frame)->loop_player01slopesdown_13();
}
void Frames::loop_wrapper_player01allsensors_33(void * frame)
{
    ((Frames*)frame)->loop_player01allsensors_13();
}
void Frames::loop_wrapper_import_deadzones_33(void * frame)
{
    ((Frames*)frame)->loop_import_deadzones_0();
}
void Frames::loop_wrapper_sound_stoppush_33(void * frame)
{
    ((Frames*)frame)->loop_sound_stoppush_0();
}
void Frames::loop_wrapper_stop_voices_33(void * frame)
{
    ((Frames*)frame)->loop_stop_voices_8();
}
void Frames::loop_wrapper_rings_ringloss_step_33(void * frame)
{
    ((Frames*)frame)->loop_rings_ringloss_step_13();
}
void Frames::loop_wrapper_p3_33(void * frame)
{
    ((Frames*)frame)->loop_p3_32();
}
void Frames::loop_wrapper_sound_pounce_33(void * frame)
{
    ((Frames*)frame)->loop_sound_pounce_13();
}
void Frames::loop_wrapper_p0_33(void * frame)
{
    ((Frames*)frame)->loop_p0_32();
}
void Frames::loop_wrapper_player01detectsensormain_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensormain_13();
}
void Frames::loop_wrapper_sound_attack1_33(void * frame)
{
    ((Frames*)frame)->loop_sound_attack1_8();
}
void Frames::loop_wrapper_sound_attack0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_attack0_8();
}
void Frames::loop_wrapper_sound_attack3_33(void * frame)
{
    ((Frames*)frame)->loop_sound_attack3_0();
}
void Frames::loop_wrapper_sound_attack2_33(void * frame)
{
    ((Frames*)frame)->loop_sound_attack2_0();
}
void Frames::loop_wrapper_sound_jump_33(void * frame)
{
    ((Frames*)frame)->loop_sound_jump_13();
}
void Frames::loop_wrapper_p6_33(void * frame)
{
    ((Frames*)frame)->loop_p6_32();
}
void Frames::loop_wrapper_p7_33(void * frame)
{
    ((Frames*)frame)->loop_p7_32();
}
void Frames::loop_wrapper_play_music_0_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_0_13();
}
void Frames::loop_wrapper_play_music_1_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_1_13();
}
void Frames::loop_wrapper_play_music_2_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_2_13();
}
void Frames::loop_wrapper_p1_33(void * frame)
{
    ((Frames*)frame)->loop_p1_32();
}
void Frames::loop_wrapper_play_music_4_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_4_23();
}
void Frames::loop_wrapper_play_music_5_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_32();
}
void Frames::loop_wrapper_play_music_6_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_32();
}
void Frames::loop_wrapper_p5_33(void * frame)
{
    ((Frames*)frame)->loop_p5_32();
}
void Frames::loop_wrapper_play_music_8_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_8_13();
}
void Frames::loop_wrapper_process_call_me_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_me_13();
}
void Frames::loop_wrapper_player01detectsensorangles_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorangles_13();
}
void Frames::loop_wrapper_gui_shiftup_33(void * frame)
{
    ((Frames*)frame)->loop_gui_shiftup_14();
}
void Frames::loop_wrapper_process_call_unqueue_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_unqueue_music_13();
}
void Frames::loop_wrapper_play_music_7_33(void * frame)
{
    ((Frames*)frame)->loop_play_music_5_32();
}
void Frames::loop_wrapper_player01_interruption_control_33(void * frame)
{
    ((Frames*)frame)->loop_player01_interruption_control_32();
}
void Frames::loop_wrapper_process_call_unlock_music_33(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_player01up_33(void * frame)
{
    ((Frames*)frame)->loop_player01up_13();
}
void Frames::loop_wrapper_sound_dig2_33(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_33(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_33(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_33(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_spawn_crystals_33(void * frame)
{
    ((Frames*)frame)->loop_spawn_crystals_13();
}
void Frames::loop_wrapper_spawndebris_33(void * frame)
{
    ((Frames*)frame)->loop_spawndebris_32();
}
void Frames::loop_wrapper_player01detectsensorslope_33(void * frame)
{
    ((Frames*)frame)->loop_player01detectsensorslope_13();
}
void Frames::loop_wrapper_start_player_33(void * frame)
{
    ((Frames*)frame)->loop_start_player_13();
}
void Frames::loop_wrapper_sound_help_33(void * frame)
{
    ((Frames*)frame)->loop_sound_help_0();
}
