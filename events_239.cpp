#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_19002()
{
    // event 1882_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1882_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1882_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 2);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        media.set_channel_volume(22-1, get_min(((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)*0.03, 100));
    }
    event_1882_82_end: ;
}
void Frames::event_func_19003()
{
    // event 1883_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1883_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1883_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1883_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.05);
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.05);
        }
    }
    event_1883_82_end: ;
}
void Frames::event_func_19004()
{
    // event 1884_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1884_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1884_82_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (240))) goto event_1884_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.05);
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(0.05);
        }
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()+100);
            ((Active*)*it)->set_y(frame_top()-30);
        }
    }
    event_1884_82_end: ;
}
void Frames::event_func_19005()
{
    // event 1885_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1885_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1885_82_end;
        if (!((global_values->get(3)%math_helper%2) == (0))) goto event_1885_82_end;
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+1);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+1);
        }
        FrameObject * single_instance_1885_82_0; single_instance_1885_82_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(comet2_3987_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsdust01_332(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1885_82_0 == NULL)
                    single_instance_1885_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1885_82_0))->set_angle(randrange(4)*90, 0);
        ((Active*)((Active*)single_instance_1885_82_0))->force_speed(6);
        ((Active*)((Active*)single_instance_1885_82_0))->set_scale(0.3);
        ((Active*)((Active*)single_instance_1885_82_0))->get_movement()->set_speed(0);
        ((Active*)((Active*)single_instance_1885_82_0))->move_back();
        ((Active*)((Active*)single_instance_1885_82_0))->force_frame(3);
        ((Active*)((Active*)single_instance_1885_82_0))->restore_frame();
    }
    event_1885_82_end: ;
}
void Frames::event_func_19006()
{
    // event 1886_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1886_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1886_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (180))) goto event_1886_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 3550);
        media.set_channel_volume(22-1, 100);
        effectsdust01_332_instances.clear_selection();
        for (ObjectIterator it(effectsdust01_332_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(3550);
            ((Active*)*it)->set_scale(1);
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(frame_top()+120);
        }
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.add(2, 130);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, 0.15*-30);
        levelparallaxpiece1_466_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_466_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(2, 100);
            ((SystemBox*)*it)->alterables->values.set(6, 0.1*-30);
        }
        levelparallaxpiece6layer2_3996_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6layer2_3996_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(2, 180);
            ((SystemBox*)*it)->alterables->values.set(6, 0.25*-30);
        }
    }
    event_1886_82_end: ;
}
void Frames::event_func_19007()
{
    // event 1887_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1887_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (2))) goto event_1887_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (3))) goto event_1887_82_end;
        FrameObject * single_instance_1887_82_0; single_instance_1887_82_0 = NULL;
        // select single: true false false
        comet2_3987_instances.clear_selection();
        for (ObjectIterator p_it(comet2_3987_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1887_82_0 == NULL)
                    single_instance_1887_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1887_82_0))->set_x(((Active*)single_instance_1887_82_0)->get_x()-20+randrange(41));
        ((Active*)((Active*)single_instance_1887_82_0))->set_y(((Active*)single_instance_1887_82_0)->get_y()-20+randrange(41));
        ((Active*)((Active*)single_instance_1887_82_0))->move_back();
    }
    event_1887_82_end: ;
}
void Frames::event_func_19008()
{
    // event 1888_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1888_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) >= (2))) goto event_1888_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) <= (3))) goto event_1888_82_end;
        effectsexplosion02_411_instances.clear_selection();
        for (ObjectIterator it(effectsexplosion02_411_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-12);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-12);
        }
    }
    event_1888_82_end: ;
}
void Frames::event_func_19009()
{
    // event 1889_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1889_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1889_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 4);
    }
    event_1889_82_end: ;
}
void Frames::event_func_19010()
{
    // event 1890_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1890_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1890_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (180))) goto event_1890_82_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (1300))) goto event_1890_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, get_min(((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)+12, 1300));
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-12);
        }
    }
    event_1890_82_end: ;
}
void Frames::event_func_19011()
{
    // event 1891_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1891_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (2))) goto event_1891_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) >= (180))) goto event_1891_82_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) >= (1300))) goto event_1891_82_end;
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(6, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()-100);
            ((Active*)*it)->set_y(frame_top()-100);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(25, 0);
        levelparallaxpiece1_466_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_466_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
        levelparallaxpiece6layer2_3996_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6layer2_3996_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(6, 0);
        }
    }
    event_1891_82_end: ;
}
void Frames::event_func_19012()
{
    // event 1892_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1892_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1892_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (40))) goto event_1892_82_end;
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+12);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
    }
    event_1892_82_end: ;
}
void Frames::event_func_19013()
{
    // event 1893_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1893_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1893_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (80))) goto event_1893_82_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        media.stop_channel(22-1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        comet2_3987_instances.clear_selection();
        for (ObjectIterator it(comet2_3987_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1893_82_end: ;
}
void Frames::event_func_19014()
{
    // event 1894_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1894_82_end;
        comet_3988_instances.clear_selection();
        for (ObjectIterator it(comet_3988_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_instance(comet2_3987_instances, it.current_index));
            if (parent == NULL) goto pos_end_1894_82_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_1894_82_0: ;
        }
    }
    event_1894_82_end: ;
}
void Frames::event_func_19015()
{
    // event 1895_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1895_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1895_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1895_82_end;
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.sub(2, 130);
        levelparallaxpiece1_466_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece1_466_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.sub(2, 100);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 300);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, height-140);
        parallaxcrashedship_4003_instances.clear_selection();
        for (ObjectIterator it(parallaxcrashedship_4003_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(true);
        }
        levelparallaxpiece7_764_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece7_764_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->set_visible(true);
        }
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        levelparallaxpiece6layer2_3996_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6layer2_3996_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.sub(2, 180);
        }
    }
    event_1895_82_end: ;
}
void Frames::event_func_19016()
{
    // event 1896_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1896_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1896_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (119))) goto event_1896_82_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1896_82_end: ;
}
void Frames::event_func_19017()
{
    // event 1897_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1897_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1897_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1897_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.add(0, 1);
    }
    event_1897_82_end: ;
}
void Frames::event_func_19018()
{
    // event 1898_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1898_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1898_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1898_82_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1898_82_end: ;
}
void Frames::event_func_19019()
{
    // event 1899_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1899_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1899_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1899_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 2);
    }
    event_1899_82_end: ;
}
void Frames::event_func_19020()
{
    // event 1900_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1900_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1900_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (520))) goto event_1900_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, 1);
        }
    }
    event_1900_82_end: ;
}
void Frames::event_func_19021()
{
    // event 1901_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1901_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1901_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1901_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (50))) goto event_1901_82_end;
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-1);
        }
    }
    event_1901_82_end: ;
}
void Frames::event_func_19022()
{
    // event 1902_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1902_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1902_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (50))) goto event_1902_82_end;
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(1);
        }
        media.play_id(SOUND_BREVON_JUMP_392, -1, 1);
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, ((Active*)*it)->get_y());
            ((Active*)*it)->set_y(frame_top()-50);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_animation(7);
        }
    }
    event_1902_82_end: ;
}
void Frames::event_func_19023()
{
    // event 1903_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1903_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1903_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_1903_82_end;
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-4);
        }
    }
    event_1903_82_end: ;
}
void Frames::event_func_19024()
{
    // event 1904_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1904_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1904_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (50))) goto event_1904_82_end;
        FrameObject * single_instance_1904_82_0; single_instance_1904_82_0 = NULL;
        // select single: true false false
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator p_it(brevondistant_4005_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_brevondistant2_3989(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1904_82_0 == NULL)
                    single_instance_1904_82_0 = new_obj;
            }
        }
        ((Active*)single_instance_1904_82_0)->move_back(((Active*)get_single(brevondistant_4005_instances)));
    }
    event_1904_82_end: ;
}
void Frames::event_func_19025()
{
    // event 1905_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1905_82_end;
        brevondistant2_3989_instances.clear_selection();
        for (ObjectIterator it(brevondistant2_3989_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(0, 1);
            ((Active*)*it)->set_y_scale(get_min(1, 2-((Active*)*it)->alterables->values.get(0)*0.05));
        }
    }
    event_1905_82_end: ;
}
void Frames::event_func_19026()
{
    // event 1906_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1906_82_end;
        brevondistant2_3989_instances.clear_selection();
        for (ObjectIterator it(brevondistant2_3989_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (40))) { it.deselect(); continue; }
        }
        if (!brevondistant2_3989_instances.has_selection()) goto event_1906_82_end;
        for (ObjectIterator it(brevondistant2_3989_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1906_82_end: ;
}
void Frames::event_func_19027()
{
    // event 1907_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1907_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1907_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1907_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->set_y(((Active*)*it)->get_y()+12);
        }
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1907_82_end: ;
}
void Frames::event_func_19028()
{
    // event 1908_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1908_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1908_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (120))) goto event_1908_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) >= (((Active*)*it)->alterables->values.get(7)))) { it.deselect(); continue; }
        }
        if (!brevon_3683_instances.has_selection()) goto event_1908_82_end;
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(7));
            ((Active*)*it)->force_animation(10);
        }
        media.play_id(SOUND_BREVON_STEP_2_222, -1, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1908_82_end: ;
}
void Frames::event_func_19029()
{
    // event 1909_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1909_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1909_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1909_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(5);
            ((Active*)*it)->force_frame(28);
        }
    }
    event_1909_82_end: ;
}
void Frames::event_func_19030()
{
    // event 1910_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1910_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1910_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_1910_82_end;
        brevon_3683_instances.clear_selection();
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(12);
            ((Active*)*it)->restore_frame();
        }
        media.play(str_data_voices_88+global_strings->get(11)+str_br_brevon_bigno_ogg_305, 29-1);
        for (ObjectIterator it(brevon_3683_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1910_82_end: ;
}
void Frames::event_func_19031()
{
    // event 1911_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1911_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1911_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1911_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, (((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)-160)*0.05);
    }
    event_1911_82_end: ;
}
void Frames::event_func_19032()
{
    // event 1912_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1912_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1912_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (160))) goto event_1912_82_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_3000_113);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
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
    event_1912_82_end: ;
}
void Frames::event_func_19033()
{
    // event 1913_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1913_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1913_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1913_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-get_min(((Active*)*it)->alterables->values.get(1), 128));
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1913_82_end: ;
}
void Frames::event_func_19034()
{
    // event 1914_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1914_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1914_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1914_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1914_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->load(str_data_font_bmp_7);
            ((TextBlitter*)*it)->set_text(str_three_days_later_306+newline_character+str_in_a_valley_to_the_east_307);
        }
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->move_front();
        }
    }
    event_1914_82_end: ;
}
void Frames::event_func_19035()
{
    // event 1915_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1915_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1915_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (160))) goto event_1915_82_end;
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_visible(true);
        }
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->blend_color.set_semi_transparency(get_max(((TextBlitter*)*it)->blend_color.get_semi_transparency()-2, 0));
        }
    }
    event_1915_82_end: ;
}
void Frames::event_func_19036()
{
    // event 1916_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1916_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (7))) goto event_1916_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1916_82_end;
        message_42_instances.clear_selection();
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->set_visible(true);
        }
        for (ObjectIterator it(message_42_instances); !it.end(); ++it) {
            ((TextBlitter*)*it)->blend_color.set_semi_transparency(get_min(((TextBlitter*)*it)->blend_color.get_semi_transparency()+2, 128));
        }
    }
    event_1916_82_end: ;
}
void Frames::event_func_19037()
{
    // event 1917_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto event_1917_82_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_1917_82_end;
        if (!((global_values->get(3)) > (15))) goto event_1917_82_end;
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    event_1917_82_end: ;
}
void Frames::event_func_19038()
{
    // event 1918_82
    bool or_result_1918_82 = false;
    bool or_temp_result_1918_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto or_event_1918_82_0_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == (7))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(1)) > (230))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1918_82_0_end;
        or_result_1918_82 = true;
        or_temp_result_1918_82_0 = true;
    }
    or_event_1918_82_0_end: ;
    themagister_2115_instances.clear_saved_selection();
    if (or_temp_result_1918_82_0) {
        themagister_2115_instances.save_selection();
    }
    // event 1918_82
    bool or_temp_result_1918_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ship_crash_1)) goto or_event_1918_82_1_end;
        brevondistant_4005_instances.clear_selection();
        for (ObjectIterator it(brevondistant_4005_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(0))) { it.deselect(); continue; }
        }
        if (!brevondistant_4005_instances.has_selection()) goto or_event_1918_82_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1918_82_1_end;
        or_result_1918_82 = true;
        or_temp_result_1918_82_1 = true;
        or_event_1918_82_1_end: ;
        brevondistant_4005_instances.clear_saved_selection();
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_1918_82_1) {
            inputsp1_21_instances.save_selection();
            brevondistant_4005_instances.save_selection();
        }
        if (!or_result_1918_82) goto or_final_or_event_1918_82_1_end;
        brevondistant_4005_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        themagister_2115_instances.empty_selection();
        if (or_temp_result_1918_82_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_1918_82_0) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_1918_82_1) {
            brevondistant_4005_instances.restore_selection();
        }
        global_values->set(4, 0);
        next_frame = 76 + 0;    
    
        media.stop_channel(32-1);
            group_main_engine_interface_and_post_processing_methods_me_music_engine_1 = false;
    
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, -1);
            ((Active*)*it)->alterables->values.set(11, 0);
        }
        media.stop_samples();
    }
    or_final_or_event_1918_82_1_end: ;
}
void Frames::event_func_19039()
{
    // event 1920_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1920_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
        effectember_970_instances.clear_selection();
        for (ObjectIterator it(effectember_970_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)*it)->get_y()-((Active*)*it)->alterables->values.get(0));
        }
        torqueship_3888_instances.clear_selection();
        for (ObjectIterator it(torqueship_3888_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_1920_82_end: ;
}
void Frames::event_func_19040()
{
    // event 1921_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1)) goto event_1921_82_end;
        caravanwheel_1386_instances.clear_selection();
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2500))) { it.deselect(); continue; }
        }
        if (!caravanwheel_1386_instances.has_selection()) goto event_1921_82_end;
        for (ObjectIterator it(caravanwheel_1386_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1921_82_end: ;
}
void Frames::event_func_19041()
{
    // event 1922_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1922_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(1, 1);
    }
    event_1922_82_end: ;
}
void Frames::event_func_19042()
{
    // event 1923_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1923_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1923_82_end;
        if (once_condition_1923_82) goto event_1923_82_end;
        once_condition_1923_82 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 380);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1000);
    }
    event_1923_82_end: ;
}
void Frames::event_func_19043()
{
    // event 1924_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1924_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1924_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.sub(1, 2);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
    }
    event_1924_82_end: ;
}
void Frames::event_func_19044()
{
    // event 1925_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1925_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1925_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1925_82_end;
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        if (!group_pause_1) {
            group_pause_1 = true;
        }
    }
    event_1925_82_end: ;
}
void Frames::event_func_19045()
{
    // event 1926_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1926_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1926_82_end;
        if (!((((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)) < (240))) goto event_1926_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(spaceheroship_3990_instances))->set_x(frame_left()+100);
        ((Active*)get_instance(spaceheroship_3990_instances))->set_y(frame_top()-30);
        ((Active*)get_instance(spaceheroship_3990_instances))->set_direction(0);
    }
    event_1926_82_end: ;
}
void Frames::event_func_19046()
{
    // event 1927_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1927_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1927_82_end;
        ((Active*)get_instance(spaceheroship_3990_instances))->set_x(((Active*)get_instance(spaceheroship_3990_instances))->get_x()+1);
        ((Active*)get_instance(spaceheroship_3990_instances))->set_y(((Active*)get_instance(spaceheroship_3990_instances))->get_y()+1);
    }
    event_1927_82_end: ;
}
void Frames::event_func_19047()
{
    // event 1928_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1928_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1928_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (360))) goto event_1928_82_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 6);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(8);
        }
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_lock_music_71);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1928_82_end: ;
}
void Frames::event_func_19048()
{
    // event 1929_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1929_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1929_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (360))) goto event_1929_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(1), 0));
        }
    }
    event_1929_82_end: ;
}
void Frames::event_func_19049()
{
    // event 1930_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1)) goto event_1930_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1930_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (640))) goto event_1930_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
            group_main_engine_level_specific_methods_cutscenes_ending_ship_landing_1 = false;
    
        if (!group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1) {
            group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1 = true;
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 128);
        }
    }
    event_1930_82_end: ;
}
void Frames::event_func_19050()
{
    // event 1931_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1931_82_end;
        if (!((global_values->get(3)%math_helper%15) == (0))) goto event_1931_82_end;
        FrameObject * single_instance_1931_82_0; single_instance_1931_82_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bgfireplace2_4008_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectember_970(parent->x + 16, parent->y + 59), parent->layer);
                if (single_instance_1931_82_0 == NULL)
                    single_instance_1931_82_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_1931_82_0))->set_x(((Active*)single_instance_1931_82_0)->get_x()-10+randrange(21));
        ((Active*)((Active*)single_instance_1931_82_0))->set_y(((Active*)single_instance_1931_82_0)->get_y()+randrange(30));
        ((Active*)((Active*)single_instance_1931_82_0))->alterables->values.set(0, 1+randrange(4));
        ((Active*)((Active*)single_instance_1931_82_0))->move_back();
    }
    event_1931_82_end: ;
}
void Frames::event_func_19051()
{
    // event 1932_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1932_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1932_82_end;
        if (once_condition_1932_82) goto event_1932_82_end;
        once_condition_1932_82 = true;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2280);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1460);
        media.play_id(SOUND_FIREPLACE_443, 25-1, 0);
        torqueship_3888_instances.clear_selection();
        for (ObjectIterator it(torqueship_3888_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->stop_animation();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1932_82_end: ;
}
void Frames::event_func_19052()
{
    // event 1933_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1933_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1933_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1514);
            ((Active*)*it)->set_x(2370);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1513);
            ((Active*)*it)->set_x(2140);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(60);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1514);
            ((Active*)*it)->set_x(2400);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(24);
            ((Active*)*it)->set_direction(16);
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(1, 2);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(1), 0));
        }
    }
    event_1933_82_end: ;
}
void Frames::event_func_19053()
{
    // event 1934_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1934_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (0))) goto event_1934_82_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_1934_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1934_82_end: ;
}
void Frames::event_func_19054()
{
    // event 1935_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1935_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1935_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1935_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1935_82_end: ;
}
void Frames::event_func_19055()
{
    // event 1936_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1936_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1936_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (75))) goto event_1936_82_end;
        if (!((global_values->get(0)) != (1))) goto event_1936_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(28);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 92);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1936_82_end: ;
}
void Frames::event_func_19056()
{
    // event 1937_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1937_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (1))) goto event_1937_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (75))) goto event_1937_82_end;
        if (!((global_values->get(0)) == (1))) goto event_1937_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(28);
        }
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 2);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->restore_speed();
        }
    }
    event_1937_82_end: ;
}
void Frames::event_func_19057()
{
    // event 1938_82
    bool or_result_1938_82 = false;
    bool or_temp_result_1938_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1938_82_0_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(12)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1938_82_0_end;
        or_result_1938_82 = true;
        or_temp_result_1938_82_0 = true;
    }
    or_event_1938_82_0_end: ;
    inputsp1_21_instances.clear_saved_selection();
    if (or_temp_result_1938_82_0) {
        inputsp1_21_instances.save_selection();
    }
    // event 1938_82
    bool or_temp_result_1938_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1938_82_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1938_82_1_end;
        or_result_1938_82 = true;
        or_temp_result_1938_82_1 = true;
    }
    or_event_1938_82_1_end: ;
    if (or_temp_result_1938_82_1) {
        inputsp1_21_instances.save_selection();
    }
    // event 1938_82
    bool or_temp_result_1938_82_2 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1938_82_2_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(14)) == (1))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_1938_82_2_end;
        or_result_1938_82 = true;
        or_temp_result_1938_82_2 = true;
        or_event_1938_82_2_end: ;
        if (or_temp_result_1938_82_2) {
            inputsp1_21_instances.save_selection();
        }
        if (!or_result_1938_82) goto or_final_or_event_1938_82_2_end;
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_1938_82_0 || or_temp_result_1938_82_1 || or_temp_result_1938_82_2) {
            inputsp1_21_instances.restore_selection();
        }
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(0);
        }
    }
    or_final_or_event_1938_82_2_end: ;
}
void Frames::event_func_19058()
{
    // event 1939_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1939_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1939_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (92))) goto event_1939_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) <= (95))) goto event_1939_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1939_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1939_82_end: ;
}
void Frames::event_func_19059()
{
    // event 1940_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1940_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1940_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (10))) goto event_1940_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(9);
            ((Active*)*it)->set_direction(16);
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
            ((Active*)*it)->set_direction(16);
        }
    }
    event_1940_82_end: ;
}
void Frames::event_func_19060()
{
    // event 1941_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1941_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1941_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1941_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1941_82_end: ;
}
void Frames::event_func_19061()
{
    // event 1942_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1942_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1942_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (35))) goto event_1942_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1942_82_end: ;
}
void Frames::event_func_19062()
{
    // event 1943_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1943_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1943_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (45))) goto event_1943_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1943_82_end: ;
}
void Frames::event_func_19063()
{
    // event 1944_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1944_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1944_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2145))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1944_82_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1944_82_end: ;
}
void Frames::event_func_19064()
{
    // event 1945_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1945_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1945_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2145))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1945_82_end;
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1945_82_end: ;
}
void Frames::event_func_19065()
{
    // event 1946_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1946_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1946_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2145))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1946_82_end;
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
    }
    event_1946_82_end: ;
}
void Frames::event_func_19066()
{
    // event 1947_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1947_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (3))) goto event_1947_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2145))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1947_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2145))) { it.deselect(); continue; }
        }
        if (!playerskincarol_445_instances.has_selection()) goto event_1947_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (2145))) { it.deselect(); continue; }
        }
        if (!playerskintorque_450_instances.has_selection()) goto event_1947_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
    event_1947_82_end: ;
}
void Frames::event_func_19067()
{
    // event 1948_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1948_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1948_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1948_82_end: ;
}
void Frames::event_func_19068()
{
    // event 1949_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1949_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (4))) goto event_1949_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1949_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(npcneera_2464_instances))->force_animation(5);
        ((Active*)get_instance(npcneera_2464_instances))->set_direction(0);
        ((Active*)get_instance(npcneera_2464_instances))->force_frame(3);
        monitorrings_407_instances.clear_selection();
        for (ObjectIterator it(monitorrings_407_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        FrameObject * single_instance_1949_82_0; single_instance_1949_82_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(monitorrings_407_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_monitorbroken_330(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1949_82_0 == NULL)
                    single_instance_1949_82_0 = new_obj;
            }
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4493);
            ((Active*)*it)->set_y(265);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 4493);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 240);
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4450);
            ((Active*)*it)->set_y(282);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4533);
            ((Active*)*it)->set_y(282);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(60);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(0);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4573);
            ((Active*)*it)->set_y(282);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->force_frame(0);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(38);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_frame(3);
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.stop_channel(25-1);
    }
    event_1949_82_end: ;
}
void Frames::event_func_19069()
{
    // event 1950_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1950_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1950_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
        monitorbroken_330_instances.clear_selection();
        for (ObjectIterator it(monitorbroken_330_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(1);
            ((Active*)*it)->force_frame(6);
            ((Active*)*it)->move_back();
        }
    }
    event_1950_82_end: ;
}
void Frames::event_func_19070()
{
    // event 1951_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1951_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (5))) goto event_1951_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1951_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1951_82_end: ;
}
void Frames::event_func_19071()
{
    // event 1952_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1952_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1952_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1952_82_end;
        if (!((global_values->get(0)) != (1))) goto event_1952_82_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_28_01_ogg_308, 29-1);
    }
    event_1952_82_end: ;
}
void Frames::event_func_19072()
{
    // event 1953_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1953_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1953_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1953_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (100))) goto event_1953_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4493+randrange(3));
        }
    }
    event_1953_82_end: ;
}
void Frames::event_func_19073()
{
    // event 1954_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1954_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1954_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (160))) goto event_1954_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (210))) goto event_1954_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4493+randrange(3));
            ((Active*)*it)->force_frame(2);
        }
    }
    event_1954_82_end: ;
}
void Frames::event_func_19074()
{
    // event 1955_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1955_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1955_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (300))) goto event_1955_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) < (340))) goto event_1955_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(4493+randrange(3));
        }
    }
    event_1955_82_end: ;
}
void Frames::event_func_19075()
{
    // event 1956_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1956_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1956_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (360))) goto event_1956_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(63);
        }
    }
    event_1956_82_end: ;
}
void Frames::event_func_19076()
{
    // event 1957_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1957_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1957_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (390))) goto event_1957_82_end;
        if (!((global_values->get(0)) != (1))) goto event_1957_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1957_82_end: ;
}
void Frames::event_func_19077()
{
    // event 1958_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1958_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (6))) goto event_1958_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (390))) goto event_1958_82_end;
        if (!((global_values->get(0)) == (1))) goto event_1958_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(0, 12);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1958_82_end: ;
}
void Frames::event_func_19078()
{
    // event 1959_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1959_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1959_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (1))) goto event_1959_82_end;
        media.play(str_data_voices_88+global_strings->get(11)+str_mi_mi_28_03_ogg_309, 29-1);
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(41);
            ((Active*)*it)->set_direction(4);
        }
    }
    event_1959_82_end: ;
}
void Frames::event_func_19079()
{
    // event 1960_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1960_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1960_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (20))) goto event_1960_82_end;
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(78);
        }
    }
    event_1960_82_end: ;
}
void Frames::event_func_19080()
{
    // event 1961_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1961_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1961_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (30))) goto event_1961_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(2);
            ((Active*)*it)->set_direction(0);
            ((Active*)*it)->force_speed(35);
            ((Active*)*it)->set_x(((Active*)*it)->get_x()+5);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1961_82_end: ;
}
void Frames::event_func_19081()
{
    // event 1962_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1962_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (8))) goto event_1962_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (((Active*)get_instance(playerskinmilla_446_instances, default_active_instance))->get_x()))) { it.deselect(); continue; }
        }
        if (!playerskinsash_418_instances.has_selection()) goto event_1962_82_end;
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(14);
        }
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1962_82_end: ;
}
void Frames::event_func_19082()
{
    // event 1963_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1963_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (10))) goto event_1963_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1963_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1963_82_end: ;
}
void Frames::event_func_19083()
{
    // event 1964_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1964_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (12))) goto event_1964_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1964_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
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
    event_1964_82_end: ;
}
void Frames::event_func_19084()
{
    // event 1965_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1965_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1965_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1965_82_end: ;
}
void Frames::event_func_19085()
{
    // event 1966_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1966_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (13))) goto event_1966_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1966_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2564);
            ((Active*)*it)->set_y(1442);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
        }
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(12, 3);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(0, 2420);
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, 1460);
        media.play_id(SOUND_FIREPLACE_443, 25-1, 0);
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(72);
        }
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(2370);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->set_x(2400);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->force_frame(0);
            ((Active*)*it)->set_direction(16);
        }
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(2480);
            ((Active*)*it)->set_y(1515);
            ((Active*)*it)->force_animation(40);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->set_visible(true);
            ((Active*)*it)->force_frame(0);
        }
        npcmerc_1283_instances.clear_selection();
        for (ObjectIterator it(npcmerc_1283_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
        }
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
        playerskinsashhair_417_instances.clear_selection();
        for (ObjectIterator it(playerskinsashhair_417_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        playerskincaroltail_444_instances.clear_selection();
        for (ObjectIterator it(playerskincaroltail_444_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128);
        }
    }
    event_1966_82_end: ;
}
void Frames::event_func_19086()
{
    // event 1967_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1967_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1967_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, -2);
        }
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(1));
        }
    }
    event_1967_82_end: ;
}
void Frames::event_func_19087()
{
    // event 1968_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1968_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (14))) goto event_1968_82_end;
        levelcardfade2_24_instances.clear_selection();
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) <= (0))) { it.deselect(); continue; }
        }
        if (!levelcardfade2_24_instances.has_selection()) goto event_1968_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        for (ObjectIterator it(levelcardfade2_24_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1968_82_end: ;
}
void Frames::event_func_19088()
{
    // event 1969_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1969_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1969_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1969_82_end;
        if (!((global_values->get(0)) != (1))) goto event_1969_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(4, 83);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
    }
    event_1969_82_end: ;
}
void Frames::event_func_19089()
{
    // event 1970_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1970_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (15))) goto event_1970_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (60))) goto event_1970_82_end;
        if (!((global_values->get(0)) == (1))) goto event_1970_82_end;
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 2);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
    }
    event_1970_82_end: ;
}
void Frames::event_func_19090()
{
    // event 1971_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1971_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1971_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) >= (83))) goto event_1971_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) < (87))) goto event_1971_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1971_82_end;
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.add(4, 1);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(7, 1);
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
    }
    event_1971_82_end: ;
}
void Frames::event_func_19091()
{
    // event 1972_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1972_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (86))) goto event_1972_82_end;
        if (once_condition_1972_82) goto event_1972_82_end;
        once_condition_1972_82 = true;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
        playerskincarol_445_instances.clear_selection();
        for (ObjectIterator it(playerskincarol_445_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(54);
        }
    }
    event_1972_82_end: ;
}
void Frames::event_func_19092()
{
    // event 1973_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1973_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (87))) goto event_1973_82_end;
        if (once_condition_1973_82) goto event_1973_82_end;
        once_condition_1973_82 = true;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->set_direction(0);
        }
    }
    event_1973_82_end: ;
}
void Frames::event_func_19093()
{
    // event 1974_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1974_82_end;
        if (!(((Active*)get_instance(dialogbox_566_instances))->alterables->flags.is_on(0))) goto event_1974_82_end;
        if (!((((Active*)get_instance(dialogbox_566_instances))->alterables->values.get(4)) == (87))) goto event_1974_82_end;
        if (!(((Active*)get_instance(dialogarrow_568_instances))->flags & VISIBLE)) goto event_1974_82_end;
        ((Active*)get_instance(dialogarrow_568_instances))->set_visible(false);
        ((Active*)get_instance(dialogbox_566_instances))->alterables->values.set(5, 0);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(themagister_2115_instances))->alterables->values.set(1, 0);
        media.stop_channel(20-1);
    }
    event_1974_82_end: ;
}
void Frames::event_func_19094()
{
    // event 1975_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1975_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1975_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (30))) goto event_1975_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(33);
        }
    }
    event_1975_82_end: ;
}
void Frames::event_func_19095()
{
    // event 1976_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1976_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1976_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (60))) goto event_1976_82_end;
        playerskinsash_418_instances.clear_selection();
        for (ObjectIterator it(playerskinsash_418_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(21);
        }
    }
    event_1976_82_end: ;
}
void Frames::event_func_19096()
{
    // event 1977_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1977_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1977_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (70))) goto event_1977_82_end;
        playerskintorque_450_instances.clear_selection();
        for (ObjectIterator it(playerskintorque_450_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(51);
        }
    }
    event_1977_82_end: ;
}
void Frames::event_func_19097()
{
    // event 1978_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1978_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1978_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (80))) goto event_1978_82_end;
        playerskinmilla_446_instances.clear_selection();
        for (ObjectIterator it(playerskinmilla_446_instances); !it.end(); ++it) {
            ((Active*)*it)->force_animation(11);
            ((Active*)*it)->restore_frame();
        }
    }
    event_1978_82_end: ;
}
void Frames::event_func_19098()
{
    // event 1979_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1979_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1979_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) > (90))) goto event_1979_82_end;
        ((Active*)get_instance(mastercamera_430_instances))->alterables->values.set(1, (((Active*)get_instance(mastercamera_430_instances))->alterables->values.get(1)*39+800)*0.025);
    }
    event_1979_82_end: ;
}
void Frames::event_func_19099()
{
    // event 1980_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1980_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(0)) == (17))) goto event_1980_82_end;
        if (!((((Active*)get_instance(themagister_2115_instances))->alterables->values.get(1)) == (100))) goto event_1980_82_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_unlock_music_82);
            ((ArrayObject*)*it)->data.x_pos++;
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(6)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1980_82_end: ;
}
void Frames::event_func_19100()
{
    // event 1981_82
    bool or_result_1981_82 = false;
    bool or_temp_result_1981_82_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1981_82_0_end;
        dialogbox_566_instances.clear_selection();
        for (ObjectIterator it(dialogbox_566_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) >= (86))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(4)) < (92))) { it.deselect(); continue; }
        }
        if (!dialogbox_566_instances.has_selection()) goto or_event_1981_82_0_end;
        if (!((endingsparkle_578_instances.size()) < (400))) goto or_event_1981_82_0_end;
        or_result_1981_82 = true;
        or_temp_result_1981_82_0 = true;
    }
    or_event_1981_82_0_end: ;
    dialogbox_566_instances.clear_saved_selection();
    if (or_temp_result_1981_82_0) {
        dialogbox_566_instances.save_selection();
    }
    // event 1981_82
    bool or_temp_result_1981_82_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto or_event_1981_82_1_end;
        themagister_2115_instances.clear_selection();
        for (ObjectIterator it(themagister_2115_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) >= (17))) { it.deselect(); continue; }
        }
        if (!themagister_2115_instances.has_selection()) goto or_event_1981_82_1_end;
        if (!((endingsparkle_578_instances.size()) < (400))) goto or_event_1981_82_1_end;
        or_result_1981_82 = true;
        or_temp_result_1981_82_1 = true;
        or_event_1981_82_1_end: ;
        themagister_2115_instances.clear_saved_selection();
        if (or_temp_result_1981_82_1) {
            themagister_2115_instances.save_selection();
        }
        if (!or_result_1981_82) goto or_final_or_event_1981_82_1_end;
        themagister_2115_instances.empty_selection();
        dialogbox_566_instances.empty_selection();
        if (or_temp_result_1981_82_1) {
            themagister_2115_instances.restore_selection();
        }
        if (or_temp_result_1981_82_0) {
            dialogbox_566_instances.restore_selection();
        }
        endingsparkle_578_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_endingsparkle_578(0, 0), 0);
            endingsparkle_578_instances.add_back();
        }
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, endingsparkle_578_instances.size()*0.5);
            ((Active*)*it)->alterables->values.set(0, endingsparkle_578_instances.size()*37);
            ((Active*)*it)->force_speed(14+(endingsparkle_578_instances.size()%math_helper%30));
        }
    }
    or_final_or_event_1981_82_1_end: ;
}
void Frames::event_func_19101()
{
    // event 1982_82
    {
        if (!(group_main_engine_1 && group_main_engine_level_specific_methods_cutscenes_ending_1 && group_main_engine_level_specific_methods_cutscenes_ending_milla_recovers_1)) goto event_1982_82_end;
        endingsparkle_578_instances.clear_selection();
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) < (128))) { it.deselect(); continue; }
        }
        if (!endingsparkle_578_instances.has_selection()) goto event_1982_82_end;
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 2);
        }
        for (ObjectIterator it(endingsparkle_578_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(128-((Active*)*it)->alterables->values.get(5));
        }
    }
    event_1982_82_end: ;
}
