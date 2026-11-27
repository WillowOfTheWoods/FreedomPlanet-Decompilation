#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19521()
{
    // event 1868_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1868_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
            ((Active*)*it)->force_direction(0);
        }
    }
    event_1868_83_end: ;
}
void Frames::event_func_19522()
{
    // event 1869_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1869_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index));
            if (parent == NULL) goto pos_end_1869_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1869_83_0: ;
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(3));
            ((Active*)*it)->alterables->values.set(1, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(2, ((Active*)get_instance(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(7));
        }
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.add(6, ((Active*)*it)->alterables->values.get(8));
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(6));
        }
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_single(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(9));
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_single(enemyelitemask_2511_instances, it.current_index, default_active_instance))->alterables->values.get(2));
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(get_max(0, ((Active*)*it)->alterables->values.get(5)), width));
        }
    }
    event_1869_83_end: ;
}
void Frames::event_func_19523()
{
    // event 1870_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1870_83_end;
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (6))) { it.deselect(); continue; }
        }
        if (!enemyelite_2510_instances.has_selection()) goto event_1870_83_end;
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1870_83_end: ;
}
void Frames::event_func_19524()
{
    // event 1871_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1871_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) == (6))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(11))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1871_83_end;
        media.play_id(SOUND_ENEMY_BOTKILL_2_29, -1, 1);
        FrameObject * single_instance_1871_83_0; single_instance_1871_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectshade_356(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1871_83_0 == NULL)
                    single_instance_1871_83_0 = new_obj;
            }
        }
        FrameObject * single_instance_1871_83_1; single_instance_1871_83_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitemask_2511_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion01_309(parent->x + 0, parent->y + -20), parent->layer);
                if (single_instance_1871_83_1 == NULL)
                    single_instance_1871_83_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, -5);
            ((Active*)*it)->alterables->flags.enable(11);
        }
        {
            loop_spawndebris_running = true;
            int times = int(5);
            loop_spawndebris_index = 0;
            while (loop_spawndebris_index < times) {
                loop_spawndebris_83();
                if (!loop_spawndebris_running) break;
                loop_spawndebris_index++;
            }
        }
    }
    event_1871_83_end: ;
}
void Frames::event_func_19525()
{
    // event 1873_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1873_83_end;
        enemyelitemask_2511_instances.clear_selection();
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (-1))) { it.deselect(); continue; }
        }
        if (!enemyelitemask_2511_instances.has_selection()) goto event_1873_83_end;
        for (ObjectIterator it(enemyelitemask_2511_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1873_83_end: ;
}
void Frames::event_func_19526()
{
    // event 1874_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1874_83_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1874_83_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
        }
        media.play_id(SOUND_COMMON_CHARGE1_191, -1, 1);
    }
    event_1874_83_end: ;
}
void Frames::event_func_19527()
{
    // event 1875_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1875_83_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1875_83_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_scale(get_max(1.0-((Active*)*it)->alterables->values.get(0)*0.04, 0.1));
        }
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(0)*5, 0));
        }
    }
    event_1875_83_end: ;
}
void Frames::event_func_19528()
{
    // event 1876_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1876_83_end;
        enemyelitechargeglow_2507_instances.clear_selection();
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (25))) { it.deselect(); continue; }
        }
        if (!enemyelitechargeglow_2507_instances.has_selection()) goto event_1876_83_end;
        for (ObjectIterator it(enemyelitechargeglow_2507_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1876_83_end: ;
}
void Frames::event_func_19529()
{
    // event 1877_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1877_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1877_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
    }
    event_1877_83_end: ;
}
void Frames::event_func_19530()
{
    // event 1878_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1878_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1878_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->alterables->values.add(2, cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(3, sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_angle(atan2_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0), 0-cos_deg(((Active*)*it)->alterables->values.get(1))*((Active*)*it)->alterables->values.get(0))+180, 0);
            ((Active*)*it)->alterables->values.add(4, 1);
        }
    }
    event_1878_83_end: ;
}
void Frames::event_func_19531()
{
    // event 1879_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1879_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1879_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1879_83_0; single_instance_1879_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1879_83_0 == NULL)
                    single_instance_1879_83_0 = new_obj;
            }
        }
    }
    event_1879_83_end: ;
}
void Frames::event_func_19532()
{
    // event 1880_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1880_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) > (300))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1880_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1880_83_0; single_instance_1880_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1880_83_0 == NULL)
                    single_instance_1880_83_0 = new_obj;
            }
        }
    }
    event_1880_83_end: ;
}
void Frames::event_func_19533()
{
    // event 1882_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1882_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, qualifier_20)) goto event_1882_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1882_83_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1882_83_end;
        FrameObject * single_instance_1882_83_0; single_instance_1882_83_0 = pick_random(qualifier_20);
        if (single_instance_1882_83_0 == NULL) goto event_1882_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1882_83_1; single_instance_1882_83_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1882_83_1 == NULL)
                    single_instance_1882_83_1 = new_obj;
            }
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        ((Active*)((Active*)single_instance_1882_83_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1882_83_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1882_83_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1882_83_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1882_83_0)->set_shader(Render::INVERT);
        }
    }
    event_1882_83_end: ;
}
void Frames::event_func_19534()
{
    // event 1883_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1883_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1883_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1883_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1883_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(12)) != (9))) goto event_1883_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1883_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1883_83_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 10);
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1883_83_0; single_instance_1883_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1883_83_0 == NULL)
                    single_instance_1883_83_0 = new_obj;
            }
        }
    }
    event_1883_83_end: ;
}
void Frames::event_func_19535()
{
    // event 1884_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_shade_elite_1)) goto event_1884_83_end;
        enemytrooperlaser_2508_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(enemytrooperlaser_2508_instances, playercharactersensor_383_instances)) goto event_1884_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(2))) { it.deselect(); continue; }
        }
        if (!enemytrooperlaser_2508_instances.has_selection()) goto event_1884_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1884_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(3)) == (2))) goto event_1884_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) > (0))) goto event_1884_83_end;
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1884_83_0; single_instance_1884_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemytrooperlaser_2508_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1884_83_0 == NULL)
                    single_instance_1884_83_0 = new_obj;
            }
        }
    }
    event_1884_83_end: ;
}
void Frames::event_func_19536()
{
    // event 1886_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1886_83_end;
        enemyelitespawnerwave_3336_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
            ((Active*)*it)->alterables->values.add(0, 1);
        }
    }
    event_1886_83_end: ;
}
void Frames::event_func_19537()
{
    // event 1887_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1887_83_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(brevonmechtorso_2543_instances, default_active_instance))->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1887_83_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_TELEPORT_START_347, -1, 1);
    }
    event_1887_83_end: ;
}
void Frames::event_func_19538()
{
    // event 1888_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1888_83_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1888_83_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(get_min(((Active*)*it)->get_y()+20, ((Active*)*it)->alterables->values.get(0)));
        }
        {
            SavedSelection extra_enemyelitespawner_3345_instances(enemyelitespawner_3345_instances);
            for (SavedIterator it(extra_enemyelitespawner_3345_instances); !it.end(); ++it) {
                foreach_instance_esp = ((Active*)*it);
                foreach_esp_83();
            }
        }
    }
    event_1888_83_end: ;
}
void Frames::event_func_19539()
{
    // event 1890_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1890_83_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(0)))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1890_83_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.play_id(SOUND_TELEPORT_END_348, -1, 1);
        FrameObject * single_instance_1890_83_0; single_instance_1890_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitespawnerwave_3336(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1890_83_0 == NULL)
                    single_instance_1890_83_0 = new_obj;
            }
        }
    }
    event_1890_83_end: ;
}
void Frames::event_func_19540()
{
    // event 1891_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1891_83_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1891_83_end;
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_animation(8);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(1)/math_helper/6);
        }
    }
    event_1891_83_end: ;
}
void Frames::event_func_19541()
{
    // event 1892_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1892_83_end;
        enemyelitespawner_3345_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (30))) { it.deselect(); continue; }
        }
        if (!enemyelitespawner_3345_instances.has_selection()) goto event_1892_83_end;
        FrameObject * single_instance_1892_83_0; single_instance_1892_83_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelitemask_2511(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1892_83_0 == NULL)
                    single_instance_1892_83_0 = new_obj;
            }
        }
        FrameObject * single_instance_1892_83_1; single_instance_1892_83_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyelitespawner_3345_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyelite_2510(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1892_83_1 == NULL)
                    single_instance_1892_83_1 = new_obj;
            }
        }
        for (ObjectIterator it(enemyelitespawner_3345_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)((Active*)single_instance_1892_83_0))->alterables->values.set(5, ((Active*)single_instance_1892_83_0)->get_x());
        ((Active*)((Active*)single_instance_1892_83_0))->alterables->values.set(6, ((Active*)single_instance_1892_83_0)->get_y());
        ((Active*)((Active*)single_instance_1892_83_0))->alterables->flags.enable(16);
        ((Active*)((Active*)single_instance_1892_83_0))->alterables->values.add(0, 10);
    }
    event_1892_83_end: ;
}
void Frames::event_func_19542()
{
    // event 1893_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1893_83_end;
        enemyelitespawnerwave_3336_instances.clear_selection();
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (15))) { it.deselect(); continue; }
        }
        if (!enemyelitespawnerwave_3336_instances.has_selection()) goto event_1893_83_end;
        for (ObjectIterator it(enemyelitespawnerwave_3336_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1893_83_end: ;
}
void Frames::event_func_19543()
{
    // event 1895_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1895_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
            ((Active*)*it)->alterables->values.add(5, ((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->alterables->values.set(0, 99);
        }
    }
    event_1895_83_end: ;
}
void Frames::event_func_19544()
{
    // event 1896_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1896_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5)+sin_deg(((Active*)*it)->alterables->values.get(8))*((Active*)*it)->alterables->values.get(11));
        }
        bosschopperblade_2218_instances.clear_selection();
        for (ObjectIterator it(bosschopperblade_2218_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances, it.current_index));
            if (parent == NULL) goto pos_end_1896_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1896_83_0: ;
        }
        for (ObjectIterator it(bosschopperblade_2218_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
        }
        bosschoppertailblade_2217_instances.clear_selection();
        for (ObjectIterator it(bosschoppertailblade_2217_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
        }
        bosschoppertailblade2_2214_instances.clear_selection();
        for (ObjectIterator it(bosschoppertailblade2_2214_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1896_83_end: ;
}
void Frames::event_func_19545()
{
    // event 1897_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1897_83_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1897_83_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_x()+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_y()+((Active*)*it)->alterables->values.get(2)-sin_deg(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(8))*((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(11)+sin_deg(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(8)-20-((Active*)*it)->alterables->values.get(0)*20)*((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(11));
            ((Active*)*it)->set_direction(((Active*)get_instance(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
        }
    }
    event_1897_83_end: ;
}
void Frames::event_func_19546()
{
    // event 1898_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1898_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->alterables->values.get(10), 0);
        }
        bosschopperblade_2218_instances.clear_selection();
        for (ObjectIterator it(bosschopperblade_2218_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
        }
    }
    event_1898_83_end: ;
}
void Frames::event_func_19547()
{
    // event 1899_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1899_83_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1899_83_end;
        bosschoppertailblade_2217_instances.clear_selection();
        for (ObjectIterator it(bosschoppertailblade_2217_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosschoppertail_2215_instances, it.current_index));
            if (parent == NULL) goto pos_end_1899_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1899_83_0: ;
        }
        bosschoppertailblade2_2214_instances.clear_selection();
        for (ObjectIterator it(bosschoppertailblade2_2214_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosschoppertail_2215_instances, it.current_index));
            if (parent == NULL) goto pos_end_1899_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1899_83_1: ;
        }
    }
    event_1899_83_end: ;
}
void Frames::event_func_19548()
{
    // event 1900_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1900_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1900_83_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1900_83_end: ;
}
void Frames::event_func_19549()
{
    // event 1901_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1901_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1901_83_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1901_83_end: ;
}
void Frames::event_func_19550()
{
    // event 1902_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1902_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) != (6))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1902_83_end;
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(8, (((Active*)*it)->alterables->values.get(8)+6)%math_helper%360);
        }
        bosschopperbars_2212_instances.clear_selection();
        for (ObjectIterator it(bosschopperbars_2212_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances, it.current_index));
            if (parent == NULL) goto pos_end_1902_83_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1902_83_0: ;
        }
        for (ObjectIterator it(bosschopperbars_2212_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_angle(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
        }
        bosschopperbars2_2213_instances.clear_selection();
        for (ObjectIterator it(bosschopperbars2_2213_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(bosschopper_2216_instances, it.current_index));
            if (parent == NULL) goto pos_end_1902_83_1;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1902_83_1: ;
        }
        for (ObjectIterator it(bosschopperbars2_2213_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->get_direction());
            ((Active*)*it)->set_angle(((Active*)get_single(bosschopper_2216_instances, it.current_index, default_active_instance))->alterables->values.get(10), 0);
        }
    }
    event_1902_83_end: ;
}
void Frames::event_func_19551()
{
    // event 1903_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1903_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (-1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1903_83_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (32+((Active*)*it)->alterables->values.get(0)*16))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1903_83_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 8);
        }
    }
    event_1903_83_end: ;
}
void Frames::event_func_19552()
{
    // event 1904_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1904_83_end;
        bosschopper_2216_instances.clear_selection();
        for (ObjectIterator it(bosschopper_2216_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!bosschopper_2216_instances.has_selection()) goto event_1904_83_end;
        bosschoppertail_2215_instances.clear_selection();
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (-32-((Active*)*it)->alterables->values.get(0)*16))) { it.deselect(); continue; }
        }
        if (!bosschoppertail_2215_instances.has_selection()) goto event_1904_83_end;
        for (ObjectIterator it(bosschoppertail_2215_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 8);
        }
    }
    event_1904_83_end: ;
}
void Frames::event_func_19553()
{
    // event 1905_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1905_83_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1905_83_end: ;
}
void Frames::event_func_19554()
{
    // event 1906_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1906_83_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) < (30))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1906_83_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(-50);
            ((Active*)*it)->destroy();
        }
    }
    event_1906_83_end: ;
}
void Frames::event_func_19555()
{
    // event 1907_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1907_83_end;
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1907_83_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1907_83_end: ;
}
void Frames::event_func_19556()
{
    // event 1908_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1908_83_end;
        hazardshockwave_1524_instances.clear_selection();
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(hazardshockwave_1524_instances, playercharactersensor_383_instances)) goto event_1908_83_end;
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (50))) { it.deselect(); continue; }
        }
        if (!hazardshockwave_1524_instances.has_selection()) goto event_1908_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1908_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1908_83_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, ((Active*)get_single(hazardshockwave_1524_instances, default_active_instance))->alterables->values.get(0));
    }
    event_1908_83_end: ;
}
void Frames::event_func_19557()
{
    // event 1909_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1909_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1909_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->get_movement()->set_deceleration(0);
            ((Active*)*it)->alterables->values.set(6, ((Active*)*it)->get_direction());
        }
    }
    event_1909_83_end: ;
}
void Frames::event_func_19558()
{
    // event 1910_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1910_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1910_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+30);
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_1910_83_end: ;
}
void Frames::event_func_19559()
{
    // event 1911_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1911_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
            if (!(((Active*)(*it))->overlaps_background())) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1911_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(5)*0.4)%math_helper%32);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(6)+0.5);
        }
    }
    event_1911_83_end: ;
}
void Frames::event_func_19560()
{
    // event 1912_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1912_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(65536)) { it.deselect(); continue; }
            if (((Active*)(*it))->test_directions(1)) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1912_83_end;
        qualifier_8.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, qualifier_8)) goto event_1912_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, (((Active*)*it)->alterables->values.get(6)+((Active*)*it)->alterables->values.get(5)*0.4)%math_helper%32);
            ((Active*)*it)->set_direction(((Active*)*it)->alterables->values.get(6)+0.5);
        }
    }
    event_1912_83_end: ;
}
void Frames::event_func_19561()
{
    // event 1913_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1913_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(3))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1913_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-30);
        }
    }
    event_1913_83_end: ;
}
void Frames::event_func_19562()
{
    // event 1914_83
    bool or_result_1914_83 = false;
    bool or_temp_result_1914_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto or_event_1914_83_0_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(65536))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto or_event_1914_83_0_end;
        or_result_1914_83 = true;
        or_temp_result_1914_83_0 = true;
    }
    or_event_1914_83_0_end: ;
    bossmissile_2023_instances.clear_saved_selection();
    if (or_temp_result_1914_83_0) {
        bossmissile_2023_instances.save_selection();
    }
    // event 1914_83
    bool or_temp_result_1914_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto or_event_1914_83_1_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->test_directions(1))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto or_event_1914_83_1_end;
        or_result_1914_83 = true;
        or_temp_result_1914_83_1 = true;
        or_event_1914_83_1_end: ;
        if (or_temp_result_1914_83_1) {
            bossmissile_2023_instances.save_selection();
        }
        if (!or_result_1914_83) goto or_final_or_event_1914_83_1_end;
        bossmissile_2023_instances.empty_selection();
        if (or_temp_result_1914_83_0 || or_temp_result_1914_83_1) {
            bossmissile_2023_instances.restore_selection();
        }
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(((Active*)*it)->get_movement()->get_speed()+4);
        }
    }
    or_final_or_event_1914_83_1_end: ;
}
void Frames::event_func_19563()
{
    // event 1916_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1916_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1916_83_end;
        {
            SavedSelection extra_bossmissile_2023_instances(bossmissile_2023_instances);
            for (SavedIterator selected(extra_bossmissile_2023_instances); !selected.end(); ++selected) {
                foreach_instance_m = ((Active*)*selected);
                foreach_m_83();
            }
        }
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->set_speed(0);
        }
    }
    event_1916_83_end: ;
}
void Frames::event_func_19564()
{
    // event 1918_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1918_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->test_animation(8))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (30))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1918_83_end;
        if (!((((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.get(17)) == (0))) goto event_1918_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(1)) != (2))) goto event_1918_83_end;
        if (!((((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4)) <= (0))) goto event_1918_83_end;
        playercharactersensor_383_instances.clear_selection();
        if (!check_overlap(bossmissile_2023_instances, playercharactersensor_383_instances)) goto event_1918_83_end;
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(17, 1);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.add(1, 20);
        ((Active*)get_instance(guilifebasemeter_125_instances))->alterables->values.set(2, 1);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, -8);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(11, 0);
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.sub(24, 4);
    }
    event_1918_83_end: ;
}
void Frames::event_func_19565()
{
    // event 1919_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1919_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (45))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1919_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1919_83_end: ;
}
void Frames::event_func_19566()
{
    // event 1920_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_intro_scene_1)) goto event_1920_83_end;
        bossmissile_2023_instances.clear_selection();
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-300))) { it.deselect(); continue; }
        }
        if (!bossmissile_2023_instances.has_selection()) goto event_1920_83_end;
        for (ObjectIterator it(bossmissile_2023_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1920_83_end: ;
}
void Frames::event_func_19567()
{
    // event 1922_83
    bool or_result_1922_83 = false;
    bool or_temp_result_1922_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto or_event_1922_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1922_83_0_end;
        or_result_1922_83 = true;
        or_temp_result_1922_83_0 = true;
    }
    or_event_1922_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1922_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1922_83
    bool or_temp_result_1922_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto or_event_1922_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1922_83_1_end;
        or_result_1922_83 = true;
        or_temp_result_1922_83_1 = true;
    }
    or_event_1922_83_1_end: ;
    if (or_temp_result_1922_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1922_83
    bool or_temp_result_1922_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto or_event_1922_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1922_83_2_end;
        or_result_1922_83 = true;
        or_temp_result_1922_83_2 = true;
    }
    or_event_1922_83_2_end: ;
    if (or_temp_result_1922_83_2) {
        inputsp1_21_instances.save_selection();
    }
    // event 1922_83
    bool or_temp_result_1922_83_3 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto or_event_1922_83_3_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1922_83_3_end;
        or_result_1922_83 = true;
        or_temp_result_1922_83_3 = true;
        or_event_1922_83_3_end: ;
        if (or_temp_result_1922_83_3) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1922_83) goto or_final_or_event_1922_83_3_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1922_83_0 || or_temp_result_1922_83_1 || or_temp_result_1922_83_2 || or_temp_result_1922_83_3) {
            inputsp1_21_instances.restore_selection();
        }
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
        next_frame = 2 + 0;    
    
        media.stop_samples();
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_title_ogg_5, 32-1, 0);
            group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1 = false;
    
    }
    or_final_or_event_1922_83_3_end: ;
}
void Frames::event_func_19568()
{
    // event 1923_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1923_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)) > (global_values->get(25)*0.4))) goto event_1923_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.sub(12, global_values->get(25)*0.02);
    }
    event_1923_83_end: ;
}
void Frames::event_func_19569()
{
    // event 1924_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1924_83_end;
        if (!((media.get_channel_volume(-1 +32)) > (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12)))) goto event_1924_83_end;
        media.set_channel_volume(32-1, ((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(12));
    }
    event_1924_83_end: ;
}
void Frames::event_func_19570()
{
    // event 1925_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1925_83_end;
        if (once_condition_1925_83) goto event_1925_83_end;
        once_condition_1925_83 = true;
        kingdomstonesparkle_4103_instances.clear_selection();
        spread_value(kingdomstonesparkle_4103_instances, 0, 0);
        for (ObjectIterator it(kingdomstonesparkle_4103_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(((((Active*)*it)->alterables->values.get(0)*1.01)/math_helper/kingdomstonesparkle_4103_instances.size()));
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)*3)%math_helper%24);
        }
        ((Active*)get_instance(dialogbox_566_instances))->set_y(-32);
        ((Active*)get_instance(dialogbox2_567_instances))->set_y(-32);
        ((Active*)get_instance(dialogarrow_568_instances))->set_y(-32);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_y(frame_top()+global_values->get(17)-70);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_x(frame_left()+20);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_width(global_values->get(16)-40);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_height(81);
    }
    event_1925_83_end: ;
}
void Frames::event_func_19571()
{
    // event 1926_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1926_83_end;
        kingdomstonesparkle_4103_instances.clear_selection();
        for (ObjectIterator it(kingdomstonesparkle_4103_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)+1)%math_helper%24);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_frame(((Active*)*it)->alterables->values.get(0)/math_helper/3);
        }
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(kingdomstonebig_4102_instances, it.current_index, default_active_instance))->get_x()+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)get_instance(kingdomstonebig_4102_instances, it.current_index, default_active_instance))->get_y()+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->set_scale(get_min(((Active*)*it)->alterables->values.get(1)*0.001*((Active*)*it)->alterables->values.get(2), 1));
        }
    }
    event_1926_83_end: ;
}
void Frames::event_func_19572()
{
    // event 1927_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1927_83_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1927_83_end;
        lightspark2_577_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_lightspark2_577(-44, 3164), 2);
            lightspark2_577_instances.add_back();
        }
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, randrange(360));
            ((Active*)*it)->alterables->values.set(2, 0.4+randrange(20)*0.1);
        }
    }
    event_1927_83_end: ;
}
void Frames::event_func_19573()
{
    // event 1928_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1928_83_end;
        lightspark2_577_instances.clear_selection();
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (400))) { it.deselect(); continue; }
        }
        if (!lightspark2_577_instances.has_selection()) goto event_1928_83_end;
        for (ObjectIterator it(lightspark2_577_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1928_83_end: ;
}
void Frames::event_func_19574()
{
    // event 1929_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1929_83_end;
        kingdomstonesparkle_4103_instances.clear_selection();
        for (ObjectIterator it(kingdomstonesparkle_4103_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (21))) { it.deselect(); continue; }
        }
        if (!kingdomstonesparkle_4103_instances.has_selection()) goto event_1929_83_end;
        for (ObjectIterator it(kingdomstonesparkle_4103_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->set_x(((Active*)get_instance(kingdomstonebig_4102_instances, it.current_index, default_active_instance))->get_x()-25+randrange(51));
            ((Active*)*it)->set_y(((Active*)get_instance(kingdomstonebig_4102_instances, it.current_index, default_active_instance))->get_y()-25+randrange(51));
        }
    }
    event_1929_83_end: ;
}
void Frames::event_func_19575()
{
    // event 1930_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1930_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1930_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+2);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, ((Active*)get_instance(kingdomstonebig_4102_instances, default_active_instance))->get_x());
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, ((Active*)get_instance(kingdomstonebig_4102_instances, default_active_instance))->get_y());
    }
    event_1930_83_end: ;
}
void Frames::event_func_19576()
{
    // event 1931_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1931_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1931_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1931_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 42);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1931_83_end: ;
}
void Frames::event_func_19577()
{
    // event 1932_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1932_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(2)) >= (((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(1)))) goto event_1932_83_end;
        if (!(!media.is_channel_playing(20-1))) goto event_1932_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.enable(0);
    }
    event_1932_83_end: ;
}
void Frames::event_func_19578()
{
    // event 1933_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1933_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1933_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (42))) goto event_1933_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (45))) goto event_1933_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1933_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogbox_566_instances))->force_frame(0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->flags.disable(0);
    }
    event_1933_83_end: ;
}
void Frames::event_func_19579()
{
    // event 1934_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1934_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (44))) goto event_1934_83_end;
        if (once_condition_1934_83) goto event_1934_83_end;
        once_condition_1934_83 = true;
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_y(frame_top()+20);
        ((TextBlitter*)get_instance(dialogtext_569_instances))->set_text(empty_string);
    }
    event_1934_83_end: ;
}
void Frames::event_func_19580()
{
    // event 1935_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1935_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1935_83_end;
        if (once_condition_1935_83) goto event_1935_83_end;
        once_condition_1935_83 = true;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_4000_162);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1935_83_end: ;
}
void Frames::event_func_19581()
{
    // event 1936_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1936_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1936_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (45))) goto event_1936_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1936_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1936_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade2_24_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade2_24(0, 0), 6);
            levelcardfade2_24_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1936_83_end: ;
}
void Frames::event_func_19582()
{
    // event 1937_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1937_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1937_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1937_83_end: ;
}
void Frames::event_func_19583()
{
    // event 1938_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1938_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1938_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1938_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 7);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
        media.set_channel_volume(32-1, 100);
        media.play(str_data_bgm_m_title_ogg_5, 32-1, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1938_83_end: ;
}
void Frames::event_func_19584()
{
    // event 1939_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1939_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1939_83_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(((Active*)*it)->blend_color.get_semi_transparency()-4, 0));
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1939_83_end: ;
}
void Frames::event_func_19585()
{
    // event 1940_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_kingdom_stone_1)) goto event_1940_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1940_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (32))) goto event_1940_83_end;
        global_values->set(0, -17);
        next_frame = 2 + 0;    
    
    }
    event_1940_83_end: ;
}
void Frames::event_func_19586()
{
    // event 1943_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1943_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->restore_frame();
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->restore_frame();
        ((Active*)get_instance(npcdinnercarol_4112_instances))->restore_frame();
        ((Active*)get_instance(npcdinnertorque_4113_instances))->restore_frame();
    }
    event_1943_83_end: ;
}
void Frames::event_func_19587()
{
    // event 1944_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1944_83_end;
        if (!(((Active*)get_instance(npcdinnermilla_4109_instances))->test_directions(1))) goto event_1944_83_end;
        ((Active*)get_instance(npcdinnermilla_4109_instances))->force_frame(((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_frame());
    }
    event_1944_83_end: ;
}
void Frames::event_func_19588()
{
    // event 1945_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1945_83_end;
        if (!(((Active*)get_instance(npcdinnerlilac_4106_instances))->test_directions(1))) goto event_1945_83_end;
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->force_frame(((Active*)get_instance(playerskinsash_418_instances, default_active_instance))->get_frame());
    }
    event_1945_83_end: ;
}
void Frames::event_func_19589()
{
    // event 1946_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1946_83_end;
        if (!(((Active*)get_instance(npcdinnerlilac_4106_instances))->test_directions(4))) goto event_1946_83_end;
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->force_frame(((Active*)get_instance(npcdinnerlilac_4106_instances))->get_frame());
    }
    event_1946_83_end: ;
}
void Frames::event_func_19590()
{
    // event 1947_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1947_83_end;
        if (!(((Active*)get_instance(npcdinnercarol_4112_instances))->test_directions(1))) goto event_1947_83_end;
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(((Active*)get_instance(playerskincarol_445_instances, default_active_instance))->get_frame());
    }
    event_1947_83_end: ;
}
void Frames::event_func_19591()
{
    // event 1948_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1948_83_end;
        if (!(((Active*)get_instance(npcdinnercarol_4112_instances))->test_directions(4))) goto event_1948_83_end;
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->force_frame(((Active*)get_instance(npcdinnercarol_4112_instances))->get_frame());
    }
    event_1948_83_end: ;
}
void Frames::event_func_19592()
{
    // event 1949_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1949_83_end;
        if (!(((Active*)get_instance(npcdinnertorque_4113_instances))->test_directions(1))) goto event_1949_83_end;
        ((Active*)get_instance(npcdinnertorque_4113_instances))->force_frame(((Active*)get_instance(playerskintorque_450_instances, default_active_instance))->get_frame());
    }
    event_1949_83_end: ;
}
void Frames::event_func_19593()
{
    // event 1950_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1950_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1950_83_end;
        if (once_condition_1950_83) goto event_1950_83_end;
        once_condition_1950_83 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 213);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 3450);
        ((Active*)get_instance(npcmayor_3950_instances))->force_animation(5);
        ((Active*)get_instance(npcmayor_3950_instances))->force_frame(27);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(12);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
        }
    }
    event_1950_83_end: ;
}
void Frames::event_func_19594()
{
    // event 1951_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1951_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1951_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->blend_color.get_semi_transparency()+4);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1951_83_end: ;
}
void Frames::event_func_19595()
{
    // event 1952_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1952_83_end;
        if (!((((Active*)get_instance(levelcardfade2_24_instances, default_active_instance))->blend_color.get_semi_transparency()) >= (128))) goto event_1952_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1952_83_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 46);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1952_83_end: ;
}
void Frames::event_func_19596()
{
    // event 1953_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1953_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (1))) goto event_1953_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (2))) goto event_1953_83_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)) < (((Active*)get_instance(npcdinnerlilac_4106_instances))->get_x()))) goto event_1953_83_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1953_83_end: ;
}
void Frames::event_func_19597()
{
    // event 1954_83
    bool or_result_1954_83 = false;
    bool or_temp_result_1954_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto or_event_1954_83_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1954_83_0_end;
        or_result_1954_83 = true;
        or_temp_result_1954_83_0 = true;
    }
    or_event_1954_83_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1954_83_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1954_83
    bool or_temp_result_1954_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto or_event_1954_83_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1954_83_1_end;
        or_result_1954_83 = true;
        or_temp_result_1954_83_1 = true;
    }
    or_event_1954_83_1_end: ;
    if (or_temp_result_1954_83_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1954_83
    bool or_temp_result_1954_83_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto or_event_1954_83_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1954_83_2_end;
        or_result_1954_83 = true;
        or_temp_result_1954_83_2 = true;
        or_event_1954_83_2_end: ;
        if (or_temp_result_1954_83_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1954_83) goto or_final_or_event_1954_83_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1954_83_0 || or_temp_result_1954_83_1 || or_temp_result_1954_83_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1954_83_2_end: ;
}
void Frames::event_func_19598()
{
    // event 1955_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1955_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1955_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (46))) goto event_1955_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1955_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
    }
    event_1955_83_end: ;
}
void Frames::event_func_19599()
{
    // event 1956_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1956_83_end;
        if (once_condition_1956_83) goto event_1956_83_end;
        once_condition_1956_83 = true;
        npcdisgruntledservant_4137_instances.clear_selection();
        spread_value(npcdisgruntledservant_4137_instances, 0, 0);
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1956_83_end: ;
}
void Frames::event_func_19600()
{
    // event 1957_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1957_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(0)+240))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1957_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->restore_speed();
        }
    }
    event_1957_83_end: ;
}
void Frames::event_func_19601()
{
    // event 1958_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1958_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1958_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1958_83_end: ;
}
void Frames::event_func_19602()
{
    // event 1959_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1959_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnertorque_4113_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1959_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1959_83_end: ;
}
void Frames::event_func_19603()
{
    // event 1960_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1960_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnermilla_4109_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1960_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1960_83_end: ;
}
void Frames::event_func_19604()
{
    // event 1961_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1961_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnerlilac_4106_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1961_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1961_83_end: ;
}
void Frames::event_func_19605()
{
    // event 1962_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1962_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) <= (((Active*)get_instance(npcdinnercarol_4112_instances))->get_x()))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1962_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->force_speed(0);
        }
    }
    event_1962_83_end: ;
}
void Frames::event_func_19606()
{
    // event 1963_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1963_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1963_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1963_83_end: ;
}
void Frames::event_func_19607()
{
    // event 1964_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1964_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (2))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (15))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1964_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->alterables->values.set(2, 0);
        }
    }
    event_1964_83_end: ;
}
void Frames::event_func_19608()
{
    // event 1965_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1965_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1965_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
        }
    }
    event_1965_83_end: ;
}
void Frames::event_func_19609()
{
    // event 1966_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1966_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(2)) > (45))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1966_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->restore_speed();
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-2);
        }
    }
    event_1966_83_end: ;
}
void Frames::event_func_19610()
{
    // event 1967_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1967_83_end;
        npcdisgruntledservant_4137_instances.clear_selection();
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) == (3))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (-40))) { it.deselect(); continue; }
        }
        if (!npcdisgruntledservant_4137_instances.has_selection()) goto event_1967_83_end;
        for (ObjectIterator it(npcdisgruntledservant_4137_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1967_83_end: ;
}
void Frames::event_func_19611()
{
    // event 1968_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1968_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)get_instance(npcdisgruntledservant_4137_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->alterables->values.set(5, ((Active*)get_instance(npcdisgruntledservant_4137_instances, it.current_index, default_active_instance))->get_action_y());
            ((Active*)*it)->alterables->values.set(3, ((Active*)get_instance(npcdisgruntledservant_4137_instances, it.current_index, default_active_instance))->alterables->values.get(1));
        }
    }
    event_1968_83_end: ;
}
void Frames::event_func_19612()
{
    // event 1969_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1969_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (2))) { it.deselect(); continue; }
        }
        if (!food2_4136_instances.has_selection()) goto event_1969_83_end;
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_y());
        }
    }
    event_1969_83_end: ;
}
void Frames::event_func_19613()
{
    // event 1970_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1970_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
        }
        if (!food2_4136_instances.has_selection()) goto event_1970_83_end;
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(1, 0.2);
        }
    }
    event_1970_83_end: ;
}
void Frames::event_func_19614()
{
    // event 1971_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1971_83_end;
        food2_4136_instances.clear_selection();
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) >= (3))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (((Active*)*it)->alterables->values.get(2)))) { it.deselect(); continue; }
        }
        if (!food2_4136_instances.has_selection()) goto event_1971_83_end;
        for (ObjectIterator it(food2_4136_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(1);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(2));
        }
    }
    event_1971_83_end: ;
}
void Frames::event_func_19615()
{
    // event 1972_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1972_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1972_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (380))) goto event_1972_83_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_09_01_ogg_321, 17-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.play(str_data_voices_88+global_strings->get(11)+str_ca_ca_13_01_ogg_322, 18-1);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(1);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(1);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->force_frame(3);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1972_83_end: ;
}
void Frames::event_func_19616()
{
    // event 1973_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1973_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1973_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (47))) goto event_1973_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1973_83_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        media.stop_channel(20-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->set_direction(2);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(2);
    }
    event_1973_83_end: ;
}
void Frames::event_func_19617()
{
    // event 1974_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1974_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1974_83_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1974_83_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(0);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->force_frame(3);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(3);
        }
    }
    event_1974_83_end: ;
}
void Frames::event_func_19618()
{
    // event 1975_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1975_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1975_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (48))) goto event_1975_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1975_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(npcdinnermilla_4109_instances))->set_direction(2);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->set_direction(0);
        ((Active*)get_instance(npcdinnercarol_4112_instances))->force_frame(6);
        ((Active*)get_instance(npcdinnercarol2_4108_instances))->set_direction(0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1975_83_end: ;
}
void Frames::event_func_19619()
{
    // event 1976_83
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto event_1976_83_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1976_83_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (49))) goto event_1976_83_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1976_83_end;
        media.stop_channel(20-1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(npcdinnerlilac_4106_instances))->set_direction(5);
        ((Active*)get_instance(npcdinnerlilac2_4107_instances))->set_direction(0);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1976_83_end: ;
}
void Frames::event_func_19620()
{
    // event 1977_83
    bool or_result_1977_83 = false;
    bool or_temp_result_1977_83_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto or_event_1977_83_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (50))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1977_83_0_end;
        if (!((global_values->get(27)) == (1))) goto or_event_1977_83_0_end;
        or_result_1977_83 = true;
        or_temp_result_1977_83_0 = true;
    }
    or_event_1977_83_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1977_83_0) {
        dialogbox_566_instances.save_selection();
    }
    // event 1977_83
    bool or_temp_result_1977_83_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_zao_s_dinner_1)) goto or_event_1977_83_1_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (50))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1977_83_1_end;
        if (!((media.get_channel_position(-1 +20)) > (1000))) goto or_event_1977_83_1_end;
        or_result_1977_83 = true;
        or_temp_result_1977_83_1 = true;
        or_event_1977_83_1_end: ;
        if (or_temp_result_1977_83_1) {
            dialogbox_566_instances.save_selection();
        }
        if (!or_result_1977_83) goto or_final_or_event_1977_83_1_end;
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1977_83_0 || or_temp_result_1977_83_1) {
            dialogbox_566_instances.restore_selection();
        }
        npcdinnerlilac_4106_instances.clear_selection();
        for (ObjectIterator it(npcdinnerlilac_4106_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    or_final_or_event_1977_83_1_end: ;
}
