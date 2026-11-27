#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_20605()
{
    // event 12_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_12_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (160))) goto event_12_84_end;
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 25-1, 0);
    }
    event_12_84_end: ;
}
void Frames::event_func_20606()
{
    // event 13_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_13_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (170))) goto event_13_84_end;
        media.stop_channel(25-1);
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_13_84_end: ;
}
void Frames::event_func_20607()
{
    // event 14_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_14_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (190))) goto event_14_84_end;
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 25-1, 0);
    }
    event_14_84_end: ;
}
void Frames::event_func_20608()
{
    // event 15_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_15_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (196))) goto event_15_84_end;
        media.stop_channel(25-1);
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, 5);
        }
    }
    event_15_84_end: ;
}
void Frames::event_func_20609()
{
    // event 16_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_16_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (200))) goto event_16_84_end;
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 25-1, 0);
    }
    event_16_84_end: ;
}
void Frames::event_func_20610()
{
    // event 17_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_17_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (204))) goto event_17_84_end;
        media.stop_channel(25-1);
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, 3);
        }
    }
    event_17_84_end: ;
}
void Frames::event_func_20611()
{
    // event 18_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_18_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (208))) goto event_18_84_end;
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(true);
        }
        media.play_id(SOUND_DREADNOUGHT_FLAME_437, 25-1, 0);
    }
    event_18_84_end: ;
}
void Frames::event_func_20612()
{
    // event 19_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_19_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (212))) goto event_19_84_end;
        media.stop_channel(25-1);
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_visible(false);
            ((Active*)*it)->alterables->values.set(2, 3);
        }
        ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.set(2, ((Active*)get_instance(spacedreadnought_4149_instances))->get_x());
        ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.set(3, ((Active*)get_instance(spacedreadnought_4149_instances))->get_y());
    }
    event_19_84_end: ;
}
void Frames::event_func_20613()
{
    // event 20_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_20_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (240))) goto event_20_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (720))) goto event_20_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_x(((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(2)-1+randrange(3));
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_y(((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(3)-1+randrange(3));
    }
    event_20_84_end: ;
}
void Frames::event_func_20614()
{
    // event 21_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_21_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (520))) goto event_21_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_direction((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)/math_helper/2)%math_helper%2);
    }
    event_21_84_end: ;
}
void Frames::event_func_20615()
{
    // event 22_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_22_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (280))) goto event_22_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (380))) goto event_22_84_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_22_84_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_22_84_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_22_84_0_end: ;
        FrameObject * single_instance_22_84_1; single_instance_22_84_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 32), parent->layer);
                if (single_instance_22_84_1 == NULL)
                    single_instance_22_84_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_22_84_1))->set_x(((Active*)single_instance_22_84_1)->get_x()-30+randrange(21));
        ((Active*)((Active*)single_instance_22_84_1))->set_y(((Active*)single_instance_22_84_1)->get_y()-30+randrange(61));
        ((Active*)((Active*)single_instance_22_84_1))->set_scale(0.5+randrange(50)*0.01);
        ((Active*)((Active*)single_instance_22_84_1))->force_speed(35);
    }
    event_22_84_end: ;
}
void Frames::event_func_20616()
{
    // event 23_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (380))) goto event_23_84_end;
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        FrameObject * single_instance_23_84_0; single_instance_23_84_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_spacedebris_4145(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_23_84_0 == NULL)
                    single_instance_23_84_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_23_84_0))->force_frame(0);
        ((Active*)((Active*)single_instance_23_84_0))->set_direction(17);
        ((Active*)get_instance(spacedreadnought_4149_instances))->force_frame(1);
        ((Active*)((Active*)single_instance_23_84_0))->move_back();
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            if (parent == NULL) goto pos_end_23_84_1;
            ((Active*)get_instance(spacebrevonmech_4148_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_23_84_1: ;
        }
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.set(0, -1);
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.set(1, 1.5);
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.set(2, ((Active*)get_instance(spacebrevonmech_4148_instances))->get_x());
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.set(3, ((Active*)get_instance(spacebrevonmech_4148_instances))->get_y());
    }
    event_23_84_end: ;
}
void Frames::event_func_20617()
{
    // event 24_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (400))) goto event_24_84_end;
        ((Active*)get_instance(spacebrevonmech_4148_instances))->set_x(((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(2));
        ((Active*)get_instance(spacebrevonmech_4148_instances))->set_y(((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(3));
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.add(2, ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(0));
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.add(3, ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(1));
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.set(1, get_max(((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(1)-0.02, 0));
    }
    event_24_84_end: ;
}
void Frames::event_func_20618()
{
    // event 25_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (400))) goto event_25_84_end;
        if (!((((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(1)) == (0))) goto event_25_84_end;
        if (once_condition_25_84) goto event_25_84_end;
        once_condition_25_84 = true;
        media.play_id(SOUND_ABSOLUTION_DASH_296, 24-1);
        media.set_channel_volume(24-1, 30);
    }
    event_25_84_end: ;
}
void Frames::event_func_20619()
{
    // event 26_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.get(1)) == (0))) goto event_26_84_end;
        ((Active*)get_instance(spacebrevonmech_4148_instances))->alterables->values.sub(0, 0.4);
    }
    event_26_84_end: ;
}
void Frames::event_func_20620()
{
    // event 27_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_27_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (400))) goto event_27_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (500))) goto event_27_84_end;
        if (!((global_values->get(3)%math_helper%8) == (0))) goto event_27_84_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_27_84_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_27_84_0_end: ;
        FrameObject * single_instance_27_84_1; single_instance_27_84_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 32), parent->layer);
                if (single_instance_27_84_1 == NULL)
                    single_instance_27_84_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_27_84_1))->set_x(((Active*)single_instance_27_84_1)->get_x()+30-randrange(21));
        ((Active*)((Active*)single_instance_27_84_1))->set_y(((Active*)single_instance_27_84_1)->get_y()-30+randrange(61));
        ((Active*)((Active*)single_instance_27_84_1))->set_scale(0.5+randrange(50)*0.01);
        ((Active*)((Active*)single_instance_27_84_1))->force_speed(35);
    }
    event_27_84_end: ;
}
void Frames::event_func_20621()
{
    // event 28_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (500))) goto event_28_84_end;
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        FrameObject * single_instance_28_84_0; single_instance_28_84_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_spacedebris_4145(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_28_84_0 == NULL)
                    single_instance_28_84_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_28_84_0))->force_frame(1);
        ((Active*)((Active*)single_instance_28_84_0))->set_direction(31);
        ((Active*)get_instance(spacedreadnought_4149_instances))->force_frame(2);
        ((Active*)((Active*)single_instance_28_84_0))->move_back();
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            if (parent == NULL) goto pos_end_28_84_1;
            ((Active*)get_instance(spaceheroship_3990_instances))->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_28_84_1: ;
        }
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.set(0, 2);
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.set(1, 1);
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.set(2, ((Active*)get_instance(spaceheroship_3990_instances))->get_x());
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.set(3, ((Active*)get_instance(spaceheroship_3990_instances))->get_y());
    }
    event_28_84_end: ;
}
void Frames::event_func_20622()
{
    // event 29_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (520))) goto event_29_84_end;
        ((Active*)get_instance(spaceheroship_3990_instances))->set_x(((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.get(2));
        ((Active*)get_instance(spaceheroship_3990_instances))->set_y(((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.get(3));
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.add(2, ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.get(0));
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.add(3, ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.get(1));
        ((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.set(0, get_max(((Active*)get_instance(spaceheroship_3990_instances))->alterables->values.get(0)-0.03, -3));
    }
    event_29_84_end: ;
}
void Frames::event_func_20623()
{
    // event 30_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(0)) == (0))) goto event_30_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (520))) goto event_30_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (720))) goto event_30_84_end;
        if (!((global_values->get(3)%math_helper%6) == (0))) goto event_30_84_end;
        {
            DynamicLoops::iterator dyn_it = (*loops).find(str_sound_explode_6+number_to_string(3+randrange(3)));
            if (dyn_it == (*loops).end()) goto dynamic_30_84_0_end;
            DynamicLoop & dyn_loop = dyn_it->second;
            (*dyn_loop.running) = true;
            int times = int(1);
            (*dyn_loop.index) = 0;
            while ((*dyn_loop.index) < times) {
                dyn_loop.callback(this);
                if (!(*dyn_loop.running)) break;
                (*dyn_loop.index)++;
            }
        }
        dynamic_30_84_0_end: ;
        FrameObject * single_instance_30_84_1; single_instance_30_84_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion06_312(parent->x + 0, parent->y + 32), parent->layer);
                if (single_instance_30_84_1 == NULL)
                    single_instance_30_84_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_30_84_1))->set_x(((Active*)single_instance_30_84_1)->get_x()+10-randrange(21));
        ((Active*)((Active*)single_instance_30_84_1))->set_y(((Active*)single_instance_30_84_1)->get_y()-30+randrange(61));
        ((Active*)((Active*)single_instance_30_84_1))->set_scale(0.5+randrange(50)*0.01);
        ((Active*)((Active*)single_instance_30_84_1))->force_speed(35);
    }
    event_30_84_end: ;
}
void Frames::event_func_20624()
{
    // event 31_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (720))) goto event_31_84_end;
        media.play_id(SOUND_COMMON_EXPLODE3_356, -1, 1);
        FrameObject * single_instance_31_84_0; single_instance_31_84_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(spacedreadnought_4149_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_spacedebris_4145(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_31_84_0 == NULL)
                    single_instance_31_84_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_31_84_0))->force_frame(2);
        ((Active*)((Active*)single_instance_31_84_0))->set_direction(24);
        ((Active*)get_instance(spacedreadnought_4149_instances))->force_frame(3);
        ((Active*)((Active*)single_instance_31_84_0))->move_back();
    }
    event_31_84_end: ;
}
void Frames::event_func_20625()
{
    // event 32_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (720))) goto event_32_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (820))) goto event_32_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.add(4, 0.005);
        ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.add(3, ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(4));
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_angle(((Active*)get_instance(spacedreadnought_4149_instances))->get_angle()-((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(4)*0.5, 0);
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_y(((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(3));
    }
    event_32_84_end: ;
}
void Frames::event_func_20626()
{
    // event 33_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (816))) goto event_33_84_end;
        ((Active*)get_instance(shockwave_56_instances))->set_visible(true);
        ((Active*)get_instance(shockwave_56_instances))->set_direction(8);
    }
    event_33_84_end: ;
}
void Frames::event_func_20627()
{
    // event 34_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (820))) goto event_34_84_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 2);
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
        {
            loop_s_running = true;
            int times = int(400);
            loop_s_index = 0;
            while (loop_s_index < times) {
                loop_s_84();
                if (!loop_s_running) break;
                loop_s_index++;
            }
        }
        media.play_id(SOUND_COMMON_BOSSEXPLODE_76, -1, 1);
        media.set_sample_frequency(SOUND_COMMON_BOSSEXPLODE_76, 22050);
    }
    event_34_84_end: ;
}
void Frames::event_func_20628()
{
    // event 36_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (820))) goto event_36_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) < (900))) goto event_36_84_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 6);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(1));
        }
    }
    event_36_84_end: ;
}
void Frames::event_func_20629()
{
    // event 37_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (820))) goto event_37_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->set_visible(false);
        active_93_instances.clear_selection();
        for (ObjectIterator it(active_93_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(2)+cos_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(3)-sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.2);
            ((Active*)*it)->set_scale(get_max(1+sin_deg(((Active*)*it)->alterables->values.get(0))*((Active*)*it)->alterables->values.get(1)*0.001, 0));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(4)*19+1)*0.05);
        }
    }
    event_37_84_end: ;
}
void Frames::event_func_20630()
{
    // event 38_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (820))) goto event_38_84_end;
        if (!((((Active*)get_instance(shockwave_56_instances))->get_frame()) >= (17))) goto event_38_84_end;
        ((Active*)get_instance(shockwave_56_instances))->alterables->values.add(0, 1);
        ((Active*)get_instance(shockwave_56_instances))->set_scale(1+((Active*)get_instance(shockwave_56_instances))->alterables->values.get(0)*0.01);
    }
    event_38_84_end: ;
}
void Frames::event_func_20631()
{
    // event 39_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) == (960))) goto event_39_84_end;
        levelcardfade_461_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_levelcardfade_461(0, 0), 2);
            levelcardfade_461_instances.add_back();
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(1280);
        }
    }
    event_39_84_end: ;
}
void Frames::event_func_20632()
{
    // event 40_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (960))) goto event_40_84_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(1, 1);
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(1), 0));
        }
    }
    event_40_84_end: ;
}
void Frames::event_func_20633()
{
    // event 41_84
    bool or_result_41_84 = false;
    bool or_temp_result_41_84_0 = false;
    {
        // group: Cutscene events
        spacedreadnought_4149_instances.clear_selection();
        for (ObjectIterator it(spacedreadnought_4149_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(1)) > (1110))) { it.deselect(); continue; }
        }
        if (!spacedreadnought_4149_instances.has_selection()) goto or_event_41_84_0_end;
        or_result_41_84 = true;
        or_temp_result_41_84_0 = true;
    }
    or_event_41_84_0_end: ;
    spacedreadnought_4149_instances.clear_saved_selection();
    if (or_temp_result_41_84_0) {
        spacedreadnought_4149_instances.save_selection();
    }
    // event 41_84
    bool or_temp_result_41_84_1 = false;
    {
        // group: Cutscene events
        spacedreadnought_4149_instances.clear_selection();
        for (ObjectIterator it(spacedreadnought_4149_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(1))) { it.deselect(); continue; }
        }
        if (!spacedreadnought_4149_instances.has_selection()) goto or_event_41_84_1_end;
        inputsp1_21_instances.clear_selection();
        for (ObjectIterator it(inputsp1_21_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(15)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) == (0))) { it.deselect(); continue; }
        }
        if (!inputsp1_21_instances.has_selection()) goto or_event_41_84_1_end;
        or_result_41_84 = true;
        or_temp_result_41_84_1 = true;
        or_event_41_84_1_end: ;
        inputsp1_21_instances.clear_saved_selection();
        if (or_temp_result_41_84_1) {
            inputsp1_21_instances.save_selection();
            spacedreadnought_4149_instances.save_selection();
        }
        if (!or_result_41_84) goto or_final_or_event_41_84_1_end;
        spacedreadnought_4149_instances.empty_selection();
        inputsp1_21_instances.empty_selection();
        if (or_temp_result_41_84_1) {
            inputsp1_21_instances.restore_selection();
        }
        if (or_temp_result_41_84_0 || or_temp_result_41_84_1) {
            spacedreadnought_4149_instances.restore_selection();
        }
        next_frame = 82 + 0;    
    
        global_values->set(4, 3);
        media.stop_samples();
    }
    or_final_or_event_41_84_1_end: ;
}
void Frames::event_func_20634()
{
    // event 42_84
    {
        // group: Cutscene events
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_42_84_end;
        if (!((((Active*)get_instance(spacedreadnought_4149_instances))->alterables->values.get(1)) > (50))) goto event_42_84_end;
        ((Active*)get_instance(spacedreadnought_4149_instances))->alterables->flags.enable(1);
    }
    event_42_84_end: ;
}
void Frames::event_func_20635()
{
    // event 43_84
    {
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(spacedreadnought_4149_instances))->get_x()+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(spacedreadnought_4149_instances))->get_y()+((Active*)*it)->alterables->values.get(1));
        }
    }
    event_43_84_end: ;
}
void Frames::event_func_20636()
{
    // event 44_84
    {
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (0))) { it.deselect(); continue; }
        }
        if (!liftoffjet_4150_instances.has_selection()) goto event_44_84_end;
        {
            SavedSelection extra_liftoffjet_4150_instances(liftoffjet_4150_instances);
            for (SavedIterator it(extra_liftoffjet_4150_instances); !it.end(); ++it) {
                foreach_instance_smoke = ((Active*)*it);
                foreach_smoke_84();
            }
        }
    }
    event_44_84_end: ;
}
void Frames::handle_frame_85_events()
{
    test_collisions_84();
    event_func_379();
    event_func_20596();
    event_func_20597();
    event_func_20598();
    event_func_20599();
    event_func_20600();
    event_func_20601();
    event_func_20602();
    event_func_20603();
    event_func_20604();
    event_func_20605();
    event_func_20606();
    event_func_20607();
    event_func_20608();
    event_func_20609();
    event_func_20610();
    event_func_20611();
    event_func_20612();
    event_func_20613();
    event_func_20614();
    event_func_20615();
    event_func_20616();
    event_func_20617();
    event_func_20618();
    event_func_20619();
    event_func_20620();
    event_func_20621();
    event_func_20622();
    event_func_20623();
    event_func_20624();
    event_func_20625();
    event_func_20626();
    event_func_20627();
    event_func_20628();
    event_func_20629();
    event_func_20630();
    event_func_20631();
    event_func_20632();
    event_func_20633();
    event_func_20634();
    event_func_20635();
    event_func_20636();
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
    event_func_224();
    if (!group_debug_mode_debugging_1) goto group_debug_mode_debugging_1_end;
    event_func_225();
    group_debug_mode_debugging_1_end: ;
    group_debug_mode_1_end: ;
    event_func_226();
    event_func_227();
    event_func_228();
    event_func_229();
}
void Frames::handle_frame_85_pre_events()
{
}
void Frames::event_func_20637()
{
    // event 2_84
    {
        titlestar_50_instances.clear_selection();
        spread_value(titlestar_50_instances, 1, 0);
        static FlatObjectList swap_2_84;
        swap_2_84.clear();
        for (ObjectIterator it(titlestar_50_instances); !it.end(); ++it) {
            swap_2_84.push_back(((Active*)*it));
        }
        for (ObjectIterator it(titlestar_50_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->alterables->values.get(1)%math_helper%21);
        }
        liftoffjet_4150_instances.clear_selection();
        for (ObjectIterator it(liftoffjet_4150_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x()-((Active*)get_instance(spacedreadnought_4149_instances))->get_x());
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->get_y()-((Active*)get_instance(spacedreadnought_4149_instances))->get_y());
        }
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left());
            ((Active*)*it)->set_y(frame_top());
            ((Active*)*it)->set_x_scale(global_values->get(16));
            ((Active*)*it)->set_y_scale(global_values->get(17));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(0);
        }
        swap_position(swap_2_84);
    }
    event_2_84_end: ;
}
void Frames::on_frame_85_start_events()
{
    event_func_20637();
    event_func_238();
    event_func_239();
    event_func_240();
    event_func_241();
}
void Frames::on_frame_85_init()
{
    index = 84;
    width = 426;
    height = 240;
    virtual_width = 426;
    virtual_height = 240;
    background_color = Color(0, 0, 0);
    timer_base = 0;
    reset_image_cache();
    flush_image_cache();
    layers.resize(3);
    layers[0].init(0, 1.0, 1.0, true, false, false);
    layers[1].init(1, 1.0, 1.0, true, false, false);
    layers[2].init(2, 1.0, 1.0, true, false, false);
    #ifdef CHOWDREN_HAS_MRT
    #endif
    #ifdef CHOWDREN_IS_3DS
    #endif
    static ObjectList* qualifier_0_instances[] = {&space_4147_instances, NULL};
    qualifier_0.set(1, &qualifier_0_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&effectsexplosion06_312_instances, NULL};
    qualifier_4.set(1, &qualifier_4_instances[0]);
    add_background_object(create_quickbackdrop3_4143(0, 0), 0);
    add_object(create_titlestar_4144(239, 226), 0);
    add_object(create_titlestar_4144(311, 186), 0);
    add_object(create_titlestar_4144(359, 154), 0);
    add_object(create_titlestar_4144(415, 218), 0);
    add_object(create_titlestar_4144(183, 170), 0);
    add_object(create_titlestar_4144(87, 218), 0);
    add_object(create_titlestar_4144(39, 154), 0);
    add_object(create_titlestar_4144(127, 186), 0);
    add_object(create_titlestar_4144(175, 138), 0);
    add_object(create_titlestar_4144(255, 138), 0);
    add_object(create_titlestar_4144(223, 162), 0);
    add_object(create_titlestar_4144(191, 114), 0);
    add_object(create_titlestar_4144(175, 106), 0);
    add_object(create_titlestar_4144(159, 122), 0);
    add_object(create_titlestar_4144(271, 90), 0);
    add_object(create_titlestar_4144(167, 58), 0);
    add_object(create_titlestar_4144(88, 50), 0);
    add_object(create_titlestar_4144(95, 114), 0);
    add_object(create_titlestar_4144(23, 18), 0);
    add_object(create_titlestar_4144(55, 50), 0);
    add_object(create_titlestar_4144(207, 10), 0);
    add_object(create_titlestar_4144(7, 106), 0);
    add_object(create_titlestar_4144(327, 50), 0);
    add_object(create_titlestar_4144(327, 90), 0);
    add_object(create_titlestar_4144(279, 50), 0);
    add_object(create_titlestar_4144(303, 34), 0);
    add_object(create_titlestar_4144(231, 34), 0);
    add_object(create_titlestar_4144(151, 42), 0);
    add_object(create_titlestar_4144(199, 74), 0);
    add_object(create_titlestar_4144(81, 37), 0);
    add_object(create_titlestar_4144(175, 34), 0);
    add_object(create_titlestar_4144(135, 74), 0);
    add_object(create_titlestar_4144(79, 98), 0);
    add_object(create_titlestar_4144(111, 146), 0);
    add_object(create_titlestar_4144(383, 58), 0);
    add_object(create_titlestar_4144(367, 18), 0);
    add_object(create_titlestar_4144(375, 114), 0);
    add_object(create_titlestar_4144(311, 138), 0);
    add_object(create_titlestar_4144(415, 122), 0);
    add_object(create_titlestar_4144(391, 146), 0);
    add_object(create_titlestar_4144(383, 106), 0);
    add_object(create_titlestar_4144(343, 122), 0);
    add_object(create_titlestar_4144(100, 62), 0);
    add_object(create_titlestar_4144(311, 74), 0);
    add_object(create_titlestar_4144(87, 130), 0);
    add_object(create_titlestar_4144(109, 72), 0);
    add_object(create_titlestar_4144(111, 178), 0);
    add_object(create_titlestar_4144(303, 2), 0);
    add_object(create_titlestar_4144(143, 10), 0);
    add_object(create_titlestar_4144(119, 42), 0);
    add_object(create_titlestar_4144(142, 94), 0);
    add_object(create_effectsdust01_332(-176, 194), 0);
    add_background_object(create_separatormasterobjects2_12(-232, -8), 1);
    add_background_object(create_space_4147(-16, 0), 1);
    add_object(create_spacebrevonmech_4148(-114, 278), 1);
    add_object(create_spaceheroship_3990(-90, 278), 1);
    add_object(create_playerinput_19(-216, 8), 1);
    add_object(create_masterinput_20(-192, 8), 1);
    add_object(create_inputsp1_21(-168, 8), 1);
    add_object(create_globalinputdata_22(-144, 8), 1);
    add_object(create_spacedreadnought_4149(213, 119), 1);
    add_object(create_spacedebris_4145(-101, 303), 1);
    add_object(create_liftoffjet_4150(194, 192), 1);
    add_object(create_liftoffjet_4150(232, 192), 1);
    add_object(create_mapdata_30(-184, 64), 1);
    add_object(create_windowcontrol_27(-72, 8), 1);
    add_object(create_mapdata2_32(-184, 72), 1);
    add_object(create_levelcardfade_461(-24, 0), 2);
    add_object(create_ringsparkle_139(-201, 231), 2);
    add_object(create_shockwave_4151(212, 119), 2);
    loop_sound_hurt1_running = false;
    loop_sound_hurt1_index = 0;
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
    loop_sound_jump_running = false;
    loop_sound_jump_index = 0;
    loop_sound_dig2_running = false;
    loop_sound_dig2_index = 0;
    loop_sound_dig3_running = false;
    loop_sound_dig3_index = 0;
    loop_sound_dig0_running = false;
    loop_sound_dig0_index = 0;
    loop_sound_dig1_running = false;
    loop_sound_dig1_index = 0;
    loop_sound_help_running = false;
    loop_sound_help_index = 0;
    loop_sound_explode8_running = false;
    loop_sound_explode8_index = 0;
    loop_sound_explode3_running = false;
    loop_sound_explode3_index = 0;
    loop_sound_hurt3_running = false;
    loop_sound_hurt3_index = 0;
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
    loop_import_deadzones_running = false;
    loop_import_deadzones_index = 0;
    loop_sound_stoppush_running = false;
    loop_sound_stoppush_index = 0;
    loop_stop_voices_running = false;
    loop_stop_voices_index = 0;
    loop_return_running = false;
    loop_return_index = 0;
    loop_record_inputs_running = false;
    loop_record_inputs_index = 0;
    loop_sound_attack1_running = false;
    loop_sound_attack1_index = 0;
    loop_sound_attack0_running = false;
    loop_sound_attack0_index = 0;
    loop_sound_attack3_running = false;
    loop_sound_attack3_index = 0;
    loop_sound_attack2_running = false;
    loop_sound_attack2_index = 0;
    loop_sound_idle7_running = false;
    loop_sound_idle7_index = 0;
    loop_sound_cantmoveit_running = false;
    loop_sound_cantmoveit_index = 0;
    loop_sound_uppercut3_running = false;
    loop_sound_uppercut3_index = 0;
    loop_sound_uppercut1_running = false;
    loop_sound_uppercut1_index = 0;
    loop_sound_uppercut0_running = false;
    loop_sound_uppercut0_index = 0;
    loop_restart_running = false;
    loop_restart_index = 0;
    loop_sound_go0_running = false;
    loop_sound_go0_index = 0;
    loop_sound_hurt2_running = false;
    loop_sound_hurt2_index = 0;
    loop_s_running = false;
    loop_s_index = 0;
    loop_sound_cyclone0_running = false;
    loop_sound_cyclone0_index = 0;
    loop_sound_explode2_running = false;
    loop_sound_explode2_index = 0;
    loop_sound_hurt0_running = false;
    loop_sound_hurt0_index = 0;
    static DynamicLoops frame_loops;
    loops = &frame_loops;
    static bool loops_initialized = false;
    if (!loops_initialized) {
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_84, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_84, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_84, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_84, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_84, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_84, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_84, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_84, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_84, &loop_sound_explode4_running, &loop_sound_explode4_index);
        loops_initialized = true;
    }
    group_sound_events_torque_1 = false;
    not_always_121_0 = loop_count;
    group_debug_mode_debugging_1 = false;
    once_condition_5_84 = false;
    group_sound_events_spade_1 = false;
    not_always_95_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_keyboard_mouse_1 = false;
    group_sound_events_milla_1 = false;
    not_always_103_0 = loop_count;
    group_sound_events_carol_1 = false;
    not_always_140_0 = loop_count;
    group_sound_events_lilac_1 = false;
    once_condition_25_84 = false;
    once_condition_138_0 = false;
    not_always_99_0 = loop_count;
    not_always_96_0 = loop_count;
    group_mac_controls_1 = false;
    not_always_98_0 = loop_count;
    once_condition_63_0 = false;
    group_debug_mode_1 = false;
    not_always_66_0 = loop_count;
    not_always_97_0 = loop_count;
    not_always_150_0 = loop_count;
    group_pc_controls_input_management_record_input_record_input_controller_1 = false;
    not_always_101_0 = loop_count;
    not_always_64_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_100_0 = loop_count;
    not_always_65_0 = loop_count;
    not_always_102_0 = loop_count;
    not_always_168_0 = loop_count;
    group_pc_controls_input_management_record_input_1 = false;
}
void Frames::event_func_20638()
{
    // event 146_85
    {
        if (!(group_main_engine_1)) goto event_146_85_end;
        enemyorb_4152_instances.clear_selection();
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyorb_4152_instances.has_selection()) goto event_146_85_end;
        FrameObject * single_instance_146_85_0; single_instance_146_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyorb_4152_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_146_85_0 == NULL)
                    single_instance_146_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_146_85_0))->set_direction(((Active*)get_single(enemyorb_4152_instances, default_active_instance))->alterables->values.get(25)*4);
        for (ObjectIterator it(enemyorb_4152_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_146_85_end: ;
}
void Frames::event_func_20639()
{
    // event 168_85
    {
        if (!(group_main_engine_1)) goto event_168_85_end;
        enemythundercarrier_4153_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemythundercarrier_4153_instances.has_selection()) goto event_168_85_end;
        FrameObject * single_instance_168_85_0; single_instance_168_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemythundercarrier_4153_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_168_85_0 == NULL)
                    single_instance_168_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_168_85_0))->set_direction(((Active*)get_single(enemythundercarrier_4153_instances, default_active_instance))->alterables->values.get(25)*4);
        for (ObjectIterator it(enemythundercarrier_4153_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_168_85_end: ;
}
void Frames::event_func_20640()
{
    // event 183_85
    {
        if (!(group_main_engine_1)) goto event_183_85_end;
        enemyufo_4156_instances.clear_selection();
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!enemyufo_4156_instances.has_selection()) goto event_183_85_end;
        FrameObject * single_instance_183_85_0; single_instance_183_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(enemyufo_4156_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_183_85_0 == NULL)
                    single_instance_183_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_183_85_0))->set_direction(((Active*)get_single(enemyufo_4156_instances, default_active_instance))->alterables->values.get(25)*4);
        for (ObjectIterator it(enemyufo_4156_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
    }
    event_183_85_end: ;
}
void Frames::event_func_20641()
{
    // event 250_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_250_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_250_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) >= (160))) goto event_250_85_end;
        bosscancerforcehandtop_4164_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) < (8))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandtop_4164_instances.has_selection()) goto event_250_85_end;
        FrameObject * single_instance_250_85_0; single_instance_250_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscancerforcehandtop_4164_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_250_85_0 == NULL)
                    single_instance_250_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_250_85_0))->set_direction(((Active*)get_single(bosscancerforcehandtop_4164_instances, default_active_instance))->alterables->values.get(25)*4);
        FrameObject * single_instance_250_85_1; single_instance_250_85_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscancerforcehandtop_4164_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcedebris_4159(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_250_85_1 == NULL)
                    single_instance_250_85_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_250_85_1))->force_frame(((Active*)get_single(bosscancerforcehandtop_4164_instances, default_active_instance))->alterables->values.get(25));
        for (ObjectIterator it(bosscancerforcehandtop_4164_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
        ((Active*)((Active*)single_instance_250_85_1))->move_back();
    }
    event_250_85_end: ;
}
void Frames::event_func_20642()
{
    // event 251_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_251_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_251_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) >= (180))) goto event_251_85_end;
        bosscancerforcehandbottom_4165_instances.clear_selection();
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) < (8))) { it.deselect(); continue; }
        }
        if (!bosscancerforcehandbottom_4165_instances.has_selection()) goto event_251_85_end;
        FrameObject * single_instance_251_85_0; single_instance_251_85_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscancerforcehandbottom_4165_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_251_85_0 == NULL)
                    single_instance_251_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_251_85_0))->set_direction(((Active*)get_single(bosscancerforcehandbottom_4165_instances, default_active_instance))->alterables->values.get(25)*4);
        FrameObject * single_instance_251_85_1; single_instance_251_85_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosscancerforcehandbottom_4165_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcedebris_4159(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_251_85_1 == NULL)
                    single_instance_251_85_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_251_85_1))->force_frame(((Active*)get_single(bosscancerforcehandbottom_4165_instances, default_active_instance))->alterables->values.get(25));
        for (ObjectIterator it(bosscancerforcehandbottom_4165_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(25, 1);
        }
        ((Active*)((Active*)single_instance_251_85_1))->move_back();
    }
    event_251_85_end: ;
}
void Frames::event_func_20643()
{
    // event 252_85
    {
        if (!(group_main_engine_1 && group_main_engine_bosses_boss_syntax_1 && group_main_engine_bosses_boss_syntax_boss_main_1)) goto event_252_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(10)) == (9))) goto event_252_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(11)) >= (200))) goto event_252_85_end;
        if (!((((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(25)) < (8))) goto event_252_85_end;
        FrameObject * single_instance_252_85_0; single_instance_252_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehead_4170_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectstinyexplosion_3746(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_252_85_0 == NULL)
                    single_instance_252_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_252_85_0))->set_direction(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(25)*4);
        FrameObject * single_instance_252_85_1; single_instance_252_85_1 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(bosscancerforcehead_4170_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_bosscancerforcedebris_4159(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_252_85_1 == NULL)
                    single_instance_252_85_1 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_252_85_1))->force_frame(((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.get(25));
        ((Active*)((Active*)single_instance_252_85_1))->move_back();
        ((Active*)get_instance(bosscancerforcehead_4170_instances))->alterables->values.add(25, 1);
    }
    event_252_85_end: ;
}
void Frames::loop_xplode_85()
{
    event_func_20638();
    event_func_20639();
    event_func_20640();
    event_func_20641();
    event_func_20642();
    event_func_20643();
}
void Frames::event_func_20644()
{
    // event 474_85
    {
        media.resume_samples();
        media.stop_samples();
        ((Counter*)get_instance(guicrystal_121_instances))->set(global_values->get(29));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(9, global_values->get(14));
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(14, global_values->get(15));
        set_lives(get_max(global_values->get(28)-1, 1));
    }
    event_474_85_end: ;
}
void Frames::loop_restart_85()
{
    event_func_86();
    event_func_20644();
}
void Frames::loop_wrapper_sound_explode8_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_sound_explode3_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode2_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode2_0();
}
void Frames::loop_wrapper_sound_explode1_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode1_0();
}
void Frames::loop_wrapper_sound_explode0_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_sound_explode5_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_85(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::event_func_20645()
{
    // event 14_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_14_85_end;
        playerdragontail_3983_instances.clear_selection();
        for (ObjectIterator it(playerdragontail_3983_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) == ((((Active*)foreach_instance_t)->alterables->values.get(0)+4)/math_helper/4))) { it.deselect(); continue; }
        }
        if (!playerdragontail_3983_instances.has_selection()) goto event_14_85_end;
        for (ObjectIterator it(playerdragontail_3983_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y(((Active*)foreach_instance_t)->get_y()+sin_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)-((Active*)*it)->alterables->values.get(0)*30)*(7+((Active*)*it)->alterables->values.get(0)));
        }
    }
    event_14_85_end: ;
}
void Frames::foreach_t_85()
{
    event_func_20645();
}
void Frames::event_func_20646()
{
    // event 115_85
    {
        if (!(group_main_engine_1)) goto event_115_85_end;
        if (!(((Active*)foreach_instance_f)->alterables->flags.is_on(6))) goto event_115_85_end;
        if (!(((Active*)foreach_instance_f)->test_directions(2))) goto event_115_85_end;
        if (!((((Active*)foreach_instance_f)->alterables->values.get(4)) == (1))) goto event_115_85_end;
        media.play_id(SOUND_COMMON_FIRECRACKER_432, -1, 1);
        FrameObject * single_instance_115_85_0; single_instance_115_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectflareburst_1788(((Active*)foreach_instance_f)->x + 0, ((Active*)foreach_instance_f)->y + 0), ((Active*)foreach_instance_f)->layer);
            if (single_instance_115_85_0 == NULL)
                single_instance_115_85_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_115_85_0))->set_angle(randrange(4)*90, 0);
    }
    event_115_85_end: ;
}
void Frames::event_func_20647()
{
    // event 116_85
    {
        if (!(group_main_engine_1)) goto event_116_85_end;
        if (!(((Active*)foreach_instance_f)->alterables->flags.is_on(6))) goto event_116_85_end;
        if (!(((Active*)foreach_instance_f)->test_directions(2))) goto event_116_85_end;
        if (!((((Active*)foreach_instance_f)->alterables->values.get(4)) == (7))) goto event_116_85_end;
        FrameObject * single_instance_116_85_0; single_instance_116_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectflareburst_1788(((Active*)foreach_instance_f)->x + 0, ((Active*)foreach_instance_f)->y + 0), ((Active*)foreach_instance_f)->layer);
            if (single_instance_116_85_0 == NULL)
                single_instance_116_85_0 = new_obj;
        }
        ((Active*)((Active*)single_instance_116_85_0))->set_x(((Active*)foreach_instance_f)->get_x()+cos_deg(randrange(360))*10);
        ((Active*)((Active*)single_instance_116_85_0))->set_y(((Active*)foreach_instance_f)->get_y()+sin_deg(randrange(360))*10);
        ((Active*)((Active*)single_instance_116_85_0))->set_angle(randrange(4)*90, 0);
        media.play_id(SOUND_COMMON_FIRECRACKER_432, -1, 1);
    }
    event_116_85_end: ;
}
void Frames::event_func_20648()
{
    // event 117_85
    {
        if (!(group_main_engine_1)) goto event_117_85_end;
        if (!(((Active*)foreach_instance_f)->alterables->flags.is_on(6))) goto event_117_85_end;
        if (!(((Active*)foreach_instance_f)->test_directions(2))) goto event_117_85_end;
        if (!((((Active*)foreach_instance_f)->alterables->values.get(4)) == (13))) goto event_117_85_end;
        FrameObject * single_instance_117_85_0; single_instance_117_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_effectflareburst_1788(((Active*)foreach_instance_f)->x + 0, ((Active*)foreach_instance_f)->y + 0), ((Active*)foreach_instance_f)->layer);
            if (single_instance_117_85_0 == NULL)
                single_instance_117_85_0 = new_obj;
        }
        ((Active*)((Active*)foreach_instance_f))->destroy();
        ((Active*)((Active*)single_instance_117_85_0))->set_x(((Active*)foreach_instance_f)->get_x()+cos_deg(randrange(360))*20);
        ((Active*)((Active*)single_instance_117_85_0))->set_y(((Active*)foreach_instance_f)->get_y()+sin_deg(randrange(360))*20);
        ((Active*)((Active*)single_instance_117_85_0))->set_angle(randrange(4)*90, 0);
        media.play_id(SOUND_COMMON_FIRECRACKER_432, -1, 1);
    }
    event_117_85_end: ;
}
void Frames::foreach_f_85()
{
    event_func_20646();
    event_func_20647();
    event_func_20648();
}
void Frames::event_func_20649()
{
    // event 82_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_tank_1)) goto event_82_85_end;
        ((Active*)((Active*)col_instance_2))->alterables->flags.enable(6);
    }
    event_82_85_end: ;
}
void Frames::col_0_85()
{
    event_func_20649();
}
void Frames::test_collisions_85()
{
    test_collisions(schmupfloor_4016_instances, playerfireball_4155_instances, 1, 1, (EventFunction)&Frames::col_0_85);
    ObjectList::iterator it1, it2;
}
void Frames::event_func_20650()
{
    // event 1_85
    {
        if (!(group_main_engine_1)) goto event_1_85_end;
        global_values->add(3, 1);
    }
    event_1_85_end: ;
}
void Frames::event_func_20651()
{
    // event 6_85
    {
        if (!(group_main_engine_1 && group_main_engine_startup_1)) goto event_6_85_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(((Active*)*it)->alterables->values.get(5));
        }
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(5, 4);
        }
    }
    event_6_85_end: ;
}
void Frames::event_func_20652()
{
    // event 7_85
    {
        if (!(group_main_engine_1 && group_main_engine_startup_1)) goto event_7_85_end;
        levelcardfade_461_instances.clear_selection();
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (128))) { it.deselect(); continue; }
        }
        if (!levelcardfade_461_instances.has_selection()) goto event_7_85_end;
        for (ObjectIterator it(levelcardfade_461_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
            group_main_engine_startup_1 = false;
    
    }
    event_7_85_end: ;
}
void Frames::event_func_20653()
{
    // event 12_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_12_85_end;
        FrameObject * single_instance_12_85_0; single_instance_12_85_0 = NULL;
        // select single: true false false
        {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            {
                FrameObject * new_obj;
                new_obj = add_object(create_dragontailpath_3995(parent->x + 8, parent->y + 0), parent->layer);
                if (single_instance_12_85_0 == NULL)
                    single_instance_12_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_12_85_0))->alterables->values.set(1, ((Active*)get_instance(playerdragonhead_3984_instances))->get_angle());
        ((Active*)((Active*)single_instance_12_85_0))->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1));
    }
    event_12_85_end: ;
}
void Frames::event_func_20654()
{
    // event 13_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_13_85_end;
        dragontailpath_3995_instances.clear_selection();
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->get_x()-8);
        }
        spread_value(dragontailpath_3995_instances, 0, 0);
        {
            SavedSelection extra_dragontailpath_3995_instances(dragontailpath_3995_instances);
            for (SavedIterator it(extra_dragontailpath_3995_instances); !it.end(); ++it) {
                foreach_instance_t = ((Active*)*it);
                foreach_t_85();
            }
        }
    }
    event_13_85_end: ;
}
void Frames::event_func_20655()
{
    // event 15_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_15_85_end;
        dragontailpath_3995_instances.clear_selection();
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (40))) { it.deselect(); continue; }
        }
        if (!dragontailpath_3995_instances.has_selection()) goto event_15_85_end;
        for (ObjectIterator it(dragontailpath_3995_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_15_85_end: ;
}
void Frames::event_func_20656()
{
    // event 16_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_16_85_end;
        playerdragontail_3983_instances.clear_selection();
        for (ObjectIterator it(playerdragontail_3983_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)-((Active*)*it)->alterables->values.get(0)*32);
            ((Active*)*it)->set_angle(cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)-((Active*)*it)->alterables->values.get(0)*30)*-10, 0);
        }
    }
    event_16_85_end: ;
}
void Frames::event_func_20657()
{
    // event 17_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_17_85_end;
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_y_scale(get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(4)*0.01, 1));
        }
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(2, (((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2)+5)%math_helper%360);
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0));
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)+sin_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*8);
        ((Active*)get_instance(playerdragonhead_3984_instances))->set_angle(cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*-10, 0);
        ((Active*)get_instance(playerdragonhead_3984_instances))->force_frame(get_ceil(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(3)));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(0, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(1, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6));
        {
            FrameObject * parent = ((Active*)get_instance(playerdragonhead_3984_instances));
            if (parent == NULL) goto pos_end_17_85_0;
            ((Active*)get_instance(playerdragonrider_3985_instances))->set_global_position(parent->get_action_x() + 0, parent->get_action_y() + 0);
            pos_end_17_85_0: ;
        }
    }
    event_17_85_end: ;
}
void Frames::event_func_20658()
{
    // event 18_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_18_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(0, get_max(frame_left()+40, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)));
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(1, get_max(40, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1), height-10)));
    }
    event_18_85_end: ;
}
void Frames::event_func_20659()
{
    // event 19_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_19_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)) <= (240))) goto event_19_85_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(5, get_min(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*((SystemBox*)*it)->alterables->values.get(6)*0.1, 0));
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*0.1, 0));
        }
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*0.1, 0));
        }
    }
    event_19_85_end: ;
}
void Frames::event_func_20660()
{
    // event 20_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_20_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)) > (240))) goto event_20_85_end;
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_20_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.sub(0, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5));
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.add(5, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*((SystemBox*)*it)->alterables->values.get(6)*0.1);
        }
        qualifier_20.clear_selection();
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*0.1, 0));
        }
        qualifier_17.clear_selection();
        for (QualifierIterator it(qualifier_17); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(3, get_max(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*0.1, 0));
        }
    }
    event_20_85_end: ;
}
void Frames::event_func_20661()
{
    // event 21_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_21_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (1))) goto event_21_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, get_max(3, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)));
    }
    event_21_85_end: ;
}
void Frames::event_func_20662()
{
    // event 22_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_22_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (1))) goto event_22_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, get_min(-3, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)));
    }
    event_22_85_end: ;
}
void Frames::event_func_20663()
{
    // event 23_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_23_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (1))) goto event_23_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, get_max(3, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)));
    }
    event_23_85_end: ;
}
void Frames::event_func_20664()
{
    // event 24_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_24_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (1))) goto event_24_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, get_min(-3, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)));
    }
    event_24_85_end: ;
}
void Frames::event_func_20665()
{
    // event 25_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_25_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(3)) == (0))) goto event_25_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) > (0))) goto event_25_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) <= (3))) goto event_25_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 0);
    }
    event_25_85_end: ;
}
void Frames::event_func_20666()
{
    // event 26_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_26_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(2)) == (0))) goto event_26_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) < (0))) goto event_26_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) >= (-3))) goto event_26_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 0);
    }
    event_26_85_end: ;
}
void Frames::event_func_20667()
{
    // event 27_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_27_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(1)) == (0))) goto event_27_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) > (0))) goto event_27_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) <= (3))) goto event_27_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, 0);
    }
    event_27_85_end: ;
}
void Frames::event_func_20668()
{
    // event 28_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_28_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(0)) == (0))) goto event_28_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) < (0))) goto event_28_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) >= (-3))) goto event_28_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, 0);
    }
    event_28_85_end: ;
}
void Frames::event_func_20669()
{
    // event 29_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_29_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_29_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(7)) <= (0))) goto event_29_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)*3);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(6, ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)*3);
    }
    event_29_85_end: ;
}
void Frames::event_func_20670()
{
    // event 30_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_30_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_30_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(7)) <= (0))) goto event_30_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) == (0))) goto event_30_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) == (0))) goto event_30_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.set(5, 9);
    }
    event_30_85_end: ;
}
void Frames::event_func_20671()
{
    // event 31_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_31_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(10)) == (1))) goto event_31_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(7)) <= (0))) goto event_31_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(7, 30);
    }
    event_31_85_end: ;
}
void Frames::event_func_20672()
{
    // event 32_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_32_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(7)) > (0))) goto event_32_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.sub(7, 1);
    }
    event_32_85_end: ;
}
void Frames::event_func_20673()
{
    // event 33_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_33_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) > (3))) goto event_33_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.sub(5, 0.2);
    }
    event_33_85_end: ;
}
void Frames::event_func_20674()
{
    // event 34_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_34_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(5)) < (-3))) goto event_34_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(5, 0.2);
    }
    event_34_85_end: ;
}
void Frames::event_func_20675()
{
    // event 35_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_35_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) > (3))) goto event_35_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.sub(6, 0.2);
    }
    event_35_85_end: ;
}
void Frames::event_func_20676()
{
    // event 36_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto event_36_85_end;
        if (!((((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(6)) < (-3))) goto event_36_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.add(6, 0.2);
    }
    event_36_85_end: ;
}
void Frames::event_func_20677()
{
    // event 37_85
    bool or_result_37_85 = false;
    bool or_temp_result_37_85_0 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto or_event_37_85_0_end;
        if (!((get_abs(((Active*)get_instance(playerdragonhead_3984_instances, default_active_instance))->alterables->values.get(5))) > (5))) goto or_event_37_85_0_end;
        or_result_37_85 = true;
        or_temp_result_37_85_0 = true;
    }
    or_event_37_85_0_end: ;
    // event 37_85
    bool or_temp_result_37_85_1 = false;
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1 && group_main_engine_player_player_ship_dragon_dragon_movement_1)) goto or_event_37_85_1_end;
        if (!((get_abs(((Active*)get_instance(playerdragonhead_3984_instances, default_active_instance))->alterables->values.get(6))) > (5))) goto or_event_37_85_1_end;
        or_result_37_85 = true;
        or_temp_result_37_85_1 = true;
        or_event_37_85_1_end: ;
        if (!or_result_37_85) goto or_final_or_event_37_85_1_end;
        FrameObject * single_instance_37_85_0; single_instance_37_85_0 = NULL;
        // select single: true false false
        playerdragonhead_3984_instances.clear_selection();
        for (ObjectIterator p_it(playerdragonhead_3984_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectspeedline_4161(parent->x + 72, parent->y + 0), parent->layer);
                if (single_instance_37_85_0 == NULL)
                    single_instance_37_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_37_85_0))->alterables->values.set(0, 96);
        ((Active*)((Active*)single_instance_37_85_0))->alterables->values.set(1, -32+randrange(65));
    }
    or_final_or_event_37_85_1_end: ;
}
void Frames::event_func_20678()
{
    // event 38_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_38_85_end;
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->blend_color.set_semi_transparency(get_max(128-((Active*)*it)->alterables->values.get(2)*8, 0));
        }
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(2, 1);
            ((Active*)*it)->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(0)+((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(1)+((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.sub(0, 20);
        }
    }
    event_38_85_end: ;
}
void Frames::event_func_20679()
{
    // event 39_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_39_85_end;
        effectspeedline_2024_instances.clear_selection();
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) > (30))) { it.deselect(); continue; }
        }
        if (!effectspeedline_2024_instances.has_selection()) goto event_39_85_end;
        for (ObjectIterator it(effectspeedline_2024_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_39_85_end: ;
}
void Frames::event_func_20680()
{
    // event 40_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_40_85_end;
        if (!((((Active*)get_instance(playerinput_19_instances))->alterables->values.get(11)) == (1))) goto event_40_85_end;
        if (!(((Active*)get_instance(playerdragonrider_3985_instances))->alterables->flags.is_off(6))) goto event_40_85_end;
        if (!((playerfireball_4155_instances.size()) < (9))) goto event_40_85_end;
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.enable(3);
    }
    event_40_85_end: ;
}
void Frames::event_func_20681()
{
    // event 41_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_41_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_on(3))) goto event_41_85_end;
        FrameObject * single_instance_41_85_0; single_instance_41_85_0 = NULL;
        // select single: true false false
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator p_it(playerholodragonlaser_4160_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerfireball_4155(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_41_85_0 == NULL)
                    single_instance_41_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_41_85_0))->alterables->values.set(0, ((Active*)single_instance_41_85_0)->get_x());
        ((Active*)((Active*)single_instance_41_85_0))->alterables->values.set(1, ((Active*)single_instance_41_85_0)->get_y());
        ((Active*)((Active*)single_instance_41_85_0))->alterables->values.set(2, 7);
        ((Active*)((Active*)single_instance_41_85_0))->alterables->values.set(3, -3);
    }
    event_41_85_end: ;
}
void Frames::event_func_20682()
{
    // event 42_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_42_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_on(3))) goto event_42_85_end;
        FrameObject * single_instance_42_85_0; single_instance_42_85_0 = NULL;
        // select single: true false false
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator p_it(playerholodragonlaser_4160_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerfireball_4155(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_42_85_0 == NULL)
                    single_instance_42_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_42_85_0))->alterables->values.set(0, ((Active*)single_instance_42_85_0)->get_x());
        ((Active*)((Active*)single_instance_42_85_0))->alterables->values.set(1, ((Active*)single_instance_42_85_0)->get_y());
        ((Active*)((Active*)single_instance_42_85_0))->alterables->values.set(2, 8);
        ((Active*)((Active*)single_instance_42_85_0))->alterables->values.set(3, 0);
    }
    event_42_85_end: ;
}
void Frames::event_func_20683()
{
    // event 43_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_43_85_end;
        if (!(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.is_on(3))) goto event_43_85_end;
        FrameObject * single_instance_43_85_0; single_instance_43_85_0 = NULL;
        // select single: true false false
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator p_it(playerholodragonlaser_4160_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_playerfireball_4155(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_43_85_0 == NULL)
                    single_instance_43_85_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_43_85_0))->alterables->values.set(0, ((Active*)single_instance_43_85_0)->get_x());
        ((Active*)((Active*)single_instance_43_85_0))->alterables->values.set(1, ((Active*)single_instance_43_85_0)->get_y());
        ((Active*)((Active*)single_instance_43_85_0))->alterables->values.set(2, 7);
        ((Active*)((Active*)single_instance_43_85_0))->alterables->values.set(3, 3);
        ((Active*)get_instance(playerdragonhead_3984_instances))->alterables->flags.disable(3);
    }
    event_43_85_end: ;
}
void Frames::event_func_20684()
{
    // event 44_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_44_85_end;
        playerholodragonlaser_4160_instances.clear_selection();
        for (ObjectIterator it(playerholodragonlaser_4160_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_instance(playerdragonhead_3984_instances))->get_x()+12);
            ((Active*)*it)->set_y(((Active*)get_instance(playerdragonhead_3984_instances))->get_y()+cos_deg(((Active*)get_instance(playerdragonhead_3984_instances))->alterables->values.get(2))*4+8);
        }
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(0));
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(1));
            ((Active*)*it)->alterables->values.add(0, ((Active*)*it)->alterables->values.get(2));
            ((Active*)*it)->alterables->values.add(1, ((Active*)*it)->alterables->values.get(3));
        }
    }
    event_44_85_end: ;
}
void Frames::event_func_20685()
{
    // event 45_85
    {
        if (!(group_main_engine_1 && group_main_engine_player_player_ship_dragon_1)) goto event_45_85_end;
        playerfireball_4155_instances.clear_selection();
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->is_near_border(-40))) { it.deselect(); continue; }
        }
        if (!playerfireball_4155_instances.has_selection()) goto event_45_85_end;
        for (ObjectIterator it(playerfireball_4155_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_45_85_end: ;
}
