#include "events.h"
#include "framedata.h"
#include "lists.h"
#include "media.h"
#include "objects.h"
#include "bitarray.h"

void Frames::event_func_13380()
{
    // event 1950_62
    {
        if (!(group_main_engine_1)) goto event_1950_62_end;
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(0)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparkyrightarm_3329_instances.has_selection()) goto event_1950_62_end;
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(0, 2);
        }
    }
    event_1950_62_end: ;
}
void Frames::event_func_13381()
{
    // event 1951_62
    {
        if (!(group_main_engine_1)) goto event_1951_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, (((Active*)*it)->alterables->values.get(5)+4)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)*it)->alterables->values.get(3)+sin_deg(((Active*)*it)->alterables->values.get(5))*20);
            ((Active*)*it)->set_y(((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5)*2)*-8);
        }
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(4)+sin_deg(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(5)*2)*-10);
        }
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_x());
            ((Active*)*it)->set_y(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(4)+sin_deg(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(5)*2)*-10);
        }
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)*-3+90+((Active*)*it)->alterables->values.get(0), 0);
        }
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)*3-90+((Active*)*it)->alterables->values.get(0), 0);
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, (((Active*)*it)->alterables->values.get(1)+356)%math_helper%360);
            ((Active*)*it)->set_x(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_x()+sin_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*30)*((Active*)*it)->alterables->values.get(0)*(30-((Active*)*it)->alterables->values.get(0)*2));
            ((Active*)*it)->set_y(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->get_y()+cos_deg(sin_deg(((Active*)*it)->alterables->values.get(1))*30)*((Active*)*it)->alterables->values.get(0)*(((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)-((Active*)get_single(bosssparky_3327_instances, it.current_index, default_active_instance))->alterables->values.get(6)*0.08));
        }
    }
    event_1951_62_end: ;
}
void Frames::event_func_13382()
{
    // event 1952_62
    {
        if (!(group_main_engine_1)) goto event_1952_62_end;
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->set_angle(((Active*)*it)->get_angle()-45, 0);
        }
        ((Active*)get_instance(bgarrowsign_3306_instances))->set_direction(bosssparky_3327_instances.size());
    }
    event_1952_62_end: ;
}
void Frames::event_func_13383()
{
    // event 1956_62
    {
        if (!(group_main_engine_1)) goto event_1956_62_end;
        bosssparkyplasmashot_3288_instances.clear_selection();
        qualifier_20.clear_selection();
        if (!check_overlap(bosssparkyplasmashot_3288_instances, qualifier_20)) goto event_1956_62_end;
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(2))) { it.deselect(); continue; }
        }
        if (!bosssparkyplasmashot_3288_instances.has_selection()) goto event_1956_62_end;
        for (QualifierIterator it(qualifier_20); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(2)) <= (0))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(5))) { it.deselect(); continue; }
            if (!(((Active*)(*it))->alterables->flags.is_off(6))) { it.deselect(); continue; }
        }
        if (!qualifier_20.has_selection()) goto event_1956_62_end;
        FrameObject * single_instance_1956_62_0; single_instance_1956_62_0 = pick_random(qualifier_20);
        if (single_instance_1956_62_0 == NULL) goto event_1956_62_end;
        ((Active*)((Active*)single_instance_1956_62_0))->alterables->values.set(2, 5);
        ((Active*)((Active*)single_instance_1956_62_0))->alterables->values.set(23, 0);
        ((Active*)((Active*)single_instance_1956_62_0))->alterables->values.set(24, 0);
        ((Active*)((Active*)single_instance_1956_62_0))->alterables->values.sub(0, 10);
        {
            ((Active*)single_instance_1956_62_0)->set_shader(Render::INVERT);
        }
        media.play_id(SOUND_COMMON_HIT_2_24, -1, 1);
        FrameObject * single_instance_1956_62_1; single_instance_1956_62_1 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(bosssparkyplasmashot_3288_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectsexplosion02_411(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_1956_62_1 == NULL)
                    single_instance_1956_62_1 = new_obj;
            }
        }
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1956_62_end: ;
}
void Frames::event_func_13384()
{
    // event 1957_62
    {
        if (!(group_main_engine_1)) goto event_1957_62_end;
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(13)) > (0))) { it.deselect(); continue; }
        }
        if (!bosssparky_3327_instances.has_selection()) goto event_1957_62_end;
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(13, 1);
        }
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(4, get_min(((Active*)get_instance(playerothers_123_instances))->alterables->values.get(4), 5));
        ((Active*)get_instance(playermovementvalues_245_instances))->alterables->values.set(6, 0);
    }
    event_1957_62_end: ;
}
void Frames::event_func_13385()
{
    // event 2162_62
    {
        if (!(group_main_engine_1)) goto event_2162_62_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(9, (frame_left()*((SystemBox*)*it)->alterables->values.get(3))+((SystemBox*)*it)->alterables->values.get(5));
            ((SystemBox*)*it)->alterables->values.set(10, (frame_top()*((SystemBox*)*it)->alterables->values.get(4))+((SystemBox*)*it)->alterables->values.get(2));
        }
        ((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.set(9, (frame_left()*((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.get(3))+((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.get(5));
        ((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.set(10, (frame_top()*((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.get(4))+((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.get(2));
    }
    event_2162_62_end: ;
}
void Frames::event_func_13386()
{
    // event 2163_62
    {
        if (!(group_main_engine_1)) goto event_2163_62_end;
        qualifier_0.clear_selection();
        for (QualifierIterator it(qualifier_0); !it.end(); ++it) {
            ((SystemBox*)*it)->set_global_position(frame_left()+(int(((SystemBox*)*it)->alterables->values.get(9)-frame_left())%math_helper%((SystemBox*)*it)->alterables->values.get(0)), ((SystemBox*)*it)->alterables->values.get(10));
        }
        ((SystemBox*)get_instance(levelbrevonship_3284_instances))->set_global_position(frame_left()+int(((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.get(9)-frame_left()), ((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.get(10));
    }
    event_2163_62_end: ;
}
void Frames::event_func_13387()
{
    // event 2164_62
    {
        if (!(group_main_engine_1)) goto event_2164_62_end;
        if (!((global_values->get(3)%math_helper%30) == (0))) goto event_2164_62_end;
        parallaxorb_3289_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_parallaxorb_3289(481, 126), 0);
            parallaxorb_3289_instances.add_back();
        }
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, frame_left()*0.25+450);
            ((Active*)*it)->alterables->values.set(4, randrange(500));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
    }
    event_2164_62_end: ;
}
void Frames::event_func_13388()
{
    // event 2165_62
    {
        if (!(group_main_engine_1)) goto event_2165_62_end;
        if (!((global_values->get(3)%math_helper%150) == (70))) goto event_2165_62_end;
        parallaxthundercarrierarm_3290_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_parallaxthundercarrierarm_3290(454, 131), 0);
            parallaxthundercarrierarm_3290_instances.add_back();
        }
        parallaxthundercarrier_3291_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_parallaxthundercarrier_3291(486, 133), 0);
            parallaxthundercarrier_3291_instances.add_back();
        }
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, frame_left()*0.25+450);
            ((Active*)*it)->alterables->values.set(4, randrange(500));
            ((Active*)*it)->alterables->values.set(5, randrange(360));
        }
    }
    event_2165_62_end: ;
}
void Frames::event_func_13389()
{
    // event 2166_62
    {
        if (!(group_main_engine_1)) goto event_2166_62_end;
        if (!((global_values->get(3)%math_helper%190) == (150))) goto event_2166_62_end;
        parallaxufo_3292_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_parallaxufo_3292(458, 141), 0);
            parallaxufo_3292_instances.add_back();
        }
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, frame_left()*0.25+450);
            ((Active*)*it)->alterables->values.set(4, randrange(500));
        }
    }
    event_2166_62_end: ;
}
void Frames::event_func_13390()
{
    // event 2167_62
    {
        if (!(group_main_engine_1)) goto event_2167_62_end;
        if (!((global_values->get(3)%math_helper%190) == (180))) goto event_2167_62_end;
        parallaxufo_3292_instances.empty_selection();
        // select single: false false false
        {
            FrameObject * new_obj;
            new_obj = add_object(create_parallaxufo_3292(458, 141), 0);
            parallaxufo_3292_instances.add_back();
        }
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, frame_left()*0.25+450);
            ((Active*)*it)->alterables->values.set(4, randrange(500));
        }
    }
    event_2167_62_end: ;
}
void Frames::event_func_13391()
{
    // event 2168_62
    {
        if (!(group_main_engine_1)) goto event_2168_62_end;
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.75+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(frame_top()*0.75+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.75+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(frame_top()*0.75+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
            ((Active*)*it)->alterables->values.add(4, ((Active*)*it)->alterables->values.get(6));
        }
    }
    event_2168_62_end: ;
}
void Frames::event_func_13392()
{
    // event 2169_62
    {
        if (!(group_main_engine_1)) goto event_2169_62_end;
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!enemyorbshot_3293_instances.has_selection()) goto event_2169_62_end;
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2169_62_end: ;
}
void Frames::event_func_13393()
{
    // event 2170_62
    {
        if (!(group_main_engine_1)) goto event_2170_62_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_2170_62_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2170_62_end: ;
}
void Frames::event_func_13394()
{
    // event 2171_62
    {
        if (!(group_main_engine_1)) goto event_2171_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+10))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2171_62_end;
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_2171_62_end: ;
}
void Frames::event_func_13395()
{
    // event 2172_62
    {
        if (!(group_main_engine_1)) goto event_2172_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.75+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(frame_top()*0.75+((Active*)*it)->alterables->values.get(4)+sin_deg(((Active*)*it)->alterables->values.get(5))*8);
            ((Active*)*it)->alterables->values.add(5, 5);
            ((Active*)*it)->alterables->values.sub(3, 2);
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_2172_62_end: ;
}
void Frames::event_func_13396()
{
    // event 2173_62
    {
        if (!(group_main_engine_1)) goto event_2173_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (30))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2173_62_end;
        FrameObject * single_instance_2173_62_0; single_instance_2173_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(parallaxorb_3289_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyorbshot_3293(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_2173_62_0 == NULL)
                    single_instance_2173_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2173_62_0))->alterables->values.set(3, ((Active*)get_single(parallaxorb_3289_instances, default_active_instance))->alterables->values.get(3)-12);
        ((Active*)((Active*)single_instance_2173_62_0))->alterables->values.set(4, ((Active*)get_single(parallaxorb_3289_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_2173_62_0))->alterables->values.set(6, 0.25);
    }
    event_2173_62_end: ;
}
void Frames::event_func_13397()
{
    // event 2174_62
    {
        if (!(group_main_engine_1)) goto event_2174_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (35))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2174_62_end;
        FrameObject * single_instance_2174_62_0; single_instance_2174_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(parallaxorb_3289_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyorbshot_3293(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_2174_62_0 == NULL)
                    single_instance_2174_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2174_62_0))->alterables->values.set(3, ((Active*)get_single(parallaxorb_3289_instances, default_active_instance))->alterables->values.get(3)-12);
        ((Active*)((Active*)single_instance_2174_62_0))->alterables->values.set(4, ((Active*)get_single(parallaxorb_3289_instances, default_active_instance))->alterables->values.get(4));
    }
    event_2174_62_end: ;
}
void Frames::event_func_13398()
{
    // event 2175_62
    {
        if (!(group_main_engine_1)) goto event_2175_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (40))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2175_62_end;
        FrameObject * single_instance_2175_62_0; single_instance_2175_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(parallaxorb_3289_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemyorbshot_3293(parent->x + -12, parent->y + 0), parent->layer);
                if (single_instance_2175_62_0 == NULL)
                    single_instance_2175_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2175_62_0))->alterables->values.set(3, ((Active*)get_single(parallaxorb_3289_instances, default_active_instance))->alterables->values.get(3)-12);
        ((Active*)((Active*)single_instance_2175_62_0))->alterables->values.set(4, ((Active*)get_single(parallaxorb_3289_instances, default_active_instance))->alterables->values.get(4));
        ((Active*)((Active*)single_instance_2175_62_0))->alterables->values.set(6, -0.25);
    }
    event_2175_62_end: ;
}
void Frames::event_func_13399()
{
    // event 2176_62
    {
        if (!(group_main_engine_1)) goto event_2176_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (60))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2176_62_end;
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(6, -60);
        }
    }
    event_2176_62_end: ;
}
void Frames::event_func_13400()
{
    // event 2177_62
    {
        if (!(group_main_engine_1)) goto event_2177_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2177_62_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_62();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
    }
    event_2177_62_end: ;
}
void Frames::event_func_13401()
{
    // event 2179_62
    {
        if (!(group_main_engine_1)) goto event_2179_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (7))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2179_62_end;
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2179_62_end: ;
}
void Frames::event_func_13402()
{
    // event 2180_62
    {
        if (!(group_main_engine_1)) goto event_2180_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+10))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2180_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_2180_62_end: ;
}
void Frames::event_func_13403()
{
    // event 2181_62
    {
        if (!(group_main_engine_1)) goto event_2181_62_end;
        if (!((parallaxthundercarrierarm_3290_instances.size()) > (parallaxthundercarrier_3291_instances.size()))) goto event_2181_62_end;
        parallaxthundercarrierarm_3290_instances.clear_selection();
        FrameObject * single_instance_2181_62_0; single_instance_2181_62_0 = pick_random(parallaxthundercarrierarm_3290_instances);
        if (single_instance_2181_62_0 == NULL) goto event_2181_62_end;
        ((Active*)((Active*)single_instance_2181_62_0))->destroy();
    }
    event_2181_62_end: ;
}
void Frames::event_func_13404()
{
    // event 2182_62
    {
        if (!(group_main_engine_1)) goto event_2182_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.75+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(frame_top()*0.75+((Active*)*it)->alterables->values.get(4));
        }
        parallaxthundercarrierarm_3290_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            FrameObject * parent = ((Active*)get_single(parallaxthundercarrier_3291_instances, it.current_index));
            if (parent == NULL) goto pos_end_2182_62_0;
            ((Active*)*it)->set_global_position(parent->get_x() + 0, parent->get_y() + 0);
            pos_end_2182_62_0: ;
        }
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            ((Active*)*it)->force_frame(((Active*)get_single(parallaxthundercarrier_3291_instances, it.current_index, default_active_instance))->alterables->values.get(5));
        }
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(7));
        }
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            ((Active*)*it)->move_back();
        }
    }
    event_2182_62_end: ;
}
void Frames::event_func_13405()
{
    // event 2183_62
    {
        if (!(group_main_engine_1)) goto event_2183_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2183_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, get_min(((Active*)*it)->alterables->values.get(7)+0.1, -1));
            ((Active*)*it)->alterables->values.set(5, 0);
        }
    }
    event_2183_62_end: ;
}
void Frames::event_func_13406()
{
    // event 2184_62
    {
        if (!(group_main_engine_1)) goto event_2184_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) >= (-1))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2184_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_2184_62_end: ;
}
void Frames::event_func_13407()
{
    // event 2185_62
    {
        if (!(group_main_engine_1)) goto event_2185_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2185_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)+0.5, 8));
        }
    }
    event_2185_62_end: ;
}
void Frames::event_func_13408()
{
    // event 2186_62
    {
        if (!(group_main_engine_1)) goto event_2186_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) >= (8))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2186_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
        FrameObject * single_instance_2186_62_0; single_instance_2186_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(parallaxthundercarrier_3291_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_enemythundercarrierbolt_3294(parent->x + 0, parent->y + 0), parent->layer);
                if (single_instance_2186_62_0 == NULL)
                    single_instance_2186_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2186_62_0))->alterables->values.set(3, ((Active*)get_single(parallaxthundercarrier_3291_instances, default_active_instance))->alterables->values.get(3));
        ((Active*)((Active*)single_instance_2186_62_0))->alterables->values.set(4, ((Active*)get_single(parallaxthundercarrier_3291_instances, default_active_instance))->alterables->values.get(4));
    }
    event_2186_62_end: ;
}
void Frames::event_func_13409()
{
    // event 2187_62
    {
        if (!(group_main_engine_1)) goto event_2187_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) > (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(6)) < (100))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2187_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_2187_62_end: ;
}
void Frames::event_func_13410()
{
    // event 2188_62
    {
        if (!(group_main_engine_1)) goto event_2188_62_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(4)) == (0))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_2188_62_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x()*0.25);
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y()*0.25);
        }
    }
    event_2188_62_end: ;
}
void Frames::event_func_13411()
{
    // event 2189_62
    {
        if (!(group_main_engine_1)) goto event_2189_62_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) < (40))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_2189_62_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_2189_62_end: ;
}
void Frames::event_func_13412()
{
    // event 2190_62
    {
        if (!(group_main_engine_1)) goto event_2190_62_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_y()) == (((Active*)get_instance(parallaxthundercarrier_3291_instances, default_active_instance))->get_y()))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) < (40))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_2190_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2190_62_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(7, 40);
        }
    }
    event_2190_62_end: ;
}
void Frames::event_func_13413()
{
    // event 2191_62
    {
        if (!(group_main_engine_1)) goto event_2191_62_end;
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(7)) == (40))) { it.deselect(); continue; }
        }
        if (!enemythundercarrierbolt_3294_instances.has_selection()) goto event_2191_62_end;
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
            ((Active*)*it)->set_direction(16);
            ((Active*)*it)->alterables->values.set(5, -6);
        }
    }
    event_2191_62_end: ;
}
void Frames::event_func_13414()
{
    // event 2192_62
    {
        if (!(group_main_engine_1)) goto event_2192_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (100))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2192_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(5, get_min(((Active*)*it)->alterables->values.get(5)-0.5, 0));
        }
    }
    event_2192_62_end: ;
}
void Frames::event_func_13415()
{
    // event 2193_62
    {
        if (!(group_main_engine_1)) goto event_2193_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (100))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(5)) <= (0))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2193_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
        }
    }
    event_2193_62_end: ;
}
void Frames::event_func_13416()
{
    // event 2194_62
    {
        if (!(group_main_engine_1)) goto event_2194_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (101))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2194_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.sub(7, 0.1);
        }
    }
    event_2194_62_end: ;
}
void Frames::event_func_13417()
{
    // event 2195_62
    {
        if (!(group_main_engine_1)) goto event_2195_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (101))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->get_x()) < (-48))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2195_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2195_62_end: ;
}
void Frames::event_func_13418()
{
    // event 2196_62
    {
        if (!(group_main_engine_1)) goto event_2196_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2196_62_end;
        media.play_id(SOUND_COMMON_EXPLODE2_98, -1, 1);
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_62();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
    }
    event_2196_62_end: ;
}
void Frames::event_func_13419()
{
    // event 2198_62
    {
        if (!(group_main_engine_1)) goto event_2198_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (7))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2198_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2198_62_end: ;
}
void Frames::event_func_13420()
{
    // event 2199_62
    {
        if (!(group_main_engine_1)) goto event_2199_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) > (width+10))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2199_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(1, 2);
        }
    }
    event_2199_62_end: ;
}
void Frames::event_func_13421()
{
    // event 2200_62
    {
        if (!(group_main_engine_1)) goto event_2200_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->set_x(frame_left()*0.75+((Active*)*it)->alterables->values.get(3));
            ((Active*)*it)->set_y(frame_top()*0.75+((Active*)*it)->alterables->values.get(4));
            ((Active*)*it)->alterables->values.add(3, ((Active*)*it)->alterables->values.get(5));
        }
    }
    event_2200_62_end: ;
}
void Frames::event_func_13422()
{
    // event 2201_62
    {
        if (!(group_main_engine_1)) goto event_2201_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2201_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_2201_62_end: ;
}
void Frames::event_func_13423()
{
    // event 2202_62
    {
        if (!(group_main_engine_1)) goto event_2202_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (0))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (25))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2202_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(5, -1);
        }
    }
    event_2202_62_end: ;
}
void Frames::event_func_13424()
{
    // event 2203_62
    {
        if (!(group_main_engine_1)) goto event_2203_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2203_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(7, 1);
        }
    }
    event_2203_62_end: ;
}
void Frames::event_func_13425()
{
    // event 2204_62
    {
        if (!(group_main_engine_1)) goto event_2204_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(6)) == (1))) { it.deselect(); continue; }
            if (!((((Active*)(*it))->alterables->values.get(7)) > (75))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2204_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.add(6, 1);
            ((Active*)*it)->alterables->values.set(7, 0);
            ((Active*)*it)->alterables->values.set(5, -8);
        }
        FrameObject * single_instance_2204_62_0; single_instance_2204_62_0 = NULL;
        // select single: true false false
        for (ObjectIterator p_it(parallaxufo_3292_instances); !p_it.end(); ++p_it) {
            FrameObject * parent = ((Active*)*p_it);
            {
                FrameObject * new_obj;
                new_obj = add_object(create_effectswhiteburst_5(parent->x + 8, parent->y + 0), parent->layer);
                if (single_instance_2204_62_0 == NULL)
                    single_instance_2204_62_0 = new_obj;
            }
        }
        ((Active*)((Active*)single_instance_2204_62_0))->set_x_scale(0.25);
    }
    event_2204_62_end: ;
}
void Frames::event_func_13426()
{
    // event 2205_62
    {
        if (!(group_main_engine_1)) goto event_2205_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(3)) < (-120))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2205_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2205_62_end: ;
}
void Frames::event_func_13427()
{
    // event 2206_62
    {
        if (!(group_main_engine_1)) goto event_2206_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!(((Active*)(*it))->alterables->flags.is_on(6))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2206_62_end;
        media.play_id(SOUND_COMMON_EXPLODE1_38, -1, 1);
        {
            loop_xplode_running = true;
            int times = int(8);
            loop_xplode_index = 0;
            while (loop_xplode_index < times) {
                loop_xplode_62();
                if (!loop_xplode_running) break;
                loop_xplode_index++;
            }
        }
    }
    event_2206_62_end: ;
}
void Frames::event_func_13428()
{
    // event 2208_62
    {
        if (!(group_main_engine_1)) goto event_2208_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->alterables->values.get(25)) >= (7))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2208_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2208_62_end: ;
}
void Frames::event_func_13429()
{
    // event 2209_62
    {
        if (!(group_main_engine_1)) goto event_2209_62_end;
        parallaxorb_3289_instances.clear_selection();
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!parallaxorb_3289_instances.has_selection()) goto event_2209_62_end;
        for (ObjectIterator it(parallaxorb_3289_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2209_62_end: ;
}
void Frames::event_func_13430()
{
    // event 2210_62
    {
        if (!(group_main_engine_1)) goto event_2210_62_end;
        parallaxthundercarrier_3291_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!parallaxthundercarrier_3291_instances.has_selection()) goto event_2210_62_end;
        for (ObjectIterator it(parallaxthundercarrier_3291_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2210_62_end: ;
}
void Frames::event_func_13431()
{
    // event 2211_62
    {
        if (!(group_main_engine_1)) goto event_2211_62_end;
        parallaxufo_3292_instances.clear_selection();
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            if (!((((Active*)(*it))->get_x()) < (frame_left()-50))) { it.deselect(); continue; }
        }
        if (!parallaxufo_3292_instances.has_selection()) goto event_2211_62_end;
        for (ObjectIterator it(parallaxufo_3292_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_2211_62_end: ;
}
void Frames::event_func_13432()
{
    // event 2212_62
    {
        if (!(group_pause_1)) goto event_2212_62_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto event_2212_62_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2212_62_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(8))) goto event_2212_62_end;
        if (!(((Active*)get_instance(player_389_instances))->alterables->flags.is_off(9))) goto event_2212_62_end;
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
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(brevonmechcharge_3325_instances))->stop_animation();
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickmagnetlauncherlight_3314_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncherlight_3314_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        parallaxthundercarrierarm_3290_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2212_62_end: ;
}
void Frames::event_func_13433()
{
    // event 2213_62
    bool or_result_2213_62 = false;
    bool or_temp_result_2213_62_0 = false;
    {
        if (!(group_pause_1)) goto or_event_2213_62_0_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(15)) == (1))) goto or_event_2213_62_0_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2213_62_0_end;
        or_result_2213_62 = true;
        or_temp_result_2213_62_0 = true;
    }
    or_event_2213_62_0_end: ;
    // event 2213_62
    bool or_temp_result_2213_62_1 = false;
    {
        if (!(group_pause_1)) goto or_event_2213_62_1_end;
        if (!((((Active*)get_instance(inputsp1_21_instances))->alterables->values.get(12)) == (1))) goto or_event_2213_62_1_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (3))) goto or_event_2213_62_1_end;
        if (!((((Active*)get_instance(crystal_456_instances))->alterables->values.get(0)) == (0))) goto or_event_2213_62_1_end;
        or_result_2213_62 = true;
        or_temp_result_2213_62_1 = true;
        or_event_2213_62_1_end: ;
        if (!or_result_2213_62) goto or_final_or_event_2213_62_1_end;
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
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(brevonmechcharge_3325_instances))->start_animation();
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickmagnetlauncherlight_3314_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncherlight_3314_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickantigravspawner_3320_instances.clear_selection();
        for (ObjectIterator it(gimmickantigravspawner_3320_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        bosssparkyplasmashot_3288_instances.clear_selection();
        for (ObjectIterator it(bosssparkyplasmashot_3288_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
        }
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyorbshot_3293_instances.clear_selection();
        for (ObjectIterator it(enemyorbshot_3293_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemythundercarrierbolt_3294_instances.clear_selection();
        for (ObjectIterator it(enemythundercarrierbolt_3294_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        parallaxthundercarrierarm_3290_instances.clear_selection();
        for (ObjectIterator it(parallaxthundercarrierarm_3290_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemyelite_2510_instances.clear_selection();
        for (ObjectIterator it(enemyelite_2510_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        gimmickfireball_1096_instances.clear_selection();
        for (ObjectIterator it(gimmickfireball_1096_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectwarning_1065_instances.clear_selection();
        for (ObjectIterator it(effectwarning_1065_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    or_final_or_event_2213_62_1_end: ;
}
void Frames::event_func_13434()
{
    // event 2228_62
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2228_62_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) != (0))) goto event_2228_62_end;
        if (not_always_2228_62 > loop_count) {
            not_always_2228_62 = loop_count + 2;
            goto event_2228_62_end;
        }
        not_always_2228_62 = loop_count + 2;
            group_main_engine_1 = false;
    
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
        ((Active*)get_instance(bubblenumbers_429_instances))->stop_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->stop(false);
            ((Active*)*it)->stop_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        ((Active*)get_instance(brevonmechcharge_3325_instances))->stop_animation();
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->stop_animation();
        }
    }
    event_2228_62_end: ;
}
void Frames::event_func_13435()
{
    // event 2229_62
    {
        // group: Slowdown Effect
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) > (0))) goto event_2229_62_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(2)%math_helper%((Active*)get_instance(guipause_453_instances))->alterables->values.get(1)) == (0))) goto event_2229_62_end;
        if (!((((Active*)get_instance(guipause_453_instances))->alterables->values.get(0)) == (0))) goto event_2229_62_end;
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
        ((Active*)get_instance(bubblenumbers_429_instances))->start_animation();
        generalwater_414_instances.clear_selection();
        for (ObjectIterator it(generalwater_414_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        hazardshockwave_1524_instances.clear_selection();
        for (ObjectIterator it(hazardshockwave_1524_instances); !it.end(); ++it) {
            ((Active*)*it)->get_movement()->start();
            ((Active*)*it)->start_animation();
        }
        effectbrevonmechwarning_3255_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning_3255_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechlaser_3254_instances.clear_selection();
        for (ObjectIterator it(brevonmechlaser_3254_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        ((Active*)get_instance(brevonmechcharge_3325_instances))->start_animation();
        enemytrooperlaser_2508_instances.clear_selection();
        for (ObjectIterator it(enemytrooperlaser_2508_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        enemymeteorrollerflame_2420_instances.clear_selection();
        for (ObjectIterator it(enemymeteorrollerflame_2420_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        effectsgroundspark_2025_instances.clear_selection();
        for (ObjectIterator it(effectsgroundspark_2025_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
        brevonmechbackground_2513_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackground_2513_instances); !it.end(); ++it) {
            ((Active*)*it)->start_animation();
        }
    }
    event_2229_62_end: ;
}
void Frames::handle_frame_63_events()
{
    test_collisions_62();
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
    event_func_13198();
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
    event_func_13199();
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
    event_func_13200();
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
    event_func_13201();
    event_func_13202();
    event_func_13203();
    event_func_13204();
    event_func_13205();
    event_func_13206();
    event_func_13207();
    event_func_13208();
    event_func_13209();
    event_func_13210();
    event_func_13211();
    event_func_13212();
    event_func_13213();
    event_func_13214();
    event_func_13215();
    event_func_13216();
    event_func_13217();
    event_func_13218();
    event_func_13219();
    event_func_13220();
    event_func_13221();
    event_func_13222();
    event_func_13223();
    event_func_13224();
    event_func_13225();
    event_func_13226();
    event_func_13227();
    event_func_13228();
    event_func_13229();
    event_func_13230();
    event_func_13231();
    event_func_13232();
    event_func_13233();
    event_func_13234();
    event_func_2990();
    event_func_2991();
    event_func_2992();
    event_func_2993();
    event_func_2994();
    event_func_10124();
    event_func_10125();
    event_func_10126();
    event_func_10127();
    event_func_10128();
    event_func_10129();
    event_func_10130();
    event_func_10131();
    event_func_10132();
    event_func_10133();
    event_func_10134();
    event_func_10135();
    event_func_10136();
    event_func_10137();
    event_func_10138();
    event_func_10139();
    event_func_10140();
    event_func_10141();
    event_func_10142();
    event_func_10143();
    event_func_10144();
    event_func_10145();
    event_func_10146();
    event_func_10147();
    event_func_10148();
    event_func_10149();
    event_func_10150();
    event_func_10151();
    event_func_10152();
    event_func_10153();
    event_func_10154();
    event_func_10155();
    event_func_10156();
    event_func_10157();
    event_func_10158();
    event_func_10159();
    event_func_10160();
    event_func_10161();
    event_func_10162();
    event_func_10163();
    event_func_10164();
    event_func_10165();
    event_func_10166();
    event_func_10167();
    event_func_10168();
    event_func_10169();
    event_func_10170();
    event_func_10171();
    event_func_10172();
    event_func_10173();
    event_func_10174();
    event_func_10175();
    event_func_10176();
    event_func_10177();
    event_func_10178();
    event_func_10179();
    event_func_10180();
    event_func_10181();
    event_func_10182();
    event_func_10183();
    event_func_10184();
    event_func_10185();
    event_func_10186();
    event_func_10187();
    event_func_10188();
    event_func_10189();
    event_func_10190();
    event_func_10191();
    event_func_10192();
    event_func_10193();
    event_func_10193();
    event_func_10193();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10194();
    event_func_10195();
    event_func_10196();
    event_func_10197();
    event_func_10198();
    event_func_10199();
    event_func_10200();
    event_func_10201();
    event_func_10202();
    event_func_10203();
    event_func_13235();
    event_func_10205();
    event_func_10206();
    event_func_10207();
    event_func_10208();
    event_func_10209();
    event_func_10210();
    event_func_10211();
    event_func_10212();
    event_func_10213();
    event_func_10808();
    event_func_10809();
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
    event_func_13236();
    event_func_7036();
    event_func_9537();
    event_func_9538();
    event_func_9539();
    event_func_9540();
    event_func_9541();
    event_func_9542();
    event_func_9543();
    event_func_9544();
    event_func_9545();
    event_func_9546();
    event_func_9547();
    event_func_13237();
    event_func_9549();
    event_func_9550();
    event_func_9551();
    event_func_9552();
    event_func_9553();
    event_func_9554();
    event_func_9555();
    event_func_9556();
    event_func_4384();
    event_func_4385();
    event_func_4386();
    event_func_4387();
    event_func_4388();
    event_func_4389();
    event_func_4390();
    event_func_4391();
    event_func_4392();
    event_func_4393();
    event_func_13238();
    event_func_4395();
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
    event_func_13239();
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
    event_func_13240();
    event_func_11460();
    event_func_11461();
    event_func_5240();
    event_func_5241();
    event_func_11462();
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
    event_func_13241();
    event_func_7708();
    event_func_7709();
    event_func_7710();
    event_func_7711();
    event_func_8705();
    event_func_8706();
    event_func_8707();
    event_func_8708();
    event_func_8709();
    event_func_8710();
    event_func_8711();
    event_func_8712();
    event_func_8713();
    event_func_8714();
    event_func_13242();
    event_func_8718();
    event_func_8719();
    event_func_8720();
    event_func_8721();
    event_func_8722();
    event_func_8723();
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
    event_func_9337();
    event_func_9338();
    event_func_9339();
    event_func_9340();
    event_func_9341();
    event_func_9342();
    event_func_9343();
    event_func_13243();
    event_func_9345();
    event_func_13244();
    event_func_13245();
    event_func_13165();
    event_func_10999();
    event_func_11000();
    event_func_13246();
    event_func_3808();
    event_func_2996();
    event_func_2997();
    event_func_2998();
    event_func_3286();
    event_func_6082();
    event_func_2491();
    event_func_13247();
    event_func_13248();
    event_func_13249();
    event_func_3000();
    event_func_13250();
    event_func_13251();
    event_func_3855();
    event_func_3856();
    event_func_3857();
    event_func_3858();
    event_func_3859();
    event_func_3860();
    event_func_13252();
    event_func_13253();
    if (!group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1) goto group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end;
    event_func_4173();
    event_func_4059();
    group_main_engine_level_specific_methods_cutscenes_from_previous_frame_1_end: ;
    event_func_13254();
    event_func_13255();
    if (!group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1) goto group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1_end;
    event_func_13256();
    event_func_13257();
    event_func_13258();
    event_func_13259();
    event_func_13260();
    event_func_13261();
    event_func_13262();
    event_func_13263();
    event_func_13264();
    event_func_13265();
    event_func_13266();
    event_func_13267();
    event_func_13268();
    event_func_13269();
    event_func_13270();
    event_func_13271();
    event_func_13272();
    event_func_13273();
    event_func_13274();
    event_func_13275();
    event_func_13276();
    event_func_13277();
    event_func_13278();
    event_func_13279();
    event_func_13280();
    event_func_13281();
    event_func_13282();
    event_func_13283();
    event_func_13284();
    event_func_13285();
    event_func_13286();
    event_func_13287();
    event_func_13288();
    event_func_13289();
    event_func_13290();
    event_func_13291();
    event_func_13292();
    event_func_13293();
    event_func_13294();
    event_func_13295();
    event_func_13296();
    event_func_13297();
    event_func_13298();
    event_func_13299();
    event_func_13300();
    event_func_13301();
    event_func_13302();
    event_func_13303();
    event_func_13304();
    event_func_13305();
    event_func_13306();
    event_func_13307();
    event_func_13308();
    event_func_13309();
    event_func_13310();
    event_func_13311();
    event_func_13312();
    event_func_13313();
    event_func_13314();
    event_func_13315();
    event_func_13316();
    event_func_13317();
    event_func_13318();
    event_func_13319();
    event_func_13320();
    event_func_13321();
    event_func_13322();
    event_func_13323();
    event_func_13324();
    event_func_13325();
    event_func_13326();
    event_func_13327();
    event_func_13328();
    event_func_13329();
    event_func_13330();
    event_func_13331();
    event_func_13332();
    event_func_13333();
    event_func_13334();
    event_func_13335();
    event_func_13336();
    event_func_13337();
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1_end: ;
    event_func_13338();
    event_func_13090();
    event_func_13339();
    event_func_13340();
    event_func_13341();
    event_func_13092();
    event_func_13093();
    event_func_13094();
    event_func_13342();
    event_func_13343();
    event_func_13344();
    event_func_13345();
    event_func_13098();
    event_func_13099();
    event_func_13346();
    event_func_13347();
    event_func_13348();
    event_func_13349();
    event_func_13350();
    if (!group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1) goto group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1_end;
    event_func_13351();
    event_func_13352();
    event_func_13353();
    event_func_13354();
    event_func_13355();
    event_func_13356();
    event_func_13357();
    event_func_13358();
    event_func_13359();
    event_func_13360();
    event_func_13361();
    event_func_13362();
    event_func_13363();
    event_func_13364();
    event_func_13365();
    event_func_13366();
    event_func_13367();
    event_func_13368();
    event_func_13369();
    event_func_13370();
    event_func_13371();
    event_func_13372();
    event_func_13373();
    event_func_13374();
    group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1_end: ;
    event_func_13375();
    event_func_13376();
    event_func_13377();
    event_func_13378();
    event_func_13379();
    event_func_13380();
    event_func_13381();
    event_func_13382();
    event_func_13383();
    event_func_13384();
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
    event_func_13385();
    event_func_13386();
    event_func_13387();
    event_func_13388();
    event_func_13389();
    event_func_13390();
    event_func_13391();
    event_func_13392();
    event_func_13393();
    event_func_13394();
    event_func_13395();
    event_func_13396();
    event_func_13397();
    event_func_13398();
    event_func_13399();
    event_func_13400();
    event_func_13401();
    event_func_13402();
    event_func_13403();
    event_func_13404();
    event_func_13405();
    event_func_13406();
    event_func_13407();
    event_func_13408();
    event_func_13409();
    event_func_13410();
    event_func_13411();
    event_func_13412();
    event_func_13413();
    event_func_13414();
    event_func_13415();
    event_func_13416();
    event_func_13417();
    event_func_13418();
    event_func_13419();
    event_func_13420();
    event_func_13421();
    event_func_13422();
    event_func_13423();
    event_func_13424();
    event_func_13425();
    event_func_13426();
    event_func_13427();
    event_func_13428();
    event_func_13429();
    event_func_13430();
    event_func_13431();
    group_main_engine_1_end: ;
    if (!group_pause_1) goto group_pause_1_end;
    event_func_13432();
    event_func_13433();
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
    event_func_4314();
    event_func_13434();
    event_func_13435();
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
void Frames::handle_frame_63_pre_events()
{
}
void Frames::event_func_13436()
{
    // event 2_62
    {
        if (!(group_main_engine_1)) goto event_2_62_end;
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(0, 1);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(1, 3000);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(24, 0);
        objectcodec_354_instances.clear_selection();
        spread_value(objectcodec_354_instances, 0, 97);
        ((Active*)get_instance(masterlevel_37_instances))->alterables->values.set(16, 45);
        ((Active*)get_instance(playerothers_123_instances))->alterables->values.set(7, 0);
    }
    event_2_62_end: ;
}
void Frames::event_func_13437()
{
    // event 19_62
    {
        if (!(group_main_engine_1)) goto event_19_62_end;
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(3, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece1_2_instances))->alterables->values.set(4, 0.96);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(3, 0.95);
        ((SystemBox*)get_instance(levelparallaxpiece2_467_instances))->alterables->values.set(4, 0.85);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(3, 0.98);
        ((SystemBox*)get_instance(levelparallaxpiece5_510_instances))->alterables->values.set(4, 0.92);
        levelparallaxpiece6_511_instances.clear_selection();
        for (ObjectIterator it(levelparallaxpiece6_511_instances); !it.end(); ++it) {
            ((SystemBox*)*it)->alterables->values.set(3, 0.75);
            ((SystemBox*)*it)->alterables->values.set(4, 0.75);
        }
        ((SystemBox*)get_instance(levelparallaxpiece0_465_instances))->alterables->values.set(6, -0.3);
        ((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.set(3, 0.96);
        ((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.set(4, 0.9);
        ((SystemBox*)get_instance(levelbrevonship_3284_instances))->alterables->values.set(5, ((SystemBox*)get_instance(levelbrevonship_3284_instances))->get_x());
    }
    event_19_62_end: ;
}
void Frames::event_func_13438()
{
    // event 1405_62
    {
        if (!(group_main_engine_1)) goto event_1405_62_end;
        levelcrankferris_3319_instances.clear_selection();
        spread_value(levelcrankferris_3319_instances, 0, 0);
        for (ObjectIterator it(levelcrankferris_3319_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, (((Active*)*it)->alterables->values.get(0)%math_helper%4)*90);
            ((Active*)*it)->alterables->values.set(0, (((Active*)*it)->alterables->values.get(0)%math_helper%4)*90);
        }
        levelcrankferrismask_3301_instances.clear_selection();
        for (ObjectIterator it(levelcrankferrismask_3301_instances); !it.end(); ++it) {
            ((Active*)*it)->move_front();
        }
    }
    event_1405_62_end: ;
}
void Frames::event_func_13439()
{
    // event 1422_62
    {
        if (!(group_main_engine_1)) goto event_1422_62_end;
        gimmickmagnetlauncher_3322_instances.clear_selection();
        for (ObjectIterator it(gimmickmagnetlauncher_3322_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(0, ((Active*)*it)->get_x());
        }
    }
    event_1422_62_end: ;
}
void Frames::event_func_13440()
{
    // event 1439_62
    {
        if (!(group_main_engine_1)) goto event_1439_62_end;
        hazardspinmine_3326_instances.clear_selection();
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
        }
        spread_value(hazardspinmine_3326_instances, 4, 0);
        for (ObjectIterator it(hazardspinmine_3326_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->alterables->values.get(4)*30);
            ((Active*)*it)->alterables->flags.enable(5);
        }
    }
    event_1439_62_end: ;
}
void Frames::event_func_13441()
{
    // event 1786_62
    {
        if (!(group_main_engine_1)) goto event_1786_62_end;
        if (!((global_values->get(4)) < (5))) goto event_1786_62_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_fadeout_music_2000_69);
            ((ArrayObject*)*it)->data.x_pos++;
        }
        controllermusic_128_instances.clear_selection();
        for (ObjectIterator it(controllermusic_128_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(12, 1);
            ((Active*)*it)->alterables->values.set(3, 0);
        }
        queuemusic_232_instances.clear_selection();
        for (ObjectIterator it(queuemusic_232_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->clear();
        }
    }
    event_1786_62_end: ;
}
void Frames::event_func_13442()
{
    // event 1787_62
    {
        if (!(group_main_engine_1)) goto event_1787_62_end;
        if (!((global_values->get(4)) >= (5))) goto event_1787_62_end;
        functionmusic_231_instances.clear_selection();
        for (ObjectIterator it(functionmusic_231_instances); !it.end(); ++it) {
            ((ArrayObject*)*it)->set_string(str_play_music_78+global_strings->get(5)+str__76);
            ((ArrayObject*)*it)->data.x_pos++;
        }
    }
    event_1787_62_end: ;
}
void Frames::event_func_13443()
{
    // event 1809_62
    {
        if (!(group_main_engine_1)) goto event_1809_62_end;
        brevonmechfrontwing_2546_instances.clear_selection();
        spread_value(brevonmechfrontwing_2546_instances, 1, 3);
        brevonmechbackwing_2538_instances.clear_selection();
        spread_value(brevonmechbackwing_2538_instances, 1, 3);
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(2, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(5, -1);
            ((Active*)*it)->alterables->flags.enable(4);
        }
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1809_62_end: ;
}
void Frames::event_func_13444()
{
    // event 1912_62
    {
        if (!(group_main_engine_1)) goto event_1912_62_end;
        if (!((global_values->get(4)) >= (5))) goto event_1912_62_end;
        brevonmechweakspot_3316_instances.clear_selection();
        for (ObjectIterator it(brevonmechweakspot_3316_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackwing_2538_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackwing_2538_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg_2539_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg_2539_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechabdomen_2540_instances.clear_selection();
        for (ObjectIterator it(brevonmechabdomen_2540_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontleg2_2541_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontleg2_2541_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontknee_2542_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontknee_2542_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechtorso_2543_instances.clear_selection();
        for (ObjectIterator it(brevonmechtorso_2543_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechhead_2544_instances.clear_selection();
        for (ObjectIterator it(brevonmechhead_2544_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontfoot_2545_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontfoot_2545_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontwing_2546_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontwing_2546_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontshoulder_2547_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontshoulder_2547_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontarm_2548_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontarm_2548_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechfrontclaw_2549_instances.clear_selection();
        for (ObjectIterator it(brevonmechfrontclaw_2549_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechaxle_2550_instances.clear_selection();
        for (ObjectIterator it(brevonmechaxle_2550_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechanimations_2551_instances.clear_selection();
        for (ObjectIterator it(brevonmechanimations_2551_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackshoulder_2514_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackshoulder_2514_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackclaw_2515_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackclaw_2515_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        brevonmechbackarm_2516_instances.clear_selection();
        for (ObjectIterator it(brevonmechbackarm_2516_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        effectbrevonmechwarning2_3315_instances.clear_selection();
        for (ObjectIterator it(effectbrevonmechwarning2_3315_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1912_62_end: ;
}
void Frames::event_func_13445()
{
    // event 1917_62
    {
        if (!(group_main_engine_1)) goto event_1917_62_end;
        if (!((global_values->get(4)) < (8))) goto event_1917_62_end;
        bosssparkytail_3305_instances.clear_selection();
        spread_value(bosssparkytail_3305_instances, 0, 1);
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->set_scale(1.1-((Active*)*it)->alterables->values.get(0)*0.1);
            ((Active*)*it)->alterables->values.set(1, ((Active*)*it)->alterables->values.get(0)*30);
        }
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->alterables->values.set(3, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->values.set(4, ((Active*)*it)->get_y());
            ((Active*)*it)->alterables->values.set(8, ((Active*)*it)->get_x());
            ((Active*)*it)->alterables->flags.enable(2);
            ((Active*)*it)->alterables->flags.enable(16);
        }
    }
    event_1917_62_end: ;
}
void Frames::event_func_13446()
{
    // event 1918_62
    {
        if (!(group_main_engine_1)) goto event_1918_62_end;
        if (!((global_values->get(4)) >= (8))) goto event_1918_62_end;
        bosssparkytail_3305_instances.clear_selection();
        for (ObjectIterator it(bosssparkytail_3305_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossbarrier_924_instances.clear_selection();
        for (ObjectIterator it(minibossbarrier_924_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        minibossrailing_923_instances.clear_selection();
        for (ObjectIterator it(minibossrailing_923_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssparky_3327_instances.clear_selection();
        for (ObjectIterator it(bosssparky_3327_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssparkyleftarm_3328_instances.clear_selection();
        for (ObjectIterator it(bosssparkyleftarm_3328_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
        bosssparkyrightarm_3329_instances.clear_selection();
        for (ObjectIterator it(bosssparkyrightarm_3329_instances); !it.end(); ++it) {
            ((Active*)*it)->destroy();
        }
    }
    event_1918_62_end: ;
}
void Frames::on_frame_63_start_events()
{
    event_func_4133();
    event_func_13436();
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
    event_func_13437();
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
    event_func_13438();
    event_func_13439();
    event_func_13440();
    event_func_10707();
    event_func_7062();
    event_func_9643();
    event_func_11500();
    event_func_7741();
    event_func_13182();
    event_func_9420();
    event_func_2686();
    event_func_13441();
    event_func_13442();
    event_func_3990();
    event_func_13443();
    event_func_13444();
    event_func_13445();
    event_func_13446();
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
void Frames::on_frame_63_init()
{
    index = 62;
    width = 12816;
    height = 2400;
    virtual_width = 12816;
    virtual_height = 2400;
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
    static ObjectList* qualifier_30_instances[] = {&brevonmechbackshoulder_2514_instances, &brevonmechbackclaw_2515_instances, &brevonmechbackarm_2516_instances, &brevonmechbackwing_2538_instances, &brevonmechfrontleg_2539_instances, &brevonmechabdomen_2540_instances, &brevonmechfrontleg2_2541_instances, &brevonmechfrontknee_2542_instances, &brevonmechtorso_2543_instances, &brevonmechhead_2544_instances, &brevonmechfrontfoot_2545_instances, &brevonmechfrontwing_2546_instances, &brevonmechfrontshoulder_2547_instances, &brevonmechfrontarm_2548_instances, &brevonmechfrontclaw_2549_instances, &brevonmechaxle_2550_instances, NULL};
    qualifier_30.set(16, &qualifier_30_instances[0]);
    static ObjectList* qualifier_8_instances[] = {&laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &bgplatform1_3318_instances, &levelcrankferris_3319_instances, NULL};
    qualifier_8.set(11, &qualifier_8_instances[0]);
    static ObjectList* qualifier_9_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &laddertop_357_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringupleft_432_instances, &yellowspringupright_433_instances, &yellowspringup_434_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringupright_438_instances, &redspringupleft_439_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &bgplatform1_3318_instances, &levelcrankferris_3319_instances, NULL};
    qualifier_9.set(34, &qualifier_9_instances[0]);
    static ObjectList* qualifier_20_instances[] = {&enemyturretus_938_instances, &enemysuperturretus_1828_instances, &enemyghettoshell_1971_instances, &enemyrotorbladedeath_2126_instances, &enemyrotorblade_2205_instances, &enemypelletizer_2304_instances, &enemybullfrag_2417_instances, &enemymeteorroller_2421_instances, &enemyelitemask_2511_instances, &enemysaucerdebris_2761_instances, &enemysaucer_2812_instances, &enemydrillsat_3281_instances, &parallaxorb_3289_instances, &parallaxthundercarrier_3291_instances, &parallaxufo_3292_instances, &brevonmechweakspot_3316_instances, &hazardspinmine_3326_instances, &bosssparky_3327_instances, NULL};
    qualifier_20.set(18, &qualifier_20_instances[0]);
    static ObjectList* qualifier_0_instances[] = {&levelparallaxpiece1_2_instances, &levelparallaxpiece5_510_instances, &levelparallaxpiece0_465_instances, &levelparallaxpiece2_467_instances, &levelparallaxpiece6_511_instances, NULL};
    qualifier_0.set(5, &qualifier_0_instances[0]);
    static ObjectList* qualifier_6_instances[] = {&sparkle1_300_instances, &sparkle2_333_instances, &sparkle3_334_instances, &sparkle4_335_instances, &sparkle5_336_instances, NULL};
    qualifier_6.set(5, &qualifier_6_instances[0]);
    static ObjectList* qualifier_7_instances[] = {&monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &yellowspringright_435_instances, &yellowspringleft_436_instances, &yellowspringdown_437_instances, &redspringup_440_instances, &redspringright_441_instances, &redspringleft_442_instances, &redspringdown_443_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &minibossbarrier_924_instances, &hazardspikesleft_560_instances, &hazardspikesdown_559_instances, &hazardspikesright_561_instances, &hazardspikesup_558_instances, &enemybullfragmask_2419_instances, &objectexplosiveblock_2708_instances, &bosshatchdoor_3317_instances, &bgloop1_3330_instances, &bgloop2_3331_instances, &bgloop3_3332_instances, NULL};
    qualifier_7.set(33, &qualifier_7_instances[0]);
    static ObjectList* qualifier_4_instances[] = {&objectcrystal_279_instances, &objectpetal_302_instances, &objectextralife_304_instances, &effectsexplosion01_309_instances, &objectkeystone_311_instances, &effectsexplosion06_312_instances, &effectsdebris_319_instances, &effectsspadeimage_321_instances, &monitorcrystals_324_instances, &monitorwoodshield_325_instances, &monitorearthshield_326_instances, &monitorwatershield_327_instances, &monitorfireshield_328_instances, &monitormetalshield_329_instances, &objectcodec_354_instances, &effectshade_356_instances, &playerskinmillatail_381_instances, &playerskincarolbike_382_instances, &monitorrings_407_instances, &monitorinvincibility_408_instances, &monitorcrate_409_instances, &monitor1up_410_instances, &playerskinsashhair_417_instances, &playerskinsash_418_instances, &playerskinspade_419_instances, &playerskincaroltail_444_instances, &playerskincarol_445_instances, &playerskinmilla_446_instances, &playerskintorquearm_449_instances, &playerskintorque_450_instances, &guiicon_452_instances, &objectfuel_528_instances, &monitorkeystone_562_instances, &monitorbomb_563_instances, &enemyturretus_938_instances, &enemysuperturretus_1828_instances, NULL};
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
    static ObjectList* qualifier_17_instances[] = {&mastergroupsb_385_instances, &enemyorbshot_3293_instances, &enemythundercarrierbolt_3294_instances, NULL};
    qualifier_17.set(3, &qualifier_17_instances[0]);
    static ObjectList* qualifier_10_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &bgloop2_3331_instances, &bgloop3_3332_instances, NULL};
    qualifier_10.set(5, &qualifier_10_instances[0]);
    static ObjectList* qualifier_11_instances[] = {&mastergroupsa_384_instances, &playeractionvaluesa_387_instances, &playeractionvaluesb_388_instances, &bgloop1_3330_instances, NULL};
    qualifier_11.set(4, &qualifier_11_instances[0]);
    static ObjectList* qualifier_12_instances[] = {&mastergroupsa_384_instances, &redspringupright_438_instances, NULL};
    qualifier_12.set(2, &qualifier_12_instances[0]);
    static ObjectList* qualifier_13_instances[] = {&mastergroupsa_384_instances, &levelcrankferris_3319_instances, NULL};
    qualifier_13.set(2, &qualifier_13_instances[0]);
    add_background_object(create_levelparallaxpiece0_3283(0, 0), 0);
    add_background_object(create_levelparallaxpiece1_3198(0, 0), 0);
    add_background_object(create_levelparallaxpiece5_3200(0, 224), 0);
    add_background_object(create_levelbrevonship_3284(560, 16), 0);
    add_background_object(create_levelparallaxpiece2_3285(0, 280), 0);
    add_object(create_brevonmechbackground_2513(180, 885), 1);
    add_background_object(create_bgfacility9_3267(8032, 1128), 2);
    add_background_object(create_bgfacility9_3267(8512, 1128), 2);
    add_background_object(create_bgfacility9_3267(6400, 1600), 2);
    add_background_object(create_bgfacility8_3295(3744, 1528), 2);
    add_background_object(create_bgfacility8_3295(3744, 1624), 2);
    add_background_object(create_bgfacility8_3295(4368, 1000), 2);
    add_background_object(create_bgfacility8_3295(4496, 1000), 2);
    add_background_object(create_bgfacility8_3295(4624, 1000), 2);
    add_background_object(create_bgfacility9_3267(4752, 1000), 2);
    add_background_object(create_bgfacility10_3269(4752, 968), 2);
    add_background_object(create_bgfacility9_3267(4336, 1000), 2);
    add_background_object(create_bgfacility10_3269(4336, 968), 2);
    add_background_object(create_bgfacility11_3268(-88, 960), 2);
    add_background_object(create_bgfacility11_3268(32, 1760), 2);
    add_background_object(create_bgfacility11_3268(32, 1696), 2);
    add_background_object(create_bgfacility11_3268(224, 1760), 2);
    add_background_object(create_bgfacility11_3268(224, 1696), 2);
    add_background_object(create_bgfacility11_3268(416, 1696), 2);
    add_background_object(create_bgfacility11_3268(416, 1760), 2);
    add_background_object(create_bgfacility9_3267(0, 1696), 2);
    add_background_object(create_bgfacility9_3267(96, 1696), 2);
    add_background_object(create_bgfacility9_3267(192, 1696), 2);
    add_background_object(create_bgfacility9_3267(288, 1696), 2);
    add_background_object(create_bgfacility9_3267(384, 1696), 2);
    add_background_object(create_bgfacility9_3267(480, 1696), 2);
    add_background_object(create_bgfacility8_3295(832, 1760), 2);
    add_background_object(create_bgfacility9_3267(800, 1760), 2);
    add_background_object(create_bgfacility10_3269(800, 1728), 2);
    add_background_object(create_bgfacility9_3267(960, 1760), 2);
    add_background_object(create_bgfacility10_3269(960, 1728), 2);
    add_background_object(create_bgfacility8_3295(1472, 1760), 2);
    add_background_object(create_bgfacility9_3267(1440, 1760), 2);
    add_background_object(create_bgfacility10_3269(1440, 1728), 2);
    add_background_object(create_bgfacility9_3267(1600, 1760), 2);
    add_background_object(create_bgfacility10_3269(1600, 1728), 2);
    add_background_object(create_bgfacility8_3295(2112, 1760), 2);
    add_background_object(create_bgfacility9_3267(2080, 1760), 2);
    add_background_object(create_bgfacility10_3269(2080, 1728), 2);
    add_background_object(create_bgfacility9_3267(2240, 1760), 2);
    add_background_object(create_bgfacility10_3269(2240, 1728), 2);
    add_background_object(create_bgfacility8_3295(2752, 1760), 2);
    add_background_object(create_bgfacility9_3267(2720, 1760), 2);
    add_background_object(create_bgfacility10_3269(2720, 1728), 2);
    add_background_object(create_bgfacility9_3267(2880, 1760), 2);
    add_background_object(create_bgfacility10_3269(2880, 1728), 2);
    add_background_object(create_bgfacility11_3268(3232, 1696), 2);
    add_background_object(create_bgfacility11_3268(3232, 1760), 2);
    add_background_object(create_bgfacility9_3267(3200, 1696), 2);
    add_background_object(create_bgfacility9_3267(3296, 1696), 2);
    add_background_object(create_bgfacility11_3268(3424, 1696), 2);
    add_background_object(create_bgfacility11_3268(3424, 1760), 2);
    add_background_object(create_bgfacility9_3267(3392, 1696), 2);
    add_background_object(create_bgfacility9_3267(3488, 1696), 2);
    add_background_object(create_bgfacility11_3268(3616, 1696), 2);
    add_background_object(create_bgfacility11_3268(3616, 1760), 2);
    add_background_object(create_bgfacility9_3267(3584, 1696), 2);
    add_background_object(create_bgfacility9_3267(3680, 1696), 2);
    add_background_object(create_bgplatformsupport1_3296(3720, 1536), 2);
    add_background_object(create_bgplatformsupport2_3297(3832, 1536), 2);
    add_background_object(create_bgfacility9_3267(4336, 1064), 2);
    add_background_object(create_bgcrankferrisbase_3298(4016, 1280), 2);
    add_background_object(create_bgcrankferrisbase_3298(4240, 1632), 2);
    add_background_object(create_bgfacility9_3267(4800, 1536), 2);
    add_background_object(create_bgfacility9_3267(4832, 1536), 2);
    add_background_object(create_bgfacility9_3267(4800, 1664), 2);
    add_background_object(create_bgfacility9_3267(4832, 1664), 2);
    add_background_object(create_bgplatformsupport2_3297(4736, 1536), 2);
    add_background_object(create_bgfacility9_3267(5152, 1728), 2);
    add_background_object(create_bgfacility9_3267(5184, 1728), 2);
    add_background_object(create_bgplatformsupport2_3297(5088, 1728), 2);
    add_background_object(create_bgplatformsupport2_3297(5088, 1728), 2);
    add_background_object(create_bgplatformsupport1_3296(5216, 1728), 2);
    add_background_object(create_bgplatformsupport2_3297(5792, 1320), 2);
    add_background_object(create_bgplatformsupport1_3296(5920, 1320), 2);
    add_background_object(create_bgfacility9_3267(5856, 1600), 2);
    add_background_object(create_bgfacility9_3267(5888, 1600), 2);
    add_background_object(create_bgfacility9_3267(5856, 1472), 2);
    add_background_object(create_bgfacility9_3267(5888, 1472), 2);
    add_background_object(create_bgplatformsupport1_3296(5392, 1232), 2);
    add_background_object(create_bgcrankferrisbase_3298(6416, 1664), 2);
    add_background_object(create_bgfacility8_3295(3744, 1720), 2);
    add_background_object(create_bgfacility9_3267(3712, 1696), 2);
    add_background_object(create_bgfacility9_3267(4056, 1376), 2);
    add_background_object(create_bgfacility9_3267(4152, 1376), 2);
    add_background_object(create_bgfacility11_3268(4088, 1440), 2);
    add_background_object(create_bgfacility11_3268(4088, 1376), 2);
    add_background_object(create_bgfacility9_3267(4056, 1248), 2);
    add_background_object(create_bgfacility9_3267(4152, 1248), 2);
    add_background_object(create_bgfacility11_3268(4088, 1312), 2);
    add_background_object(create_bgfacility9_3267(4416, 1536), 2);
    add_background_object(create_bgfacility9_3267(4576, 1536), 2);
    add_background_object(create_bgfacility8_3295(4448, 1536), 2);
    add_background_object(create_bgfacility10_3269(4416, 1504), 2);
    add_background_object(create_bgfacility10_3269(4576, 1504), 2);
    add_background_object(create_bgfacility8_3295(5728, 1600), 2);
    add_background_object(create_bgfacility8_3295(5920, 1600), 2);
    add_background_object(create_bgfacility8_3295(6048, 1600), 2);
    add_background_object(create_bgfacility9_3267(6176, 1600), 2);
    add_background_object(create_bgfacility10_3269(6176, 1568), 2);
    add_background_object(create_bgfacility9_3267(5152, 1568), 2);
    add_background_object(create_bgfacility9_3267(5184, 1568), 2);
    add_background_object(create_bgfacility9_3267(5152, 1440), 2);
    add_background_object(create_bgfacility9_3267(5184, 1440), 2);
    add_background_object(create_bgfacility9_3267(5152, 1312), 2);
    add_background_object(create_bgfacility9_3267(5184, 1312), 2);
    add_background_object(create_bgplatformsupport2_3297(5088, 1320), 2);
    add_background_object(create_bgplatformsupport1_3296(5216, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(4752, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(4800, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(4864, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(4928, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(4992, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5056, 1320), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5280, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5344, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5408, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5472, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5536, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5600, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5664, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5728, 944), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(5776, 944), 2);
    add_background_object(create_bgplatformsupport2_3297(6176, 1320), 2);
    add_background_object(create_bgplatformsupport1_3296(6432, 1408), 2);
    add_background_object(create_bgfacility9_3267(6400, 1472), 2);
    add_background_object(create_bgfacility9_3267(6400, 1728), 2);
    add_background_object(create_bgfacility9_3267(6400, 1344), 2);
    add_background_object(create_bgfacility9_3267(6304, 1472), 2);
    add_background_object(create_bgfacility9_3267(6304, 1600), 2);
    add_background_object(create_bgfacility9_3267(6304, 1728), 2);
    add_background_object(create_bgfacility9_3267(6304, 1344), 2);
    add_background_object(create_bgfacility11_3268(6336, 1792), 2);
    add_background_object(create_bgfacility11_3268(6336, 1728), 2);
    add_background_object(create_bgfacility11_3268(6336, 1664), 2);
    add_background_object(create_bgfacility11_3268(6336, 1600), 2);
    add_background_object(create_bgfacility11_3268(6336, 1536), 2);
    add_background_object(create_bgfacility11_3268(6336, 1472), 2);
    add_background_object(create_bgfacility11_3268(6336, 1408), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6576, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6640, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6704, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6768, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6832, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6960, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(7024, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(7088, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(7152, 1192), 2);
    add_background_object(create_bgplatformsupport2_3297(7200, 1448), 2);
    add_background_object(create_bgfacility9_3267(7264, 1448), 2);
    add_background_object(create_bgfacility9_3267(7360, 1448), 2);
    add_background_object(create_bgfacility11_3268(7296, 1512), 2);
    add_background_object(create_bgfacility11_3268(7296, 1448), 2);
    add_background_object(create_bgfacility9_3267(6744, 1600), 2);
    add_background_object(create_bgfacility9_3267(6744, 1728), 2);
    add_background_object(create_bgfacility9_3267(6648, 1600), 2);
    add_background_object(create_bgfacility9_3267(6648, 1728), 2);
    add_background_object(create_bgfacility11_3268(6680, 1792), 2);
    add_background_object(create_bgfacility11_3268(6680, 1728), 2);
    add_background_object(create_bgfacility11_3268(6680, 1664), 2);
    add_background_object(create_bgfacility11_3268(6680, 1600), 2);
    add_background_object(create_bgplatformsupport1_3296(6776, 1608), 2);
    add_background_object(create_bgplatformsupport2_3297(6584, 1608), 2);
    add_background_object(create_bgplatformsupport1_3296(6840, 1448), 2);
    add_background_object(create_bgfacility9_3267(7264, 1320), 2);
    add_background_object(create_bgfacility9_3267(7360, 1320), 2);
    add_background_object(create_bgfacility11_3268(7296, 1384), 2);
    add_background_object(create_bgfacility11_3268(7296, 1320), 2);
    add_background_object(create_bgplatformsupport1_3296(7392, 1448), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(6896, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(7184, 1192), 2);
    add_background_object(create_bgfacility9_3267(7328, 1768), 2);
    add_background_object(create_bgfacility9_3267(7328, 1640), 2);
    add_background_object(create_bgfacility9_3267(7424, 1768), 2);
    add_background_object(create_bgfacility9_3267(7424, 1640), 2);
    add_background_object(create_bgfacility11_3268(7360, 1832), 2);
    add_background_object(create_bgfacility11_3268(7360, 1768), 2);
    add_background_object(create_bgfacility11_3268(7360, 1704), 2);
    add_background_object(create_bgfacility9_3267(7840, 1768), 2);
    add_background_object(create_bgfacility9_3267(7840, 1640), 2);
    add_background_object(create_bgfacility9_3267(7936, 1768), 2);
    add_background_object(create_bgfacility9_3267(7936, 1640), 2);
    add_background_object(create_bgfacility11_3268(7872, 1832), 2);
    add_background_object(create_bgfacility11_3268(7872, 1768), 2);
    add_background_object(create_bgfacility11_3268(7872, 1704), 2);
    add_background_object(create_bgfacility8_3295(7456, 1768), 2);
    add_background_object(create_bgfacility8_3295(7584, 1768), 2);
    add_background_object(create_bgfacility8_3295(7712, 1768), 2);
    add_background_object(create_bgfacility9_3267(7328, 1896), 2);
    add_background_object(create_bgfacility9_3267(7424, 1896), 2);
    add_background_object(create_bgfacility11_3268(7360, 1960), 2);
    add_background_object(create_bgfacility11_3268(7360, 1896), 2);
    add_background_object(create_bgfacility9_3267(7328, 2024), 2);
    add_background_object(create_bgfacility9_3267(7424, 2024), 2);
    add_background_object(create_bgfacility11_3268(7360, 2088), 2);
    add_background_object(create_bgfacility11_3268(7360, 2024), 2);
    add_background_object(create_bgfacility9_3267(7328, 2152), 2);
    add_background_object(create_bgfacility9_3267(7424, 2152), 2);
    add_background_object(create_bgfacility11_3268(7360, 2216), 2);
    add_background_object(create_bgfacility11_3268(7360, 2152), 2);
    add_background_object(create_bgplatformsupport1_3296(7304, 1928), 2);
    add_background_object(create_bgplatformsupport2_3297(7416, 1928), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8048, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8112, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8176, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8240, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8304, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8368, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8432, 1704), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8464, 1704), 2);
    add_background_object(create_bgfacility9_3267(8672, 1896), 2);
    add_background_object(create_bgplatformsupport1_3296(8704, 1896), 2);
    add_background_object(create_bgfacility9_3267(8672, 2024), 2);
    add_background_object(create_bgfacility11_3268(8608, 2024), 2);
    add_background_object(create_bgfacility11_3268(8608, 2088), 2);
    add_background_object(create_bgfacility9_3267(8576, 1896), 2);
    add_background_object(create_bgfacility9_3267(8576, 2024), 2);
    add_background_object(create_bgfacility9_3267(8576, 1640), 2);
    add_background_object(create_bgfacility9_3267(8576, 1768), 2);
    add_background_object(create_bgfacility9_3267(8672, 1640), 2);
    add_background_object(create_bgfacility9_3267(8672, 1768), 2);
    add_background_object(create_bgcrankferrisbase_3298(8880, 1640), 2);
    add_background_object(create_bgfacility9_3267(8672, 1512), 2);
    add_background_object(create_bgfacility9_3267(8672, 1384), 2);
    add_background_object(create_bgfacility9_3267(8672, 1256), 2);
    add_background_object(create_bgfacility11_3268(8608, 1320), 2);
    add_background_object(create_bgfacility11_3268(8608, 1384), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8048, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8112, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8176, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8240, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8304, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8368, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8432, 1192), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8464, 1192), 2);
    add_background_object(create_bgfacility11_3268(7872, 1640), 2);
    add_background_object(create_bgfacility9_3267(7840, 1512), 2);
    add_background_object(create_bgfacility9_3267(7936, 1512), 2);
    add_background_object(create_bgfacility11_3268(7872, 1576), 2);
    add_background_object(create_bgfacility11_3268(7872, 1512), 2);
    add_background_object(create_bgfacility9_3267(7840, 1384), 2);
    add_background_object(create_bgfacility9_3267(7936, 1384), 2);
    add_background_object(create_bgfacility11_3268(7872, 1448), 2);
    add_background_object(create_bgfacility11_3268(7872, 1384), 2);
    add_background_object(create_bgfacility8_3295(8064, 1384), 2);
    add_background_object(create_bgfacility8_3295(8224, 1384), 2);
    add_background_object(create_bgfacility8_3295(8384, 1384), 2);
    add_background_object(create_bgfacility9_3267(8032, 1384), 2);
    add_background_object(create_bgfacility9_3267(8032, 1256), 2);
    add_background_object(create_bgfacility9_3267(8192, 1384), 2);
    add_background_object(create_bgfacility9_3267(8352, 1384), 2);
    add_background_object(create_bgfacility9_3267(8512, 1384), 2);
    add_background_object(create_bgfacility9_3267(8512, 1256), 2);
    add_background_object(create_bgfacility10_3269(8192, 1352), 2);
    add_background_object(create_bgfacility10_3269(8352, 1352), 2);
    add_background_object(create_bgplatformsupport2_3297(8992, 1448), 2);
    add_background_object(create_bgfacility11_3268(9056, 1384), 2);
    add_background_object(create_bgfacility11_3268(9056, 1320), 2);
    add_background_object(create_bgfacility9_3267(7840, 1128), 2);
    add_background_object(create_bgfacility9_3267(7936, 1128), 2);
    add_background_object(create_bgfacility11_3268(7872, 1192), 2);
    add_background_object(create_bgfacility11_3268(7872, 1128), 2);
    add_background_object(create_bgfacility9_3267(7840, 1000), 2);
    add_background_object(create_bgfacility9_3267(7936, 1000), 2);
    add_background_object(create_bgfacility11_3268(7872, 1064), 2);
    add_background_object(create_bgfacility11_3268(7872, 1000), 2);
    add_background_object(create_bgfacility11_3268(8544, 1320), 2);
    add_background_object(create_bgfacility11_3268(8544, 1384), 2);
    add_background_object(create_bgfacility9_3267(7840, 872), 2);
    add_background_object(create_bgfacility9_3267(7936, 872), 2);
    add_background_object(create_bgfacility11_3268(7872, 936), 2);
    add_background_object(create_bgfacility11_3268(7872, 872), 2);
    add_background_object(create_bgfacility10_3269(7840, 840), 2);
    add_background_object(create_bgfacility10_3269(7936, 840), 2);
    add_background_object(create_bgfacility8_3295(7712, 872), 2);
    add_background_object(create_bgfacility8_3295(7968, 872), 2);
    add_background_object(create_bgfacility9_3267(7680, 872), 2);
    add_background_object(create_bgfacility10_3269(7680, 840), 2);
    add_background_object(create_bgfacility9_3267(8096, 872), 2);
    add_background_object(create_bgfacility10_3269(8096, 776), 2);
    add_background_object(create_bgplatformsupport1_3296(7824, 1032), 2);
    add_background_object(create_bgplatformsupport2_3297(7920, 1032), 2);
    add_background_object(create_bgfacility11_3268(8608, 1448), 2);
    add_background_object(create_bgfacility11_3268(8544, 1448), 2);
    add_background_object(create_bgfacility8_3295(7456, 2056), 2);
    add_background_object(create_bgfacility8_3295(7584, 2056), 2);
    add_background_object(create_bgfacility8_3295(7712, 2056), 2);
    add_background_object(create_bgfacility8_3295(7840, 2056), 2);
    add_background_object(create_bgfacility8_3295(7968, 2056), 2);
    add_background_object(create_bgplatformsupport2_3297(8416, 648), 2);
    add_background_object(create_bgfacility9_3267(9152, 936), 2);
    add_background_object(create_bgfacility11_3268(9184, 1000), 2);
    add_background_object(create_bgfacility9_3267(9248, 936), 2);
    add_background_object(create_bgfacility11_3268(9184, 936), 2);
    add_background_object(create_bgfacility9_3267(9440, 1000), 2);
    add_background_object(create_bgfacility9_3267(9440, 1128), 2);
    add_background_object(create_bgfacility9_3267(9536, 1064), 2);
    add_background_object(create_bgfacility9_3267(9536, 1192), 2);
    add_background_object(create_bgfacility9_3267(9632, 1192), 2);
    add_background_object(create_bgfacility9_3267(9632, 1320), 2);
    add_background_object(create_bgfacility9_3267(9728, 1256), 2);
    add_background_object(create_bgfacility9_3267(9728, 1384), 2);
    add_background_object(create_bgfacility11_3268(9472, 1096), 2);
    add_background_object(create_bgfacility11_3268(9472, 1032), 2);
    add_background_object(create_bgfacility11_3268(9472, 1224), 2);
    add_background_object(create_bgfacility11_3268(9472, 1160), 2);
    add_background_object(create_bgfacility11_3268(9664, 1288), 2);
    add_background_object(create_bgfacility11_3268(9664, 1224), 2);
    add_background_object(create_bgfacility11_3268(9664, 1416), 2);
    add_background_object(create_bgfacility11_3268(9664, 1352), 2);
    add_background_object(create_bgfacility9_3267(12288, 1128), 2);
    add_background_object(create_bgfacility9_3267(12288, 1256), 2);
    add_background_object(create_bgfacility9_3267(12384, 1128), 2);
    add_background_object(create_bgfacility9_3267(12384, 1256), 2);
    add_background_object(create_bgfacility11_3268(12320, 1320), 2);
    add_background_object(create_bgfacility11_3268(12320, 1256), 2);
    add_background_object(create_bgfacility11_3268(12320, 1192), 2);
    add_background_object(create_bgfacility11_3268(12320, 1128), 2);
    add_background_object(create_bgfacility9_3267(12672, 1256), 2);
    add_background_object(create_bgfacility11_3268(12704, 1192), 2);
    add_background_object(create_bgfacility9_3267(12672, 1128), 2);
    add_background_object(create_bgfacility11_3268(12704, 1128), 2);
    add_background_object(create_bgfacility9_3267(12768, 1128), 2);
    add_background_object(create_bgfacility8_3295(12416, 1192), 2);
    add_background_object(create_bgfacility8_3295(12544, 1192), 2);
    add_background_object(create_bgfacility8_3295(10912, 1320), 2);
    add_background_object(create_bgfacility8_3295(11040, 1320), 2);
    add_background_object(create_bgfacility8_3295(11168, 1320), 2);
    add_background_object(create_bgfacility9_3267(11296, 1320), 2);
    add_background_object(create_bgfacility10_3269(11296, 1288), 2);
    add_background_object(create_bgfacility9_3267(11616, 1320), 2);
    add_background_object(create_bgfacility10_3269(11616, 1288), 2);
    add_background_object(create_bgfacility8_3295(11648, 1320), 2);
    add_background_object(create_bgfacility8_3295(11776, 1320), 2);
    add_background_object(create_bgfacility8_3295(11904, 1320), 2);
    add_background_object(create_bgfacility9_3267(12032, 1320), 2);
    add_background_object(create_bgfacility10_3269(12032, 1288), 2);
    add_background_object(create_bgfacility9_3267(7552, 1320), 2);
    add_background_object(create_bgfacility9_3267(7552, 1448), 2);
    add_background_object(create_bgfacility9_3267(7648, 1320), 2);
    add_background_object(create_bgfacility9_3267(7648, 1448), 2);
    add_background_object(create_bgfacility9_3267(7648, 1192), 2);
    add_background_object(create_bgfacility9_3267(7648, 1064), 2);
    add_background_object(create_bgfacility11_3268(7584, 1512), 2);
    add_background_object(create_bgfacility11_3268(7584, 1448), 2);
    add_background_object(create_bgfacility11_3268(7584, 1352), 2);
    add_background_object(create_bgfacility11_3268(7584, 1288), 2);
    add_background_object(create_bgfacility11_3268(7584, 1224), 2);
    add_background_object(create_bgfacility11_3268(7584, 1160), 2);
    add_background_object(create_bgfacility21_3300(7584, 1368), 2);
    add_background_object(create_bgplatformsupport1_3296(7584, 936), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8560, 448), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8624, 448), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8688, 448), 2);
    add_background_object(create_bgmagnetlauncherrail_3299(8736, 448), 2);
    add_background_object(create_bgplatformsupport2_3297(9056, 744), 2);
    add_background_object(create_bgfacility9_3267(8192, 744), 2);
    add_background_object(create_bgfacility10_3269(8192, 712), 2);
    add_background_object(create_bgfacility11_3268(8128, 936), 2);
    add_background_object(create_bgfacility11_3268(8128, 872), 2);
    add_background_object(create_bgfacility9_3267(8192, 872), 2);
    add_background_object(create_bgfacility9_3267(8096, 808), 2);
    add_background_object(create_bgfacility11_3268(8128, 808), 2);
    add_background_object(create_bgfacility11_3268(8224, 936), 2);
    add_background_object(create_bgfacility11_3268(8224, 872), 2);
    add_background_object(create_bgfacility11_3268(8224, 808), 2);
    add_background_object(create_bgfacility11_3268(8224, 744), 2);
    add_background_object(create_bgfacility9_3267(8288, 680), 2);
    add_background_object(create_bgfacility10_3269(8288, 648), 2);
    add_background_object(create_bgfacility9_3267(8288, 872), 2);
    add_background_object(create_bgfacility9_3267(8288, 744), 2);
    add_background_object(create_bgfacility9_3267(12768, 1192), 2);
    add_background_object(create_bgfacility11_3268(12704, 1256), 2);
    add_background_object(create_bgfacility9_3267(10304, 1704), 2);
    add_background_object(create_bgfacility9_3267(10528, 1512), 2);
    add_background_object(create_bgfacility9_3267(10144, 1704), 2);
    add_background_object(create_bgfacility9_3267(10144, 1576), 2);
    add_background_object(create_bgfacility8_3295(10176, 1704), 2);
    add_background_object(create_bgfacility9_3267(10304, 1576), 2);
    add_background_object(create_bgfacility10_3269(10528, 1480), 2);
    add_background_object(create_bgfacility9_3267(10560, 1384), 2);
    add_background_object(create_bgfacility10_3269(10560, 1352), 2);
    add_background_object(create_bgfacility9_3267(10688, 1192), 2);
    add_background_object(create_bgfacility9_3267(10688, 1064), 2);
    add_background_object(create_bgfacility9_3267(10592, 1192), 2);
    add_background_object(create_bgfacility9_3267(10592, 1064), 2);
    add_background_object(create_bgfacility11_3268(10624, 1192), 2);
    add_background_object(create_bgfacility11_3268(10624, 1256), 2);
    add_background_object(create_bgfacility11_3268(10624, 1128), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9528, 776), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9528, 632), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9656, 904), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9656, 760), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9784, 1000), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9784, 856), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9400, 688), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9400, 544), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9976, 1032), 2);
    add_background_object(create_bgsolarpanelpipe_3205(9976, 888), 2);
    add_background_object(create_bgsolarpanelpipe_3205(11384, 1352), 2);
    add_background_object(create_bgsolarpanelpipe_3205(11384, 1208), 2);
    add_background_object(create_bgsolarpanelpipe_3205(11512, 1360), 2);
    add_background_object(create_bgsolarpanelpipe_3205(11512, 1216), 2);
    add_background_object(create_bgsolarpanelpipe_3205(12152, 1352), 2);
    add_background_object(create_bgsolarpanelpipe_3205(12152, 1208), 2);
    add_background_object(create_bgsolarpanelpipe_3205(5944, 1160), 2);
    add_background_object(create_bgsolarpanelpipe_3205(6072, 1160), 2);
    add_background_object(create_bgsolarpanelpipe_3205(5944, 1016), 2);
    add_background_object(create_bgsolarpanelpipe_3205(6072, 1016), 2);
    add_background_object(create_bgfacility11_3268(9120, 1384), 2);
    add_background_object(create_bgfacility11_3268(9120, 1320), 2);
    add_background_object(create_bgfacility11_3268(9184, 1384), 2);
    add_background_object(create_bgfacility11_3268(9184, 1320), 2);
    add_object(create_enemylimiter_350(-491, 114), 2);
    add_object(create_sign_351(12984, 85), 2);
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
    add_object(create_brevonmechbackshoulder_2514(-220, 1780), 2);
    add_object(create_brevonmechbackclaw_2515(1191, -99), 2);
    add_object(create_brevonmechbackarm_2516(1261, -109), 2);
    add_object(create_levelcrankferrismask_3301(4032, 1168), 2);
    add_object(create_levelcrankferrismask2_3302(4032, 1200), 2);
    add_object(create_levelcrankferrismask3_3303(4032, 1232), 2);
    add_object(create_levelcrankferrismask4_3304(4032, 1264), 2);
    add_object(create_levelcrankferrismask_3301(3904, 1296), 2);
    add_object(create_levelcrankferrismask_3301(4160, 1296), 2);
    add_object(create_levelcrankferrismask_3301(4032, 1424), 2);
    add_object(create_levelcrankferrismask2_3302(4032, 1392), 2);
    add_object(create_levelcrankferrismask3_3303(4032, 1360), 2);
    add_object(create_levelcrankferrismask4_3304(4032, 1328), 2);
    add_object(create_levelcrankferrismask4_3304(4000, 1296), 2);
    add_object(create_levelcrankferrismask4_3304(4064, 1296), 2);
    add_object(create_levelcrankferrismask3_3303(3968, 1296), 2);
    add_object(create_levelcrankferrismask3_3303(4096, 1296), 2);
    add_object(create_levelcrankferrismask2_3302(3936, 1296), 2);
    add_object(create_levelcrankferrismask2_3302(4128, 1296), 2);
    add_object(create_levelcrankferrismask_3301(4256, 1520), 2);
    add_object(create_levelcrankferrismask2_3302(4256, 1552), 2);
    add_object(create_levelcrankferrismask3_3303(4256, 1584), 2);
    add_object(create_levelcrankferrismask4_3304(4256, 1616), 2);
    add_object(create_levelcrankferrismask_3301(4128, 1648), 2);
    add_object(create_levelcrankferrismask_3301(4384, 1648), 2);
    add_object(create_levelcrankferrismask_3301(4256, 1776), 2);
    add_object(create_levelcrankferrismask2_3302(4256, 1744), 2);
    add_object(create_levelcrankferrismask3_3303(4256, 1712), 2);
    add_object(create_levelcrankferrismask4_3304(4256, 1680), 2);
    add_object(create_levelcrankferrismask4_3304(4224, 1648), 2);
    add_object(create_levelcrankferrismask4_3304(4288, 1648), 2);
    add_object(create_levelcrankferrismask3_3303(4192, 1648), 2);
    add_object(create_levelcrankferrismask3_3303(4320, 1648), 2);
    add_object(create_levelcrankferrismask2_3302(4160, 1648), 2);
    add_object(create_levelcrankferrismask2_3302(4352, 1648), 2);
    add_object(create_levelcrankferrismask_3301(6432, 1552), 2);
    add_object(create_levelcrankferrismask2_3302(6432, 1584), 2);
    add_object(create_levelcrankferrismask3_3303(6432, 1616), 2);
    add_object(create_levelcrankferrismask4_3304(6432, 1648), 2);
    add_object(create_levelcrankferrismask_3301(6304, 1680), 2);
    add_object(create_levelcrankferrismask_3301(6560, 1680), 2);
    add_object(create_levelcrankferrismask_3301(6432, 1808), 2);
    add_object(create_levelcrankferrismask2_3302(6432, 1776), 2);
    add_object(create_levelcrankferrismask3_3303(6432, 1744), 2);
    add_object(create_levelcrankferrismask4_3304(6432, 1712), 2);
    add_object(create_levelcrankferrismask4_3304(6400, 1680), 2);
    add_object(create_levelcrankferrismask4_3304(6464, 1680), 2);
    add_object(create_levelcrankferrismask3_3303(6368, 1680), 2);
    add_object(create_levelcrankferrismask3_3303(6496, 1680), 2);
    add_object(create_levelcrankferrismask2_3302(6336, 1680), 2);
    add_object(create_levelcrankferrismask2_3302(6528, 1680), 2);
    add_object(create_levelcrankferrismask_3301(8896, 1528), 2);
    add_object(create_levelcrankferrismask2_3302(8896, 1560), 2);
    add_object(create_levelcrankferrismask3_3303(8896, 1592), 2);
    add_object(create_levelcrankferrismask4_3304(8896, 1624), 2);
    add_object(create_levelcrankferrismask_3301(8768, 1656), 2);
    add_object(create_levelcrankferrismask_3301(9024, 1656), 2);
    add_object(create_levelcrankferrismask_3301(8896, 1784), 2);
    add_object(create_levelcrankferrismask2_3302(8896, 1752), 2);
    add_object(create_levelcrankferrismask3_3303(8896, 1720), 2);
    add_object(create_levelcrankferrismask4_3304(8896, 1688), 2);
    add_object(create_levelcrankferrismask4_3304(8864, 1656), 2);
    add_object(create_levelcrankferrismask4_3304(8928, 1656), 2);
    add_object(create_levelcrankferrismask3_3303(8832, 1656), 2);
    add_object(create_levelcrankferrismask3_3303(8960, 1656), 2);
    add_object(create_levelcrankferrismask2_3302(8800, 1656), 2);
    add_object(create_levelcrankferrismask2_3302(8992, 1656), 2);
    add_object(create_bosssparkytail_3305(8288, 1488), 2);
    add_object(create_bosssparkytail_3305(8288, 1464), 2);
    add_object(create_bosssparkytail_3305(8288, 1440), 2);
    add_object(create_bosssparkytail_3305(8288, 1416), 2);
    add_object(create_bgarrowsign_3306(7584, 1368), 2);
    add_object(create_bgsolarpanel_3210(9519, 727), 2);
    add_object(create_bgsolarpanel_3210(9519, 663), 2);
    add_object(create_bgsolarpanel_3210(9647, 855), 2);
    add_object(create_bgsolarpanel_3210(9647, 791), 2);
    add_object(create_bgsolarpanel_3210(9775, 951), 2);
    add_object(create_bgsolarpanel_3210(9775, 887), 2);
    add_object(create_bgsolarpanel_3210(9391, 639), 2);
    add_object(create_bgsolarpanel_3210(9391, 575), 2);
    add_object(create_bgsolarpanel_3210(9967, 983), 2);
    add_object(create_bgsolarpanel_3210(9967, 919), 2);
    add_object(create_bgsolarpanel_3210(11375, 1303), 2);
    add_object(create_bgsolarpanel_3210(11375, 1239), 2);
    add_object(create_bgsolarpanel_3210(11503, 1311), 2);
    add_object(create_bgsolarpanel_3210(11503, 1247), 2);
    add_object(create_bgsolarpanel_3210(12143, 1303), 2);
    add_object(create_bgsolarpanel_3210(12143, 1239), 2);
    add_object(create_bgsolarpanel_3210(5935, 1111), 2);
    add_object(create_bgsolarpanel_3210(6063, 1111), 2);
    add_object(create_bgsolarpanel_3210(6063, 1047), 2);
    add_object(create_bgsolarpanel_3210(5935, 1047), 2);
    add_object(create_savedata_28(-104, 16), 2);
    add_object(create_windowcontrol_27(-432, 200), 2);
    add_background_object(create_bgfacility18_3307(10080, 1000), 3);
    add_background_object(create_bgfacility2_3273(10560, 1512), 3);
    add_background_object(create_bgfacility5_3276(10560, 1576), 3);
    add_background_object(create_bgfacility15_3308(9632, 904), 3);
    add_background_object(create_bgfacility15_3308(9568, 840), 3);
    add_background_object(create_bgfacility15_3308(9504, 776), 3);
    add_background_object(create_bgfacility15_3308(9440, 712), 3);
    add_background_object(create_bgfacility15_3308(9696, 1448), 3);
    add_background_object(create_bgfacility15_3308(9376, 1128), 3);
    add_background_object(create_bgfacility15_3308(9312, 1064), 3);
    add_background_object(create_bgfacility18_3307(9056, 1064), 3);
    add_background_object(create_bgrocks1_3213(8448, 1064), 3);
    add_background_object(create_bgfacility15_3308(8864, 1128), 3);
    add_background_object(create_bgfacility18_3307(8992, 1128), 3);
    add_background_object(create_bgfacility3_3272(8448, 1928), 3);
    add_background_object(create_bgrocks1_3213(7488, 616), 3);
    add_background_object(create_bgrocks1_3213(8064, 1000), 3);
    add_background_object(create_bgrocks1_3213(8320, 1000), 3);
    add_background_object(create_bgrocks1_3213(6240, 1000), 3);
    add_background_object(create_bgrocks1_3213(6240, 872), 3);
    add_background_object(create_bgrocks1_3213(7584, 1016), 3);
    add_background_object(create_bgfacility5_3276(7648, 1048), 3);
    add_background_object(create_bgfacility7_3277(7808, 1048), 3);
    add_background_object(create_bgfacility5_3276(7584, 1048), 3);
    add_background_object(create_bgfacility7_3277(7616, 1048), 3);
    add_background_object(create_bgrocks1_3213(8000, 1544), 3);
    add_background_object(create_bgrocks1_3213(8256, 1544), 3);
    add_background_object(create_bgrocks1_3213(8128, 1960), 3);
    add_background_object(create_bgfacility15_3308(5792, 1128), 3);
    add_background_object(create_bgfacility14_3279(5040, 1256), 3);
    add_background_object(create_bgfacility13_3278(5008, 1256), 3);
    add_background_object(create_bgrocks1_3213(5504, 1856), 3);
    add_background_object(create_bgrocks1_3213(5504, 1984), 3);
    add_background_object(create_bgrocks1_3213(5248, 1856), 3);
    add_background_object(create_bgrocks13_3212(4736, 1728), 3);
    add_background_object(create_bgrocks13_3212(4800, 1792), 3);
    add_background_object(create_bgrocks13_3212(4736, 1792), 3);
    add_background_object(create_bgrocks1_3213(4992, 1856), 3);
    add_background_object(create_bgrocks1_3213(4736, 1856), 3);
    add_background_object(create_bgrocks1_3213(4272, 1192), 3);
    add_background_object(create_bgrocks13_3212(1184, 1904), 3);
    add_background_object(create_bgrocks1_3213(256, 1504), 3);
    add_background_object(create_bgrocks1_3213(256, 1376), 3);
    add_background_object(create_bgrocks1_3213(4528, 1192), 3);
    add_background_object(create_bgfacility1_3271(4400, 1128), 3);
    add_background_object(create_bgfacility3_3272(4784, 1128), 3);
    add_background_object(create_bgfacility2_3273(4368, 1128), 3);
    add_background_object(create_bgfacility6_3274(4784, 1192), 3);
    add_background_object(create_bgfacility4_3275(4368, 1192), 3);
    add_background_object(create_bgfacility1_3271(4528, 1128), 3);
    add_background_object(create_bgfacility1_3271(4656, 1128), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6048, 1800), 3);
    add_background_object(create_bgrocks1_3213(256, 1888), 3);
    add_background_object(create_bgrocks1_3213(0, 1888), 3);
    add_background_object(create_bgfacility1_3271(0, 1824), 3);
    add_background_object(create_bgfacility3_3272(512, 1824), 3);
    add_background_object(create_bgfacility6_3274(512, 1888), 3);
    add_background_object(create_bgfacility7_3277(512, 1952), 3);
    add_background_object(create_bgfacility1_3271(128, 1824), 3);
    add_background_object(create_bgfacility1_3271(256, 1824), 3);
    add_background_object(create_bgfacility1_3271(384, 1824), 3);
    add_background_object(create_bgrocks1_3213(0, 1504), 3);
    add_background_object(create_bgrocks1_3213(0, 1376), 3);
    add_background_object(create_bgfacility13_3278(160, 1632), 3);
    add_background_object(create_bgfacility13_3278(-32, 1632), 3);
    add_background_object(create_bgfacility14_3279(320, 1632), 3);
    add_background_object(create_bgfacility14_3279(128, 1632), 3);
    add_background_object(create_bgfacility12_3280(192, 1632), 3);
    add_background_object(create_bgfacility12_3280(0, 1632), 3);
    add_background_object(create_bgfacility4_3275(160, 1568), 3);
    add_background_object(create_bgfacility4_3275(160, 1440), 3);
    add_background_object(create_bgfacility4_3275(-32, 1568), 3);
    add_background_object(create_bgfacility4_3275(-32, 1440), 3);
    add_background_object(create_bgfacility5_3276(160, 1504), 3);
    add_background_object(create_bgfacility5_3276(160, 1376), 3);
    add_background_object(create_bgfacility5_3276(-32, 1504), 3);
    add_background_object(create_bgfacility5_3276(-32, 1376), 3);
    add_background_object(create_bgfacility6_3274(320, 1568), 3);
    add_background_object(create_bgfacility6_3274(320, 1440), 3);
    add_background_object(create_bgfacility6_3274(128, 1568), 3);
    add_background_object(create_bgfacility6_3274(128, 1440), 3);
    add_background_object(create_bgfacility7_3277(320, 1504), 3);
    add_background_object(create_bgfacility7_3277(320, 1376), 3);
    add_background_object(create_bgfacility7_3277(128, 1504), 3);
    add_background_object(create_bgfacility7_3277(128, 1376), 3);
    add_background_object(create_bgfacility13_3278(352, 1632), 3);
    add_background_object(create_bgfacility14_3279(512, 1632), 3);
    add_background_object(create_bgfacility12_3280(384, 1632), 3);
    add_background_object(create_bgfacility4_3275(352, 1568), 3);
    add_background_object(create_bgfacility4_3275(352, 1440), 3);
    add_background_object(create_bgfacility5_3276(352, 1504), 3);
    add_background_object(create_bgfacility5_3276(352, 1376), 3);
    add_background_object(create_bgfacility6_3274(512, 1568), 3);
    add_background_object(create_bgfacility6_3274(512, 1440), 3);
    add_background_object(create_bgfacility7_3277(512, 1504), 3);
    add_background_object(create_bgfacility7_3277(512, 1376), 3);
    add_background_object(create_bgrocks1_3213(256, 1248), 3);
    add_background_object(create_bgrocks1_3213(0, 1248), 3);
    add_background_object(create_bgfacility4_3275(160, 1312), 3);
    add_background_object(create_bgfacility4_3275(-32, 1312), 3);
    add_background_object(create_bgfacility5_3276(160, 1248), 3);
    add_background_object(create_bgfacility5_3276(-32, 1248), 3);
    add_background_object(create_bgfacility6_3274(320, 1312), 3);
    add_background_object(create_bgfacility6_3274(128, 1312), 3);
    add_background_object(create_bgfacility7_3277(320, 1248), 3);
    add_background_object(create_bgfacility7_3277(128, 1248), 3);
    add_background_object(create_bgfacility4_3275(352, 1312), 3);
    add_background_object(create_bgfacility5_3276(352, 1248), 3);
    add_background_object(create_bgfacility6_3274(512, 1312), 3);
    add_background_object(create_bgfacility7_3277(512, 1248), 3);
    add_background_object(create_bgfacility13_3278(544, 1440), 3);
    add_background_object(create_bgfacility14_3279(576, 1440), 3);
    add_background_object(create_bgfacility7_3277(576, 1376), 3);
    add_background_object(create_bgfacility5_3276(544, 1376), 3);
    add_background_object(create_bgfacility7_3277(576, 1312), 3);
    add_background_object(create_bgfacility5_3276(544, 1312), 3);
    add_background_object(create_bgfacility7_3277(576, 1248), 3);
    add_background_object(create_bgfacility5_3276(544, 1248), 3);
    add_background_object(create_bgrocks1_3213(256, 2016), 3);
    add_background_object(create_bgrocks1_3213(0, 2016), 3);
    add_background_object(create_bgfacility6_3274(512, 2016), 3);
    add_background_object(create_bgfacility7_3277(512, 2080), 3);
    add_background_object(create_bgfacility2_3273(608, 1888), 3);
    add_background_object(create_bgfacility4_3275(608, 1952), 3);
    add_background_object(create_bgfacility5_3276(608, 2016), 3);
    add_background_object(create_bgfacility1_3271(640, 1888), 3);
    add_background_object(create_bgfacility1_3271(768, 1888), 3);
    add_background_object(create_bgfacility4_3275(608, 2080), 3);
    add_background_object(create_bgrocks1_3213(640, 1952), 3);
    add_background_object(create_bgrocks1_3213(640, 2080), 3);
    add_background_object(create_bgfacility5_3276(608, 2144), 3);
    add_background_object(create_bgfacility1_3271(896, 1888), 3);
    add_background_object(create_bgfacility1_3271(1024, 1888), 3);
    add_background_object(create_bgrocks1_3213(896, 1952), 3);
    add_background_object(create_bgrocks1_3213(896, 2080), 3);
    add_background_object(create_bgfacility3_3272(1152, 1888), 3);
    add_background_object(create_bgfacility6_3274(1152, 1952), 3);
    add_background_object(create_bgfacility7_3277(1152, 2016), 3);
    add_background_object(create_bgfacility6_3274(1152, 2080), 3);
    add_background_object(create_bgfacility7_3277(1152, 2144), 3);
    add_background_object(create_bgfacility2_3273(1248, 1888), 3);
    add_background_object(create_bgfacility4_3275(1248, 1952), 3);
    add_background_object(create_bgfacility5_3276(1248, 2016), 3);
    add_background_object(create_bgfacility1_3271(1280, 1888), 3);
    add_background_object(create_bgfacility1_3271(1408, 1888), 3);
    add_background_object(create_bgfacility4_3275(1248, 2080), 3);
    add_background_object(create_bgrocks1_3213(1280, 1952), 3);
    add_background_object(create_bgrocks1_3213(1280, 2080), 3);
    add_background_object(create_bgfacility5_3276(1248, 2144), 3);
    add_background_object(create_bgfacility1_3271(1536, 1888), 3);
    add_background_object(create_bgfacility1_3271(1664, 1888), 3);
    add_background_object(create_bgrocks1_3213(1536, 1952), 3);
    add_background_object(create_bgrocks1_3213(1536, 2080), 3);
    add_background_object(create_bgfacility3_3272(1792, 1888), 3);
    add_background_object(create_bgfacility6_3274(1792, 1952), 3);
    add_background_object(create_bgfacility7_3277(1792, 2016), 3);
    add_background_object(create_bgfacility6_3274(1792, 2080), 3);
    add_background_object(create_bgfacility7_3277(1792, 2144), 3);
    add_background_object(create_bgfacility2_3273(1888, 1888), 3);
    add_background_object(create_bgfacility4_3275(1888, 1952), 3);
    add_background_object(create_bgfacility5_3276(1888, 2016), 3);
    add_background_object(create_bgfacility1_3271(1920, 1888), 3);
    add_background_object(create_bgfacility1_3271(2048, 1888), 3);
    add_background_object(create_bgfacility4_3275(1888, 2080), 3);
    add_background_object(create_bgrocks1_3213(1920, 1952), 3);
    add_background_object(create_bgrocks1_3213(1920, 2080), 3);
    add_background_object(create_bgfacility5_3276(1888, 2144), 3);
    add_background_object(create_bgfacility1_3271(2176, 1888), 3);
    add_background_object(create_bgfacility1_3271(2304, 1888), 3);
    add_background_object(create_bgrocks1_3213(2176, 1952), 3);
    add_background_object(create_bgrocks1_3213(2176, 2080), 3);
    add_background_object(create_bgfacility3_3272(2432, 1888), 3);
    add_background_object(create_bgfacility6_3274(2432, 1952), 3);
    add_background_object(create_bgfacility7_3277(2432, 2016), 3);
    add_background_object(create_bgfacility6_3274(2432, 2080), 3);
    add_background_object(create_bgfacility7_3277(2432, 2144), 3);
    add_background_object(create_bgrocks1_3213(256, 2144), 3);
    add_background_object(create_bgrocks1_3213(0, 2144), 3);
    add_background_object(create_bgfacility6_3274(512, 2144), 3);
    add_background_object(create_bgfacility7_3277(512, 2208), 3);
    add_background_object(create_bgrocks1_3213(256, 2272), 3);
    add_background_object(create_bgrocks1_3213(0, 2272), 3);
    add_background_object(create_bgfacility6_3274(512, 2272), 3);
    add_background_object(create_bgfacility7_3277(512, 2336), 3);
    add_background_object(create_bgfacility4_3275(608, 2208), 3);
    add_background_object(create_bgrocks1_3213(640, 2208), 3);
    add_background_object(create_bgfacility5_3276(608, 2272), 3);
    add_background_object(create_bgrocks1_3213(896, 2208), 3);
    add_background_object(create_bgfacility6_3274(1152, 2208), 3);
    add_background_object(create_bgfacility7_3277(1152, 2272), 3);
    add_background_object(create_bgfacility4_3275(1248, 2208), 3);
    add_background_object(create_bgrocks1_3213(1280, 2208), 3);
    add_background_object(create_bgfacility5_3276(1248, 2272), 3);
    add_background_object(create_bgrocks1_3213(1536, 2208), 3);
    add_background_object(create_bgfacility6_3274(1792, 2208), 3);
    add_background_object(create_bgfacility7_3277(1792, 2272), 3);
    add_background_object(create_bgfacility4_3275(1888, 2208), 3);
    add_background_object(create_bgrocks1_3213(1920, 2208), 3);
    add_background_object(create_bgfacility5_3276(1888, 2272), 3);
    add_background_object(create_bgrocks1_3213(2176, 2208), 3);
    add_background_object(create_bgfacility6_3274(2432, 2208), 3);
    add_background_object(create_bgfacility7_3277(2432, 2272), 3);
    add_background_object(create_bgfacility4_3275(608, 2336), 3);
    add_background_object(create_bgrocks1_3213(640, 2336), 3);
    add_background_object(create_bgfacility5_3276(608, 2400), 3);
    add_background_object(create_bgrocks1_3213(896, 2336), 3);
    add_background_object(create_bgfacility6_3274(1152, 2336), 3);
    add_background_object(create_bgfacility7_3277(1152, 2400), 3);
    add_background_object(create_bgfacility4_3275(1248, 2336), 3);
    add_background_object(create_bgrocks1_3213(1280, 2336), 3);
    add_background_object(create_bgfacility5_3276(1248, 2400), 3);
    add_background_object(create_bgrocks1_3213(1536, 2336), 3);
    add_background_object(create_bgfacility6_3274(1792, 2336), 3);
    add_background_object(create_bgfacility7_3277(1792, 2400), 3);
    add_background_object(create_bgfacility4_3275(1888, 2336), 3);
    add_background_object(create_bgrocks1_3213(1920, 2336), 3);
    add_background_object(create_bgfacility5_3276(1888, 2400), 3);
    add_background_object(create_bgrocks1_3213(2176, 2336), 3);
    add_background_object(create_bgfacility6_3274(2432, 2336), 3);
    add_background_object(create_bgfacility7_3277(2432, 2400), 3);
    add_background_object(create_bgfacility2_3273(2528, 1888), 3);
    add_background_object(create_bgfacility4_3275(2528, 1952), 3);
    add_background_object(create_bgfacility5_3276(2528, 2016), 3);
    add_background_object(create_bgfacility1_3271(2560, 1888), 3);
    add_background_object(create_bgfacility1_3271(2688, 1888), 3);
    add_background_object(create_bgfacility4_3275(2528, 2080), 3);
    add_background_object(create_bgrocks1_3213(2560, 1952), 3);
    add_background_object(create_bgrocks1_3213(2560, 2080), 3);
    add_background_object(create_bgfacility5_3276(2528, 2144), 3);
    add_background_object(create_bgfacility1_3271(2816, 1888), 3);
    add_background_object(create_bgfacility1_3271(2944, 1888), 3);
    add_background_object(create_bgrocks1_3213(2816, 1952), 3);
    add_background_object(create_bgrocks1_3213(2816, 2080), 3);
    add_background_object(create_bgfacility3_3272(3072, 1888), 3);
    add_background_object(create_bgfacility6_3274(3072, 1952), 3);
    add_background_object(create_bgfacility7_3277(3072, 2016), 3);
    add_background_object(create_bgfacility6_3274(3072, 2080), 3);
    add_background_object(create_bgfacility7_3277(3072, 2144), 3);
    add_background_object(create_bgfacility4_3275(2528, 2208), 3);
    add_background_object(create_bgrocks1_3213(2560, 2208), 3);
    add_background_object(create_bgfacility5_3276(2528, 2272), 3);
    add_background_object(create_bgrocks1_3213(2816, 2208), 3);
    add_background_object(create_bgfacility6_3274(3072, 2208), 3);
    add_background_object(create_bgfacility7_3277(3072, 2272), 3);
    add_background_object(create_bgfacility4_3275(2528, 2336), 3);
    add_background_object(create_bgrocks1_3213(2560, 2336), 3);
    add_background_object(create_bgfacility5_3276(2528, 2400), 3);
    add_background_object(create_bgrocks1_3213(2816, 2336), 3);
    add_background_object(create_bgfacility6_3274(3072, 2336), 3);
    add_background_object(create_bgfacility7_3277(3072, 2400), 3);
    add_background_object(create_bgfacility2_3273(3168, 1824), 3);
    add_background_object(create_bgfacility4_3275(3168, 1888), 3);
    add_background_object(create_bgfacility5_3276(3168, 1952), 3);
    add_background_object(create_bgfacility1_3271(3200, 1824), 3);
    add_background_object(create_bgfacility1_3271(3328, 1824), 3);
    add_background_object(create_bgfacility4_3275(3168, 2016), 3);
    add_background_object(create_bgrocks1_3213(3200, 1888), 3);
    add_background_object(create_bgrocks1_3213(3200, 2016), 3);
    add_background_object(create_bgfacility5_3276(3168, 2080), 3);
    add_background_object(create_bgfacility1_3271(3456, 1824), 3);
    add_background_object(create_bgfacility1_3271(3584, 1824), 3);
    add_background_object(create_bgrocks1_3213(3456, 1888), 3);
    add_background_object(create_bgrocks1_3213(3456, 2016), 3);
    add_background_object(create_bgfacility3_3272(3712, 1824), 3);
    add_background_object(create_bgfacility6_3274(3712, 1888), 3);
    add_background_object(create_bgfacility7_3277(3712, 1952), 3);
    add_background_object(create_bgfacility6_3274(3712, 2016), 3);
    add_background_object(create_bgfacility7_3277(3712, 2080), 3);
    add_background_object(create_bgfacility4_3275(3168, 2144), 3);
    add_background_object(create_bgrocks1_3213(3200, 2144), 3);
    add_background_object(create_bgfacility5_3276(3168, 2208), 3);
    add_background_object(create_bgrocks1_3213(3456, 2144), 3);
    add_background_object(create_bgfacility6_3274(3712, 2144), 3);
    add_background_object(create_bgfacility7_3277(3712, 2208), 3);
    add_background_object(create_bgfacility4_3275(3168, 2272), 3);
    add_background_object(create_bgrocks1_3213(3200, 2272), 3);
    add_background_object(create_bgfacility5_3276(3168, 2336), 3);
    add_background_object(create_bgrocks1_3213(3456, 2272), 3);
    add_background_object(create_bgfacility6_3274(3712, 2272), 3);
    add_background_object(create_bgfacility7_3277(3712, 2336), 3);
    add_background_object(create_bgrocks1_3213(3456, 1504), 3);
    add_background_object(create_bgrocks1_3213(3456, 1376), 3);
    add_background_object(create_bgrocks1_3213(3200, 1504), 3);
    add_background_object(create_bgrocks1_3213(3200, 1376), 3);
    add_background_object(create_bgfacility13_3278(3360, 1632), 3);
    add_background_object(create_bgfacility13_3278(3168, 1632), 3);
    add_background_object(create_bgfacility14_3279(3520, 1632), 3);
    add_background_object(create_bgfacility14_3279(3328, 1632), 3);
    add_background_object(create_bgfacility12_3280(3392, 1632), 3);
    add_background_object(create_bgfacility12_3280(3200, 1632), 3);
    add_background_object(create_bgfacility4_3275(3360, 1568), 3);
    add_background_object(create_bgfacility4_3275(3360, 1440), 3);
    add_background_object(create_bgfacility4_3275(3168, 1568), 3);
    add_background_object(create_bgfacility4_3275(3168, 1440), 3);
    add_background_object(create_bgfacility5_3276(3360, 1504), 3);
    add_background_object(create_bgfacility5_3276(3360, 1376), 3);
    add_background_object(create_bgfacility5_3276(3168, 1504), 3);
    add_background_object(create_bgfacility5_3276(3168, 1376), 3);
    add_background_object(create_bgfacility6_3274(3520, 1568), 3);
    add_background_object(create_bgfacility6_3274(3520, 1440), 3);
    add_background_object(create_bgfacility6_3274(3328, 1568), 3);
    add_background_object(create_bgfacility6_3274(3328, 1440), 3);
    add_background_object(create_bgfacility7_3277(3520, 1504), 3);
    add_background_object(create_bgfacility7_3277(3520, 1376), 3);
    add_background_object(create_bgfacility7_3277(3328, 1504), 3);
    add_background_object(create_bgfacility7_3277(3328, 1376), 3);
    add_background_object(create_bgfacility13_3278(3552, 1632), 3);
    add_background_object(create_bgfacility14_3279(3712, 1632), 3);
    add_background_object(create_bgfacility12_3280(3584, 1632), 3);
    add_background_object(create_bgfacility4_3275(3552, 1568), 3);
    add_background_object(create_bgfacility4_3275(3552, 1440), 3);
    add_background_object(create_bgfacility5_3276(3552, 1504), 3);
    add_background_object(create_bgfacility5_3276(3552, 1376), 3);
    add_background_object(create_bgfacility6_3274(3712, 1568), 3);
    add_background_object(create_bgfacility6_3274(3712, 1440), 3);
    add_background_object(create_bgfacility7_3277(3712, 1504), 3);
    add_background_object(create_bgfacility7_3277(3712, 1376), 3);
    add_background_object(create_bgrocks1_3213(3456, 1248), 3);
    add_background_object(create_bgrocks1_3213(3200, 1248), 3);
    add_background_object(create_bgfacility4_3275(3360, 1312), 3);
    add_background_object(create_bgfacility4_3275(3168, 1312), 3);
    add_background_object(create_bgfacility5_3276(3360, 1248), 3);
    add_background_object(create_bgfacility5_3276(3168, 1248), 3);
    add_background_object(create_bgfacility6_3274(3520, 1312), 3);
    add_background_object(create_bgfacility6_3274(3328, 1312), 3);
    add_background_object(create_bgfacility7_3277(3520, 1248), 3);
    add_background_object(create_bgfacility7_3277(3328, 1248), 3);
    add_background_object(create_bgfacility4_3275(3552, 1312), 3);
    add_background_object(create_bgfacility5_3276(3552, 1248), 3);
    add_background_object(create_bgfacility6_3274(3712, 1312), 3);
    add_background_object(create_bgfacility7_3277(3712, 1248), 3);
    add_background_object(create_bgfacility13_3278(3104, 1440), 3);
    add_background_object(create_bgfacility14_3279(3136, 1440), 3);
    add_background_object(create_bgfacility7_3277(3136, 1376), 3);
    add_background_object(create_bgfacility5_3276(3104, 1376), 3);
    add_background_object(create_bgfacility7_3277(3136, 1312), 3);
    add_background_object(create_bgfacility5_3276(3104, 1312), 3);
    add_background_object(create_bgfacility7_3277(3136, 1248), 3);
    add_background_object(create_bgfacility5_3276(3104, 1248), 3);
    add_background_object(create_bgfacility3_3272(576, 1904), 3);
    add_background_object(create_bgfacility2_3273(544, 1904), 3);
    add_background_object(create_bgfacility5_3276(544, 1968), 3);
    add_background_object(create_bgfacility7_3277(576, 1968), 3);
    add_background_object(create_bgfacility5_3276(544, 2032), 3);
    add_background_object(create_bgfacility7_3277(576, 2032), 3);
    add_background_object(create_bgfacility5_3276(544, 2096), 3);
    add_background_object(create_bgfacility7_3277(576, 2096), 3);
    add_background_object(create_bgfacility5_3276(544, 2160), 3);
    add_background_object(create_bgfacility7_3277(576, 2160), 3);
    add_background_object(create_bgfacility5_3276(544, 2224), 3);
    add_background_object(create_bgfacility7_3277(576, 2224), 3);
    add_background_object(create_bgfacility5_3276(544, 2288), 3);
    add_background_object(create_bgfacility7_3277(576, 2288), 3);
    add_background_object(create_bgfacility5_3276(544, 2352), 3);
    add_background_object(create_bgfacility7_3277(576, 2352), 3);
    add_background_object(create_bgfacility3_3272(3136, 1904), 3);
    add_background_object(create_bgfacility2_3273(3104, 1904), 3);
    add_background_object(create_bgfacility5_3276(3104, 1968), 3);
    add_background_object(create_bgfacility7_3277(3136, 1968), 3);
    add_background_object(create_bgfacility5_3276(3104, 2032), 3);
    add_background_object(create_bgfacility7_3277(3136, 2032), 3);
    add_background_object(create_bgfacility5_3276(3104, 2096), 3);
    add_background_object(create_bgfacility7_3277(3136, 2096), 3);
    add_background_object(create_bgfacility5_3276(3104, 2160), 3);
    add_background_object(create_bgfacility7_3277(3136, 2160), 3);
    add_background_object(create_bgfacility5_3276(3104, 2224), 3);
    add_background_object(create_bgfacility7_3277(3136, 2224), 3);
    add_background_object(create_bgfacility5_3276(3104, 2288), 3);
    add_background_object(create_bgfacility7_3277(3136, 2288), 3);
    add_background_object(create_bgfacility5_3276(3104, 2352), 3);
    add_background_object(create_bgfacility7_3277(3136, 2352), 3);
    add_background_object(create_bgsnow12_3245(1184, 1888), 3);
    add_background_object(create_bgsnow8_3229(1248, 1888), 3);
    add_background_object(create_bgsnow9_3222(1168, 1888), 3);
    add_background_object(create_bgrocks13_3212(1184, 1968), 3);
    add_background_object(create_bgrocks13_3212(1184, 2032), 3);
    add_background_object(create_bgrocks13_3212(1184, 2096), 3);
    add_background_object(create_bgrocks13_3212(2464, 1904), 3);
    add_background_object(create_bgrocks13_3212(2464, 1968), 3);
    add_background_object(create_bgrocks13_3212(2464, 2032), 3);
    add_background_object(create_bgrocks13_3212(2464, 2096), 3);
    add_background_object(create_bgsnow12_3245(2464, 1888), 3);
    add_background_object(create_bgsnow8_3229(2528, 1888), 3);
    add_background_object(create_bgsnow9_3222(2448, 1888), 3);
    add_background_object(create_bgrocks13_3212(2464, 2160), 3);
    add_background_object(create_bgrocks13_3212(1184, 2160), 3);
    add_background_object(create_bgfacility3_3272(1856, 1904), 3);
    add_background_object(create_bgfacility2_3273(1824, 1904), 3);
    add_background_object(create_bgfacility5_3276(1824, 1968), 3);
    add_background_object(create_bgfacility7_3277(1856, 1968), 3);
    add_background_object(create_bgfacility5_3276(1824, 2032), 3);
    add_background_object(create_bgfacility7_3277(1856, 2032), 3);
    add_background_object(create_bgfacility5_3276(1824, 2096), 3);
    add_background_object(create_bgfacility7_3277(1856, 2096), 3);
    add_background_object(create_bgfacility5_3276(1824, 2160), 3);
    add_background_object(create_bgfacility7_3277(1856, 2160), 3);
    add_background_object(create_bgfacility5_3276(1824, 2224), 3);
    add_background_object(create_bgfacility7_3277(1856, 2224), 3);
    add_background_object(create_bgfacility5_3276(1824, 2288), 3);
    add_background_object(create_bgfacility7_3277(1856, 2288), 3);
    add_background_object(create_bgfacility5_3276(1824, 2352), 3);
    add_background_object(create_bgfacility7_3277(1856, 2352), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3744, 1888), 3);
    add_background_object(create_bgfacility2_3273(3744, 1824), 3);
    add_background_object(create_bgfacility3_3272(3776, 1824), 3);
    add_background_object(create_bgfacility2_3273(3808, 1824), 3);
    add_background_object(create_bgfacility3_3272(3840, 1824), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3808, 1888), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3744, 1976), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3808, 1976), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3744, 2064), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3808, 2064), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3744, 2152), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3808, 2152), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3744, 2240), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3808, 2240), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3744, 2328), 3);
    add_background_object(create_sbrotorbladetunnel_2178(3808, 2328), 3);
    add_background_object(create_bgfacility2_3273(3872, 1504), 3);
    add_background_object(create_bgfacility4_3275(3872, 1568), 3);
    add_background_object(create_bgfacility5_3276(3872, 1632), 3);
    add_background_object(create_bgfacility1_3271(3904, 1504), 3);
    add_background_object(create_bgfacility4_3275(3872, 1696), 3);
    add_background_object(create_bgfacility5_3276(3872, 1760), 3);
    add_background_object(create_bgrocks1_3213(3904, 1568), 3);
    add_background_object(create_bgfacility1_3271(4032, 1504), 3);
    add_background_object(create_bgfacility3_3272(4160, 1504), 3);
    add_background_object(create_bgfacility6_3274(4160, 1568), 3);
    add_background_object(create_bgfacility7_3277(4160, 1632), 3);
    add_background_object(create_bgfacility6_3274(4160, 1696), 3);
    add_background_object(create_bgfacility7_3277(4160, 1760), 3);
    add_background_object(create_bgrocks1_3213(3904, 1696), 3);
    add_background_object(create_bgfacility4_3275(3872, 1824), 3);
    add_background_object(create_bgfacility5_3276(3872, 1888), 3);
    add_background_object(create_bgfacility4_3275(3872, 1952), 3);
    add_background_object(create_bgfacility5_3276(3872, 2016), 3);
    add_background_object(create_bgrocks1_3213(3904, 1824), 3);
    add_background_object(create_bgfacility6_3274(4160, 1824), 3);
    add_background_object(create_bgfacility7_3277(4160, 1888), 3);
    add_background_object(create_bgfacility6_3274(4160, 1952), 3);
    add_background_object(create_bgfacility7_3277(4160, 2016), 3);
    add_background_object(create_bgrocks1_3213(3904, 1952), 3);
    add_background_object(create_bgfacility4_3275(3872, 2080), 3);
    add_background_object(create_bgfacility5_3276(3872, 2144), 3);
    add_background_object(create_bgfacility4_3275(3872, 2208), 3);
    add_background_object(create_bgfacility5_3276(3872, 2272), 3);
    add_background_object(create_bgrocks1_3213(3904, 2080), 3);
    add_background_object(create_bgfacility6_3274(4160, 2080), 3);
    add_background_object(create_bgfacility7_3277(4160, 2144), 3);
    add_background_object(create_bgfacility6_3274(4160, 2208), 3);
    add_background_object(create_bgfacility7_3277(4160, 2272), 3);
    add_background_object(create_bgrocks1_3213(3904, 2208), 3);
    add_background_object(create_bgrocks1_3213(3456, 1120), 3);
    add_background_object(create_bgrocks1_3213(3200, 1120), 3);
    add_background_object(create_bgfacility4_3275(3360, 1184), 3);
    add_background_object(create_bgfacility4_3275(3168, 1184), 3);
    add_background_object(create_bgfacility5_3276(3360, 1120), 3);
    add_background_object(create_bgfacility5_3276(3168, 1120), 3);
    add_background_object(create_bgfacility6_3274(3520, 1184), 3);
    add_background_object(create_bgfacility6_3274(3328, 1184), 3);
    add_background_object(create_bgfacility7_3277(3520, 1120), 3);
    add_background_object(create_bgfacility7_3277(3328, 1120), 3);
    add_background_object(create_bgfacility4_3275(3552, 1184), 3);
    add_background_object(create_bgfacility5_3276(3552, 1120), 3);
    add_background_object(create_bgfacility6_3274(3712, 1184), 3);
    add_background_object(create_bgfacility7_3277(3712, 1120), 3);
    add_background_object(create_bgfacility7_3277(3136, 1184), 3);
    add_background_object(create_bgfacility5_3276(3104, 1184), 3);
    add_background_object(create_bgfacility7_3277(3136, 1120), 3);
    add_background_object(create_bgfacility5_3276(3104, 1120), 3);
    add_background_object(create_bgrocks1_3213(3456, 992), 3);
    add_background_object(create_bgrocks1_3213(3200, 992), 3);
    add_background_object(create_bgfacility4_3275(3360, 1056), 3);
    add_background_object(create_bgfacility4_3275(3168, 1056), 3);
    add_background_object(create_bgfacility5_3276(3360, 992), 3);
    add_background_object(create_bgfacility5_3276(3168, 992), 3);
    add_background_object(create_bgfacility6_3274(3520, 1056), 3);
    add_background_object(create_bgfacility6_3274(3328, 1056), 3);
    add_background_object(create_bgfacility7_3277(3520, 992), 3);
    add_background_object(create_bgfacility7_3277(3328, 992), 3);
    add_background_object(create_bgfacility4_3275(3552, 1056), 3);
    add_background_object(create_bgfacility5_3276(3552, 992), 3);
    add_background_object(create_bgfacility6_3274(3712, 1056), 3);
    add_background_object(create_bgfacility7_3277(3712, 992), 3);
    add_background_object(create_bgfacility7_3277(3136, 1056), 3);
    add_background_object(create_bgfacility5_3276(3104, 1056), 3);
    add_background_object(create_bgfacility7_3277(3136, 992), 3);
    add_background_object(create_bgfacility5_3276(3104, 992), 3);
    add_background_object(create_bgfacility13_3278(3744, 992), 3);
    add_background_object(create_bgfacility14_3279(3776, 992), 3);
    add_background_object(create_bgfacility7_3277(3776, 928), 3);
    add_background_object(create_bgfacility5_3276(3744, 928), 3);
    add_background_object(create_bgfacility7_3277(3776, 864), 3);
    add_background_object(create_bgfacility5_3276(3744, 864), 3);
    add_background_object(create_bgrocks1_3213(3456, 864), 3);
    add_background_object(create_bgrocks1_3213(3200, 864), 3);
    add_background_object(create_bgfacility4_3275(3360, 928), 3);
    add_background_object(create_bgfacility4_3275(3168, 928), 3);
    add_background_object(create_bgfacility5_3276(3360, 864), 3);
    add_background_object(create_bgfacility5_3276(3168, 864), 3);
    add_background_object(create_bgfacility6_3274(3520, 928), 3);
    add_background_object(create_bgfacility6_3274(3328, 928), 3);
    add_background_object(create_bgfacility7_3277(3520, 864), 3);
    add_background_object(create_bgfacility7_3277(3328, 864), 3);
    add_background_object(create_bgfacility4_3275(3552, 928), 3);
    add_background_object(create_bgfacility5_3276(3552, 864), 3);
    add_background_object(create_bgfacility6_3274(3712, 928), 3);
    add_background_object(create_bgfacility7_3277(3712, 864), 3);
    add_background_object(create_bgfacility7_3277(3136, 928), 3);
    add_background_object(create_bgfacility5_3276(3104, 928), 3);
    add_background_object(create_bgfacility7_3277(3136, 864), 3);
    add_background_object(create_bgfacility5_3276(3104, 864), 3);
    add_background_object(create_bgfacility7_3277(3776, 800), 3);
    add_background_object(create_bgfacility5_3276(3744, 800), 3);
    add_background_object(create_bgfacility2_3273(4048, 1192), 3);
    add_background_object(create_bgfacility1_3271(4080, 1192), 3);
    add_background_object(create_bgfacility13_3278(4048, 1256), 3);
    add_background_object(create_bgfacility12_3280(4080, 1256), 3);
    add_background_object(create_bgfacility1_3271(4208, 1192), 3);
    add_background_object(create_bgfacility12_3280(4208, 1256), 3);
    add_background_object(create_bgfacility13_3278(3808, 928), 3);
    add_background_object(create_bgfacility14_3279(3840, 928), 3);
    add_background_object(create_bgfacility7_3277(3840, 864), 3);
    add_background_object(create_bgfacility5_3276(3808, 864), 3);
    add_background_object(create_bgfacility7_3277(3840, 800), 3);
    add_background_object(create_bgfacility5_3276(3808, 800), 3);
    add_background_object(create_bgfacility7_3277(3776, 736), 3);
    add_background_object(create_bgfacility5_3276(3744, 736), 3);
    add_background_object(create_bgrocks1_3213(3456, 736), 3);
    add_background_object(create_bgrocks1_3213(3200, 736), 3);
    add_background_object(create_bgfacility4_3275(3360, 800), 3);
    add_background_object(create_bgfacility4_3275(3168, 800), 3);
    add_background_object(create_bgfacility5_3276(3360, 736), 3);
    add_background_object(create_bgfacility5_3276(3168, 736), 3);
    add_background_object(create_bgfacility6_3274(3520, 800), 3);
    add_background_object(create_bgfacility6_3274(3328, 800), 3);
    add_background_object(create_bgfacility7_3277(3520, 736), 3);
    add_background_object(create_bgfacility7_3277(3328, 736), 3);
    add_background_object(create_bgfacility4_3275(3552, 800), 3);
    add_background_object(create_bgfacility5_3276(3552, 736), 3);
    add_background_object(create_bgfacility6_3274(3712, 800), 3);
    add_background_object(create_bgfacility7_3277(3712, 736), 3);
    add_background_object(create_bgfacility7_3277(3136, 800), 3);
    add_background_object(create_bgfacility5_3276(3104, 800), 3);
    add_background_object(create_bgfacility7_3277(3136, 736), 3);
    add_background_object(create_bgfacility5_3276(3104, 736), 3);
    add_background_object(create_bgfacility7_3277(3840, 736), 3);
    add_background_object(create_bgfacility5_3276(3808, 736), 3);
    add_background_object(create_bgfacility13_3278(3872, 864), 3);
    add_background_object(create_bgfacility14_3279(3904, 864), 3);
    add_background_object(create_bgfacility7_3277(3904, 800), 3);
    add_background_object(create_bgfacility5_3276(3872, 800), 3);
    add_background_object(create_bgfacility7_3277(3904, 736), 3);
    add_background_object(create_bgfacility5_3276(3872, 736), 3);
    add_background_object(create_bgfacility3_3272(4336, 1192), 3);
    add_background_object(create_bgfacility14_3279(4784, 1256), 3);
    add_background_object(create_bgfacility13_3278(4368, 1256), 3);
    add_background_object(create_bgfacility12_3280(4400, 1256), 3);
    add_background_object(create_bgfacility12_3280(4528, 1256), 3);
    add_background_object(create_bgfacility12_3280(4656, 1256), 3);
    add_background_object(create_bgfacility2_3273(4192, 1664), 3);
    add_background_object(create_bgfacility1_3271(4224, 1664), 3);
    add_background_object(create_bgfacility1_3271(4352, 1664), 3);
    add_background_object(create_bgrocks1_3213(4224, 1728), 3);
    add_background_object(create_bgfacility4_3275(4192, 1728), 3);
    add_background_object(create_bgfacility5_3276(4192, 1792), 3);
    add_background_object(create_bgrocks1_3213(4224, 1856), 3);
    add_background_object(create_bgfacility4_3275(4192, 1856), 3);
    add_background_object(create_bgfacility5_3276(4192, 1920), 3);
    add_background_object(create_bgfacility1_3271(4480, 1664), 3);
    add_background_object(create_bgfacility1_3271(4608, 1664), 3);
    add_background_object(create_bgfacility15_3308(4736, 1664), 3);
    add_background_object(create_bgrocks1_3213(4480, 1728), 3);
    add_background_object(create_bgrocks1_3213(4480, 1856), 3);
    add_background_object(create_bgfacility14_3279(4336, 1256), 3);
    add_background_object(create_bgfacility2_3273(4816, 1192), 3);
    add_background_object(create_bgfacility1_3271(4848, 1192), 3);
    add_background_object(create_bgfacility13_3278(4816, 1256), 3);
    add_background_object(create_bgfacility12_3280(4848, 1256), 3);
    add_background_object(create_bgfacility3_3272(5232, 1192), 3);
    add_background_object(create_bgfacility14_3279(5232, 1256), 3);
    add_background_object(create_bgfacility2_3273(5264, 1128), 3);
    add_background_object(create_bgfacility4_3275(5264, 1192), 3);
    add_background_object(create_bgfacility13_3278(5264, 1256), 3);
    add_background_object(create_bgfacility3_3272(5296, 1128), 3);
    add_background_object(create_bgfacility6_3274(5296, 1192), 3);
    add_background_object(create_bgfacility14_3279(5296, 1256), 3);
    add_background_object(create_bgfacility1_3271(5104, 1192), 3);
    add_background_object(create_bgfacility12_3280(5104, 1256), 3);
    add_background_object(create_bgfacility2_3273(5328, 1064), 3);
    add_background_object(create_bgfacility4_3275(5328, 1128), 3);
    add_background_object(create_bgfacility13_3278(5328, 1256), 3);
    add_background_object(create_bgfacility3_3272(5360, 1064), 3);
    add_background_object(create_bgfacility6_3274(5360, 1128), 3);
    add_background_object(create_bgfacility14_3279(5360, 1256), 3);
    add_background_object(create_bgfacility7_3277(5360, 1192), 3);
    add_background_object(create_bgfacility5_3276(5328, 1192), 3);
    add_background_object(create_bgfacility15_3308(4800, 1728), 3);
    add_background_object(create_bgfacility15_3308(4864, 1792), 3);
    add_background_object(create_bgfacility1_3271(4928, 1856), 3);
    add_background_object(create_bgrocks1_3213(4736, 1984), 3);
    add_background_object(create_bgrocks1_3213(4480, 1984), 3);
    add_background_object(create_bgrocks1_3213(4224, 1984), 3);
    add_background_object(create_bgfacility4_3275(4192, 1984), 3);
    add_background_object(create_bgfacility5_3276(4192, 2048), 3);
    add_background_object(create_bgfacility1_3271(5056, 1856), 3);
    add_background_object(create_bgfacility1_3271(5184, 1856), 3);
    add_background_object(create_bgrocks1_3213(4992, 1984), 3);
    add_background_object(create_bgrocks1_3213(5248, 1984), 3);
    add_background_object(create_bgfacility1_3271(5312, 1856), 3);
    add_background_object(create_bgfacility3_3272(5440, 1856), 3);
    add_background_object(create_bgfacility6_3274(5440, 1920), 3);
    add_background_object(create_bgfacility7_3277(5440, 1984), 3);
    add_background_object(create_bgfacility6_3274(5440, 2048), 3);
    add_background_object(create_bgfacility2_3273(5536, 1600), 3);
    add_background_object(create_bgfacility4_3275(5536, 1664), 3);
    add_background_object(create_bgfacility5_3276(5536, 1728), 3);
    add_background_object(create_bgfacility4_3275(5536, 1792), 3);
    add_background_object(create_bgfacility5_3276(5536, 1856), 3);
    add_background_object(create_bgfacility4_3275(5536, 1920), 3);
    add_background_object(create_bgfacility5_3276(5536, 1984), 3);
    add_background_object(create_sbrotorbladetunnel_2178(5472, 1936), 3);
    add_background_object(create_sbrotorbladetunnel_2178(5472, 2024), 3);
    add_background_object(create_bgfacility4_3275(5536, 2048), 3);
    add_background_object(create_bgplatformsupport2_3297(4736, 1536), 3);
    add_background_object(create_bgfacility2_3273(4800, 1440), 3);
    add_background_object(create_bgfacility13_3278(4800, 1504), 3);
    add_background_object(create_bgfacility3_3272(4832, 1440), 3);
    add_background_object(create_bgfacility14_3279(4832, 1504), 3);
    add_background_object(create_bgfacility1_3271(5568, 1600), 3);
    add_background_object(create_bgfacility3_3272(5696, 1600), 3);
    add_background_object(create_bgfacility6_3274(5696, 1664), 3);
    add_background_object(create_bgfacility7_3277(5696, 1728), 3);
    add_background_object(create_bgfacility6_3274(5696, 1792), 3);
    add_background_object(create_bgfacility7_3277(5696, 1856), 3);
    add_background_object(create_bgfacility6_3274(5696, 1920), 3);
    add_background_object(create_bgfacility7_3277(5696, 1984), 3);
    add_background_object(create_bgfacility6_3274(5696, 2048), 3);
    add_background_object(create_bgfacility2_3273(5728, 1728), 3);
    add_background_object(create_bgfacility4_3275(5728, 1792), 3);
    add_background_object(create_bgfacility5_3276(5728, 1856), 3);
    add_background_object(create_bgfacility4_3275(5728, 1920), 3);
    add_background_object(create_bgfacility5_3276(5728, 1984), 3);
    add_background_object(create_bgfacility4_3275(5728, 2048), 3);
    add_background_object(create_bgfacility1_3271(5760, 1728), 3);
    add_background_object(create_bgfacility5_3276(5728, 2112), 3);
    add_background_object(create_bgfacility2_3273(6176, 1664), 3);
    add_background_object(create_bgfacility4_3275(6176, 1728), 3);
    add_background_object(create_bgfacility5_3276(6176, 1792), 3);
    add_background_object(create_bgfacility4_3275(6176, 1856), 3);
    add_background_object(create_bgfacility5_3276(6176, 1920), 3);
    add_background_object(create_bgfacility4_3275(6176, 1984), 3);
    add_background_object(create_bgfacility5_3276(6176, 2048), 3);
    add_background_object(create_bgfacility4_3275(6176, 2112), 3);
    add_background_object(create_bgfacility3_3272(6144, 1728), 3);
    add_background_object(create_bgfacility6_3274(6144, 1792), 3);
    add_background_object(create_bgfacility7_3277(6144, 1856), 3);
    add_background_object(create_bgfacility6_3274(6144, 1920), 3);
    add_background_object(create_bgfacility7_3277(6144, 1984), 3);
    add_background_object(create_bgfacility6_3274(6144, 2048), 3);
    add_background_object(create_bgfacility7_3277(6144, 2112), 3);
    add_background_object(create_bgfacility3_3272(6208, 1664), 3);
    add_background_object(create_bgfacility6_3274(6208, 1728), 3);
    add_background_object(create_bgfacility7_3277(6208, 1792), 3);
    add_background_object(create_bgfacility6_3274(6208, 1856), 3);
    add_background_object(create_bgfacility7_3277(6208, 1920), 3);
    add_background_object(create_bgfacility6_3274(6208, 1984), 3);
    add_background_object(create_bgfacility7_3277(6208, 2048), 3);
    add_background_object(create_bgfacility6_3274(6208, 2112), 3);
    add_background_object(create_bgfacility1_3271(5888, 1728), 3);
    add_background_object(create_bgfacility4_3275(5856, 1448), 3);
    add_background_object(create_bgfacility13_3278(5856, 1512), 3);
    add_background_object(create_bgfacility6_3274(5888, 1448), 3);
    add_background_object(create_bgfacility14_3279(5888, 1512), 3);
    add_background_object(create_bgfacility4_3275(5856, 1320), 3);
    add_background_object(create_bgfacility6_3274(5888, 1320), 3);
    add_background_object(create_bgfacility7_3277(5888, 1384), 3);
    add_background_object(create_bgfacility5_3276(5856, 1384), 3);
    add_background_object(create_bgfacility2_3273(5728, 1128), 3);
    add_background_object(create_bgfacility13_3278(5728, 1256), 3);
    add_background_object(create_bgfacility3_3272(5760, 1128), 3);
    add_background_object(create_bgfacility14_3279(5760, 1256), 3);
    add_background_object(create_bgfacility2_3273(5792, 1192), 3);
    add_background_object(create_bgfacility4_3275(5728, 1192), 3);
    add_background_object(create_bgfacility13_3278(5792, 1256), 3);
    add_background_object(create_bgfacility3_3272(5824, 1192), 3);
    add_background_object(create_bgfacility6_3274(5760, 1192), 3);
    add_background_object(create_bgfacility14_3279(5824, 1256), 3);
    add_background_object(create_bgfacility7_3277(5888, 1256), 3);
    add_background_object(create_bgfacility5_3276(5856, 1256), 3);
    add_background_object(create_bgfacility2_3273(5920, 1192), 3);
    add_background_object(create_bgfacility1_3271(5952, 1192), 3);
    add_background_object(create_bgfacility13_3278(5920, 1256), 3);
    add_background_object(create_bgfacility12_3280(5952, 1256), 3);
    add_background_object(create_bgfacility2_3273(6112, 1728), 3);
    add_background_object(create_bgfacility4_3275(6112, 1792), 3);
    add_background_object(create_bgfacility5_3276(6112, 1856), 3);
    add_background_object(create_bgfacility4_3275(6112, 1920), 3);
    add_background_object(create_bgfacility5_3276(6112, 1984), 3);
    add_background_object(create_bgfacility4_3275(6112, 2048), 3);
    add_background_object(create_bgfacility5_3276(6112, 2112), 3);
    add_background_object(create_bgfacility3_3272(6016, 1728), 3);
    add_background_object(create_bgfacility6_3274(6016, 1792), 3);
    add_background_object(create_bgfacility7_3277(6016, 1856), 3);
    add_background_object(create_bgfacility6_3274(6016, 1920), 3);
    add_background_object(create_bgfacility7_3277(6016, 1984), 3);
    add_background_object(create_bgfacility6_3274(6016, 2048), 3);
    add_background_object(create_bgfacility7_3277(6016, 2112), 3);
    add_background_object(create_bgfacility3_3272(6080, 1728), 3);
    add_background_object(create_bgfacility2_3273(6048, 1728), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6048, 1888), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6048, 1976), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6048, 2064), 3);
    add_background_object(create_bgrocks1_3213(5760, 1920), 3);
    add_background_object(create_bgrocks1_3213(5760, 2048), 3);
    add_background_object(create_bgrocks1_3213(5760, 1792), 3);
    add_background_object(create_bgrocks13_3212(5568, 1792), 3);
    add_background_object(create_bgrocks13_3212(5632, 1792), 3);
    add_background_object(create_bgrocks13_3212(5568, 1728), 3);
    add_background_object(create_bgrocks13_3212(5632, 1728), 3);
    add_background_object(create_bgrocks13_3212(5568, 1664), 3);
    add_background_object(create_bgrocks13_3212(5632, 1664), 3);
    add_background_object(create_bgfacility2_3273(5072, 1192), 3);
    add_background_object(create_bgfacility13_3278(5072, 1256), 3);
    add_background_object(create_bgfacility3_3272(4976, 1192), 3);
    add_background_object(create_bgfacility14_3279(4976, 1256), 3);
    add_background_object(create_sbrotorbladetunnel_2178(5008, 1208), 3);
    add_background_object(create_bgfacility3_3272(5040, 1192), 3);
    add_background_object(create_bgfacility2_3273(5008, 1192), 3);
    add_background_object(create_bgfacility2_3273(6240, 1856), 3);
    add_background_object(create_bgfacility4_3275(6240, 1920), 3);
    add_background_object(create_bgfacility5_3276(6240, 1984), 3);
    add_background_object(create_bgfacility4_3275(6240, 2048), 3);
    add_background_object(create_bgfacility5_3276(6240, 2112), 3);
    add_background_object(create_bgfacility4_3275(6240, 2176), 3);
    add_background_object(create_bgfacility1_3271(6272, 1856), 3);
    add_background_object(create_bgfacility5_3276(6240, 2240), 3);
    add_background_object(create_bgfacility1_3271(6400, 1856), 3);
    add_background_object(create_bgfacility3_3272(6528, 1856), 3);
    add_background_object(create_bgfacility6_3274(6528, 1920), 3);
    add_background_object(create_bgfacility7_3277(6528, 1984), 3);
    add_background_object(create_bgfacility6_3274(6528, 2048), 3);
    add_background_object(create_bgfacility7_3277(6528, 2112), 3);
    add_background_object(create_bgfacility6_3274(6528, 2176), 3);
    add_background_object(create_bgfacility7_3277(6528, 2240), 3);
    add_background_object(create_bgrocks1_3213(6272, 2048), 3);
    add_background_object(create_bgrocks1_3213(6272, 2176), 3);
    add_background_object(create_bgrocks1_3213(6272, 1920), 3);
    add_background_object(create_bgfacility1_3271(6080, 1192), 3);
    add_background_object(create_bgfacility12_3280(6080, 1256), 3);
    add_background_object(create_bgfacility3_3272(6208, 1192), 3);
    add_background_object(create_bgfacility14_3279(6208, 1256), 3);
    add_background_object(create_bgfacility3_3272(5888, 1192), 3);
    add_background_object(create_bgfacility2_3273(5856, 1192), 3);
    add_background_object(create_bgfacility13_3278(5280, 880), 3);
    add_background_object(create_bgfacility12_3280(5312, 880), 3);
    add_background_object(create_bgfacility12_3280(5440, 880), 3);
    add_background_object(create_bgfacility12_3280(5568, 880), 3);
    add_background_object(create_bgfacility12_3280(5696, 880), 3);
    add_background_object(create_bgfacility14_3279(5824, 880), 3);
    add_background_object(create_bgrocks1_3213(5312, 752), 3);
    add_background_object(create_bgrocks1_3213(5568, 752), 3);
    add_background_object(create_bgfacility4_3275(5280, 816), 3);
    add_background_object(create_bgfacility6_3274(5824, 816), 3);
    add_background_object(create_bgfacility7_3277(5824, 752), 3);
    add_background_object(create_bgfacility5_3276(5280, 752), 3);
    add_background_object(create_bgrocks1_3213(5312, 624), 3);
    add_background_object(create_bgrocks1_3213(5568, 624), 3);
    add_background_object(create_bgfacility4_3275(5280, 688), 3);
    add_background_object(create_bgfacility6_3274(5824, 688), 3);
    add_background_object(create_bgfacility7_3277(5824, 624), 3);
    add_background_object(create_bgfacility5_3276(5280, 624), 3);
    add_background_object(create_bgrocks1_3213(5312, 496), 3);
    add_background_object(create_bgrocks1_3213(5568, 496), 3);
    add_background_object(create_bgfacility4_3275(5280, 560), 3);
    add_background_object(create_bgfacility6_3274(5824, 560), 3);
    add_background_object(create_bgfacility7_3277(5824, 496), 3);
    add_background_object(create_bgfacility5_3276(5280, 496), 3);
    add_background_object(create_bgfacility2_3273(6624, 1856), 3);
    add_background_object(create_bgfacility4_3275(6624, 1920), 3);
    add_background_object(create_bgfacility5_3276(6624, 1984), 3);
    add_background_object(create_bgfacility4_3275(6624, 2048), 3);
    add_background_object(create_bgfacility5_3276(6624, 2112), 3);
    add_background_object(create_bgfacility4_3275(6624, 2176), 3);
    add_background_object(create_bgfacility1_3271(6656, 1856), 3);
    add_background_object(create_bgfacility5_3276(6624, 2240), 3);
    add_background_object(create_bgfacility1_3271(6784, 1856), 3);
    add_background_object(create_bgfacility3_3272(6912, 1856), 3);
    add_background_object(create_bgfacility6_3274(6912, 1920), 3);
    add_background_object(create_bgfacility7_3277(6912, 1984), 3);
    add_background_object(create_bgfacility6_3274(6912, 2048), 3);
    add_background_object(create_bgfacility7_3277(6912, 2112), 3);
    add_background_object(create_bgfacility6_3274(6912, 2176), 3);
    add_background_object(create_bgfacility7_3277(6912, 2240), 3);
    add_background_object(create_bgrocks1_3213(6656, 2048), 3);
    add_background_object(create_bgrocks1_3213(6656, 2176), 3);
    add_background_object(create_bgrocks1_3213(6656, 1920), 3);
    add_background_object(create_bgfacility15_3308(6240, 1192), 3);
    add_background_object(create_bgfacility2_3273(6240, 1256), 3);
    add_background_object(create_bgfacility3_3272(6272, 1256), 3);
    add_background_object(create_bgfacility13_3278(6240, 1384), 3);
    add_background_object(create_bgfacility14_3279(6272, 1384), 3);
    add_background_object(create_bgfacility15_3308(6304, 1256), 3);
    add_background_object(create_bgfacility2_3273(6304, 1320), 3);
    add_background_object(create_bgfacility3_3272(6336, 1320), 3);
    add_background_object(create_bgfacility13_3278(6304, 1384), 3);
    add_background_object(create_bgfacility14_3279(6336, 1384), 3);
    add_background_object(create_bgfacility4_3275(6240, 1320), 3);
    add_background_object(create_bgfacility6_3274(6272, 1320), 3);
    add_background_object(create_bgfacility2_3273(6368, 1320), 3);
    add_background_object(create_bgfacility3_3272(6400, 1320), 3);
    add_background_object(create_bgfacility13_3278(6368, 1384), 3);
    add_background_object(create_bgfacility14_3279(6400, 1384), 3);
    add_background_object(create_bgfacility13_3278(6432, 1128), 3);
    add_background_object(create_bgfacility12_3280(6464, 1128), 3);
    add_background_object(create_bgfacility12_3280(7104, 1128), 3);
    add_background_object(create_bgfacility14_3279(7232, 1128), 3);
    add_background_object(create_bgfacility12_3280(6592, 1128), 3);
    add_background_object(create_bgfacility12_3280(6976, 1128), 3);
    add_background_object(create_bgfacility4_3275(6432, 1064), 3);
    add_background_object(create_bgfacility6_3274(7232, 1064), 3);
    add_background_object(create_bgrocks1_3213(6464, 1000), 3);
    add_background_object(create_bgrocks1_3213(6976, 1000), 3);
    add_background_object(create_bgfacility7_3277(7232, 1000), 3);
    add_background_object(create_bgfacility5_3276(6432, 1000), 3);
    add_background_object(create_bgfacility4_3275(6432, 936), 3);
    add_background_object(create_bgfacility6_3274(7232, 936), 3);
    add_background_object(create_bgrocks1_3213(6464, 872), 3);
    add_background_object(create_bgrocks1_3213(6976, 872), 3);
    add_background_object(create_bgfacility7_3277(7232, 872), 3);
    add_background_object(create_bgfacility5_3276(6432, 872), 3);
    add_background_object(create_bgfacility12_3280(6848, 1128), 3);
    add_background_object(create_bgfacility12_3280(6720, 1128), 3);
    add_background_object(create_bgrocks1_3213(6720, 1000), 3);
    add_background_object(create_bgrocks1_3213(6720, 872), 3);
    add_background_object(create_bgfacility13_3278(7264, 1256), 3);
    add_background_object(create_bgfacility12_3280(7296, 1256), 3);
    add_background_object(create_bgfacility12_3280(7424, 1256), 3);
    add_background_object(create_bgfacility4_3275(7264, 1192), 3);
    add_background_object(create_bgrocks1_3213(7296, 1128), 3);
    add_background_object(create_bgfacility5_3276(7264, 1128), 3);
    add_background_object(create_bgfacility4_3275(7264, 1064), 3);
    add_background_object(create_bgrocks1_3213(7296, 1000), 3);
    add_background_object(create_bgfacility5_3276(7264, 1000), 3);
    add_background_object(create_bgfacility4_3275(7264, 936), 3);
    add_background_object(create_bgrocks1_3213(7296, 872), 3);
    add_background_object(create_bgfacility5_3276(7264, 872), 3);
    add_background_object(create_bgfacility2_3273(7264, 1576), 3);
    add_background_object(create_bgfacility1_3271(7296, 1576), 3);
    add_background_object(create_bgfacility13_3278(7264, 1640), 3);
    add_background_object(create_bgfacility12_3280(7296, 1640), 3);
    add_background_object(create_bgfacility1_3271(7424, 1576), 3);
    add_background_object(create_bgfacility12_3280(7424, 1640), 3);
    add_background_object(create_bgfacility2_3273(7008, 1792), 3);
    add_background_object(create_bgfacility4_3275(7008, 1856), 3);
    add_background_object(create_bgfacility5_3276(7008, 1920), 3);
    add_background_object(create_bgfacility4_3275(7008, 1984), 3);
    add_background_object(create_bgfacility5_3276(7008, 2048), 3);
    add_background_object(create_bgfacility4_3275(7008, 2112), 3);
    add_background_object(create_bgfacility1_3271(7040, 1792), 3);
    add_background_object(create_bgfacility5_3276(7008, 2176), 3);
    add_background_object(create_bgfacility1_3271(7168, 1792), 3);
    add_background_object(create_bgfacility3_3272(7296, 1792), 3);
    add_background_object(create_bgfacility6_3274(7296, 1856), 3);
    add_background_object(create_bgfacility7_3277(7296, 1920), 3);
    add_background_object(create_bgfacility6_3274(7296, 1984), 3);
    add_background_object(create_bgfacility7_3277(7296, 2048), 3);
    add_background_object(create_bgfacility6_3274(7296, 2112), 3);
    add_background_object(create_bgfacility7_3277(7296, 2176), 3);
    add_background_object(create_bgrocks1_3213(7040, 1984), 3);
    add_background_object(create_bgrocks1_3213(7040, 2112), 3);
    add_background_object(create_bgrocks1_3213(7040, 1856), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6560, 1928), 3);
    add_background_object(create_bgfacility3_3272(6592, 1856), 3);
    add_background_object(create_bgfacility2_3273(6560, 1856), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6560, 2016), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6560, 2104), 3);
    add_background_object(create_sbrotorbladetunnel_2178(6560, 2192), 3);
    add_background_object(create_bgfacility2_3273(6776, 1416), 3);
    add_background_object(create_bgfacility3_3272(6808, 1416), 3);
    add_background_object(create_bgfacility13_3278(6776, 1544), 3);
    add_background_object(create_bgfacility14_3279(6808, 1544), 3);
    add_background_object(create_bgfacility4_3275(6776, 1480), 3);
    add_background_object(create_bgfacility6_3274(6808, 1480), 3);
    add_background_object(create_bgfacility14_3279(7552, 1256), 3);
    add_background_object(create_bgfacility6_3274(7552, 1192), 3);
    add_background_object(create_bgfacility7_3277(7552, 1128), 3);
    add_background_object(create_bgfacility6_3274(7552, 1064), 3);
    add_background_object(create_bgfacility7_3277(7552, 1000), 3);
    add_background_object(create_bgfacility6_3274(7552, 936), 3);
    add_background_object(create_bgfacility7_3277(7552, 872), 3);
    add_background_object(create_bgfacility2_3273(7456, 2152), 3);
    add_background_object(create_bgfacility4_3275(7456, 2216), 3);
    add_background_object(create_bgfacility5_3276(7456, 2280), 3);
    add_background_object(create_bgfacility4_3275(7456, 2344), 3);
    add_background_object(create_bgfacility5_3276(7456, 2408), 3);
    add_background_object(create_bgfacility1_3271(7488, 2152), 3);
    add_background_object(create_bgfacility1_3271(7616, 2152), 3);
    add_background_object(create_bgfacility3_3272(7744, 2152), 3);
    add_background_object(create_bgfacility6_3274(7744, 2216), 3);
    add_background_object(create_bgfacility7_3277(7744, 2280), 3);
    add_background_object(create_bgfacility6_3274(7744, 2344), 3);
    add_background_object(create_bgfacility7_3277(7744, 2408), 3);
    add_background_object(create_bgrocks1_3213(7488, 2344), 3);
    add_background_object(create_bgrocks1_3213(7488, 2216), 3);
    add_background_object(create_bgfacility2_3273(7776, 2152), 3);
    add_background_object(create_bgfacility4_3275(7776, 2216), 3);
    add_background_object(create_bgfacility5_3276(7776, 2280), 3);
    add_background_object(create_bgfacility4_3275(7776, 2344), 3);
    add_background_object(create_bgfacility5_3276(7776, 2408), 3);
    add_background_object(create_bgfacility1_3271(7808, 2152), 3);
    add_background_object(create_bgfacility1_3271(7936, 2152), 3);
    add_background_object(create_bgfacility3_3272(8064, 2152), 3);
    add_background_object(create_bgfacility6_3274(8064, 2216), 3);
    add_background_object(create_bgfacility7_3277(8064, 2280), 3);
    add_background_object(create_bgfacility6_3274(8064, 2344), 3);
    add_background_object(create_bgfacility7_3277(8064, 2408), 3);
    add_background_object(create_bgrocks1_3213(7808, 2344), 3);
    add_background_object(create_bgrocks1_3213(7808, 2216), 3);
    add_background_object(create_bgfacility2_3273(7456, 1896), 3);
    add_background_object(create_bgfacility1_3271(7488, 1896), 3);
    add_background_object(create_bgfacility13_3278(7456, 1960), 3);
    add_background_object(create_bgfacility12_3280(7488, 1960), 3);
    add_background_object(create_bgfacility1_3271(7616, 1896), 3);
    add_background_object(create_bgfacility12_3280(7616, 1960), 3);
    add_background_object(create_bgfacility1_3271(7744, 1896), 3);
    add_background_object(create_bgfacility12_3280(7744, 1960), 3);
    add_background_object(create_bgfacility4_3275(7008, 2240), 3);
    add_background_object(create_bgfacility5_3276(7008, 2304), 3);
    add_background_object(create_bgfacility6_3274(7296, 2240), 3);
    add_background_object(create_bgfacility7_3277(7296, 2304), 3);
    add_background_object(create_bgrocks1_3213(7040, 2240), 3);
    add_background_object(create_bgfacility4_3275(7008, 2368), 3);
    add_background_object(create_bgfacility5_3276(7008, 2432), 3);
    add_background_object(create_bgfacility6_3274(7296, 2368), 3);
    add_background_object(create_bgfacility7_3277(7296, 2432), 3);
    add_background_object(create_bgrocks1_3213(7040, 2368), 3);
    add_background_object(create_bgfacility1_3271(7872, 1896), 3);
    add_background_object(create_bgfacility12_3280(7872, 1960), 3);
    add_background_object(create_bgfacility2_3273(7328, 2216), 3);
    add_background_object(create_bgfacility3_3272(7360, 2216), 3);
    add_background_object(create_bgfacility2_3273(7392, 2216), 3);
    add_background_object(create_bgfacility3_3272(7424, 2216), 3);
    add_background_object(create_sbrotorbladetunnel_2178(7328, 2312), 3);
    add_background_object(create_sbrotorbladetunnel_2178(7392, 2312), 3);
    add_background_object(create_bgfacility3_3272(8000, 1896), 3);
    add_background_object(create_bgfacility14_3279(8000, 1960), 3);
    add_background_object(create_bgfacility2_3273(8096, 1896), 3);
    add_background_object(create_bgfacility4_3275(8096, 1960), 3);
    add_background_object(create_bgfacility5_3276(8096, 2024), 3);
    add_background_object(create_bgfacility4_3275(8096, 2088), 3);
    add_background_object(create_bgfacility5_3276(8096, 2152), 3);
    add_background_object(create_bgfacility1_3271(8128, 1896), 3);
    add_background_object(create_bgfacility1_3271(8320, 1960), 3);
    add_background_object(create_bgfacility3_3272(8448, 1960), 3);
    add_background_object(create_bgfacility6_3274(8448, 2024), 3);
    add_background_object(create_bgfacility7_3277(8448, 2088), 3);
    add_background_object(create_bgfacility6_3274(8448, 2152), 3);
    add_background_object(create_bgfacility7_3277(8448, 2216), 3);
    add_background_object(create_bgrocks1_3213(8128, 2088), 3);
    add_background_object(create_bgfacility12_3280(8000, 1640), 3);
    add_background_object(create_bgfacility12_3280(8128, 1640), 3);
    add_background_object(create_bgfacility12_3280(8256, 1640), 3);
    add_background_object(create_bgfacility3_3272(8256, 1896), 3);
    add_background_object(create_bgfacility2_3273(8288, 1960), 3);
    add_background_object(create_bgfacility6_3274(8256, 1960), 3);
    add_background_object(create_bgfacility7_3277(8256, 2024), 3);
    add_background_object(create_bgfacility6_3274(8256, 2088), 3);
    add_background_object(create_bgfacility7_3277(8256, 2152), 3);
    add_background_object(create_bgrocks13_3212(8384, 2152), 3);
    add_background_object(create_bgrocks13_3212(8384, 2088), 3);
    add_background_object(create_bgrocks13_3212(8384, 2024), 3);
    add_background_object(create_bgrocks1_3213(8128, 2216), 3);
    add_background_object(create_bgrocks1_3213(8128, 2344), 3);
    add_background_object(create_bgrocks13_3212(8384, 2344), 3);
    add_background_object(create_bgrocks13_3212(8384, 2280), 3);
    add_background_object(create_bgrocks13_3212(8384, 2216), 3);
    add_background_object(create_bgfacility6_3274(8448, 2280), 3);
    add_background_object(create_bgfacility7_3277(8448, 2344), 3);
    add_background_object(create_bgfacility4_3275(8096, 2216), 3);
    add_background_object(create_bgfacility5_3276(8096, 2280), 3);
    add_background_object(create_bgfacility4_3275(8096, 2344), 3);
    add_background_object(create_bgfacility5_3276(8096, 2408), 3);
    add_background_object(create_bgfacility6_3274(8256, 2216), 3);
    add_background_object(create_bgfacility7_3277(8256, 2280), 3);
    add_background_object(create_bgfacility6_3274(8256, 2344), 3);
    add_background_object(create_bgfacility7_3277(8256, 2408), 3);
    add_background_object(create_bgfacility4_3275(8288, 2024), 3);
    add_background_object(create_bgfacility5_3276(8288, 2088), 3);
    add_background_object(create_bgfacility4_3275(8288, 2152), 3);
    add_background_object(create_bgfacility5_3276(8288, 2216), 3);
    add_background_object(create_bgfacility4_3275(8288, 2280), 3);
    add_background_object(create_bgfacility5_3276(8288, 2344), 3);
    add_background_object(create_bgfacility12_3280(8384, 1640), 3);
    add_background_object(create_bgfacility2_3273(8480, 2152), 3);
    add_background_object(create_bgfacility1_3271(8512, 2152), 3);
    add_background_object(create_bgfacility16_3309(8480, 2024), 3);
    add_background_object(create_bgfacility17_3310(8672, 2024), 3);
    add_background_object(create_bgfacility4_3275(8480, 2216), 3);
    add_background_object(create_bgfacility5_3276(8480, 2280), 3);
    add_background_object(create_bgfacility4_3275(8480, 2344), 3);
    add_background_object(create_bgrocks1_3213(8512, 2216), 3);
    add_background_object(create_bgrocks1_3213(8512, 2344), 3);
    add_background_object(create_bgfacility1_3271(8640, 2152), 3);
    add_background_object(create_bgfacility3_3272(8768, 2152), 3);
    add_background_object(create_bgfacility6_3274(8768, 2216), 3);
    add_background_object(create_bgfacility7_3277(8768, 2280), 3);
    add_background_object(create_bgfacility6_3274(8768, 2344), 3);
    add_background_object(create_bgfacility1_3271(8832, 1960), 3);
    add_background_object(create_bgfacility2_3273(8800, 1960), 3);
    add_background_object(create_bgfacility4_3275(8800, 2024), 3);
    add_background_object(create_bgfacility5_3276(8800, 2088), 3);
    add_background_object(create_bgfacility4_3275(8800, 2152), 3);
    add_background_object(create_bgfacility5_3276(8800, 2216), 3);
    add_background_object(create_bgfacility4_3275(8800, 2280), 3);
    add_background_object(create_bgfacility5_3276(8800, 2344), 3);
    add_background_object(create_bgrocks1_3213(8832, 2024), 3);
    add_background_object(create_bgrocks1_3213(8832, 2152), 3);
    add_background_object(create_bgrocks1_3213(8832, 2280), 3);
    add_background_object(create_bgfacility1_3271(8960, 1960), 3);
    add_background_object(create_bgfacility14_3279(8512, 1640), 3);
    add_background_object(create_bgfacility4_3275(8608, 1640), 3);
    add_background_object(create_bgfacility5_3276(8608, 1704), 3);
    add_background_object(create_bgfacility4_3275(8608, 1768), 3);
    add_background_object(create_bgfacility13_3278(8608, 1960), 3);
    add_background_object(create_bgfacility14_3279(8640, 1960), 3);
    add_background_object(create_bgfacility6_3274(8640, 1768), 3);
    add_background_object(create_bgfacility7_3277(8640, 1704), 3);
    add_background_object(create_bgfacility6_3274(8640, 1640), 3);
    add_background_object(create_bgfacility3_3272(9088, 1960), 3);
    add_background_object(create_bgfacility6_3274(9088, 2024), 3);
    add_background_object(create_bgfacility7_3277(9088, 2088), 3);
    add_background_object(create_bgfacility6_3274(9088, 2152), 3);
    add_background_object(create_bgfacility7_3277(9088, 2216), 3);
    add_background_object(create_bgfacility6_3274(9088, 2280), 3);
    add_background_object(create_bgfacility7_3277(9088, 2344), 3);
    add_background_object(create_bgfacility4_3275(9120, 2024), 3);
    add_background_object(create_bgfacility5_3276(9120, 2088), 3);
    add_background_object(create_bgfacility4_3275(9120, 2152), 3);
    add_background_object(create_bgfacility5_3276(9120, 2216), 3);
    add_background_object(create_bgfacility4_3275(9120, 2280), 3);
    add_background_object(create_bgfacility5_3276(9120, 2344), 3);
    add_background_object(create_bgrocks1_3213(9152, 2024), 3);
    add_background_object(create_bgrocks1_3213(9152, 2152), 3);
    add_background_object(create_bgrocks1_3213(9152, 2280), 3);
    add_background_object(create_bgfacility6_3274(9408, 2024), 3);
    add_background_object(create_bgfacility7_3277(9408, 2088), 3);
    add_background_object(create_bgfacility6_3274(9408, 2152), 3);
    add_background_object(create_bgfacility7_3277(9408, 2216), 3);
    add_background_object(create_bgfacility6_3274(9408, 2280), 3);
    add_background_object(create_bgfacility7_3277(9408, 2344), 3);
    add_background_object(create_bgfacility4_3275(9120, 1640), 3);
    add_background_object(create_bgfacility5_3276(9120, 1704), 3);
    add_background_object(create_bgfacility4_3275(9120, 1768), 3);
    add_background_object(create_bgfacility5_3276(9120, 1832), 3);
    add_background_object(create_bgfacility4_3275(9120, 1896), 3);
    add_background_object(create_bgfacility5_3276(9120, 1960), 3);
    add_background_object(create_bgrocks1_3213(9472, 1896), 3);
    add_background_object(create_bgrocks1_3213(9152, 1768), 3);
    add_background_object(create_bgrocks1_3213(9152, 1896), 3);
    add_background_object(create_bgfacility6_3274(9408, 1640), 3);
    add_background_object(create_bgfacility7_3277(9408, 1704), 3);
    add_background_object(create_bgfacility6_3274(9408, 1768), 3);
    add_background_object(create_bgfacility7_3277(9408, 1832), 3);
    add_background_object(create_bgfacility6_3274(9408, 1896), 3);
    add_background_object(create_bgfacility7_3277(9408, 1960), 3);
    add_background_object(create_bgfacility4_3275(9120, 1512), 3);
    add_background_object(create_bgfacility5_3276(9120, 1576), 3);
    add_background_object(create_bgrocks1_3213(9152, 1512), 3);
    add_background_object(create_bgfacility6_3274(9408, 1512), 3);
    add_background_object(create_bgfacility7_3277(9408, 1576), 3);
    add_background_object(create_bgfacility5_3276(8608, 1576), 3);
    add_background_object(create_bgfacility7_3277(8640, 1576), 3);
    add_background_object(create_bgfacility3_3272(8640, 1512), 3);
    add_background_object(create_bgfacility2_3273(8608, 1512), 3);
    add_background_object(create_bgfacility1_3271(9152, 1192), 3);
    add_background_object(create_bgfacility2_3273(9120, 1192), 3);
    add_background_object(create_bgfacility1_3271(9280, 1192), 3);
    add_background_object(create_bgfacility3_3272(9408, 1192), 3);
    add_background_object(create_bgfacility1_3271(8576, 1192), 3);
    add_background_object(create_bgfacility2_3273(8544, 1192), 3);
    add_background_object(create_bgfacility1_3271(8960, 1192), 3);
    add_background_object(create_bgfacility3_3272(9088, 1192), 3);
    add_background_object(create_bgfacility12_3280(8960, 1256), 3);
    add_background_object(create_bgfacility14_3279(9088, 1256), 3);
    add_background_object(create_bgfacility13_3278(8544, 1256), 3);
    add_background_object(create_bgfacility12_3280(8576, 1256), 3);
    add_background_object(create_bgfacility7_3277(8512, 1576), 3);
    add_background_object(create_bgfacility3_3272(8512, 1512), 3);
    add_background_object(create_bgfacility1_3271(8384, 1512), 3);
    add_background_object(create_bgfacility1_3271(8256, 1512), 3);
    add_background_object(create_bgfacility1_3271(8128, 1512), 3);
    add_background_object(create_bgfacility1_3271(8000, 1512), 3);
    add_background_object(create_bgfacility1_3271(8704, 1192), 3);
    add_background_object(create_bgfacility12_3280(8704, 1256), 3);
    add_background_object(create_bgfacility1_3271(8832, 1192), 3);
    add_background_object(create_bgfacility12_3280(8832, 1256), 3);
    add_background_object(create_bgfacility3_3272(8576, 1512), 3);
    add_background_object(create_bgfacility2_3273(8544, 1512), 3);
    add_background_object(create_bgfacility4_3275(8544, 1576), 3);
    add_background_object(create_bgfacility6_3274(8576, 1576), 3);
    add_background_object(create_bgfacility13_3278(8544, 1640), 3);
    add_background_object(create_bgfacility14_3279(8576, 1640), 3);
    add_background_object(create_bgfacility2_3273(7968, 1512), 3);
    add_background_object(create_bgfacility5_3276(7968, 1576), 3);
    add_background_object(create_bgfacility13_3278(7968, 1640), 3);
    add_background_object(create_bgfacility5_3276(8608, 1832), 3);
    add_background_object(create_bgfacility7_3277(8640, 1832), 3);
    add_background_object(create_bgfacility4_3275(8608, 1896), 3);
    add_background_object(create_bgfacility6_3274(8640, 1896), 3);
    add_background_object(create_bgfacility3_3272(8000, 1000), 3);
    add_background_object(create_bgfacility2_3273(7968, 1000), 3);
    add_background_object(create_bgfacility4_3275(7968, 1384), 3);
    add_background_object(create_bgfacility6_3274(8000, 1384), 3);
    add_background_object(create_bgfacility5_3276(7968, 1320), 3);
    add_background_object(create_bgfacility7_3277(8000, 1320), 3);
    add_background_object(create_bgfacility13_3278(7968, 1448), 3);
    add_background_object(create_bgfacility14_3279(8000, 1448), 3);
    add_background_object(create_bgfacility1_3271(7680, 1576), 3);
    add_background_object(create_bgfacility12_3280(7680, 1640), 3);
    add_background_object(create_bgfacility1_3271(7552, 1576), 3);
    add_background_object(create_bgfacility12_3280(7552, 1640), 3);
    add_background_object(create_bgfacility4_3275(7968, 1256), 3);
    add_background_object(create_bgfacility6_3274(8000, 1256), 3);
    add_background_object(create_bgfacility5_3276(7968, 1192), 3);
    add_background_object(create_bgfacility7_3277(8000, 1192), 3);
    add_background_object(create_bgfacility13_3278(8544, 1128), 3);
    add_background_object(create_bgfacility14_3279(8704, 1128), 3);
    add_background_object(create_bgfacility4_3275(7968, 1128), 3);
    add_background_object(create_bgfacility6_3274(8000, 1128), 3);
    add_background_object(create_bgfacility3_3272(8704, 1000), 3);
    add_background_object(create_bgfacility2_3273(8544, 1000), 3);
    add_background_object(create_bgfacility2_3273(8032, 1000), 3);
    add_background_object(create_bgfacility13_3278(8032, 1128), 3);
    add_background_object(create_bgfacility12_3280(8064, 1128), 3);
    add_background_object(create_bgfacility12_3280(8192, 1128), 3);
    add_background_object(create_bgfacility5_3276(7968, 1064), 3);
    add_background_object(create_bgfacility7_3277(8000, 1064), 3);
    add_background_object(create_bgfacility12_3280(8320, 1128), 3);
    add_background_object(create_bgfacility3_3272(8448, 1000), 3);
    add_background_object(create_bgfacility14_3279(8448, 1128), 3);
    add_background_object(create_bgfacility5_3276(8544, 1064), 3);
    add_background_object(create_bgfacility7_3277(8704, 1064), 3);
    add_background_object(create_bgfacility3_3272(8512, 1000), 3);
    add_background_object(create_bgfacility2_3273(8480, 1000), 3);
    add_background_object(create_bgfacility13_3278(8480, 1128), 3);
    add_background_object(create_bgfacility14_3279(8512, 1128), 3);
    add_background_object(create_bgfacility3_3272(7808, 1576), 3);
    add_background_object(create_bgfacility14_3279(7808, 1640), 3);
    add_background_object(create_bgrocks13_3212(6944, 1872), 3);
    add_background_object(create_bgrocks13_3212(6944, 1936), 3);
    add_background_object(create_bgrocks13_3212(6944, 2000), 3);
    add_background_object(create_bgsnow12_3245(6944, 1856), 3);
    add_background_object(create_bgsnow8_3229(7008, 1856), 3);
    add_background_object(create_bgsnow9_3222(6928, 1856), 3);
    add_background_object(create_bgrocks13_3212(6944, 2064), 3);
    add_background_object(create_bgrocks13_3212(6944, 2128), 3);
    add_background_object(create_bgrocks13_3212(6944, 2192), 3);
    add_background_object(create_bgladder_3311(7736, 1256), 3);
    add_background_object(create_bgladder_3311(7736, 1288), 3);
    add_background_object(create_bgladder_3311(7736, 1320), 3);
    add_background_object(create_bgfacility2_3273(9056, 1416), 3);
    add_background_object(create_bgfacility13_3278(9056, 1480), 3);
    add_background_object(create_bgfacility14_3279(9088, 1480), 3);
    add_background_object(create_bgfacility3_3272(9088, 1416), 3);
    add_background_object(create_bgfacility1_3271(7808, 1256), 3);
    add_background_object(create_bgfacility12_3280(7808, 1320), 3);
    add_background_object(create_bgfacility3_3272(7936, 1256), 3);
    add_background_object(create_bgfacility14_3279(7936, 1320), 3);
    add_background_object(create_bgfacility2_3273(7776, 1256), 3);
    add_background_object(create_bgfacility13_3278(7776, 1320), 3);
    add_background_object(create_bgladder_3311(7736, 1352), 3);
    add_background_object(create_bgfacility1_3271(7680, 1000), 3);
    add_background_object(create_bgfacility12_3280(7680, 1096), 3);
    add_background_object(create_bgfacility3_3272(7808, 1000), 3);
    add_background_object(create_bgfacility14_3279(7808, 1096), 3);
    add_background_object(create_bgfacility2_3273(7648, 1000), 3);
    add_background_object(create_bgfacility13_3278(7648, 1096), 3);
    add_background_object(create_bgfacility2_3273(7584, 1000), 3);
    add_background_object(create_bgfacility3_3272(7616, 1000), 3);
    add_background_object(create_bgfacility13_3278(7584, 1096), 3);
    add_background_object(create_bgfacility14_3279(7616, 1096), 3);
    add_background_object(create_bgladder_3311(7736, 1384), 3);
    add_background_object(create_bgladder_3311(7736, 1416), 3);
    add_background_object(create_bgladder_3311(7736, 1448), 3);
    add_background_object(create_bgladder_3311(7736, 1480), 3);
    add_background_object(create_bgfacility13_3278(6240, 1064), 3);
    add_background_object(create_bgfacility12_3280(6272, 1064), 3);
    add_background_object(create_bgfacility14_3279(6400, 1064), 3);
    add_background_object(create_bgfacility4_3275(6240, 1000), 3);
    add_background_object(create_bgfacility6_3274(6400, 1000), 3);
    add_background_object(create_bgfacility5_3276(6240, 936), 3);
    add_background_object(create_bgfacility7_3277(6400, 936), 3);
    add_background_object(create_bgfacility4_3275(6240, 872), 3);
    add_background_object(create_bgfacility6_3274(6400, 872), 3);
    add_background_object(create_bgrocks1_3213(6240, 744), 3);
    add_background_object(create_bgfacility4_3275(6432, 808), 3);
    add_background_object(create_bgfacility6_3274(7232, 808), 3);
    add_background_object(create_bgrocks1_3213(6464, 744), 3);
    add_background_object(create_bgrocks1_3213(6976, 744), 3);
    add_background_object(create_bgfacility7_3277(7232, 744), 3);
    add_background_object(create_bgfacility5_3276(6432, 744), 3);
    add_background_object(create_bgrocks1_3213(6720, 744), 3);
    add_background_object(create_bgfacility5_3276(6240, 808), 3);
    add_background_object(create_bgfacility7_3277(6400, 808), 3);
    add_background_object(create_bgfacility4_3275(6240, 744), 3);
    add_background_object(create_bgfacility6_3274(6400, 744), 3);
    add_background_object(create_bgfacility13_3278(5856, 816), 3);
    add_background_object(create_bgfacility12_3280(6080, 816), 3);
    add_background_object(create_bgfacility14_3279(6208, 816), 3);
    add_background_object(create_bgfacility12_3280(5952, 816), 3);
    add_background_object(create_bgfacility13_3278(5920, 816), 3);
    add_background_object(create_bgfacility14_3279(5888, 816), 3);
    add_background_object(create_bgfacility7_3277(5888, 752), 3);
    add_background_object(create_bgfacility5_3276(5856, 752), 3);
    add_background_object(create_bgfacility5_3276(5920, 752), 3);
    add_background_object(create_bgfacility7_3277(6208, 752), 3);
    add_background_object(create_bgfacility7_3277(5888, 688), 3);
    add_background_object(create_bgfacility5_3276(5856, 688), 3);
    add_background_object(create_bgfacility5_3276(5920, 688), 3);
    add_background_object(create_bgfacility7_3277(6208, 688), 3);
    add_background_object(create_bgrocks1_3213(5952, 688), 3);
    add_background_object(create_bgfacility7_3277(5888, 624), 3);
    add_background_object(create_bgfacility5_3276(5856, 624), 3);
    add_background_object(create_bgfacility5_3276(5920, 624), 3);
    add_background_object(create_bgfacility7_3277(6208, 624), 3);
    add_background_object(create_bgfacility7_3277(5888, 560), 3);
    add_background_object(create_bgfacility5_3276(5856, 560), 3);
    add_background_object(create_bgfacility5_3276(5920, 560), 3);
    add_background_object(create_bgfacility7_3277(6208, 560), 3);
    add_background_object(create_bgrocks1_3213(5952, 560), 3);
    add_background_object(create_bgrocks1_3213(6240, 616), 3);
    add_background_object(create_bgfacility4_3275(6432, 680), 3);
    add_background_object(create_bgfacility6_3274(7232, 680), 3);
    add_background_object(create_bgrocks1_3213(6464, 616), 3);
    add_background_object(create_bgrocks1_3213(6976, 616), 3);
    add_background_object(create_bgfacility7_3277(7232, 616), 3);
    add_background_object(create_bgfacility5_3276(6432, 616), 3);
    add_background_object(create_bgrocks1_3213(6720, 616), 3);
    add_background_object(create_bgfacility5_3276(6240, 680), 3);
    add_background_object(create_bgfacility7_3277(6400, 680), 3);
    add_background_object(create_bgfacility4_3275(6240, 616), 3);
    add_background_object(create_bgfacility6_3274(6400, 616), 3);
    add_background_object(create_bgfacility5_3276(8032, 1064), 3);
    add_background_object(create_bgfacility5_3276(8480, 1064), 3);
    add_background_object(create_bgfacility7_3277(8512, 1064), 3);
    add_background_object(create_bgfacility7_3277(8448, 1064), 3);
    add_background_object(create_bgfacility17_3310(7968, 2024), 3);
    add_background_object(create_bgfacility4_3275(7264, 808), 3);
    add_background_object(create_bgrocks1_3213(7296, 744), 3);
    add_background_object(create_bgfacility5_3276(7264, 744), 3);
    add_background_object(create_bgfacility4_3275(7264, 680), 3);
    add_background_object(create_bgrocks1_3213(7296, 616), 3);
    add_background_object(create_bgfacility5_3276(7264, 616), 3);
    add_background_object(create_bgfacility6_3274(7552, 808), 3);
    add_background_object(create_bgfacility7_3277(7552, 744), 3);
    add_background_object(create_bgfacility6_3274(7552, 680), 3);
    add_background_object(create_bgfacility7_3277(7552, 616), 3);
    add_background_object(create_bgfacility12_3280(7616, 744), 3);
    add_background_object(create_bgfacility14_3279(7744, 744), 3);
    add_background_object(create_bgfacility13_3278(7584, 744), 3);
    add_background_object(create_bgfacility5_3276(7584, 680), 3);
    add_background_object(create_bgfacility7_3277(7744, 680), 3);
    add_background_object(create_bgfacility5_3276(7584, 616), 3);
    add_background_object(create_bgfacility7_3277(7744, 616), 3);
    add_background_object(create_bgladder_3311(7224, 1576), 3);
    add_background_object(create_bgladder_3311(7224, 1608), 3);
    add_background_object(create_bgladder_3311(7224, 1640), 3);
    add_background_object(create_bgladder_3311(7224, 1672), 3);
    add_background_object(create_bgfacility7_3277(3776, 672), 3);
    add_background_object(create_bgfacility5_3276(3744, 672), 3);
    add_background_object(create_bgfacility7_3277(3840, 672), 3);
    add_background_object(create_bgfacility5_3276(3808, 672), 3);
    add_background_object(create_bgfacility7_3277(3776, 608), 3);
    add_background_object(create_bgfacility5_3276(3744, 608), 3);
    add_background_object(create_bgrocks1_3213(3456, 608), 3);
    add_background_object(create_bgrocks1_3213(3200, 608), 3);
    add_background_object(create_bgfacility4_3275(3360, 672), 3);
    add_background_object(create_bgfacility4_3275(3168, 672), 3);
    add_background_object(create_bgfacility5_3276(3360, 608), 3);
    add_background_object(create_bgfacility5_3276(3168, 608), 3);
    add_background_object(create_bgfacility6_3274(3520, 672), 3);
    add_background_object(create_bgfacility6_3274(3328, 672), 3);
    add_background_object(create_bgfacility7_3277(3520, 608), 3);
    add_background_object(create_bgfacility7_3277(3328, 608), 3);
    add_background_object(create_bgfacility4_3275(3552, 672), 3);
    add_background_object(create_bgfacility5_3276(3552, 608), 3);
    add_background_object(create_bgfacility6_3274(3712, 672), 3);
    add_background_object(create_bgfacility7_3277(3712, 608), 3);
    add_background_object(create_bgfacility7_3277(3136, 672), 3);
    add_background_object(create_bgfacility5_3276(3104, 672), 3);
    add_background_object(create_bgfacility7_3277(3136, 608), 3);
    add_background_object(create_bgfacility5_3276(3104, 608), 3);
    add_background_object(create_bgfacility7_3277(3840, 608), 3);
    add_background_object(create_bgfacility5_3276(3808, 608), 3);
    add_background_object(create_bgfacility7_3277(3904, 672), 3);
    add_background_object(create_bgfacility5_3276(3872, 672), 3);
    add_background_object(create_bgfacility7_3277(3904, 608), 3);
    add_background_object(create_bgfacility5_3276(3872, 608), 3);
    add_background_object(create_bgfacility7_3277(3776, 544), 3);
    add_background_object(create_bgfacility5_3276(3744, 544), 3);
    add_background_object(create_bgfacility7_3277(3840, 544), 3);
    add_background_object(create_bgfacility5_3276(3808, 544), 3);
    add_background_object(create_bgfacility7_3277(3776, 480), 3);
    add_background_object(create_bgfacility5_3276(3744, 480), 3);
    add_background_object(create_bgrocks1_3213(3456, 480), 3);
    add_background_object(create_bgrocks1_3213(3200, 480), 3);
    add_background_object(create_bgfacility4_3275(3360, 544), 3);
    add_background_object(create_bgfacility4_3275(3168, 544), 3);
    add_background_object(create_bgfacility5_3276(3360, 480), 3);
    add_background_object(create_bgfacility5_3276(3168, 480), 3);
    add_background_object(create_bgfacility6_3274(3520, 544), 3);
    add_background_object(create_bgfacility6_3274(3328, 544), 3);
    add_background_object(create_bgfacility7_3277(3520, 480), 3);
    add_background_object(create_bgfacility7_3277(3328, 480), 3);
    add_background_object(create_bgfacility4_3275(3552, 544), 3);
    add_background_object(create_bgfacility5_3276(3552, 480), 3);
    add_background_object(create_bgfacility6_3274(3712, 544), 3);
    add_background_object(create_bgfacility7_3277(3712, 480), 3);
    add_background_object(create_bgfacility7_3277(3136, 544), 3);
    add_background_object(create_bgfacility5_3276(3104, 544), 3);
    add_background_object(create_bgfacility7_3277(3136, 480), 3);
    add_background_object(create_bgfacility5_3276(3104, 480), 3);
    add_background_object(create_bgfacility7_3277(3840, 480), 3);
    add_background_object(create_bgfacility5_3276(3808, 480), 3);
    add_background_object(create_bgfacility7_3277(3904, 544), 3);
    add_background_object(create_bgfacility5_3276(3872, 544), 3);
    add_background_object(create_bgfacility7_3277(3904, 480), 3);
    add_background_object(create_bgfacility5_3276(3872, 480), 3);
    add_background_object(create_bgfacility7_3277(3776, 416), 3);
    add_background_object(create_bgfacility5_3276(3744, 416), 3);
    add_background_object(create_bgfacility7_3277(3840, 416), 3);
    add_background_object(create_bgfacility5_3276(3808, 416), 3);
    add_background_object(create_bgfacility7_3277(3776, 352), 3);
    add_background_object(create_bgfacility5_3276(3744, 352), 3);
    add_background_object(create_bgrocks1_3213(3456, 352), 3);
    add_background_object(create_bgrocks1_3213(3200, 352), 3);
    add_background_object(create_bgfacility4_3275(3360, 416), 3);
    add_background_object(create_bgfacility4_3275(3168, 416), 3);
    add_background_object(create_bgfacility5_3276(3360, 352), 3);
    add_background_object(create_bgfacility5_3276(3168, 352), 3);
    add_background_object(create_bgfacility6_3274(3520, 416), 3);
    add_background_object(create_bgfacility6_3274(3328, 416), 3);
    add_background_object(create_bgfacility7_3277(3520, 352), 3);
    add_background_object(create_bgfacility7_3277(3328, 352), 3);
    add_background_object(create_bgfacility4_3275(3552, 416), 3);
    add_background_object(create_bgfacility5_3276(3552, 352), 3);
    add_background_object(create_bgfacility6_3274(3712, 416), 3);
    add_background_object(create_bgfacility7_3277(3712, 352), 3);
    add_background_object(create_bgfacility7_3277(3136, 416), 3);
    add_background_object(create_bgfacility5_3276(3104, 416), 3);
    add_background_object(create_bgfacility7_3277(3136, 352), 3);
    add_background_object(create_bgfacility5_3276(3104, 352), 3);
    add_background_object(create_bgfacility7_3277(3840, 352), 3);
    add_background_object(create_bgfacility5_3276(3808, 352), 3);
    add_background_object(create_bgfacility7_3277(3904, 416), 3);
    add_background_object(create_bgfacility5_3276(3872, 416), 3);
    add_background_object(create_bgfacility7_3277(3904, 352), 3);
    add_background_object(create_bgfacility5_3276(3872, 352), 3);
    add_background_object(create_bgfacility7_3277(3776, 288), 3);
    add_background_object(create_bgfacility5_3276(3744, 288), 3);
    add_background_object(create_bgfacility7_3277(3840, 288), 3);
    add_background_object(create_bgfacility5_3276(3808, 288), 3);
    add_background_object(create_bgfacility7_3277(3776, 224), 3);
    add_background_object(create_bgfacility5_3276(3744, 224), 3);
    add_background_object(create_bgrocks1_3213(3456, 224), 3);
    add_background_object(create_bgrocks1_3213(3200, 224), 3);
    add_background_object(create_bgfacility4_3275(3360, 288), 3);
    add_background_object(create_bgfacility4_3275(3168, 288), 3);
    add_background_object(create_bgfacility5_3276(3360, 224), 3);
    add_background_object(create_bgfacility5_3276(3168, 224), 3);
    add_background_object(create_bgfacility6_3274(3520, 288), 3);
    add_background_object(create_bgfacility6_3274(3328, 288), 3);
    add_background_object(create_bgfacility7_3277(3520, 224), 3);
    add_background_object(create_bgfacility7_3277(3328, 224), 3);
    add_background_object(create_bgfacility4_3275(3552, 288), 3);
    add_background_object(create_bgfacility5_3276(3552, 224), 3);
    add_background_object(create_bgfacility6_3274(3712, 288), 3);
    add_background_object(create_bgfacility7_3277(3712, 224), 3);
    add_background_object(create_bgfacility7_3277(3136, 288), 3);
    add_background_object(create_bgfacility5_3276(3104, 288), 3);
    add_background_object(create_bgfacility7_3277(3136, 224), 3);
    add_background_object(create_bgfacility5_3276(3104, 224), 3);
    add_background_object(create_bgfacility7_3277(3840, 224), 3);
    add_background_object(create_bgfacility5_3276(3808, 224), 3);
    add_background_object(create_bgfacility7_3277(3904, 288), 3);
    add_background_object(create_bgfacility5_3276(3872, 288), 3);
    add_background_object(create_bgfacility7_3277(3904, 224), 3);
    add_background_object(create_bgfacility5_3276(3872, 224), 3);
    add_background_object(create_bgfacility7_3277(3776, 160), 3);
    add_background_object(create_bgfacility5_3276(3744, 160), 3);
    add_background_object(create_bgfacility7_3277(3840, 160), 3);
    add_background_object(create_bgfacility5_3276(3808, 160), 3);
    add_background_object(create_bgfacility7_3277(3776, 96), 3);
    add_background_object(create_bgfacility5_3276(3744, 96), 3);
    add_background_object(create_bgrocks1_3213(3456, 96), 3);
    add_background_object(create_bgrocks1_3213(3200, 96), 3);
    add_background_object(create_bgfacility4_3275(3360, 160), 3);
    add_background_object(create_bgfacility4_3275(3168, 160), 3);
    add_background_object(create_bgfacility5_3276(3360, 96), 3);
    add_background_object(create_bgfacility5_3276(3168, 96), 3);
    add_background_object(create_bgfacility6_3274(3520, 160), 3);
    add_background_object(create_bgfacility6_3274(3328, 160), 3);
    add_background_object(create_bgfacility7_3277(3520, 96), 3);
    add_background_object(create_bgfacility7_3277(3328, 96), 3);
    add_background_object(create_bgfacility4_3275(3552, 160), 3);
    add_background_object(create_bgfacility5_3276(3552, 96), 3);
    add_background_object(create_bgfacility6_3274(3712, 160), 3);
    add_background_object(create_bgfacility7_3277(3712, 96), 3);
    add_background_object(create_bgfacility7_3277(3136, 160), 3);
    add_background_object(create_bgfacility5_3276(3104, 160), 3);
    add_background_object(create_bgfacility7_3277(3136, 96), 3);
    add_background_object(create_bgfacility5_3276(3104, 96), 3);
    add_background_object(create_bgfacility7_3277(3840, 96), 3);
    add_background_object(create_bgfacility5_3276(3808, 96), 3);
    add_background_object(create_bgfacility7_3277(3904, 160), 3);
    add_background_object(create_bgfacility5_3276(3872, 160), 3);
    add_background_object(create_bgfacility7_3277(3904, 96), 3);
    add_background_object(create_bgfacility5_3276(3872, 96), 3);
    add_background_object(create_bgfacility7_3277(3776, 32), 3);
    add_background_object(create_bgfacility5_3276(3744, 32), 3);
    add_background_object(create_bgfacility7_3277(3840, 32), 3);
    add_background_object(create_bgfacility5_3276(3808, 32), 3);
    add_background_object(create_bgfacility7_3277(3776, -32), 3);
    add_background_object(create_bgfacility5_3276(3744, -32), 3);
    add_background_object(create_bgrocks1_3213(3456, -32), 3);
    add_background_object(create_bgrocks1_3213(3200, -32), 3);
    add_background_object(create_bgfacility4_3275(3360, 32), 3);
    add_background_object(create_bgfacility4_3275(3168, 32), 3);
    add_background_object(create_bgfacility5_3276(3360, -32), 3);
    add_background_object(create_bgfacility5_3276(3168, -32), 3);
    add_background_object(create_bgfacility6_3274(3520, 32), 3);
    add_background_object(create_bgfacility6_3274(3328, 32), 3);
    add_background_object(create_bgfacility7_3277(3520, -32), 3);
    add_background_object(create_bgfacility7_3277(3328, -32), 3);
    add_background_object(create_bgfacility4_3275(3552, 32), 3);
    add_background_object(create_bgfacility5_3276(3552, -32), 3);
    add_background_object(create_bgfacility6_3274(3712, 32), 3);
    add_background_object(create_bgfacility7_3277(3712, -32), 3);
    add_background_object(create_bgfacility7_3277(3136, 32), 3);
    add_background_object(create_bgfacility5_3276(3104, 32), 3);
    add_background_object(create_bgfacility7_3277(3136, -32), 3);
    add_background_object(create_bgfacility5_3276(3104, -32), 3);
    add_background_object(create_bgfacility7_3277(3840, -32), 3);
    add_background_object(create_bgfacility5_3276(3808, -32), 3);
    add_background_object(create_bgfacility7_3277(3904, 32), 3);
    add_background_object(create_bgfacility5_3276(3872, 32), 3);
    add_background_object(create_bgfacility7_3277(3904, -32), 3);
    add_background_object(create_bgfacility5_3276(3872, -32), 3);
    add_background_object(create_bgrocks1_3213(5312, 368), 3);
    add_background_object(create_bgrocks1_3213(5568, 368), 3);
    add_background_object(create_bgfacility4_3275(5280, 432), 3);
    add_background_object(create_bgfacility6_3274(5824, 432), 3);
    add_background_object(create_bgfacility7_3277(5824, 368), 3);
    add_background_object(create_bgfacility5_3276(5280, 368), 3);
    add_background_object(create_bgrocks1_3213(5312, 240), 3);
    add_background_object(create_bgrocks1_3213(5568, 240), 3);
    add_background_object(create_bgfacility4_3275(5280, 304), 3);
    add_background_object(create_bgfacility6_3274(5824, 304), 3);
    add_background_object(create_bgfacility7_3277(5824, 240), 3);
    add_background_object(create_bgfacility5_3276(5280, 240), 3);
    add_background_object(create_bgrocks1_3213(5312, 112), 3);
    add_background_object(create_bgrocks1_3213(5568, 112), 3);
    add_background_object(create_bgfacility4_3275(5280, 176), 3);
    add_background_object(create_bgfacility6_3274(5824, 176), 3);
    add_background_object(create_bgfacility7_3277(5824, 112), 3);
    add_background_object(create_bgfacility5_3276(5280, 112), 3);
    add_background_object(create_bgrocks1_3213(5312, -16), 3);
    add_background_object(create_bgrocks1_3213(5568, -16), 3);
    add_background_object(create_bgfacility4_3275(5280, 48), 3);
    add_background_object(create_bgfacility6_3274(5824, 48), 3);
    add_background_object(create_bgfacility7_3277(5824, -16), 3);
    add_background_object(create_bgfacility5_3276(5280, -16), 3);
    add_background_object(create_bgsnow8_3229(8448, 1000), 3);
    add_background_object(create_bgsnow9_3222(8048, 1000), 3);
    add_background_object(create_bgsnowflat_3235(8064, 1000), 3);
    add_background_object(create_bgsnowflat_3235(8192, 1000), 3);
    add_background_object(create_bgsnowflat_3235(8320, 1000), 3);
    add_background_object(create_bgfacility13_3278(8544, 744), 3);
    add_background_object(create_bgfacility14_3279(8576, 744), 3);
    add_background_object(create_bgfacility3_3272(8576, 616), 3);
    add_background_object(create_bgfacility2_3273(8544, 616), 3);
    add_background_object(create_bgfacility5_3276(8544, 680), 3);
    add_background_object(create_bgfacility7_3277(8576, 680), 3);
    add_background_object(create_bgfacility3_3272(8512, 616), 3);
    add_background_object(create_bgfacility2_3273(8480, 616), 3);
    add_background_object(create_bgfacility13_3278(8480, 744), 3);
    add_background_object(create_bgfacility14_3279(8512, 744), 3);
    add_background_object(create_bgfacility5_3276(8480, 680), 3);
    add_background_object(create_bgfacility7_3277(8512, 680), 3);
    add_background_object(create_bgrocks1_3213(7488, 488), 3);
    add_background_object(create_bgfacility4_3275(7264, 552), 3);
    add_background_object(create_bgrocks1_3213(7296, 488), 3);
    add_background_object(create_bgfacility5_3276(7264, 488), 3);
    add_background_object(create_bgfacility6_3274(7552, 552), 3);
    add_background_object(create_bgfacility7_3277(7552, 488), 3);
    add_background_object(create_bgfacility5_3276(7584, 552), 3);
    add_background_object(create_bgfacility7_3277(7744, 552), 3);
    add_background_object(create_bgfacility5_3276(7584, 488), 3);
    add_background_object(create_bgfacility7_3277(7744, 488), 3);
    add_background_object(create_bgrocks1_3213(7488, 360), 3);
    add_background_object(create_bgfacility4_3275(7264, 424), 3);
    add_background_object(create_bgrocks1_3213(7296, 360), 3);
    add_background_object(create_bgfacility5_3276(7264, 360), 3);
    add_background_object(create_bgfacility6_3274(7552, 424), 3);
    add_background_object(create_bgfacility7_3277(7552, 360), 3);
    add_background_object(create_bgfacility5_3276(7584, 424), 3);
    add_background_object(create_bgfacility7_3277(7744, 424), 3);
    add_background_object(create_bgfacility5_3276(7584, 360), 3);
    add_background_object(create_bgfacility7_3277(7744, 360), 3);
    add_background_object(create_bgrocks1_3213(7488, 232), 3);
    add_background_object(create_bgfacility4_3275(7264, 296), 3);
    add_background_object(create_bgrocks1_3213(7296, 232), 3);
    add_background_object(create_bgfacility5_3276(7264, 232), 3);
    add_background_object(create_bgfacility6_3274(7552, 296), 3);
    add_background_object(create_bgfacility7_3277(7552, 232), 3);
    add_background_object(create_bgfacility5_3276(7584, 296), 3);
    add_background_object(create_bgfacility7_3277(7744, 296), 3);
    add_background_object(create_bgfacility5_3276(7584, 232), 3);
    add_background_object(create_bgfacility7_3277(7744, 232), 3);
    add_background_object(create_bgrocks1_3213(7488, 104), 3);
    add_background_object(create_bgfacility4_3275(7264, 168), 3);
    add_background_object(create_bgrocks1_3213(7296, 104), 3);
    add_background_object(create_bgfacility5_3276(7264, 104), 3);
    add_background_object(create_bgfacility6_3274(7552, 168), 3);
    add_background_object(create_bgfacility7_3277(7552, 104), 3);
    add_background_object(create_bgfacility5_3276(7584, 168), 3);
    add_background_object(create_bgfacility7_3277(7744, 168), 3);
    add_background_object(create_bgfacility5_3276(7584, 104), 3);
    add_background_object(create_bgfacility7_3277(7744, 104), 3);
    add_background_object(create_bgrocks1_3213(7488, -24), 3);
    add_background_object(create_bgfacility4_3275(7264, 40), 3);
    add_background_object(create_bgrocks1_3213(7296, -24), 3);
    add_background_object(create_bgfacility5_3276(7264, -24), 3);
    add_background_object(create_bgfacility6_3274(7552, 40), 3);
    add_background_object(create_bgfacility7_3277(7552, -24), 3);
    add_background_object(create_bgfacility5_3276(7584, 40), 3);
    add_background_object(create_bgfacility7_3277(7744, 40), 3);
    add_background_object(create_bgfacility5_3276(7584, -24), 3);
    add_background_object(create_bgfacility7_3277(7744, -24), 3);
    add_background_object(create_bgfacility7_3277(5888, 496), 3);
    add_background_object(create_bgfacility5_3276(5856, 496), 3);
    add_background_object(create_bgfacility5_3276(5920, 496), 3);
    add_background_object(create_bgfacility7_3277(6208, 496), 3);
    add_background_object(create_bgfacility7_3277(5888, 432), 3);
    add_background_object(create_bgfacility5_3276(5856, 432), 3);
    add_background_object(create_bgfacility5_3276(5920, 432), 3);
    add_background_object(create_bgfacility7_3277(6208, 432), 3);
    add_background_object(create_bgrocks1_3213(5952, 432), 3);
    add_background_object(create_bgrocks1_3213(6240, 488), 3);
    add_background_object(create_bgfacility4_3275(6432, 552), 3);
    add_background_object(create_bgfacility6_3274(7232, 552), 3);
    add_background_object(create_bgrocks1_3213(6464, 488), 3);
    add_background_object(create_bgrocks1_3213(6976, 488), 3);
    add_background_object(create_bgfacility7_3277(7232, 488), 3);
    add_background_object(create_bgfacility5_3276(6432, 488), 3);
    add_background_object(create_bgrocks1_3213(6720, 488), 3);
    add_background_object(create_bgfacility5_3276(6240, 552), 3);
    add_background_object(create_bgfacility7_3277(6400, 552), 3);
    add_background_object(create_bgfacility4_3275(6240, 488), 3);
    add_background_object(create_bgfacility6_3274(6400, 488), 3);
    add_background_object(create_bgfacility7_3277(5888, 368), 3);
    add_background_object(create_bgfacility5_3276(5856, 368), 3);
    add_background_object(create_bgfacility5_3276(5920, 368), 3);
    add_background_object(create_bgfacility7_3277(6208, 368), 3);
    add_background_object(create_bgfacility7_3277(5888, 304), 3);
    add_background_object(create_bgfacility5_3276(5856, 304), 3);
    add_background_object(create_bgfacility5_3276(5920, 304), 3);
    add_background_object(create_bgfacility7_3277(6208, 304), 3);
    add_background_object(create_bgrocks1_3213(5952, 304), 3);
    add_background_object(create_bgrocks1_3213(6240, 360), 3);
    add_background_object(create_bgfacility4_3275(6432, 424), 3);
    add_background_object(create_bgfacility6_3274(7232, 424), 3);
    add_background_object(create_bgrocks1_3213(6464, 360), 3);
    add_background_object(create_bgrocks1_3213(6976, 360), 3);
    add_background_object(create_bgfacility7_3277(7232, 360), 3);
    add_background_object(create_bgfacility5_3276(6432, 360), 3);
    add_background_object(create_bgrocks1_3213(6720, 360), 3);
    add_background_object(create_bgfacility5_3276(6240, 424), 3);
    add_background_object(create_bgfacility7_3277(6400, 424), 3);
    add_background_object(create_bgfacility4_3275(6240, 360), 3);
    add_background_object(create_bgfacility6_3274(6400, 360), 3);
    add_background_object(create_bgfacility7_3277(5888, 240), 3);
    add_background_object(create_bgfacility5_3276(5856, 240), 3);
    add_background_object(create_bgfacility5_3276(5920, 240), 3);
    add_background_object(create_bgfacility7_3277(6208, 240), 3);
    add_background_object(create_bgfacility7_3277(5888, 176), 3);
    add_background_object(create_bgfacility5_3276(5856, 176), 3);
    add_background_object(create_bgfacility5_3276(5920, 176), 3);
    add_background_object(create_bgfacility7_3277(6208, 176), 3);
    add_background_object(create_bgrocks1_3213(5952, 176), 3);
    add_background_object(create_bgrocks1_3213(6240, 232), 3);
    add_background_object(create_bgfacility4_3275(6432, 296), 3);
    add_background_object(create_bgfacility6_3274(7232, 296), 3);
    add_background_object(create_bgrocks1_3213(6464, 232), 3);
    add_background_object(create_bgrocks1_3213(6976, 232), 3);
    add_background_object(create_bgfacility7_3277(7232, 232), 3);
    add_background_object(create_bgfacility5_3276(6432, 232), 3);
    add_background_object(create_bgrocks1_3213(6720, 232), 3);
    add_background_object(create_bgfacility5_3276(6240, 296), 3);
    add_background_object(create_bgfacility7_3277(6400, 296), 3);
    add_background_object(create_bgfacility4_3275(6240, 232), 3);
    add_background_object(create_bgfacility6_3274(6400, 232), 3);
    add_background_object(create_bgfacility15_3308(8736, 1000), 3);
    add_background_object(create_bgfacility15_3308(8800, 1064), 3);
    add_background_object(create_bgfacility13_3278(8736, 1128), 3);
    add_background_object(create_bgfacility14_3279(8768, 1128), 3);
    add_background_object(create_bgfacility2_3273(8736, 1064), 3);
    add_background_object(create_bgfacility3_3272(8768, 1064), 3);
    add_background_object(create_bgfacility2_3273(8800, 1128), 3);
    add_background_object(create_bgfacility3_3272(8832, 1128), 3);
    add_background_object(create_bgfacility12_3280(8576, 1128), 3);
    add_background_object(create_bgfacility1_3271(8576, 1000), 3);
    add_background_object(create_bgfacility2_3273(9056, 1128), 3);
    add_background_object(create_bgfacility3_3272(9088, 1128), 3);
    add_background_object(create_bgfacility13_3278(9120, 1128), 3);
    add_background_object(create_bgfacility14_3279(9280, 1128), 3);
    add_background_object(create_bgfacility2_3273(9120, 1064), 3);
    add_background_object(create_bgfacility3_3272(9280, 1064), 3);
    add_background_object(create_bgfacility1_3271(9152, 1064), 3);
    add_background_object(create_bgfacility12_3280(9152, 1128), 3);
    add_background_object(create_bgfacility2_3273(9312, 1128), 3);
    add_background_object(create_bgfacility3_3272(9344, 1128), 3);
    add_background_object(create_bgfacility15_3308(9440, 1192), 3);
    add_background_object(create_bgfacility15_3308(9504, 1256), 3);
    add_background_object(create_bgfacility15_3308(9568, 1320), 3);
    add_background_object(create_bgfacility15_3308(9632, 1384), 3);
    add_background_object(create_bgrocks1_3213(9152, 776), 3);
    add_background_object(create_bgfacility13_3278(9120, 904), 3);
    add_background_object(create_bgfacility12_3280(9152, 904), 3);
    add_background_object(create_bgfacility5_3276(9120, 776), 3);
    add_background_object(create_bgfacility12_3280(9280, 904), 3);
    add_background_object(create_bgfacility4_3275(9120, 840), 3);
    add_background_object(create_bgfacility14_3279(9408, 904), 3);
    add_background_object(create_bgfacility6_3274(9408, 840), 3);
    add_background_object(create_bgfacility7_3277(9408, 776), 3);
    add_background_object(create_bgfacility5_3276(9440, 840), 3);
    add_background_object(create_bgfacility4_3275(9440, 904), 3);
    add_background_object(create_bgfacility6_3274(9472, 904), 3);
    add_background_object(create_bgfacility7_3277(9472, 840), 3);
    add_background_object(create_bgfacility13_3278(9440, 968), 3);
    add_background_object(create_bgfacility14_3279(9472, 968), 3);
    add_background_object(create_bgfacility5_3276(9504, 904), 3);
    add_background_object(create_bgfacility4_3275(9504, 968), 3);
    add_background_object(create_bgfacility6_3274(9536, 968), 3);
    add_background_object(create_bgfacility7_3277(9536, 904), 3);
    add_background_object(create_bgfacility13_3278(9504, 1032), 3);
    add_background_object(create_bgfacility14_3279(9536, 1032), 3);
    add_background_object(create_bgfacility5_3276(9568, 968), 3);
    add_background_object(create_bgfacility4_3275(9568, 1032), 3);
    add_background_object(create_bgfacility6_3274(9600, 1032), 3);
    add_background_object(create_bgfacility7_3277(9600, 968), 3);
    add_background_object(create_bgfacility13_3278(9568, 1096), 3);
    add_background_object(create_bgfacility14_3279(9600, 1096), 3);
    add_background_object(create_bgfacility5_3276(9632, 1032), 3);
    add_background_object(create_bgfacility4_3275(9632, 1096), 3);
    add_background_object(create_bgfacility6_3274(9664, 1096), 3);
    add_background_object(create_bgfacility7_3277(9664, 1032), 3);
    add_background_object(create_bgfacility13_3278(9632, 1160), 3);
    add_background_object(create_bgfacility14_3279(9664, 1160), 3);
    add_background_object(create_bgfacility2_3273(9440, 1256), 3);
    add_background_object(create_bgfacility3_3272(9472, 1256), 3);
    add_background_object(create_bgfacility2_3273(9504, 1320), 3);
    add_background_object(create_bgfacility3_3272(9536, 1320), 3);
    add_background_object(create_bgfacility6_3274(9472, 1320), 3);
    add_background_object(create_bgfacility4_3275(9440, 1320), 3);
    add_background_object(create_bgfacility6_3274(9536, 1384), 3);
    add_background_object(create_bgfacility4_3275(9504, 1384), 3);
    add_background_object(create_bgfacility5_3276(9440, 1384), 3);
    add_background_object(create_bgfacility7_3277(9472, 1384), 3);
    add_background_object(create_bgfacility5_3276(9504, 1448), 3);
    add_background_object(create_bgfacility7_3277(9536, 1448), 3);
    add_background_object(create_bgfacility6_3274(9472, 1448), 3);
    add_background_object(create_bgfacility4_3275(9440, 1448), 3);
    add_background_object(create_bgfacility6_3274(9536, 1512), 3);
    add_background_object(create_bgfacility4_3275(9504, 1512), 3);
    add_background_object(create_bgfacility5_3276(9440, 1512), 3);
    add_background_object(create_bgfacility7_3277(9472, 1512), 3);
    add_background_object(create_bgfacility5_3276(9504, 1576), 3);
    add_background_object(create_bgfacility7_3277(9536, 1576), 3);
    add_background_object(create_bgfacility6_3274(9472, 1576), 3);
    add_background_object(create_bgfacility4_3275(9440, 1576), 3);
    add_background_object(create_bgfacility6_3274(9536, 1640), 3);
    add_background_object(create_bgfacility4_3275(9504, 1640), 3);
    add_background_object(create_bgfacility5_3276(9440, 1640), 3);
    add_background_object(create_bgfacility7_3277(9472, 1640), 3);
    add_background_object(create_bgfacility5_3276(9504, 1704), 3);
    add_background_object(create_bgfacility7_3277(9536, 1704), 3);
    add_background_object(create_bgfacility2_3273(9568, 1384), 3);
    add_background_object(create_bgfacility3_3272(9600, 1384), 3);
    add_background_object(create_bgfacility6_3274(9600, 1448), 3);
    add_background_object(create_bgfacility4_3275(9568, 1448), 3);
    add_background_object(create_bgfacility5_3276(9568, 1512), 3);
    add_background_object(create_bgfacility7_3277(9600, 1512), 3);
    add_background_object(create_bgfacility6_3274(9600, 1576), 3);
    add_background_object(create_bgfacility4_3275(9568, 1576), 3);
    add_background_object(create_bgfacility5_3276(9568, 1640), 3);
    add_background_object(create_bgfacility7_3277(9600, 1640), 3);
    add_background_object(create_bgfacility6_3274(9600, 1704), 3);
    add_background_object(create_bgfacility4_3275(9568, 1704), 3);
    add_background_object(create_bgfacility2_3273(9632, 1448), 3);
    add_background_object(create_bgfacility3_3272(9664, 1448), 3);
    add_background_object(create_bgfacility6_3274(9664, 1512), 3);
    add_background_object(create_bgfacility4_3275(9632, 1512), 3);
    add_background_object(create_bgfacility5_3276(9632, 1576), 3);
    add_background_object(create_bgfacility7_3277(9664, 1576), 3);
    add_background_object(create_bgfacility6_3274(9664, 1640), 3);
    add_background_object(create_bgfacility4_3275(9632, 1640), 3);
    add_background_object(create_bgfacility5_3276(9632, 1704), 3);
    add_background_object(create_bgfacility7_3277(9664, 1704), 3);
    add_background_object(create_bgfacility13_3278(9696, 1576), 3);
    add_background_object(create_bgfacility2_3273(9696, 1512), 3);
    add_background_object(create_bgfacility1_3271(9728, 1512), 3);
    add_background_object(create_bgfacility12_3280(9728, 1576), 3);
    add_background_object(create_bgfacility6_3274(9472, 1704), 3);
    add_background_object(create_bgfacility4_3275(9440, 1704), 3);
    add_background_object(create_bgfacility2_3273(9120, 712), 3);
    add_background_object(create_bgfacility1_3271(9152, 712), 3);
    add_background_object(create_bgfacility1_3271(9280, 712), 3);
    add_background_object(create_bgfacility3_3272(9408, 712), 3);
    add_background_object(create_bgfacility2_3273(9440, 776), 3);
    add_background_object(create_bgfacility3_3272(9472, 776), 3);
    add_background_object(create_bgfacility2_3273(9504, 840), 3);
    add_background_object(create_bgfacility3_3272(9536, 840), 3);
    add_background_object(create_bgfacility2_3273(9568, 904), 3);
    add_background_object(create_bgfacility3_3272(9600, 904), 3);
    add_background_object(create_bgfacility2_3273(9632, 968), 3);
    add_background_object(create_bgfacility3_3272(9664, 968), 3);
    add_background_object(create_bgfacility15_3308(9696, 968), 3);
    add_background_object(create_bgfacility19_3312(9952, 1192), 3);
    add_background_object(create_bgfacility20_3313(10144, 1128), 3);
    add_background_object(create_bgfacility5_3276(9696, 1096), 3);
    add_background_object(create_bgfacility4_3275(9696, 1160), 3);
    add_background_object(create_bgfacility6_3274(9728, 1160), 3);
    add_background_object(create_bgfacility7_3277(9728, 1096), 3);
    add_background_object(create_bgfacility13_3278(9696, 1224), 3);
    add_background_object(create_bgfacility14_3279(9728, 1224), 3);
    add_background_object(create_bgfacility2_3273(9696, 1032), 3);
    add_background_object(create_bgfacility3_3272(9728, 1032), 3);
    add_background_object(create_bgfacility19_3312(10016, 1128), 3);
    add_background_object(create_bgfacility20_3313(10208, 1192), 3);
    add_background_object(create_bgfacility5_3276(9888, 1256), 3);
    add_background_object(create_bgfacility7_3277(9920, 1256), 3);
    add_background_object(create_bgfacility4_3275(9888, 1192), 3);
    add_background_object(create_bgfacility6_3274(9920, 1192), 3);
    add_background_object(create_bgfacility13_3278(9952, 1192), 3);
    add_background_object(create_bgfacility14_3279(9984, 1192), 3);
    add_background_object(create_bgfacility13_3278(10016, 1128), 3);
    add_background_object(create_bgfacility14_3279(10048, 1128), 3);
    add_background_object(create_bgfacility5_3276(9952, 1128), 3);
    add_background_object(create_bgfacility7_3277(9984, 1128), 3);
    add_background_object(create_bgfacility13_3278(10144, 1128), 3);
    add_background_object(create_bgfacility14_3279(10176, 1128), 3);
    add_background_object(create_bgfacility13_3278(10208, 1192), 3);
    add_background_object(create_bgfacility14_3279(10240, 1192), 3);
    add_background_object(create_bgfacility5_3276(10208, 1128), 3);
    add_background_object(create_bgfacility7_3277(10240, 1128), 3);
    add_background_object(create_bgfacility5_3276(9888, 1128), 3);
    add_background_object(create_bgfacility7_3277(9920, 1128), 3);
    add_background_object(create_bgfacility4_3275(10272, 1256), 3);
    add_background_object(create_bgfacility6_3274(10304, 1256), 3);
    add_background_object(create_bgfacility5_3276(10272, 1192), 3);
    add_background_object(create_bgfacility7_3277(10304, 1192), 3);
    add_background_object(create_bgfacility4_3275(10272, 1128), 3);
    add_background_object(create_bgfacility6_3274(10304, 1128), 3);
    add_background_object(create_bgfacility4_3275(10272, 1384), 3);
    add_background_object(create_bgfacility6_3274(10304, 1384), 3);
    add_background_object(create_bgfacility5_3276(10272, 1320), 3);
    add_background_object(create_bgfacility7_3277(10304, 1320), 3);
    add_background_object(create_bgfacility18_3307(10208, 1384), 3);
    add_background_object(create_bgfacility18_3307(10144, 1448), 3);
    add_background_object(create_bgfacility4_3275(10272, 1512), 3);
    add_background_object(create_bgfacility6_3274(10304, 1512), 3);
    add_background_object(create_bgfacility5_3276(10272, 1448), 3);
    add_background_object(create_bgfacility7_3277(10304, 1448), 3);
    add_background_object(create_bgfacility13_3278(10272, 1576), 3);
    add_background_object(create_bgfacility14_3279(10304, 1576), 3);
    add_background_object(create_bgfacility13_3278(10208, 1576), 3);
    add_background_object(create_bgfacility14_3279(10240, 1576), 3);
    add_background_object(create_bgfacility5_3276(10208, 1512), 3);
    add_background_object(create_bgfacility7_3277(10240, 1512), 3);
    add_background_object(create_bgfacility2_3273(10208, 1448), 3);
    add_background_object(create_bgfacility3_3272(10240, 1448), 3);
    add_background_object(create_bgfacility13_3278(10080, 1128), 3);
    add_background_object(create_bgfacility14_3279(10112, 1128), 3);
    add_background_object(create_bgfacility4_3275(9888, 1704), 3);
    add_background_object(create_bgfacility6_3274(9920, 1704), 3);
    add_background_object(create_bgfacility5_3276(9888, 1640), 3);
    add_background_object(create_bgfacility7_3277(9920, 1640), 3);
    add_background_object(create_bgfacility3_3272(9856, 1640), 3);
    add_background_object(create_bgfacility1_3271(9728, 1640), 3);
    add_background_object(create_bgfacility2_3273(9696, 1640), 3);
    add_background_object(create_bgfacility5_3276(9888, 1768), 3);
    add_background_object(create_bgfacility7_3277(9920, 1768), 3);
    add_background_object(create_bgfacility16_3309(9952, 1704), 3);
    add_background_object(create_bgfacility13_3278(9440, 1768), 3);
    add_background_object(create_bgfacility14_3279(9472, 1768), 3);
    add_background_object(create_bgfacility13_3278(9504, 1768), 3);
    add_background_object(create_bgfacility14_3279(9536, 1768), 3);
    add_background_object(create_bgfacility13_3278(9568, 1768), 3);
    add_background_object(create_bgfacility14_3279(9600, 1768), 3);
    add_background_object(create_bgfacility13_3278(9632, 1768), 3);
    add_background_object(create_bgfacility14_3279(9664, 1768), 3);
    add_background_object(create_bgfacility2_3273(9440, 1832), 3);
    add_background_object(create_bgfacility1_3271(9472, 1832), 3);
    add_background_object(create_bgfacility1_3271(9600, 1832), 3);
    add_background_object(create_bgfacility1_3271(9728, 1832), 3);
    add_background_object(create_bgfacility1_3271(9856, 1832), 3);
    add_background_object(create_bgfacility1_3271(9984, 1832), 3);
    add_background_object(create_bgfacility1_3271(10112, 1832), 3);
    add_background_object(create_bgfacility4_3275(9440, 1896), 3);
    add_background_object(create_bgfacility5_3276(9440, 1960), 3);
    add_background_object(create_bgfacility4_3275(9440, 2024), 3);
    add_background_object(create_bgfacility5_3276(9440, 2088), 3);
    add_background_object(create_bgrocks1_3213(9472, 2024), 3);
    add_background_object(create_bgrocks1_3213(9728, 1896), 3);
    add_background_object(create_bgrocks1_3213(9728, 2024), 3);
    add_background_object(create_bgrocks1_3213(9984, 1896), 3);
    add_background_object(create_bgrocks1_3213(9984, 2024), 3);
    add_background_object(create_bgfacility6_3274(9856, 1704), 3);
    add_background_object(create_bgfacility4_3275(9696, 1704), 3);
    add_background_object(create_bgfacility14_3279(9856, 1768), 3);
    add_background_object(create_bgfacility13_3278(9696, 1768), 3);
    add_background_object(create_bgrocks13_3212(9728, 1704), 3);
    add_background_object(create_bgrocks13_3212(9792, 1704), 3);
    add_background_object(create_bgfacility3_3272(10176, 1512), 3);
    add_background_object(create_bgfacility14_3279(10176, 1576), 3);
    add_background_object(create_bgfacility3_3272(9856, 1512), 3);
    add_background_object(create_bgfacility14_3279(9856, 1576), 3);
    add_background_object(create_bgfacility13_3278(9888, 1576), 3);
    add_background_object(create_bgfacility2_3273(9888, 1512), 3);
    add_background_object(create_bgfacility3_3272(9920, 1512), 3);
    add_background_object(create_bgfacility14_3279(9920, 1576), 3);
    add_background_object(create_bgrocks1_3213(9152, 1640), 3);
    add_background_object(create_bgfacility5_3276(9760, 1096), 3);
    add_background_object(create_bgfacility4_3275(9760, 1160), 3);
    add_background_object(create_bgfacility6_3274(9792, 1160), 3);
    add_background_object(create_bgfacility7_3277(9792, 1096), 3);
    add_background_object(create_bgfacility13_3278(9760, 1224), 3);
    add_background_object(create_bgfacility14_3279(9792, 1224), 3);
    add_background_object(create_bgfacility2_3273(9760, 1032), 3);
    add_background_object(create_bgfacility3_3272(9792, 1032), 3);
    add_background_object(create_bgfacility2_3273(9888, 1064), 3);
    add_background_object(create_bgfacility3_3272(9920, 1064), 3);
    add_background_object(create_bgfacility2_3273(9952, 1064), 3);
    add_background_object(create_bgfacility3_3272(9984, 1064), 3);
    add_background_object(create_bgfacility2_3273(10016, 1064), 3);
    add_background_object(create_bgfacility3_3272(10048, 1064), 3);
    add_background_object(create_bgfacility2_3273(10080, 1064), 3);
    add_background_object(create_bgfacility3_3272(10112, 1064), 3);
    add_background_object(create_bgfacility2_3273(10144, 1000), 3);
    add_background_object(create_bgfacility3_3272(10176, 1000), 3);
    add_background_object(create_bgfacility2_3273(10208, 1000), 3);
    add_background_object(create_bgfacility3_3272(10240, 1000), 3);
    add_background_object(create_bgfacility2_3273(10272, 1000), 3);
    add_background_object(create_bgfacility3_3272(10304, 1000), 3);
    add_background_object(create_bgfacility1_3271(10240, 1832), 3);
    add_background_object(create_bgfacility1_3271(10368, 1832), 3);
    add_background_object(create_bgrocks1_3213(10240, 1896), 3);
    add_background_object(create_bgrocks1_3213(10240, 2024), 3);
    add_background_object(create_bgfacility17_3310(10400, 1704), 3);
    add_background_object(create_bgfacility3_3272(10496, 1832), 3);
    add_background_object(create_bgfacility6_3274(10496, 1896), 3);
    add_background_object(create_bgfacility7_3277(10496, 1960), 3);
    add_background_object(create_bgfacility6_3274(10496, 2024), 3);
    add_background_object(create_bgfacility7_3277(10496, 2088), 3);
    add_background_object(create_bgfacility5_3276(10528, 1896), 3);
    add_background_object(create_bgfacility4_3275(10528, 1832), 3);
    add_background_object(create_bgfacility5_3276(10528, 2024), 3);
    add_background_object(create_bgfacility4_3275(10528, 1960), 3);
    add_background_object(create_bgfacility5_3276(10528, 1768), 3);
    add_background_object(create_bgfacility4_3275(10528, 1704), 3);
    add_background_object(create_bgfacility2_3273(10528, 1640), 3);
    add_background_object(create_bgfacility13_3278(10336, 1576), 3);
    add_background_object(create_bgfacility14_3279(10368, 1576), 3);
    add_background_object(create_bgfacility2_3273(10336, 1512), 3);
    add_background_object(create_bgfacility3_3272(10368, 1512), 3);
    add_background_object(create_bgrocks1_3213(10560, 1704), 3);
    add_background_object(create_bgfacility1_3271(10560, 1640), 3);
    add_background_object(create_bgfacility1_3271(10688, 1640), 3);
    add_background_object(create_bgrocks1_3213(10560, 1832), 3);
    add_background_object(create_bgrocks1_3213(10560, 1960), 3);
    add_background_object(create_bgfacility13_3278(10592, 1576), 3);
    add_background_object(create_bgfacility4_3275(10592, 1512), 3);
    add_background_object(create_bgfacility5_3276(10592, 1448), 3);
    add_background_object(create_bgfacility4_3275(10592, 1384), 3);
    add_background_object(create_bgfacility2_3273(10720, 1256), 3);
    add_background_object(create_bgrocks1_3213(10624, 1448), 3);
    add_background_object(create_bgrocks1_3213(10624, 1320), 3);
    add_background_object(create_bgfacility1_3271(10624, 1320), 3);
    add_background_object(create_bgfacility1_3271(10752, 1256), 3);
    add_background_object(create_bgfacility1_3271(10048, 1512), 3);
    add_background_object(create_bgfacility12_3280(10048, 1576), 3);
    add_background_object(create_bgfacility6_3274(10880, 1512), 3);
    add_background_object(create_bgfacility7_3277(10880, 1448), 3);
    add_background_object(create_bgfacility6_3274(10880, 1384), 3);
    add_background_object(create_bgfacility3_3272(10880, 1256), 3);
    add_background_object(create_bgfacility7_3277(10880, 1320), 3);
    add_background_object(create_bgfacility14_3279(10880, 1576), 3);
    add_background_object(create_bgfacility13_3278(10912, 1768), 3);
    add_background_object(create_bgfacility4_3275(10912, 1704), 3);
    add_background_object(create_bgfacility5_3276(10912, 1640), 3);
    add_background_object(create_bgfacility4_3275(10912, 1576), 3);
    add_background_object(create_bgfacility5_3276(10912, 1512), 3);
    add_background_object(create_bgfacility2_3273(10912, 1448), 3);
    add_background_object(create_bgrocks1_3213(10944, 1640), 3);
    add_background_object(create_bgrocks1_3213(10944, 1512), 3);
    add_background_object(create_bgfacility1_3271(10944, 1448), 3);
    add_background_object(create_bgfacility1_3271(11072, 1448), 3);
    add_background_object(create_bgfacility6_3274(11200, 1704), 3);
    add_background_object(create_bgfacility7_3277(11200, 1640), 3);
    add_background_object(create_bgfacility6_3274(11200, 1576), 3);
    add_background_object(create_bgfacility3_3272(11200, 1448), 3);
    add_background_object(create_bgfacility7_3277(11200, 1512), 3);
    add_background_object(create_bgfacility14_3279(11200, 1768), 3);
    add_background_object(create_bgfacility13_3278(11296, 1704), 3);
    add_background_object(create_bgfacility4_3275(11296, 1640), 3);
    add_background_object(create_bgfacility5_3276(11296, 1576), 3);
    add_background_object(create_bgfacility4_3275(11296, 1512), 3);
    add_background_object(create_bgfacility5_3276(11296, 1448), 3);
    add_background_object(create_bgfacility2_3273(11296, 1384), 3);
    add_background_object(create_bgrocks1_3213(11328, 1576), 3);
    add_background_object(create_bgrocks1_3213(11328, 1448), 3);
    add_background_object(create_bgfacility1_3271(11328, 1384), 3);
    add_background_object(create_bgfacility1_3271(11456, 1384), 3);
    add_background_object(create_bgfacility6_3274(11584, 1640), 3);
    add_background_object(create_bgfacility7_3277(11584, 1576), 3);
    add_background_object(create_bgfacility6_3274(11584, 1512), 3);
    add_background_object(create_bgfacility3_3272(11584, 1384), 3);
    add_background_object(create_bgfacility7_3277(11584, 1448), 3);
    add_background_object(create_bgfacility14_3279(11584, 1704), 3);
    add_background_object(create_bgfacility13_3278(11680, 1768), 3);
    add_background_object(create_bgfacility4_3275(11680, 1704), 3);
    add_background_object(create_bgfacility5_3276(11680, 1640), 3);
    add_background_object(create_bgfacility4_3275(11680, 1576), 3);
    add_background_object(create_bgfacility5_3276(11680, 1512), 3);
    add_background_object(create_bgfacility2_3273(11680, 1448), 3);
    add_background_object(create_bgrocks1_3213(11712, 1640), 3);
    add_background_object(create_bgrocks1_3213(11712, 1512), 3);
    add_background_object(create_bgfacility1_3271(11712, 1448), 3);
    add_background_object(create_bgfacility1_3271(11840, 1448), 3);
    add_background_object(create_bgfacility6_3274(11968, 1704), 3);
    add_background_object(create_bgfacility7_3277(11968, 1640), 3);
    add_background_object(create_bgfacility6_3274(11968, 1576), 3);
    add_background_object(create_bgfacility3_3272(11968, 1448), 3);
    add_background_object(create_bgfacility7_3277(11968, 1512), 3);
    add_background_object(create_bgfacility14_3279(11968, 1768), 3);
    add_background_object(create_bgfacility13_3278(12064, 1704), 3);
    add_background_object(create_bgfacility4_3275(12064, 1640), 3);
    add_background_object(create_bgfacility5_3276(12064, 1576), 3);
    add_background_object(create_bgfacility4_3275(12064, 1512), 3);
    add_background_object(create_bgfacility5_3276(12064, 1448), 3);
    add_background_object(create_bgfacility2_3273(12064, 1384), 3);
    add_background_object(create_bgrocks1_3213(12096, 1576), 3);
    add_background_object(create_bgrocks1_3213(12096, 1448), 3);
    add_background_object(create_bgfacility1_3271(12096, 1384), 3);
    add_background_object(create_bgfacility1_3271(12224, 1384), 3);
    add_background_object(create_bgfacility6_3274(12352, 1640), 3);
    add_background_object(create_bgfacility7_3277(12352, 1576), 3);
    add_background_object(create_bgfacility6_3274(12352, 1512), 3);
    add_background_object(create_bgfacility3_3272(12352, 1384), 3);
    add_background_object(create_bgfacility7_3277(12352, 1448), 3);
    add_background_object(create_bgfacility14_3279(12352, 1704), 3);
    add_background_object(create_bgfacility13_3278(12384, 1640), 3);
    add_background_object(create_bgfacility4_3275(12384, 1576), 3);
    add_background_object(create_bgfacility5_3276(12384, 1512), 3);
    add_background_object(create_bgfacility4_3275(12384, 1448), 3);
    add_background_object(create_bgfacility5_3276(12384, 1384), 3);
    add_background_object(create_bgfacility2_3273(12384, 1320), 3);
    add_background_object(create_bgrocks1_3213(12416, 1512), 3);
    add_background_object(create_bgrocks1_3213(12416, 1384), 3);
    add_background_object(create_bgfacility1_3271(12416, 1320), 3);
    add_background_object(create_bgfacility1_3271(12544, 1320), 3);
    add_background_object(create_bgrocks1_3213(12672, 1512), 3);
    add_background_object(create_bgrocks1_3213(12672, 1384), 3);
    add_background_object(create_bgfacility1_3271(12672, 1320), 3);
    add_background_object(create_bgfacility1_3271(12800, 1320), 3);
    add_background_object(create_bgfacility6_3274(12928, 1576), 3);
    add_background_object(create_bgfacility7_3277(12928, 1512), 3);
    add_background_object(create_bgfacility6_3274(12928, 1448), 3);
    add_background_object(create_bgfacility3_3272(12928, 1320), 3);
    add_background_object(create_bgfacility7_3277(12928, 1384), 3);
    add_background_object(create_bgfacility14_3279(12928, 1640), 3);
    add_background_object(create_bgrocks13_3212(11232, 1464), 3);
    add_background_object(create_bgrocks13_3212(11232, 1528), 3);
    add_background_object(create_bgrocks13_3212(11232, 1592), 3);
    add_background_object(create_bgsnow12_3245(11232, 1448), 3);
    add_background_object(create_bgsnow8_3229(11296, 1448), 3);
    add_background_object(create_bgsnow9_3222(11216, 1448), 3);
    add_background_object(create_bgrocks13_3212(11232, 1656), 3);
    add_background_object(create_bgrocks13_3212(11616, 1464), 3);
    add_background_object(create_bgrocks13_3212(11616, 1528), 3);
    add_background_object(create_bgrocks13_3212(11616, 1592), 3);
    add_background_object(create_bgsnow12_3245(11616, 1448), 3);
    add_background_object(create_bgsnow8_3229(11680, 1448), 3);
    add_background_object(create_bgsnow9_3222(11600, 1448), 3);
    add_background_object(create_bgrocks13_3212(11616, 1656), 3);
    add_background_object(create_bgfacility13_3278(12272, 1064), 3);
    add_background_object(create_bgfacility4_3275(12272, 1000), 3);
    add_background_object(create_bgfacility5_3276(12272, 936), 3);
    add_background_object(create_bgfacility4_3275(12272, 872), 3);
    add_background_object(create_bgfacility5_3276(12272, 808), 3);
    add_background_object(create_bgrocks1_3213(12304, 936), 3);
    add_background_object(create_bgrocks1_3213(12304, 808), 3);
    add_background_object(create_bgrocks1_3213(12560, 936), 3);
    add_background_object(create_bgrocks1_3213(12560, 808), 3);
    add_background_object(create_bgfacility4_3275(12272, 744), 3);
    add_background_object(create_bgfacility5_3276(12272, 680), 3);
    add_background_object(create_bgfacility4_3275(12272, 616), 3);
    add_background_object(create_bgfacility5_3276(12272, 552), 3);
    add_background_object(create_bgrocks1_3213(12304, 680), 3);
    add_background_object(create_bgrocks1_3213(12304, 552), 3);
    add_background_object(create_bgrocks1_3213(12560, 680), 3);
    add_background_object(create_bgrocks1_3213(12560, 552), 3);
    add_background_object(create_bgfacility4_3275(12272, 488), 3);
    add_background_object(create_bgfacility5_3276(12272, 424), 3);
    add_background_object(create_bgfacility4_3275(12272, 360), 3);
    add_background_object(create_bgfacility5_3276(12272, 296), 3);
    add_background_object(create_bgrocks1_3213(12304, 424), 3);
    add_background_object(create_bgrocks1_3213(12304, 296), 3);
    add_background_object(create_bgrocks1_3213(12560, 424), 3);
    add_background_object(create_bgrocks1_3213(12560, 296), 3);
    add_background_object(create_bgfacility4_3275(12272, 232), 3);
    add_background_object(create_bgfacility5_3276(12272, 168), 3);
    add_background_object(create_bgfacility4_3275(12272, 104), 3);
    add_background_object(create_bgfacility5_3276(12272, 40), 3);
    add_background_object(create_bgrocks1_3213(12304, 168), 3);
    add_background_object(create_bgrocks1_3213(12304, 40), 3);
    add_background_object(create_bgrocks1_3213(12560, 168), 3);
    add_background_object(create_bgrocks1_3213(12560, 40), 3);
    add_background_object(create_bgfacility4_3275(12272, -24), 3);
    add_background_object(create_bgfacility5_3276(12272, -88), 3);
    add_background_object(create_bgrocks1_3213(12304, -88), 3);
    add_background_object(create_bgrocks1_3213(12560, -88), 3);
    add_background_object(create_bgfacility13_3278(8520, 384), 3);
    add_background_object(create_bgfacility12_3280(8552, 384), 3);
    add_background_object(create_bgfacility12_3280(8680, 384), 3);
    add_background_object(create_bgfacility14_3279(8808, 384), 3);
    add_background_object(create_bgfacility5_3276(8520, 256), 3);
    add_background_object(create_bgfacility4_3275(8520, 320), 3);
    add_background_object(create_bgfacility6_3274(8808, 320), 3);
    add_background_object(create_bgfacility7_3277(8808, 256), 3);
    add_background_object(create_bgrocks1_3213(8552, 256), 3);
    add_background_object(create_bgfacility5_3276(8520, 128), 3);
    add_background_object(create_bgfacility4_3275(8520, 192), 3);
    add_background_object(create_bgfacility6_3274(8808, 192), 3);
    add_background_object(create_bgfacility7_3277(8808, 128), 3);
    add_background_object(create_bgrocks1_3213(8552, 128), 3);
    add_background_object(create_bgfacility5_3276(8520, 0), 3);
    add_background_object(create_bgfacility4_3275(8520, 64), 3);
    add_background_object(create_bgfacility6_3274(8808, 64), 3);
    add_background_object(create_bgfacility7_3277(8808, 0), 3);
    add_background_object(create_bgrocks1_3213(8552, 0), 3);
    add_background_object(create_bgfacility13_3278(8840, 576), 3);
    add_background_object(create_bgfacility12_3280(8872, 576), 3);
    add_background_object(create_bgfacility12_3280(9000, 576), 3);
    add_background_object(create_bgfacility14_3279(9128, 576), 3);
    add_background_object(create_bgfacility5_3276(8840, 448), 3);
    add_background_object(create_bgfacility4_3275(8840, 512), 3);
    add_background_object(create_bgfacility6_3274(9128, 512), 3);
    add_background_object(create_bgfacility7_3277(9128, 448), 3);
    add_background_object(create_bgrocks1_3213(8872, 448), 3);
    add_background_object(create_bgfacility5_3276(8840, 320), 3);
    add_background_object(create_bgfacility4_3275(8840, 384), 3);
    add_background_object(create_bgfacility6_3274(9128, 384), 3);
    add_background_object(create_bgfacility7_3277(9128, 320), 3);
    add_background_object(create_bgrocks1_3213(8872, 320), 3);
    add_background_object(create_bgfacility5_3276(8840, 192), 3);
    add_background_object(create_bgfacility4_3275(8840, 256), 3);
    add_background_object(create_bgfacility6_3274(9128, 256), 3);
    add_background_object(create_bgfacility7_3277(9128, 192), 3);
    add_background_object(create_bgrocks1_3213(8872, 192), 3);
    add_background_object(create_bgfacility5_3276(8840, 64), 3);
    add_background_object(create_bgfacility4_3275(8840, 128), 3);
    add_background_object(create_bgfacility6_3274(9128, 128), 3);
    add_background_object(create_bgfacility7_3277(9128, 64), 3);
    add_background_object(create_bgrocks1_3213(8872, 64), 3);
    add_background_object(create_bgfacility5_3276(8840, -64), 3);
    add_background_object(create_bgfacility4_3275(8840, 0), 3);
    add_background_object(create_bgfacility6_3274(9128, 0), 3);
    add_background_object(create_bgfacility7_3277(9128, -64), 3);
    add_background_object(create_bgrocks1_3213(8872, -64), 3);
    add_background_object(create_bgfacility19_3312(10336, 680), 3);
    add_background_object(create_bgfacility20_3313(10528, 616), 3);
    add_background_object(create_bgfacility19_3312(10400, 616), 3);
    add_background_object(create_bgfacility20_3313(10592, 680), 3);
    add_background_object(create_bgfacility5_3276(10272, 744), 3);
    add_background_object(create_bgfacility7_3277(10304, 744), 3);
    add_background_object(create_bgfacility4_3275(10272, 616), 3);
    add_background_object(create_bgfacility6_3274(10304, 616), 3);
    add_background_object(create_bgfacility13_3278(10336, 680), 3);
    add_background_object(create_bgfacility14_3279(10368, 680), 3);
    add_background_object(create_bgfacility13_3278(10400, 616), 3);
    add_background_object(create_bgfacility14_3279(10432, 616), 3);
    add_background_object(create_bgfacility5_3276(10336, 616), 3);
    add_background_object(create_bgfacility7_3277(10368, 616), 3);
    add_background_object(create_bgfacility13_3278(10528, 616), 3);
    add_background_object(create_bgfacility14_3279(10560, 616), 3);
    add_background_object(create_bgfacility13_3278(10592, 680), 3);
    add_background_object(create_bgfacility14_3279(10624, 680), 3);
    add_background_object(create_bgfacility5_3276(10592, 616), 3);
    add_background_object(create_bgfacility7_3277(10624, 616), 3);
    add_background_object(create_bgfacility5_3276(10272, 680), 3);
    add_background_object(create_bgfacility7_3277(10304, 680), 3);
    add_background_object(create_bgfacility4_3275(10656, 744), 3);
    add_background_object(create_bgfacility6_3274(10688, 744), 3);
    add_background_object(create_bgfacility5_3276(10656, 680), 3);
    add_background_object(create_bgfacility7_3277(10688, 680), 3);
    add_background_object(create_bgfacility4_3275(10656, 616), 3);
    add_background_object(create_bgfacility6_3274(10688, 616), 3);
    add_background_object(create_bgfacility4_3275(10656, 872), 3);
    add_background_object(create_bgfacility6_3274(10688, 872), 3);
    add_background_object(create_bgfacility5_3276(10656, 808), 3);
    add_background_object(create_bgfacility7_3277(10688, 808), 3);
    add_background_object(create_bgfacility18_3307(10592, 872), 3);
    add_background_object(create_bgfacility18_3307(10528, 936), 3);
    add_background_object(create_bgfacility4_3275(10656, 1000), 3);
    add_background_object(create_bgfacility6_3274(10688, 1000), 3);
    add_background_object(create_bgfacility5_3276(10656, 936), 3);
    add_background_object(create_bgfacility7_3277(10688, 936), 3);
    add_background_object(create_bgfacility13_3278(10656, 1064), 3);
    add_background_object(create_bgfacility14_3279(10688, 1064), 3);
    add_background_object(create_bgfacility13_3278(10592, 1064), 3);
    add_background_object(create_bgfacility14_3279(10624, 1064), 3);
    add_background_object(create_bgfacility5_3276(10592, 1000), 3);
    add_background_object(create_bgfacility7_3277(10624, 1000), 3);
    add_background_object(create_bgfacility2_3273(10592, 936), 3);
    add_background_object(create_bgfacility3_3272(10624, 936), 3);
    add_background_object(create_bgfacility13_3278(10464, 616), 3);
    add_background_object(create_bgfacility14_3279(10496, 616), 3);
    add_background_object(create_bgfacility3_3272(10560, 1000), 3);
    add_background_object(create_bgfacility14_3279(10560, 1064), 3);
    add_background_object(create_bgfacility2_3273(10272, 552), 3);
    add_background_object(create_bgfacility3_3272(10304, 552), 3);
    add_background_object(create_bgfacility2_3273(10336, 552), 3);
    add_background_object(create_bgfacility3_3272(10368, 552), 3);
    add_background_object(create_bgfacility2_3273(10400, 552), 3);
    add_background_object(create_bgfacility3_3272(10432, 552), 3);
    add_background_object(create_bgfacility2_3273(10464, 552), 3);
    add_background_object(create_bgfacility3_3272(10496, 552), 3);
    add_background_object(create_bgfacility2_3273(10528, 552), 3);
    add_background_object(create_bgfacility3_3272(10560, 552), 3);
    add_background_object(create_bgfacility2_3273(10592, 552), 3);
    add_background_object(create_bgfacility3_3272(10624, 552), 3);
    add_background_object(create_bgfacility2_3273(10656, 552), 3);
    add_background_object(create_bgfacility3_3272(10688, 552), 3);
    add_background_object(create_bgfacility1_3271(10432, 1000), 3);
    add_background_object(create_bgfacility12_3280(10432, 1064), 3);
    add_background_object(create_bgfacility5_3276(10272, 1064), 3);
    add_background_object(create_bgfacility7_3277(10304, 1064), 3);
    add_background_object(create_bgfacility4_3275(10208, 1064), 3);
    add_background_object(create_bgfacility6_3274(10240, 1064), 3);
    add_background_object(create_bgfacility4_3275(10144, 1064), 3);
    add_background_object(create_bgfacility6_3274(10176, 1064), 3);
    add_background_object(create_bgfacility3_3272(10816, 1640), 3);
    add_background_object(create_bgfacility7_3277(10816, 1768), 3);
    add_background_object(create_bgfacility6_3274(10816, 1704), 3);
    add_background_object(create_bgfacility7_3277(10816, 1896), 3);
    add_background_object(create_bgfacility6_3274(10816, 1832), 3);
    add_background_object(create_bgfacility7_3277(10816, 2024), 3);
    add_background_object(create_bgfacility6_3274(10816, 1960), 3);
    add_background_object(create_bgfacility2_3273(10592, 1320), 3);
    add_background_object(create_sbrotorbladetunnel_2178(12000, 1528), 3);
    add_background_object(create_bgfacility3_3272(12032, 1448), 3);
    add_background_object(create_bgfacility2_3273(12000, 1448), 3);
    add_background_object(create_sbrotorbladetunnel_2178(12000, 1616), 3);
    add_background_object(create_bgfacility3_3272(576, 1184), 3);
    add_background_object(create_bgfacility2_3273(544, 1184), 3);
    add_background_object(create_bgfacility3_3272(512, 1184), 3);
    add_background_object(create_bgfacility2_3273(352, 1184), 3);
    add_background_object(create_bgfacility1_3271(384, 1184), 3);
    add_background_object(create_bgfacility3_3272(320, 1184), 3);
    add_background_object(create_bgfacility2_3273(160, 1184), 3);
    add_background_object(create_bgfacility1_3271(192, 1184), 3);
    add_background_object(create_bgfacility3_3272(128, 1184), 3);
    add_background_object(create_bgfacility2_3273(-32, 1184), 3);
    add_background_object(create_bgfacility1_3271(0, 1184), 3);
    add_background_object(create_bgfacility14_3279(4160, 2336), 3);
    add_background_object(create_bgfacility13_3278(3872, 2336), 3);
    add_background_object(create_bgfacility12_3280(3904, 2336), 3);
    add_background_object(create_bgfacility12_3280(4032, 2336), 3);
    add_background_object(create_bgfacility13_3278(4192, 2112), 3);
    add_background_object(create_bgfacility12_3280(4224, 2112), 3);
    add_background_object(create_bgfacility12_3280(4352, 2112), 3);
    add_background_object(create_bgfacility12_3280(4480, 2112), 3);
    add_background_object(create_bgfacility12_3280(4608, 2112), 3);
    add_background_object(create_bgfacility12_3280(4736, 2112), 3);
    add_background_object(create_bgfacility12_3280(4864, 2112), 3);
    add_background_object(create_bgfacility12_3280(4992, 2112), 3);
    add_background_object(create_bgfacility12_3280(5120, 2112), 3);
    add_background_object(create_bgfacility12_3280(5184, 2112), 3);
    add_background_object(create_bgfacility12_3280(5312, 2112), 3);
    add_background_object(create_bgfacility12_3280(5568, 2112), 3);
    add_background_object(create_bgfacility12_3280(5760, 2176), 3);
    add_background_object(create_bgfacility14_3279(5696, 2112), 3);
    add_background_object(create_bgfacility13_3278(5536, 2112), 3);
    add_background_object(create_bgfacility14_3279(5440, 2112), 3);
    add_background_object(create_bgfacility13_3278(5728, 2176), 3);
    add_background_object(create_bgfacility12_3280(5888, 2176), 3);
    add_background_object(create_bgfacility14_3279(6016, 2176), 3);
    add_background_object(create_bgfacility14_3279(6144, 2176), 3);
    add_background_object(create_bgfacility13_3278(6112, 2176), 3);
    add_background_object(create_bgfacility14_3279(6208, 2176), 3);
    add_background_object(create_bgfacility13_3278(6176, 2176), 3);
    add_background_object(create_bgfacility3_3272(6080, 2152), 3);
    add_background_object(create_bgfacility2_3273(6048, 2152), 3);
    add_background_object(create_bgfacility14_3279(6080, 2216), 3);
    add_background_object(create_bgfacility13_3278(6048, 2216), 3);
    add_background_object(create_bgfacility3_3272(5504, 2112), 3);
    add_background_object(create_bgfacility2_3273(5472, 2112), 3);
    add_background_object(create_bgfacility14_3279(5504, 2176), 3);
    add_background_object(create_bgfacility13_3278(5472, 2176), 3);
    add_background_object(create_bgrocks13_3212(1184, 2224), 3);
    add_background_object(create_bgrocks13_3212(1184, 2288), 3);
    add_background_object(create_bgrocks13_3212(1184, 2352), 3);
    add_background_object(create_bgrocks13_3212(2464, 2224), 3);
    add_background_object(create_bgrocks13_3212(2464, 2288), 3);
    add_background_object(create_bgrocks13_3212(2464, 2352), 3);
    add_background_object(create_bgfacility4_3275(6240, 2304), 3);
    add_background_object(create_bgfacility5_3276(6240, 2368), 3);
    add_background_object(create_bgfacility6_3274(6528, 2304), 3);
    add_background_object(create_bgfacility7_3277(6528, 2368), 3);
    add_background_object(create_bgrocks1_3213(6272, 2304), 3);
    add_background_object(create_bgfacility4_3275(6624, 2304), 3);
    add_background_object(create_bgfacility5_3276(6624, 2368), 3);
    add_background_object(create_bgfacility6_3274(6912, 2304), 3);
    add_background_object(create_bgfacility7_3277(6912, 2368), 3);
    add_background_object(create_bgrocks1_3213(6656, 2304), 3);
    add_background_object(create_bgrocks13_3212(6944, 2256), 3);
    add_background_object(create_bgrocks13_3212(6944, 2320), 3);
    add_background_object(create_bgrocks13_3212(6944, 2384), 3);
    add_background_object(create_bgfacility3_3272(6592, 2280), 3);
    add_background_object(create_bgfacility2_3273(6560, 2280), 3);
    add_background_object(create_bgfacility14_3279(6592, 2344), 3);
    add_background_object(create_bgfacility13_3278(6560, 2344), 3);
    add_background_object(create_bgfacility14_3279(10816, 2088), 3);
    add_background_object(create_bgfacility13_3278(10528, 2088), 3);
    add_background_object(create_bgfacility14_3279(10496, 2152), 3);
    add_background_object(create_bgfacility13_3278(9440, 2152), 3);
    add_background_object(create_bgfacility3_3272(10880, 1640), 3);
    add_background_object(create_bgfacility6_3274(10880, 1704), 3);
    add_background_object(create_bgfacility14_3279(10880, 1768), 3);
    add_background_object(create_bgfacility4_3275(10848, 1704), 3);
    add_background_object(create_bgfacility2_3273(10848, 1640), 3);
    add_background_object(create_bgfacility13_3278(10848, 1768), 3);
    add_background_object(create_bgfacility3_3272(12032, 1704), 3);
    add_background_object(create_bgfacility14_3279(12032, 1768), 3);
    add_background_object(create_bgfacility2_3273(12000, 1704), 3);
    add_background_object(create_bgfacility13_3278(12000, 1768), 3);
    add_background_object(create_bgfacility3_3272(11648, 1704), 3);
    add_background_object(create_bgfacility14_3279(11648, 1768), 3);
    add_background_object(create_bgfacility2_3273(11616, 1704), 3);
    add_background_object(create_bgfacility13_3278(11616, 1768), 3);
    add_background_object(create_bgfacility3_3272(11264, 1704), 3);
    add_background_object(create_bgfacility14_3279(11264, 1768), 3);
    add_background_object(create_bgfacility2_3273(11232, 1704), 3);
    add_background_object(create_bgfacility13_3278(11232, 1768), 3);
    add_background_object(create_bgfacility13_3278(9120, 1256), 3);
    add_background_object(create_bgfacility2_3273(9120, 1448), 3);
    add_background_object(create_bgfacility12_3280(9280, 1256), 3);
    add_background_object(create_bgfacility12_3280(9152, 1256), 3);
    add_background_object(create_bgfacility14_3279(9408, 1256), 3);
    add_background_object(create_bgfacility1_3271(9152, 1448), 3);
    add_background_object(create_bgfacility1_3271(9280, 1448), 3);
    add_background_object(create_bgfacility3_3272(9408, 1448), 3);
    add_background_object(create_bgfacility2_3273(9248, 1320), 3);
    add_background_object(create_bgfacility1_3271(9280, 1320), 3);
    add_background_object(create_bgfacility3_3272(9408, 1320), 3);
    add_background_object(create_bgfacility14_3279(9408, 1384), 3);
    add_background_object(create_bgfacility13_3278(9248, 1384), 3);
    add_background_object(create_bgfacility12_3280(9280, 1384), 3);
    add_object(create_objectdigspot_734(2480, 1856), 3);
    add_object(create_objectdigspot_734(1200, 1856), 3);
    add_object(create_gimmickmagnetlauncherlight_3314(4768, 1352), 3);
    add_object(create_playerstartingpoint_358(157, 1805), 3);
    add_object(create_effectwarning_1513(-172, 1384), 3);
    add_object(create_enemymeteorroller_2421(727, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(720, 2352), 3);
    add_object(create_enemyghettoshell_1971(4239, 1176), 3);
    add_object(create_enemyrotorbladespikes_2204(6079, 1760), 3);
    add_object(create_enemyrotorblade_2205(6080, 1760), 3);
    add_object(create_enemyspawntube_2195(6080, 1772), 3);
    add_object(create_enemylimiter_350(5733, 1706), 3);
    add_object(create_enemylimiter_350(6197, 1706), 3);
    add_object(create_effectsgroundspark_2025(-383, 1094), 3);
    add_object(create_enemybullfrag_2417(7103, 1728), 3);
    add_object(create_enemybullfragmask_2419(7108, 1720), 3);
    add_object(create_brevonmechbackwing_2538(1574, -54), 3);
    add_object(create_brevonmechbackwing_2538(1614, -54), 3);
    add_object(create_brevonmechbackwing_2538(1654, -54), 3);
    add_object(create_brevonmechbackwing_2538(1694, -54), 3);
    add_object(create_brevonmechfrontleg_2539(1058, -106), 3);
    add_object(create_brevonmechabdomen_2540(-312, 1756), 3);
    add_object(create_brevonmechfrontleg2_2541(1062, -132), 3);
    add_object(create_brevonmechfrontknee_2542(986, -142), 3);
    add_object(create_brevonmechtorso_2543(-234, 1763), 3);
    add_object(create_brevonmechhead_2544(-218, 1783), 3);
    add_object(create_brevonmechfrontwing_2546(1366, -54), 3);
    add_object(create_brevonmechfrontwing_2546(1406, -54), 3);
    add_object(create_brevonmechfrontwing_2546(1446, -54), 3);
    add_object(create_brevonmechfrontwing_2546(1486, -54), 3);
    add_object(create_brevonmechfrontfoot_2545(960, -102), 3);
    add_object(create_brevonmechfrontshoulder_2547(-340, 1780), 3);
    add_object(create_brevonmechfrontarm_2548(1150, -100), 3);
    add_object(create_brevonmechfrontclaw_2549(1084, -94), 3);
    add_object(create_brevonmechaxle_2550(1194, -72), 3);
    add_object(create_brevonmechanimations_2551(792, -56), 3);
    add_object(create_effectbrevonmechwarning2_3315(1212, 1856), 3);
    add_object(create_yellowspringup_434(544, 1888), 3);
    add_object(create_yellowspringup_434(576, 1888), 3);
    add_object(create_yellowspringup_434(3104, 1888), 3);
    add_object(create_yellowspringup_434(3136, 1888), 3);
    add_object(create_brevonmechweakspot_3316(-217, 1783), 3);
    add_object(create_enemydrillsat_3281(6976, 1816), 3);
    add_object(create_bosshatchdoor_3317(512, 2144), 3);
    add_object(create_bosshatchdoor_3317(3168, 2144), 3);
    add_object(create_yellowspringup_434(1824, 1888), 3);
    add_object(create_yellowspringup_434(1856, 1888), 3);
    add_object(create_enemyspawntube_2195(3776, 1868), 3);
    add_object(create_enemyspawntube_2195(3840, 1868), 3);
    add_object(create_bgplatform1_3318(3759, 1519), 3);
    add_object(create_bgplatform1_3318(3823, 1519), 3);
    add_object(create_levelcrankferris_3319(4032, 1296), 3);
    add_object(create_levelcrankferris_3319(4032, 1296), 3);
    add_object(create_levelcrankferris_3319(4032, 1296), 3);
    add_object(create_levelcrankferris_3319(4032, 1296), 3);
    add_object(create_enemyghettoshell_1971(4527, 1112), 3);
    add_object(create_levelcrankferris_3319(4256, 1648), 3);
    add_object(create_levelcrankferris_3319(4256, 1648), 3);
    add_object(create_levelcrankferris_3319(4256, 1648), 3);
    add_object(create_levelcrankferris_3319(4256, 1648), 3);
    add_object(create_enemyturretus_938(4391, 1104), 3);
    add_object(create_enemylimiter_350(613, 1874), 3);
    add_object(create_enemylimiter_350(1845, 1874), 3);
    add_object(create_enemylimiter_350(1893, 1874), 3);
    add_object(create_enemylimiter_350(3125, 1874), 3);
    add_object(create_gimmickantigravspawner_3320(3776, 1832), 3);
    add_object(create_gimmickantigravspawner_3320(3840, 1832), 3);
    add_object(create_levelcrankferriscollisionstopper_3321(4136, 1328), 3);
    add_object(create_gimmickantigravspawner_3320(5504, 1864), 3);
    add_object(create_bgplatform1_3318(4623, 1519), 3);
    add_object(create_bgplatform1_3318(4751, 1519), 3);
    add_object(create_bgplatform1_3318(4687, 1519), 3);
    add_object(create_bgplatform1_3318(5167, 1711), 3);
    add_object(create_bgplatform1_3318(5103, 1711), 3);
    add_object(create_bgplatform1_3318(5231, 1711), 3);
    add_object(create_bgplatform1_3318(5295, 1711), 3);
    add_object(create_bgplatform1_3318(5039, 1711), 3);
    add_object(create_objectcrystal_279(4261, 1474), 3);
    add_object(create_objectcrystal_279(4389, 1610), 3);
    add_object(create_objectcrystal_279(4381, 1570), 3);
    add_object(create_objectcrystal_279(4301, 1482), 3);
    add_object(create_objectcrystal_279(4333, 1506), 3);
    add_object(create_objectcrystal_279(4365, 1538), 3);
    add_object(create_objectpetal_302(3777, 1457), 3);
    add_object(create_objectpetal_302(3841, 1457), 3);
    add_object(create_objectpetal_302(3825, 1425), 3);
    add_object(create_objectpetal_302(3793, 1425), 3);
    add_object(create_objectpetal_302(3809, 1393), 3);
    add_object(create_bgplatform1_3318(5407, 1215), 3);
    add_object(create_bgplatform1_3318(5471, 1215), 3);
    add_object(create_bgplatform1_3318(5535, 1215), 3);
    add_object(create_yellowspringup_434(5392, 1184), 3);
    add_object(create_enemyrotorbladespikes_2204(5039, 1224), 3);
    add_object(create_enemyrotorblade_2205(5040, 1224), 3);
    add_object(create_enemyspawntube_2195(5040, 1236), 3);
    add_object(create_enemylimiter_350(4821, 1170), 3);
    add_object(create_enemylimiter_350(5285, 1170), 3);
    add_object(create_enemyturretus_938(5631, 1576), 3);
    add_object(create_enemyturretus_938(5551, 1176), 3);
    add_object(create_enemysuperturretus_1828(5227, 1560), 3);
    add_object(create_levelcrankferris_3319(6432, 1680), 3);
    add_object(create_levelcrankferris_3319(6432, 1680), 3);
    add_object(create_levelcrankferris_3319(6432, 1680), 3);
    add_object(create_levelcrankferris_3319(6432, 1680), 3);
    add_object(create_bgplatform1_3318(6727, 1591), 3);
    add_object(create_bgplatform1_3318(6663, 1591), 3);
    add_object(create_bgplatform1_3318(6599, 1591), 3);
    add_object(create_monitorfireshield_328(5168, 1664), 3);
    add_object(create_objectcrystal_279(5133, 1834), 3);
    add_object(create_objectcrystal_279(5101, 1834), 3);
    add_object(create_objectcrystal_279(5069, 1834), 3);
    add_object(create_objectcrystal_279(5037, 1834), 3);
    add_object(create_objectcrystal_279(5333, 1834), 3);
    add_object(create_objectcrystal_279(5301, 1834), 3);
    add_object(create_objectcrystal_279(5269, 1834), 3);
    add_object(create_objectcrystal_279(5237, 1834), 3);
    add_object(create_gimmickmagnetlauncher_3322(4768, 1352), 3);
    add_object(create_gimmickmagnetlauncherleft_3323(4752, 1376), 3);
    add_object(create_gimmickmagnetlauncherright_3324(5152, 1376), 3);
    add_object(create_objectcrystal_279(4829, 1402), 3);
    add_object(create_objectcrystal_279(4877, 1402), 3);
    add_object(create_objectcrystal_279(4925, 1402), 3);
    add_object(create_objectcrystal_279(4973, 1402), 3);
    add_object(create_objectcrystal_279(5021, 1402), 3);
    add_object(create_objectcrystal_279(5069, 1402), 3);
    add_object(create_gimmickmagnetlauncher_3322(5296, 976), 3);
    add_object(create_gimmickmagnetlauncherleft_3323(5280, 1000), 3);
    add_object(create_gimmickmagnetlauncherright_3324(5888, 1000), 3);
    add_object(create_objectcrystal_279(5485, 1026), 3);
    add_object(create_objectcrystal_279(5581, 1026), 3);
    add_object(create_objectcrystal_279(5677, 1026), 3);
    add_object(create_enemyturretus_938(6671, 1552), 3);
    add_object(create_gimmickmagnetlauncherlight_3314(5296, 976), 3);
    add_object(create_bgplatform1_3318(6575, 1391), 3);
    add_object(create_bgplatform1_3318(6511, 1391), 3);
    add_object(create_bgplatform1_3318(6447, 1391), 3);
    add_object(create_gimmickmagnetlauncher_3322(6744, 1224), 3);
    add_object(create_gimmickmagnetlauncherleft_3323(6576, 1248), 3);
    add_object(create_gimmickmagnetlauncherright_3324(7296, 1248), 3);
    add_object(create_gimmickmagnetlauncherlight_3314(6744, 1224), 3);
    add_object(create_enemyrotorbladespikes_2204(6591, 1888), 3);
    add_object(create_enemyrotorblade_2205(6592, 1888), 3);
    add_object(create_enemyspawntube_2195(6592, 1900), 3);
    add_object(create_enemylimiter_350(6245, 1834), 3);
    add_object(create_enemylimiter_350(7029, 1834), 3);
    add_object(create_enemysuperturretus_1828(5635, 1168), 3);
    add_object(create_enemyturretus_938(4703, 1480), 3);
    add_object(create_enemyghettoshell_1971(4583, 1648), 3);
    add_object(create_brevonmechcharge_3325(568, -80), 3);
    add_object(create_enemymeteorroller_2421(839, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(832, 2352), 3);
    add_object(create_enemymeteorroller_2421(967, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(960, 2352), 3);
    add_object(create_enemymeteorroller_2421(1063, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(1056, 2352), 3);
    add_object(create_enemymeteorroller_2421(1383, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(1376, 2352), 3);
    add_object(create_enemymeteorroller_2421(1495, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(1488, 2352), 3);
    add_object(create_enemymeteorroller_2421(1623, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(1616, 2352), 3);
    add_object(create_enemymeteorroller_2421(1719, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(1712, 2352), 3);
    add_object(create_enemymeteorroller_2421(2015, 2348), 3);
    add_object(create_enemymeteorrollerflame_2420(2008, 2344), 3);
    add_object(create_enemymeteorroller_2421(2127, 2348), 3);
    add_object(create_enemymeteorrollerflame_2420(2120, 2344), 3);
    add_object(create_enemymeteorroller_2421(2255, 2348), 3);
    add_object(create_enemymeteorrollerflame_2420(2248, 2344), 3);
    add_object(create_enemymeteorroller_2421(2351, 2348), 3);
    add_object(create_enemymeteorrollerflame_2420(2344, 2344), 3);
    add_object(create_enemymeteorroller_2421(2647, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(2640, 2352), 3);
    add_object(create_enemymeteorroller_2421(2759, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(2752, 2352), 3);
    add_object(create_enemymeteorroller_2421(2887, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(2880, 2352), 3);
    add_object(create_enemymeteorroller_2421(2983, 2356), 3);
    add_object(create_enemymeteorrollerflame_2420(2976, 2352), 3);
    add_object(create_bgplatform1_3318(7215, 1431), 3);
    add_object(create_bgplatform1_3318(7151, 1431), 3);
    add_object(create_bgplatform1_3318(7087, 1431), 3);
    add_object(create_bgplatform1_3318(6919, 1431), 3);
    add_object(create_bgplatform1_3318(6855, 1431), 3);
    add_object(create_bgplatform1_3318(6639, 1391), 3);
    add_object(create_gimmickantigravspawner_3320(6464, 1368), 3);
    add_object(create_gimmickantigravspawner_3320(6528, 1368), 3);
    add_object(create_enemypelletizer_2304(5888, 1611), 3);
    add_object(create_enemypelletizer_2304(6168, 1035), 3);
    add_object(create_gimmickantigravspawner_3320(6744, 1568), 3);
    add_object(create_enemypelletizer_2304(4872, 1043), 3);
    add_object(create_objectcrystal_279(6725, 1426), 3);
    add_object(create_objectcrystal_279(6757, 1426), 3);
    add_object(create_objectcrystal_279(6725, 1386), 3);
    add_object(create_objectcrystal_279(6757, 1386), 3);
    add_object(create_bgplatform1_3318(7279, 1431), 3);
    add_object(create_bgplatform1_3318(7343, 1431), 3);
    add_object(create_bgplatform1_3318(7407, 1431), 3);
    add_object(create_bgplatform1_3318(7471, 1431), 3);
    add_object(create_bgplatform1_3318(7535, 1431), 3);
    add_object(create_hazardspinmine_3326(7480, 1800), 3);
    add_object(create_hazardspinmine_3326(7528, 1800), 3);
    add_object(create_hazardspinmine_3326(7576, 1800), 3);
    add_object(create_hazardspinmine_3326(7624, 1800), 3);
    add_object(create_hazardspinmine_3326(7672, 1800), 3);
    add_object(create_hazardspinmine_3326(7720, 1800), 3);
    add_object(create_hazardspinmine_3326(7768, 1800), 3);
    add_object(create_hazardspinmine_3326(7816, 1800), 3);
    add_object(create_bgplatform1_3318(7343, 1911), 3);
    add_object(create_bgplatform1_3318(7407, 1911), 3);
    add_object(create_gimmickantigravspawner_3320(7360, 2224), 3);
    add_object(create_gimmickantigravspawner_3320(7424, 2224), 3);
    add_object(create_enemyspawntube_2195(5504, 1916), 3);
    add_object(create_enemyspawntube_2195(7360, 2276), 3);
    add_object(create_enemyspawntube_2195(7424, 2276), 3);
    add_object(create_hazardspikesup_1769(8288, 1928), 3);
    add_object(create_hazardspikesup_1769(8320, 1928), 3);
    add_object(create_hazardspikesup_1769(8352, 1928), 3);
    add_object(create_hazardspikesup_1769(8384, 1928), 3);
    add_object(create_hazardspikesup_1769(8416, 1928), 3);
    add_object(create_gimmickmagnetlauncher_3322(8256, 1736), 3);
    add_object(create_gimmickmagnetlauncherleft_3323(8048, 1760), 3);
    add_object(create_gimmickmagnetlauncherright_3324(8576, 1760), 3);
    add_object(create_gimmickmagnetlauncherlight_3314(8256, 1736), 3);
    add_object(create_bgplatform1_3318(8687, 1879), 3);
    add_object(create_bgplatform1_3318(8751, 1879), 3);
    add_object(create_bgplatform1_3318(8815, 1879), 3);
    add_object(create_bgplatform1_3318(8559, 2007), 3);
    add_object(create_gimmickantigravspawner_3320(8576, 1984), 3);
    add_object(create_gimmickmagnetlauncher_3322(8064, 1224), 3);
    add_object(create_gimmickmagnetlauncherleft_3323(8048, 1248), 3);
    add_object(create_gimmickmagnetlauncherright_3324(8576, 1248), 3);
    add_object(create_gimmickmagnetlauncherlight_3314(8064, 1224), 3);
    add_object(create_gimmickantigravspawner_3320(8064, 1504), 3);
    add_object(create_levelcrankferris_3319(8896, 1656), 3);
    add_object(create_levelcrankferris_3319(8896, 1656), 3);
    add_object(create_levelcrankferris_3319(8896, 1656), 3);
    add_object(create_levelcrankferris_3319(8896, 1656), 3);
    add_object(create_enemybullfrag_2417(9055, 1896), 3);
    add_object(create_enemybullfragmask_2419(9060, 1888), 3);
    add_object(create_minibossrailing_923(9072, 1320), 3);
    add_object(create_minibossrailing_923(9072, 1368), 3);
    add_object(create_minibossbarrier_924(9056, 1368), 3);
    add_object(create_minibossbarrier_924(9056, 1320), 3);
    add_object(create_monitor1up_410(9216, 1416), 3);
    add_object(create_bgplatform1_3318(9007, 1431), 3);
    add_object(create_bgplatform1_3318(8943, 1431), 3);
    add_object(create_bgplatform1_3318(8879, 1431), 3);
    add_object(create_bgplatform1_3318(8815, 1431), 3);
    add_object(create_monitorcrate_409(8736, 1832), 3);
    add_object(create_minibossrailing_923(7824, 1160), 3);
    add_object(create_minibossrailing_923(7824, 1208), 3);
    add_object(create_minibossbarrier_924(7808, 1208), 3);
    add_object(create_minibossbarrier_924(7808, 1160), 3);
    add_object(create_gimmickantigravspawner_3320(7904, 1248), 3);
    add_object(create_laddertop_357(7756, 1279), 3);
    add_object(create_enemysaucerleg4_2810(7472, 1552), 3);
    add_object(create_enemysaucerleg1_2811(7440, 1552), 3);
    add_object(create_enemysaucer_2812(7440, 1552), 3);
    add_object(create_enemysaucerleg2_2813(7408, 1552), 3);
    add_object(create_enemysaucerleg3_2814(7440, 1552), 3);
    add_object(create_enemysaucerlimiter_2815(7304, 1552), 3);
    add_object(create_enemysaucerlimiter_2815(7680, 1552), 3);
    add_object(create_cameratriggerboss_424(8544, 1288), 3);
    add_object(create_bgplatform1_3318(7855, 1015), 3);
    add_object(create_bgplatform1_3318(7919, 1015), 3);
    add_object(create_bosssparky_3327(8288, 1360), 3);
    add_object(create_bosssparkyleftarm_3328(8288, 1360), 3);
    add_object(create_bosssparkyrightarm_3329(8288, 1360), 3);
    add_object(create_monitorcrate_409(8768, 1832), 3);
    add_object(create_monitorcrate_409(8800, 1832), 3);
    add_object(create_monitorcrate_409(8960, 1384), 3);
    add_object(create_minibossrailing_923(8656, 1464), 3);
    add_object(create_minibossrailing_923(8560, 1464), 3);
    add_object(create_minibossbarrier_924(8544, 1464), 3);
    add_object(create_minibossbarrier_924(8560, 1464), 3);
    add_object(create_minibossbarrier_924(8640, 1464), 3);
    add_object(create_minibossbarrier_924(8656, 1464), 3);
    add_object(create_minibossrailing_923(8656, 1416), 3);
    add_object(create_minibossrailing_923(8624, 1416), 3);
    add_object(create_minibossrailing_923(8592, 1416), 3);
    add_object(create_minibossrailing_923(8560, 1416), 3);
    add_object(create_minibossbarrier_924(8544, 1416), 3);
    add_object(create_minibossbarrier_924(8560, 1416), 3);
    add_object(create_minibossbarrier_924(8576, 1416), 3);
    add_object(create_minibossbarrier_924(8592, 1416), 3);
    add_object(create_minibossbarrier_924(8608, 1416), 3);
    add_object(create_minibossbarrier_924(8624, 1416), 3);
    add_object(create_minibossbarrier_924(8640, 1416), 3);
    add_object(create_minibossbarrier_924(8656, 1416), 3);
    add_object(create_enemysuperturretus_1828(6451, 1264), 3);
    add_object(create_enemyghettoshell_1971(7231, 1400), 3);
    add_object(create_laddertop_357(7244, 1599), 3);
    add_object(create_objectcrystal_279(7901, 1490), 3);
    add_object(create_objectcrystal_279(7885, 1458), 3);
    add_object(create_objectcrystal_279(7917, 1458), 3);
    add_object(create_objectcrystal_279(7901, 1426), 3);
    add_object(create_objectcrystal_279(6277, 1194), 3);
    add_object(create_objectcrystal_279(6301, 1218), 3);
    add_object(create_objectcrystal_279(6325, 1242), 3);
    add_object(create_objectcrystal_279(6349, 1266), 3);
    add_object(create_objectcrystal_279(6373, 1290), 3);
    add_object(create_enemydrillsat_3281(8128, 960), 3);
    add_object(create_enemydrillsat_3281(8256, 960), 3);
    add_object(create_enemydrillsat_3281(8384, 960), 3);
    add_object(create_objectexplosiveblock_2708(8480, 936), 3);
    add_object(create_objectexplosiveblock_2708(8544, 936), 3);
    add_object(create_objectexplosiveblock_2708(8480, 872), 3);
    add_object(create_objectexplosiveblock_2708(8544, 872), 3);
    add_object(create_objectexplosiveblock_2708(8480, 808), 3);
    add_object(create_objectexplosiveblock_2708(8544, 808), 3);
    add_object(create_bgplatform1_3318(8431, 631), 3);
    add_object(create_bgplatform1_3318(8367, 631), 3);
    add_object(create_bgloop1_3330(9888, 1448), 3);
    add_object(create_bgloop1_3330(9888, 1384), 3);
    add_object(create_bgloop1_3330(9888, 1320), 3);
    add_object(create_bgloop2_3331(9920, 1512), 3);
    add_object(create_bgloop3_3332(9920, 1576), 3);
    add_object(create_layerchangeto0_405(9840, 1368), 3);
    add_object(create_layerchangeswitch_404(10104, 1200), 3);
    add_object(create_layerchangeto1_406(9968, 1656), 3);
    add_object(create_layerchangeswitch_404(10104, 1256), 3);
    add_object(create_layerchangeto0_405(9840, 1416), 3);
    add_object(create_layerchangeto0_405(9840, 1464), 3);
    add_object(create_layerchangeto0_405(9840, 1320), 3);
    add_object(create_layerchangeto0_405(9856, 1264), 3);
    add_object(create_layerchangeto1_406(10080, 1648), 3);
    add_object(create_layerchangeto1_406(10080, 1712), 3);
    add_object(create_layerchangeto1_406(10080, 1776), 3);
    add_object(create_bgloop3_3332(9728, 1768), 3);
    add_object(create_redspringupright_438(10336, 1480), 3);
    add_object(create_bgloop3_3332(10624, 1576), 3);
    add_object(create_bgloop3_3332(10752, 1576), 3);
    add_object(create_objectpetal_302(10145, 1481), 3);
    add_object(create_objectpetal_302(10193, 1433), 3);
    add_object(create_objectpetal_302(10241, 1385), 3);
    add_object(create_objectpetal_302(10241, 1321), 3);
    add_object(create_objectpetal_302(10193, 1273), 3);
    add_object(create_objectpetal_302(10145, 1225), 3);
    add_object(create_objectpetal_302(10081, 1225), 3);
    add_object(create_objectpetal_302(10033, 1273), 3);
    add_object(create_objectpetal_302(9985, 1321), 3);
    add_object(create_objectcrystal_279(8933, 1170), 3);
    add_object(create_objectcrystal_279(8909, 1146), 3);
    add_object(create_objectcrystal_279(8981, 1170), 3);
    add_object(create_objectcrystal_279(9005, 1146), 3);
    add_object(create_objectcrystal_279(9029, 1122), 3);
    add_object(create_objectcrystal_279(8885, 1122), 3);
    add_object(create_objectcrystal_279(9053, 1098), 3);
    add_object(create_objectcrystal_279(8861, 1098), 3);
    add_object(create_redspringupright_438(10336, 1448), 3);
    add_object(create_redspringupleft_439(10528, 1544), 3);
    add_object(create_redspringupleft_439(10528, 1512), 3);
    add_object(create_redspringupright_438(10336, 1416), 3);
    add_object(create_redspringupright_438(10336, 1384), 3);
    add_object(create_bgloop3_3332(10944, 1768), 3);
    add_object(create_bgloop3_3332(11072, 1768), 3);
    add_object(create_bgloop3_3332(11328, 1704), 3);
    add_object(create_bgloop3_3332(11456, 1704), 3);
    add_object(create_bgloop3_3332(11712, 1768), 3);
    add_object(create_bgloop3_3332(11840, 1768), 3);
    add_object(create_bgloop3_3332(12096, 1704), 3);
    add_object(create_bgloop3_3332(12224, 1704), 3);
    add_object(create_bgloop3_3332(12416, 1640), 3);
    add_object(create_bgloop3_3332(12544, 1640), 3);
    add_object(create_bgloop3_3332(12672, 1640), 3);
    add_object(create_bgloop3_3332(12800, 1640), 3);
    add_object(create_enemyelitemask_2511(11836, 1448), 3);
    add_object(create_enemyelite_2510(11839, 1447), 3);
    add_object(create_enemyelitemask_2511(12220, 1384), 3);
    add_object(create_enemyelite_2510(12223, 1383), 3);
    add_object(create_enemylimiter_350(12069, 1354), 3);
    add_object(create_enemyelitemask_2511(11444, 1384), 3);
    add_object(create_enemyelite_2510(11447, 1383), 3);
    add_object(create_enemylimiter_350(11301, 1346), 3);
    add_object(create_enemylimiter_350(11637, 1346), 3);
    add_object(create_enemydrillsat_3281(11264, 1408), 3);
    add_object(create_enemydrillsat_3281(11648, 1408), 3);
    add_object(create_bgloop3_3332(12304, 1064), 3);
    add_object(create_bgloop3_3332(12432, 1064), 3);
    add_object(create_bgloop3_3332(12560, 1064), 3);
    add_object(create_bgloop3_3332(12688, 1064), 3);
    add_object(create_enemyelitemask_2511(5140, 1192), 3);
    add_object(create_enemyelite_2510(5143, 1191), 3);
    add_object(create_objectcrystal_279(7653, 1354), 3);
    add_object(create_objectcrystal_279(7653, 1458), 3);
    add_object(create_objectcrystal_279(7669, 1474), 3);
    add_object(create_objectcrystal_279(7669, 1338), 3);
    add_object(create_objectcrystal_279(7685, 1322), 3);
    add_object(create_objectcrystal_279(7685, 1490), 3);
    add_object(create_objectcrystal_279(7701, 1306), 3);
    add_object(create_objectcrystal_279(7701, 1506), 3);
    add_object(create_monitorwoodshield_325(7632, 872), 3);
    add_object(create_bgplatform1_3318(7599, 919), 3);
    add_object(create_bgplatform1_3318(7663, 919), 3);
    add_object(create_gimmickmagnetlauncher_3322(8576, 480), 3);
    add_object(create_gimmickmagnetlauncherleft_3323(8560, 504), 3);
    add_object(create_gimmickmagnetlauncherright_3324(8848, 504), 3);
    add_object(create_gimmickmagnetlauncherlight_3314(8576, 480), 3);
    add_object(create_objectcrystal_279(8861, 674), 3);
    add_object(create_objectcrystal_279(8901, 674), 3);
    add_object(create_objectcrystal_279(8941, 674), 3);
    add_object(create_objectcrystal_279(8981, 674), 3);
    add_object(create_objectcrystal_279(9021, 674), 3);
    add_object(create_objectcrystal_279(9061, 674), 3);
    add_object(create_objectcrystal_279(9101, 674), 3);
    add_object(create_objectcrystal_279(9141, 674), 3);
    add_object(create_bgloop1_3330(10272, 936), 3);
    add_object(create_bgloop1_3330(10272, 872), 3);
    add_object(create_bgloop1_3330(10272, 808), 3);
    add_object(create_bgloop2_3331(10304, 1000), 3);
    add_object(create_bgloop3_3332(10304, 1064), 3);
    add_object(create_layerchangeto0_405(10224, 856), 3);
    add_object(create_layerchangeswitch_404(10488, 688), 3);
    add_object(create_layerchangeswitch_404(10488, 744), 3);
    add_object(create_layerchangeto0_405(10224, 904), 3);
    add_object(create_layerchangeto0_405(10224, 952), 3);
    add_object(create_layerchangeto0_405(10224, 808), 3);
    add_object(create_layerchangeto0_405(10240, 752), 3);
    add_object(create_objectpetal_302(10529, 969), 3);
    add_object(create_objectpetal_302(10577, 921), 3);
    add_object(create_objectpetal_302(10625, 873), 3);
    add_object(create_objectpetal_302(10625, 809), 3);
    add_object(create_objectpetal_302(10577, 761), 3);
    add_object(create_objectpetal_302(10529, 713), 3);
    add_object(create_objectpetal_302(10465, 713), 3);
    add_object(create_objectpetal_302(10417, 761), 3);
    add_object(create_objectpetal_302(10369, 809), 3);
    add_object(create_layerchangeswitch2_1239(10344, 1200), 3);
    add_object(create_layerchangeswitch2_1239(10376, 1184), 3);
    add_object(create_layerchangeswitch2_1239(10408, 1168), 3);
    add_object(create_layerchangeswitch2_1239(10440, 1152), 3);
    add_object(create_layerchangeswitch2_1239(10472, 1136), 3);
    add_object(create_bgplatform1_3318(9071, 727), 3);
    add_object(create_bgplatform1_3318(9007, 727), 3);
    add_object(create_bgplatform1_3318(8943, 727), 3);
    add_object(create_bgplatform1_3318(8879, 727), 3);
    add_object(create_redspringupright_438(10336, 1352), 3);
    add_object(create_redspringupright_438(10336, 1320), 3);
    add_object(create_objectcrystal_279(8621, 522), 3);
    add_object(create_objectcrystal_279(8645, 522), 3);
    add_object(create_objectcrystal_279(8669, 522), 3);
    add_object(create_objectcrystal_279(8693, 522), 3);
    add_object(create_objectcrystal_279(8717, 522), 3);
    add_object(create_objectcrystal_279(8741, 522), 3);
    add_object(create_objectcrystal_279(8765, 522), 3);
    add_object(create_objectcrystal_279(8789, 522), 3);
    add_object(create_enemyrotorbladespikes_2204(12031, 1480), 3);
    add_object(create_enemyrotorblade_2205(12032, 1480), 3);
    add_object(create_enemyspawntube_2195(12032, 1492), 3);
    add_object(create_enemylimiter_350(12085, 1426), 3);
    add_object(create_enemylimiter_350(11621, 1426), 3);
    add_object(create_bgloop3_3332(10560, 2088), 3);
    add_object(create_bgloop3_3332(10688, 2088), 3);
    add_object(create_bgloop3_3332(10240, 2152), 3);
    add_object(create_bgloop3_3332(10368, 2152), 3);
    add_object(create_bgloop3_3332(9472, 2152), 3);
    add_object(create_bgloop3_3332(9600, 2152), 3);
    add_object(create_bgloop3_3332(9728, 2152), 3);
    add_object(create_bgloop3_3332(9856, 2152), 3);
    add_object(create_bgloop3_3332(9984, 2152), 3);
    add_object(create_bgloop3_3332(10112, 2152), 3);
    add_object(create_objectcodec_354(8786, 573), 3);
    add_object(create_objectcodec_354(8610, 1493), 3);
    add_object(create_effectbrevonmechwarning2_3315(1212, 1808), 3);
    add_object(create_effectbrevonmechwarning2_3315(1212, 1760), 3);
    add_object(create_effectbrevonmechwarning2_3315(1212, 1712), 3);
    add_object(create_objectpetal_302(8513, 1817), 3);
    add_object(create_objectpetal_302(8513, 1865), 3);
    add_object(create_objectpetal_302(8513, 1913), 3);
    add_object(create_objectpetal_302(8513, 1961), 3);
    add_object(create_objectpetal_302(7889, 889), 3);
    add_object(create_objectpetal_302(7921, 889), 3);
    add_object(create_objectpetal_302(7921, 921), 3);
    add_object(create_objectpetal_302(7889, 921), 3);
    add_object(create_monitorwatershield_327(4336, 1160), 3);
    add_object(create_objectpetal_302(5441, 1025), 3);
    add_object(create_objectpetal_302(5633, 1025), 3);
    add_object(create_objectpetal_302(5537, 1025), 3);
    add_object(create_objectpetal_302(6561, 1641), 3);
    add_object(create_objectpetal_302(6305, 1641), 3);
    add_object(create_objectpetal_302(6345, 1569), 3);
    add_object(create_objectpetal_302(6521, 1569), 3);
    add_object(create_objectpetal_302(6433, 1513), 3);
    add_object(create_brevonmechturret_3333(-360, 1896), 3);
    add_object(create_mapdata2_32(-432, 240), 3);
    add_background_object(create_bgrocks1_3213(256, 1888), 4);
    add_background_object(create_bgrocks1_3213(0, 1888), 4);
    add_background_object(create_bgfacility1_3271(0, 1824), 4);
    add_background_object(create_bgfacility3_3272(512, 1824), 4);
    add_background_object(create_bgfacility6_3274(512, 1888), 4);
    add_background_object(create_bgfacility7_3277(512, 1952), 4);
    add_background_object(create_bgfacility1_3271(128, 1824), 4);
    add_background_object(create_bgfacility1_3271(256, 1824), 4);
    add_background_object(create_bgfacility1_3271(384, 1824), 4);
    add_background_object(create_bgrocks1_3213(256, 2016), 4);
    add_background_object(create_bgrocks1_3213(0, 2016), 4);
    add_background_object(create_bgfacility6_3274(512, 2016), 4);
    add_background_object(create_bgfacility7_3277(512, 2080), 4);
    add_background_object(create_bgrocks1_3213(256, 1504), 4);
    add_background_object(create_bgrocks1_3213(0, 1504), 4);
    add_background_object(create_bgfacility13_3278(160, 1632), 4);
    add_background_object(create_bgfacility13_3278(-32, 1632), 4);
    add_background_object(create_bgfacility14_3279(320, 1632), 4);
    add_background_object(create_bgfacility14_3279(128, 1632), 4);
    add_background_object(create_bgfacility12_3280(192, 1632), 4);
    add_background_object(create_bgfacility12_3280(0, 1632), 4);
    add_background_object(create_bgfacility4_3275(160, 1568), 4);
    add_background_object(create_bgfacility4_3275(-32, 1568), 4);
    add_background_object(create_bgfacility5_3276(160, 1504), 4);
    add_background_object(create_bgfacility5_3276(-32, 1504), 4);
    add_background_object(create_bgfacility6_3274(320, 1568), 4);
    add_background_object(create_bgfacility6_3274(128, 1568), 4);
    add_background_object(create_bgfacility7_3277(320, 1504), 4);
    add_background_object(create_bgfacility7_3277(128, 1504), 4);
    add_background_object(create_bgfacility13_3278(352, 1632), 4);
    add_background_object(create_bgfacility14_3279(512, 1632), 4);
    add_background_object(create_bgfacility12_3280(384, 1632), 4);
    add_background_object(create_bgfacility4_3275(352, 1568), 4);
    add_background_object(create_bgfacility5_3276(352, 1504), 4);
    add_background_object(create_bgfacility6_3274(512, 1568), 4);
    add_background_object(create_bgfacility7_3277(512, 1504), 4);
    add_background_object(create_bgrocks1_3213(256, 1376), 4);
    add_background_object(create_bgrocks1_3213(0, 1376), 4);
    add_background_object(create_bgfacility4_3275(160, 1440), 4);
    add_background_object(create_bgfacility4_3275(-32, 1440), 4);
    add_background_object(create_bgfacility5_3276(160, 1376), 4);
    add_background_object(create_bgfacility5_3276(-32, 1376), 4);
    add_background_object(create_bgfacility6_3274(320, 1440), 4);
    add_background_object(create_bgfacility6_3274(128, 1440), 4);
    add_background_object(create_bgfacility7_3277(320, 1376), 4);
    add_background_object(create_bgfacility7_3277(128, 1376), 4);
    add_background_object(create_bgfacility4_3275(352, 1440), 4);
    add_background_object(create_bgfacility5_3276(352, 1376), 4);
    add_background_object(create_bgfacility6_3274(512, 1440), 4);
    add_background_object(create_bgfacility7_3277(512, 1376), 4);
    add_background_object(create_bgrocks1_3213(256, 1248), 4);
    add_background_object(create_bgrocks1_3213(0, 1248), 4);
    add_background_object(create_bgfacility4_3275(160, 1312), 4);
    add_background_object(create_bgfacility4_3275(-32, 1312), 4);
    add_background_object(create_bgfacility5_3276(160, 1248), 4);
    add_background_object(create_bgfacility5_3276(-32, 1248), 4);
    add_background_object(create_bgfacility6_3274(320, 1312), 4);
    add_background_object(create_bgfacility6_3274(128, 1312), 4);
    add_background_object(create_bgfacility7_3277(320, 1248), 4);
    add_background_object(create_bgfacility7_3277(128, 1248), 4);
    add_background_object(create_bgfacility4_3275(352, 1312), 4);
    add_background_object(create_bgfacility5_3276(352, 1248), 4);
    add_background_object(create_bgfacility6_3274(512, 1312), 4);
    add_background_object(create_bgfacility7_3277(512, 1248), 4);
    add_background_object(create_bgfacility2_3273(3168, 1824), 4);
    add_background_object(create_bgfacility4_3275(3168, 1888), 4);
    add_background_object(create_bgfacility5_3276(3168, 1952), 4);
    add_background_object(create_bgfacility1_3271(3200, 1824), 4);
    add_background_object(create_bgfacility1_3271(3328, 1824), 4);
    add_background_object(create_bgfacility4_3275(3168, 2016), 4);
    add_background_object(create_bgrocks1_3213(3200, 1888), 4);
    add_background_object(create_bgrocks1_3213(3200, 2016), 4);
    add_background_object(create_bgfacility5_3276(3168, 2080), 4);
    add_background_object(create_bgfacility1_3271(3456, 1824), 4);
    add_background_object(create_bgfacility1_3271(3584, 1824), 4);
    add_background_object(create_bgrocks1_3213(3456, 1888), 4);
    add_background_object(create_bgrocks1_3213(3456, 2016), 4);
    add_background_object(create_bgfacility3_3272(3712, 1824), 4);
    add_background_object(create_bgfacility6_3274(3712, 1888), 4);
    add_background_object(create_bgfacility7_3277(3712, 1952), 4);
    add_background_object(create_bgfacility6_3274(3712, 2016), 4);
    add_background_object(create_bgfacility7_3277(3712, 2080), 4);
    add_background_object(create_bgrocks1_3213(3456, 1504), 4);
    add_background_object(create_bgrocks1_3213(3456, 1376), 4);
    add_background_object(create_bgrocks1_3213(3200, 1504), 4);
    add_background_object(create_bgrocks1_3213(3200, 1376), 4);
    add_background_object(create_bgfacility13_3278(3360, 1632), 4);
    add_background_object(create_bgfacility13_3278(3168, 1632), 4);
    add_background_object(create_bgfacility14_3279(3520, 1632), 4);
    add_background_object(create_bgfacility14_3279(3328, 1632), 4);
    add_background_object(create_bgfacility12_3280(3392, 1632), 4);
    add_background_object(create_bgfacility12_3280(3200, 1632), 4);
    add_background_object(create_bgfacility4_3275(3360, 1568), 4);
    add_background_object(create_bgfacility4_3275(3360, 1440), 4);
    add_background_object(create_bgfacility4_3275(3168, 1568), 4);
    add_background_object(create_bgfacility4_3275(3168, 1440), 4);
    add_background_object(create_bgfacility5_3276(3360, 1504), 4);
    add_background_object(create_bgfacility5_3276(3360, 1376), 4);
    add_background_object(create_bgfacility5_3276(3168, 1504), 4);
    add_background_object(create_bgfacility5_3276(3168, 1376), 4);
    add_background_object(create_bgfacility6_3274(3520, 1568), 4);
    add_background_object(create_bgfacility6_3274(3520, 1440), 4);
    add_background_object(create_bgfacility6_3274(3328, 1568), 4);
    add_background_object(create_bgfacility6_3274(3328, 1440), 4);
    add_background_object(create_bgfacility7_3277(3520, 1504), 4);
    add_background_object(create_bgfacility7_3277(3520, 1376), 4);
    add_background_object(create_bgfacility7_3277(3328, 1504), 4);
    add_background_object(create_bgfacility7_3277(3328, 1376), 4);
    add_background_object(create_bgrocks1_3213(3456, 1248), 4);
    add_background_object(create_bgrocks1_3213(3200, 1248), 4);
    add_background_object(create_bgfacility4_3275(3360, 1312), 4);
    add_background_object(create_bgfacility4_3275(3168, 1312), 4);
    add_background_object(create_bgfacility5_3276(3360, 1248), 4);
    add_background_object(create_bgfacility5_3276(3168, 1248), 4);
    add_background_object(create_bgfacility6_3274(3520, 1312), 4);
    add_background_object(create_bgfacility6_3274(3328, 1312), 4);
    add_background_object(create_bgfacility7_3277(3520, 1248), 4);
    add_background_object(create_bgfacility7_3277(3328, 1248), 4);
    add_background_object(create_bgfacility4_3275(3552, 1568), 4);
    add_background_object(create_bgfacility4_3275(3552, 1440), 4);
    add_background_object(create_bgfacility5_3276(3552, 1504), 4);
    add_background_object(create_bgfacility5_3276(3552, 1376), 4);
    add_background_object(create_bgfacility4_3275(3552, 1312), 4);
    add_background_object(create_bgfacility5_3276(3552, 1248), 4);
    add_background_object(create_bgfacility4_3275(9888, 1448), 4);
    add_background_object(create_bgfacility6_3274(9920, 1448), 4);
    add_background_object(create_bgfacility5_3276(9888, 1384), 4);
    add_background_object(create_bgfacility7_3277(9920, 1384), 4);
    add_background_object(create_bgfacility4_3275(9888, 1576), 4);
    add_background_object(create_bgfacility6_3274(9920, 1576), 4);
    add_background_object(create_bgfacility5_3276(9888, 1512), 4);
    add_background_object(create_bgfacility7_3277(9920, 1512), 4);
    add_background_object(create_bgfacility4_3275(9888, 1320), 4);
    add_background_object(create_bgfacility6_3274(9920, 1320), 4);
    add_background_object(create_bgfacility5_3276(9888, 1256), 4);
    add_background_object(create_bgfacility7_3277(9920, 1256), 4);
    add_background_object(create_bgfacility4_3275(9888, 1704), 4);
    add_background_object(create_bgfacility6_3274(9920, 1704), 4);
    add_background_object(create_bgfacility5_3276(9888, 1640), 4);
    add_background_object(create_bgfacility7_3277(9920, 1640), 4);
    add_background_object(create_bgfacility5_3276(9888, 1768), 4);
    add_background_object(create_bgfacility7_3277(9920, 1768), 4);
    add_background_object(create_bgfacility5_3276(10272, 808), 4);
    add_background_object(create_bgfacility7_3277(10304, 808), 4);
    add_background_object(create_bgfacility4_3275(10272, 744), 4);
    add_background_object(create_bgfacility6_3274(10304, 744), 4);
    add_background_object(create_bgfacility5_3276(10272, 936), 4);
    add_background_object(create_bgfacility7_3277(10304, 936), 4);
    add_background_object(create_bgfacility4_3275(10272, 872), 4);
    add_background_object(create_bgfacility6_3274(10304, 872), 4);
    add_background_object(create_bgfacility4_3275(10272, 1000), 4);
    add_background_object(create_bgfacility6_3274(10304, 1000), 4);
    add_background_object(create_bgfacility5_3276(10272, 1064), 4);
    add_background_object(create_bgfacility7_3277(10304, 1064), 4);
    add_object(create_enemyspawntube_2195(3776, 1884), 4);
    add_object(create_enemyspawntube_2195(3840, 1884), 4);
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
    add_object(create_hazardspikesup_1769(-208, 392), 5);
    add_object(create_hazardspikesdown_960(-168, 392), 5);
    add_object(create_hazardspikesleft_959(-128, 392), 5);
    add_object(create_hazardspikesright_961(-88, 392), 5);
    add_object(create_playergimmickactions_413(-96, 136), 5);
    add_object(create_gimmickhangingidlesensor_740(489, -152), 5);
    add_object(create_generalwater_414(-585, 384), 5);
    add_object(create_generalwaterhorizon_415(-585, 383), 5);
    add_object(create_effectswatersplash_416(-360, 25), 5);
    add_object(create_playerskinsashhair_417(-145, 273), 5);
    add_object(create_playerskinsash_418(-147, 275), 5);
    add_object(create_cameralimitbossbottom_420(8288, 1535), 5);
    add_object(create_cameralimitbossleft_421(8000, 1320), 5);
    add_object(create_cameralimitbossright_422(8575, 1320), 5);
    add_object(create_cameralimitbosstop_423(8304, 1176), 5);
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
    loop_trigger_deactivate_boss_running = false;
    loop_trigger_deactivate_boss_index = 0;
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
    loop_sparky_running = false;
    loop_sparky_index = 0;
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
    loop_xplode_running = false;
    loop_xplode_index = 0;
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
    loop_shockwave_running = false;
    loop_shockwave_index = 0;
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
        frame_loops[std::string("sound_hurt1", 11)].set(&loop_wrapper_sound_hurt1_62, &loop_sound_hurt1_running, &loop_sound_hurt1_index);
        frame_loops[std::string("sound_kick1", 11)].set(&loop_wrapper_sound_kick1_62, &loop_sound_kick1_running, &loop_sound_kick1_index);
        frame_loops[std::string("sound_kick0", 11)].set(&loop_wrapper_sound_kick0_62, &loop_sound_kick0_running, &loop_sound_kick0_index);
        frame_loops[std::string("sound_kick2", 11)].set(&loop_wrapper_sound_kick2_62, &loop_sound_kick2_running, &loop_sound_kick2_index);
        frame_loops[std::string("sound_idle3", 11)].set(&loop_wrapper_sound_idle3_62, &loop_sound_idle3_running, &loop_sound_idle3_index);
        frame_loops[std::string("sound_idle5", 11)].set(&loop_wrapper_sound_idle5_62, &loop_sound_idle5_running, &loop_sound_idle5_index);
        frame_loops[std::string("process_call.resume_music", 25)].set(&loop_wrapper_process_call_resume_music_62, &loop_process_call_resume_music_running, &loop_process_call_resume_music_index);
        frame_loops[std::string("sound_idle7", 11)].set(&loop_wrapper_sound_idle7_62, &loop_sound_idle7_running, &loop_sound_idle7_index);
        frame_loops[std::string("camera_mode2", 12)].set(&loop_wrapper_camera_mode2_62, &loop_camera_mode2_running, &loop_camera_mode2_index);
        frame_loops[std::string("sound_dig2", 10)].set(&loop_wrapper_sound_dig2_62, &loop_sound_dig2_running, &loop_sound_dig2_index);
        frame_loops[std::string("sound_dig3", 10)].set(&loop_wrapper_sound_dig3_62, &loop_sound_dig3_running, &loop_sound_dig3_index);
        frame_loops[std::string("sound_dig0", 10)].set(&loop_wrapper_sound_dig0_62, &loop_sound_dig0_running, &loop_sound_dig0_index);
        frame_loops[std::string("sound_dig1", 10)].set(&loop_wrapper_sound_dig1_62, &loop_sound_dig1_running, &loop_sound_dig1_index);
        frame_loops[std::string("sound_explode5", 14)].set(&loop_wrapper_sound_explode5_62, &loop_sound_explode5_running, &loop_sound_explode5_index);
        frame_loops[std::string("sound_explode4", 14)].set(&loop_wrapper_sound_explode4_62, &loop_sound_explode4_running, &loop_sound_explode4_index);
        frame_loops[std::string("process_call.unlock_music", 25)].set(&loop_wrapper_process_call_unlock_music_62, &loop_process_call_unlock_music_running, &loop_process_call_unlock_music_index);
        frame_loops[std::string("process_call.fadeout_music", 26)].set(&loop_wrapper_process_call_fadeout_music_62, &loop_process_call_fadeout_music_running, &loop_process_call_fadeout_music_index);
        frame_loops[std::string("sound_explode8", 14)].set(&loop_wrapper_sound_explode8_62, &loop_sound_explode8_running, &loop_sound_explode8_index);
        frame_loops[std::string("process_call.reset_music", 24)].set(&loop_wrapper_process_call_reset_music_62, &loop_process_call_reset_music_running, &loop_process_call_reset_music_index);
        frame_loops[std::string("sound_hurt2", 11)].set(&loop_wrapper_sound_hurt2_62, &loop_sound_hurt2_running, &loop_sound_hurt2_index);
        frame_loops[std::string("sound_hurt3", 11)].set(&loop_wrapper_sound_hurt3_62, &loop_sound_hurt3_running, &loop_sound_hurt3_index);
        frame_loops[std::string("sound_hurt0", 11)].set(&loop_wrapper_sound_hurt0_62, &loop_sound_hurt0_running, &loop_sound_hurt0_index);
        frame_loops[std::string("sound_explode0", 14)].set(&loop_wrapper_sound_explode0_62, &loop_sound_explode0_running, &loop_sound_explode0_index);
        frame_loops[std::string("sound_explode7", 14)].set(&loop_wrapper_sound_explode7_62, &loop_sound_explode7_running, &loop_sound_explode7_index);
        frame_loops[std::string("sound_explode6", 14)].set(&loop_wrapper_sound_explode6_62, &loop_sound_explode6_running, &loop_sound_explode6_index);
        frame_loops[std::string("camera_mode1", 12)].set(&loop_wrapper_camera_mode1_62, &loop_camera_mode1_running, &loop_camera_mode1_index);
        frame_loops[std::string("camera_mode0", 12)].set(&loop_wrapper_camera_mode0_62, &loop_camera_mode0_running, &loop_camera_mode0_index);
        frame_loops[std::string("process_call.play_music", 23)].set(&loop_wrapper_process_call_play_music_62, &loop_process_call_play_music_running, &loop_process_call_play_music_index);
        frame_loops[std::string("play_music.2", 12)].set(&loop_wrapper_play_music_2_62, &loop_play_music_2_running, &loop_play_music_2_index);
        frame_loops[std::string("sound_attack1", 13)].set(&loop_wrapper_sound_attack1_62, &loop_sound_attack1_running, &loop_sound_attack1_index);
        frame_loops[std::string("sound_attack0", 13)].set(&loop_wrapper_sound_attack0_62, &loop_sound_attack0_running, &loop_sound_attack0_index);
        frame_loops[std::string("sound_attack3", 13)].set(&loop_wrapper_sound_attack3_62, &loop_sound_attack3_running, &loop_sound_attack3_index);
        frame_loops[std::string("sound_attack2", 13)].set(&loop_wrapper_sound_attack2_62, &loop_sound_attack2_running, &loop_sound_attack2_index);
        frame_loops[std::string("play_music.8", 12)].set(&loop_wrapper_play_music_8_62, &loop_play_music_8_running, &loop_play_music_8_index);
        frame_loops[std::string("sound_uppercut3", 15)].set(&loop_wrapper_sound_uppercut3_62, &loop_sound_uppercut3_running, &loop_sound_uppercut3_index);
        frame_loops[std::string("sound_uppercut1", 15)].set(&loop_wrapper_sound_uppercut1_62, &loop_sound_uppercut1_running, &loop_sound_uppercut1_index);
        frame_loops[std::string("sound_uppercut0", 15)].set(&loop_wrapper_sound_uppercut0_62, &loop_sound_uppercut0_running, &loop_sound_uppercut0_index);
        frame_loops[std::string("process_call.fadein_music", 25)].set(&loop_wrapper_process_call_fadein_music_62, &loop_process_call_fadein_music_running, &loop_process_call_fadein_music_index);
        frame_loops[std::string("play_music.0", 12)].set(&loop_wrapper_play_music_0_62, &loop_play_music_0_running, &loop_play_music_0_index);
        frame_loops[std::string("play_music.1", 12)].set(&loop_wrapper_play_music_1_62, &loop_play_music_1_running, &loop_play_music_1_index);
        frame_loops[std::string("process_call.lock_music", 23)].set(&loop_wrapper_process_call_lock_music_62, &loop_process_call_lock_music_running, &loop_process_call_lock_music_index);
        frame_loops[std::string("play_music.3", 12)].set(&loop_wrapper_play_music_3_62, &loop_play_music_3_running, &loop_play_music_3_index);
        frame_loops[std::string("play_music.4", 12)].set(&loop_wrapper_play_music_4_62, &loop_play_music_4_running, &loop_play_music_4_index);
        frame_loops[std::string("play_music.5", 12)].set(&loop_wrapper_play_music_5_62, &loop_play_music_5_running, &loop_play_music_5_index);
        frame_loops[std::string("play_music.6", 12)].set(&loop_wrapper_play_music_6_62, &loop_play_music_6_running, &loop_play_music_6_index);
        frame_loops[std::string("sound_go0", 9)].set(&loop_wrapper_sound_go0_62, &loop_sound_go0_running, &loop_sound_go0_index);
        frame_loops[std::string("process_call.unqueue_music", 26)].set(&loop_wrapper_process_call_unqueue_music_62, &loop_process_call_unqueue_music_running, &loop_process_call_unqueue_music_index);
        frame_loops[std::string("process_call.ME", 15)].set(&loop_wrapper_process_call_me_62, &loop_process_call_me_running, &loop_process_call_me_index);
        frame_loops[std::string("play_music.7", 12)].set(&loop_wrapper_play_music_7_62, &loop_play_music_7_running, &loop_play_music_7_index);
        frame_loops[std::string("sound_explode3", 14)].set(&loop_wrapper_sound_explode3_62, &loop_sound_explode3_running, &loop_sound_explode3_index);
        frame_loops[std::string("sound_cyclone0", 14)].set(&loop_wrapper_sound_cyclone0_62, &loop_sound_cyclone0_running, &loop_sound_cyclone0_index);
        frame_loops[std::string("sound_explode2", 14)].set(&loop_wrapper_sound_explode2_62, &loop_sound_explode2_running, &loop_sound_explode2_index);
        frame_loops[std::string("sound_explode1", 14)].set(&loop_wrapper_sound_explode1_62, &loop_sound_explode1_running, &loop_sound_explode1_index);
        frame_loops[std::string("process_call.stop_music", 23)].set(&loop_wrapper_process_call_stop_music_62, &loop_process_call_stop_music_running, &loop_process_call_stop_music_index);
        loops_initialized = true;
    }
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_00_common_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_carol_s_bike_driving_1 = false;
    not_always_789_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_22_float_1 = false;
    not_always_1388_13 = loop_count;
    not_always_44_13 = loop_count;
    not_always_102_0 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_20_summon_block_1 = false;
    not_always_1391_13 = loop_count;
    group_main_engine_global_methods_player_player_control_invincibility_and_speed_sneakers_1 = true;
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
    not_always_826_13 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_21_rising_slash_1 = false;
    not_always_814_13 = loop_count;
    not_always_1832_16 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_04_skidding_1 = false;
    not_always_675_13 = loop_count;
    not_always_1913_62 = loop_count;
    not_always_1571_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_19_dive_kick_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_50_cutscene_poses_1 = false;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_11_pushing_1 = false;
    group_main_engine_global_methods_player_player_movement_initial_movement_1 = false;
    not_always_96_0 = loop_count;
    not_always_130_0 = loop_count;
    not_always_1914_62 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_torque_weapon_system_weapon_update_1 = false;
    group_main_engine_global_methods_player_player_control_actions_spade_actions_actions_20_card_throw_1 = false;
    not_always_1448_13 = loop_count;
    not_always_308_13 = loop_count;
    group_sound_events_milla_1 = false;
    group_main_engine_global_methods_player_player_control_actions_torque_actions_1 = true;
    group_main_engine_global_methods_player_player_control_actions_death_actions_actions_10_drown_1 = false;
    not_always_46_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_1_wood_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_manage_actions_1 = true;
    group_main_engine_level_specific_methods_bosses_boss_sparky_sparky_main_1 = false;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_48_jump_pads_1 = false;
    group_main_engine_interface_and_post_processing_methods_ccs_classic_camera_system_1 = true;
    not_always_53_13 = loop_count;
    once_condition_63_0 = false;
    not_always_172_8 = loop_count;
    not_always_1870_62 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_milla_actions_actions_27_digging_pick_up_1 = false;
    not_always_1869_62 = loop_count;
    not_always_815_13 = loop_count;
    not_always_929_13 = loop_count;
    group_main_engine_global_methods_common_objects_shields_5_earth_shield_1 = false;
    group_main_engine_global_methods_player_player_control_actions_lilac_actions_actions_05_dragon_boost_1 = false;
    not_always_52_13 = loop_count;
    not_always_1036_13 = loop_count;
    not_always_1035_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_20_punch_combo_1 = false;
    not_always_65_0 = loop_count;
    not_always_1447_13 = loop_count;
    not_always_422_13 = loop_count;
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
    not_always_45_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_41_hanging_1 = false;
    not_always_57_13 = loop_count;
    group_main_engine_global_methods_player_player_control_actions_common_actions_actions_45_halfpipe_1 = false;
    not_always_2228_62 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_common_actions_1 = true;
    not_always_539_13 = loop_count;
    not_always_58_13 = loop_count;
    not_always_1531_39 = loop_count;
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
    group_main_engine_level_specific_methods_bosses_boss_brevon_s_mech_brevon_s_mech_main_1 = false;
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
    not_always_98_0 = loop_count;
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
    group_main_engine_global_methods_player_player_control_actions_carol_actions_actions_32_air_boost_1 = false;
    not_always_1255_13 = loop_count;
}
void Frames::loop_spawndebris_63()
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
    event_func_10945();
}
void Frames::loop_wrapper_sound_hurt1_63(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt1_8();
}
void Frames::loop_wrapper_sound_kick1_63(void * frame)
{
    ((Frames*)frame)->loop_sound_kick1_0();
}
void Frames::loop_wrapper_sound_kick0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_kick0_0();
}
void Frames::loop_wrapper_sound_kick2_63(void * frame)
{
    ((Frames*)frame)->loop_sound_kick2_0();
}
void Frames::loop_wrapper_sound_idle3_63(void * frame)
{
    ((Frames*)frame)->loop_sound_idle3_0();
}
void Frames::loop_wrapper_sound_idle5_63(void * frame)
{
    ((Frames*)frame)->loop_sound_idle5_0();
}
void Frames::loop_wrapper_process_call_resume_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_resume_music_13();
}
void Frames::loop_wrapper_sound_idle7_63(void * frame)
{
    ((Frames*)frame)->loop_sound_idle7_0();
}
void Frames::loop_wrapper_camera_mode2_63(void * frame)
{
    ((Frames*)frame)->loop_camera_mode2_13();
}
void Frames::loop_wrapper_sound_dig2_63(void * frame)
{
    ((Frames*)frame)->loop_sound_dig2_0();
}
void Frames::loop_wrapper_sound_dig3_63(void * frame)
{
    ((Frames*)frame)->loop_sound_dig3_0();
}
void Frames::loop_wrapper_sound_dig0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_dig0_0();
}
void Frames::loop_wrapper_sound_dig1_63(void * frame)
{
    ((Frames*)frame)->loop_sound_dig1_0();
}
void Frames::loop_wrapper_sound_explode5_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode5_0();
}
void Frames::loop_wrapper_sound_explode4_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode4_0();
}
void Frames::loop_wrapper_process_call_unlock_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_unlock_music_13();
}
void Frames::loop_wrapper_process_call_fadeout_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_fadeout_music_13();
}
void Frames::loop_wrapper_sound_explode8_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode8_0();
}
void Frames::loop_wrapper_process_call_reset_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_reset_music_13();
}
void Frames::loop_wrapper_sound_hurt2_63(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt2_8();
}
void Frames::loop_wrapper_sound_hurt3_63(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt3_8();
}
void Frames::loop_wrapper_sound_hurt0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_hurt0_8();
}
void Frames::loop_wrapper_sound_explode0_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode3_0();
}
void Frames::loop_wrapper_sound_explode7_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode7_0();
}
void Frames::loop_wrapper_sound_explode6_63(void * frame)
{
    ((Frames*)frame)->loop_sound_explode6_0();
}
void Frames::loop_wrapper_camera_mode1_63(void * frame)
{
    ((Frames*)frame)->loop_camera_mode1_13();
}
void Frames::loop_wrapper_camera_mode0_63(void * frame)
{
    ((Frames*)frame)->loop_camera_mode0_13();
}
void Frames::loop_wrapper_process_call_play_music_63(void * frame)
{
    ((Frames*)frame)->loop_process_call_play_music_13();
}
