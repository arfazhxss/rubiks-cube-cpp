# Directory Structure

```
├── README.md
├── direc.sh
├── route.sh
├── 0 Resources/
│   ├── glad.c
│   ├── opengl45-quick-reference-card.pdf
│   ├── Clones/
│   │   ├── build.sh
│   │   ├── build_all.sh
│   │   ├── build_base.sh
│   │   ├── clean_all.sh
│   │   ├── install_requirements_ubuntu.sh
│   │   ├── prep_zip.sh
│   │   ├── Common/
│   │   │   ├── camera.cpp
│   │   │   ├── cubemap_texture.cpp
│   │   │   ├── glut_backend.cpp
│   │   │   ├── io_buffer.cpp
│   │   │   ├── math_3d.cpp
│   │   │   ├── ogldev_all.cpp
│   │   │   ├── ogldev_app.cpp
│   │   │   ├── ogldev_atb.cpp
│   │   │   ├── ogldev_backend.cpp
│   │   │   ├── ogldev_basic_glfw_camera.cpp
│   │   │   ├── ogldev_basic_lighting.cpp
│   │   │   ├── ogldev_basic_mesh.cpp
│   │   │   ├── ogldev_flat_passthru_technique.cpp
│   │   │   ├── ogldev_forward_skinning.cpp
│   │   │   ├── ogldev_framebuffer.cpp
│   │   │   ├── ogldev_glfw.cpp
│   │   │   ├── ogldev_glfw_backend.cpp
│   │   │   ├── ogldev_gui_texture.cpp
│   │   │   ├── ogldev_guitex_technique.cpp
│   │   │   ├── ogldev_new_lighting.cpp
│   │   │   ├── ogldev_phong_renderer.cpp
│   │   │   ├── ogldev_rendering_subsystem.cpp
│   │   │   ├── ogldev_rendering_subsystem_gl.cpp
│   │   │   ├── ogldev_screen_quad.cpp
│   │   │   ├── ogldev_shadow_cube_map_fbo.cpp
│   │   │   ├── ogldev_shadow_map_fbo.cpp
│   │   │   ├── ogldev_shadow_map_offset_texture.cpp
│   │   │   ├── ogldev_shadow_mapping_technique.cpp
│   │   │   ├── ogldev_shadow_mapping_technique_point_light.cpp
│   │   │   ├── ogldev_skinned_mesh.cpp
│   │   │   ├── ogldev_skinning_technique.cpp
│   │   │   ├── ogldev_skybox.cpp
│   │   │   ├── ogldev_skybox_technique.cpp
│   │   │   ├── ogldev_skydome.cpp
│   │   │   ├── ogldev_skydome_technique.cpp
│   │   │   ├── ogldev_sprite_technique.cpp
│   │   │   ├── ogldev_stb_image.cpp
│   │   │   ├── ogldev_tex_technique.cpp
│   │   │   ├── ogldev_texture.cpp
│   │   │   ├── ogldev_util.cpp
│   │   │   ├── ogldev_vulkan.cpp
│   │   │   ├── ogldev_vulkan_core.cpp
│   │   │   ├── ogldev_win32_control.cpp
│   │   │   ├── ogldev_world_transform.cpp
│   │   │   ├── ogldev_xcb_control.cpp
│   │   │   ├── pipeline.cpp
│   │   │   ├── random_texture.cpp
│   │   │   ├── technique.cpp
│   │   │   ├── 3rdparty/
│   │   │   │   ├── stb_image.cpp
│   │   │   │   ├── ImGui/
│   │   │   │   │   ├── GLFW/
│   │   │   │   │   │   ├── imconfig.h
│   │   │   │   │   │   ├── imgui.cpp
│   │   │   │   │   │   ├── imgui.h
│   │   │   │   │   │   ├── imgui_draw.cpp
│   │   │   │   │   │   ├── imgui_impl_glfw.cpp
│   │   │   │   │   │   ├── imgui_impl_glfw.h
│   │   │   │   │   │   ├── imgui_impl_opengl3.cpp
│   │   │   │   │   │   ├── imgui_impl_opengl3.h
│   │   │   │   │   │   ├── imgui_impl_opengl3_loader.h
│   │   │   │   │   │   ├── imgui_internal.h
│   │   │   │   │   │   ├── imgui_tables.cpp
│   │   │   │   │   │   ├── imgui_widgets.cpp
│   │   │   │   │   │   ├── imstb_rectpack.h
│   │   │   │   │   │   ├── imstb_textedit.h
│   │   │   │   │   │   ├── imstb_truetype.h
│   │   │   ├── FreetypeGL/
│   │   │   │   ├── font-manager.c
│   │   │   │   ├── font-manager.h
│   │   │   │   ├── font_shader.cpp
│   │   │   │   ├── font_shader.h
│   │   │   │   ├── freetypeGL.cpp
│   │   │   │   ├── freetypeGL.h
│   │   │   │   ├── markup.h
│   │   │   │   ├── texture-atlas.c
│   │   │   │   ├── texture-atlas.h
│   │   │   │   ├── texture-font.c
│   │   │   │   ├── texture-font.h
│   │   │   │   ├── texture-glyph.c
│   │   │   │   ├── texture-glyph.h
│   │   │   │   ├── vector.c
│   │   │   │   ├── vector.h
│   │   │   │   ├── vertex-buffer.c
│   │   │   │   ├── vertex-buffer.h
│   │   │   ├── Shaders/
│   │   │   │   ├── basic_lighting.fs
│   │   │   │   ├── basic_lighting.vs
│   │   │   │   ├── empty.fs
│   │   │   │   ├── flat_passthru.fs
│   │   │   │   ├── flat_passthru.vs
│   │   │   │   ├── forward_lighting.fs
│   │   │   │   ├── forward_lighting.vs
│   │   │   │   ├── forward_skinning.vs
│   │   │   │   ├── guitex.fs
│   │   │   │   ├── guitex.vs
│   │   │   │   ├── lighting_new.fs
│   │   │   │   ├── lighting_new.vs
│   │   │   │   ├── shadow_map.vs
│   │   │   │   ├── shadow_map_point_light.fs
│   │   │   │   ├── shadow_map_point_light.vs
│   │   │   │   ├── skinning.vs
│   │   │   │   ├── skybox.fs
│   │   │   │   ├── skybox.vs
│   │   │   │   ├── skydome.fs
│   │   │   │   ├── skydome.vs
│   │   │   │   ├── sprite.fs
│   │   │   │   ├── sprite.vs
│   │   │   │   ├── tex.fs
│   │   │   │   ├── tex.vs
│   │   ├── CommonVulkan/
│   │   ├── Content/
│   │   │   ├── README
│   │   │   ├── SpiderTex.jpg
│   │   │   ├── Vanguard.dae
│   │   │   ├── Zombie.obj
│   │   │   ├── _army.jpg
│   │   │   ├── _rood.jpg
│   │   │   ├── boblampclean.md5anim
│   │   │   ├── boblampclean.md5mesh
│   │   │   ├── box.mtl
│   │   │   ├── box.obj
│   │   │   ├── box_terrain.mtl
│   │   │   ├── box_terrain.obj
│   │   │   ├── bricks.jpg
│   │   │   ├── buddha.mtl
│   │   │   ├── buddha.obj
│   │   │   ├── bunny.mtl
│   │   │   ├── bunny.obj
│   │   │   ├── craftpix.net.Cartoon_Forest_BG_01.png
│   │   │   ├── cylinder.mtl
│   │   │   ├── cylinder.obj
│   │   │   ├── diffuse.jpg
│   │   │   ├── dragon.mtl
│   │   │   ├── dragon.obj
│   │   │   ├── drkwood2.jpg
│   │   │   ├── e.png
│   │   │   ├── engineflare1.jpg
│   │   │   ├── fireworks_red.jpg
│   │   │   ├── fs_quad.obj
│   │   │   ├── guard1_body.tga
│   │   │   ├── guard1_face.tga
│   │   │   ├── guard1_helmet.tga
│   │   │   ├── heightmap.jpg
│   │   │   ├── hheli.bmp
│   │   │   ├── hheli.mtl
│   │   │   ├── hheli.obj
│   │   │   ├── i.bmp
│   │   │   ├── iron_grill.tga
│   │   │   ├── jeep.mtl
│   │   │   ├── jeep.obj
│   │   │   ├── jeep_army.jpg
│   │   │   ├── jeep_new.mtl
│   │   │   ├── jeep_rood.jpg
│   │   │   ├── ks.jpg
│   │   │   ├── monkey.mtl
│   │   │   ├── monkey.obj
│   │   │   ├── monster_hellknight.jpg
│   │   │   ├── monster_hellknight.png
│   │   │   ├── normal_map.jpg
│   │   │   ├── normal_up.jpg
│   │   │   ├── ordinary_house.mtl
│   │   │   ├── phoenix.pcx
│   │   │   ├── phoenix_ugv.md2
│   │   │   ├── quad.mtl
│   │   │   ├── quad.obj
│   │   │   ├── quad2.mtl
│   │   │   ├── quad2.obj
│   │   │   ├── quad_r.obj
│   │   │   ├── round_grill.tga
│   │   │   ├── sp3back.jpg
│   │   │   ├── sp3bot.jpg
│   │   │   ├── sp3front.jpg
│   │   │   ├── sp3left.jpg
│   │   │   ├── sp3right.jpg
│   │   │   ├── sp3top.jpg
│   │   │   ├── sphere.mtl
│   │   │   ├── sphere.obj
│   │   │   ├── spider.mtl
│   │   │   ├── spider.obj
│   │   │   ├── spider_new.mtl
│   │   │   ├── spritesheet.png
│   │   │   ├── terrain2.mtl
│   │   │   ├── terrain2.obj
│   │   │   ├── terrain_rock_boulder_cracked.mtl
│   │   │   ├── terrain_rock_boulder_cracked.obj
│   │   │   ├── test.png
│   │   │   ├── vanguard_diffuse.png
│   │   │   ├── wal67ar_small.jpg
│   │   │   ├── wal69ar_small.jpg
│   │   │   ├── water_quad.mtl
│   │   │   ├── water_quad.obj
│   │   │   ├── white.png
│   │   │   ├── aerial_rocks_01_1k.blend/
│   │   │   │   ├── aerial_rocks_01_1k.blend
│   │   │   │   ├── aerial_rocks_01_1k.mtl
│   │   │   │   ├── aerial_rocks_01_1k.obj
│   │   │   │   ├── textures/
│   │   │   │   │   ├── aerial_rocks_01_diff_1k.jpg
│   │   │   │   │   ├── aerial_rocks_01_disp_1k.png
│   │   │   │   │   ├── aerial_rocks_01_nor_gl_1k.exr
│   │   │   │   │   ├── aerial_rocks_01_rough_1k.jpg
│   │   │   ├── antique_ceramic_vase_01_4k.blend/
│   │   │   │   ├── README.txt
│   │   │   │   ├── antique_ceramic_vase_01_4k.mtl
│   │   │   │   ├── antique_ceramic_vase_01_4k.obj
│   │   │   │   ├── textures/
│   │   │   │   │   ├── antique_ceramic_vase_01_diff_4k.jpg
│   │   │   │   │   ├── antique_ceramic_vase_01_metal_4k.exr
│   │   │   │   │   ├── antique_ceramic_vase_01_nor_gl_4k.exr
│   │   │   │   │   ├── antique_ceramic_vase_01_rough_4k.jpg
│   │   │   ├── conference-room/
│   │   │   │   ├── conference.obj
│   │   │   ├── crytek_sponza/
│   │   │   │   ├── banner.mtl
│   │   │   │   ├── banner.obj
│   │   │   │   ├── copyright.txt
│   │   │   │   ├── sponza.am.any
│   │   │   │   ├── sponza.mtl
│   │   │   │   ├── sponza.obj
│   │   │   │   ├── textures/
│   │   │   │   │   ├── background.tga
│   │   │   │   │   ├── backgroundBGR.tga
│   │   │   │   │   ├── background_bump.png
│   │   │   │   │   ├── chain_texture.tga
│   │   │   │   │   ├── chain_texture_bump.png
│   │   │   │   │   ├── chain_texture_mask.png
│   │   │   │   │   ├── gi_flag.tga
│   │   │   │   │   ├── lion.tga
│   │   │   │   │   ├── lion2_bump.png
│   │   │   │   │   ├── lion_bump.png
│   │   │   │   │   ├── spnza_bricks_a_bump.png
│   │   │   │   │   ├── spnza_bricks_a_diff.tga
│   │   │   │   │   ├── spnza_bricks_a_spec.tga
│   │   │   │   │   ├── sponza_arch_bump.png
│   │   │   │   │   ├── sponza_arch_diff.tga
│   │   │   │   │   ├── sponza_arch_spec.tga
│   │   │   │   │   ├── sponza_ceiling_a_diff.tga
│   │   │   │   │   ├── sponza_ceiling_a_spec.tga
│   │   │   │   │   ├── sponza_column_a_bump.png
│   │   │   │   │   ├── sponza_column_a_diff.tga
│   │   │   │   │   ├── sponza_column_a_spec.tga
│   │   │   │   │   ├── sponza_column_b_bump.png
│   │   │   │   │   ├── sponza_column_b_diff.tga
│   │   │   │   │   ├── sponza_column_b_spec.tga
│   │   │   │   │   ├── sponza_column_c_bump.png
│   │   │   │   │   ├── sponza_column_c_diff.tga
│   │   │   │   │   ├── sponza_column_c_spec.tga
│   │   │   │   │   ├── sponza_curtain_blue_diff.tga
│   │   │   │   │   ├── sponza_curtain_diff.tga
│   │   │   │   │   ├── sponza_curtain_green_diff.tga
│   │   │   │   │   ├── sponza_details_diff.tga
│   │   │   │   │   ├── sponza_details_spec.tga
│   │   │   │   │   ├── sponza_fabric_blue_diff.tga
│   │   │   │   │   ├── sponza_fabric_diff.tga
│   │   │   │   │   ├── sponza_fabric_green_diff.tga
│   │   │   │   │   ├── sponza_fabric_spec.tga
│   │   │   │   │   ├── sponza_flagpole_diff.tga
│   │   │   │   │   ├── sponza_flagpole_spec.tga
│   │   │   │   │   ├── sponza_floor_a_diff.tga
│   │   │   │   │   ├── sponza_floor_a_spec.tga
│   │   │   │   │   ├── sponza_roof_diff.tga
│   │   │   │   │   ├── sponza_thorn_bump.png
│   │   │   │   │   ├── sponza_thorn_diff.tga
│   │   │   │   │   ├── sponza_thorn_mask.png
│   │   │   │   │   ├── sponza_thorn_spec.tga
│   │   │   │   │   ├── vase_bump.png
│   │   │   │   │   ├── vase_dif.tga
│   │   │   │   │   ├── vase_hanging.tga
│   │   │   │   │   ├── vase_plant.tga
│   │   │   │   │   ├── vase_plant_mask.png
│   │   │   │   │   ├── vase_plant_spec.tga
│   │   │   │   │   ├── vase_round.tga
│   │   │   │   │   ├── vase_round_bump.png
│   │   │   │   │   ├── vase_round_spec.tga
│   │   │   ├── dabrovic-sponza/
│   │   │   │   ├── 00_skap.JPG
│   │   │   │   ├── 01_STUB-bump.jpg
│   │   │   │   ├── 01_STUB.JPG
│   │   │   │   ├── 01_S_ba.JPG
│   │   │   │   ├── 01_S_kap-bump.jpg
│   │   │   │   ├── 01_S_kap.JPG
│   │   │   │   ├── 01_St_kp-bump.jpg
│   │   │   │   ├── 01_St_kp.JPG
│   │   │   │   ├── KAMEN-bump.jpg
│   │   │   │   ├── KAMEN-stup.JPG
│   │   │   │   ├── KAMEN.JPG
│   │   │   │   ├── copyright.txt
│   │   │   │   ├── prozor1.JPG
│   │   │   │   ├── reljef-bump.jpg
│   │   │   │   ├── reljef.JPG
│   │   │   │   ├── sp_luk-bump.JPG
│   │   │   │   ├── sp_luk.JPG
│   │   │   │   ├── sponza.mtl
│   │   │   │   ├── sponza.obj
│   │   │   │   ├── vrata_ko.JPG
│   │   │   │   ├── vrata_kr.JPG
│   │   │   │   ├── x01_st-bump.jpg
│   │   │   │   ├── x01_st.JPG
│   │   │   ├── low_poly_rpg_collection/
│   │   │   │   ├── house.png
│   │   │   │   ├── house2.png
│   │   │   │   ├── rpg_items_3.mtl
│   │   │   │   ├── rpg_items_3.obj
│   │   │   ├── ordinary_house/
│   │   │   │   ├── 87941 - LICENSE.html
│   │   │   │   ├── ordinary_house.mtl
│   │   │   │   ├── ordinary_house.obj
│   │   │   │   ├── texture1.png
│   │   │   │   ├── texture3.png
│   │   │   ├── textures/
│   │   │   │   ├── IMGP5480_seamless.jpg
│   │   │   │   ├── IMGP5482_seamless.jpg
│   │   │   │   ├── IMGP5487_seamless.jpg
│   │   │   │   ├── IMGP5493_seamless_1.jpg
│   │   │   │   ├── IMGP5493_seamless_2.jpg
│   │   │   │   ├── IMGP5497_seamless.jpg
│   │   │   │   ├── IMGP5498_seamless.jpg
│   │   │   │   ├── IMGP5505_seamless.jpg
│   │   │   │   ├── IMGP5511_seamless.jpg
│   │   │   │   ├── IMGP5514_seamless_1.jpg
│   │   │   │   ├── IMGP5514_seamless_2.jpg
│   │   │   │   ├── IMGP5525_seamless.jpg
│   │   │   │   ├── IMGP5525_seamless_normal_map.jpg
│   │   │   │   ├── IMGP5539_almost_seamless.jpg
│   │   │   │   ├── IMGP5546_seamless.jpg
│   │   │   │   ├── Rock6.png
│   │   │   │   ├── clover 1.png
│   │   │   │   ├── clover.jpg
│   │   │   │   ├── grass1.jpg
│   │   │   │   ├── large_sandstone_blocks_diff_4k.jpg
│   │   │   │   ├── medieval_blocks_05_diff_4k.jpg
│   │   │   │   ├── rock01.jpg
│   │   │   │   ├── rock02.jpg
│   │   │   │   ├── rock02_2.jpg
│   │   │   │   ├── rock03.jpg
│   │   │   │   ├── rock_04_diff_1k.jpg
│   │   │   │   ├── rock_boulder_cracked_diff_1k.jpg
│   │   │   │   ├── tilable-IMG_0044-verydark.png
│   │   │   │   ├── tileable_grass_00.png
│   │   │   │   ├── water.png
│   │   ├── DemoLITION/
│   │   │   ├── Framework/
│   │   │   │   ├── Include/
│   │   │   │   │   ├── demolition.h
│   │   │   │   │   ├── demolition_forward_lighting.h
│   │   │   │   │   ├── demolition_forward_renderer.h
│   │   │   │   │   ├── demolition_model.h
│   │   │   │   │   ├── demolition_rendering_subsystem.h
│   │   │   │   │   ├── demolition_scene.h
│   │   │   │   │   ├── framework.h
│   │   │   │   │   ├── GL/
│   │   │   │   │   │   ├── demolition_rendering_subsystem_gl.h
│   │   │   │   │   │   ├── gl_scene.h
│   │   │   │   ├── Source/
│   │   │   │   │   ├── demolition_forward_lighting.cpp
│   │   │   │   │   ├── demolition_forward_renderer.cpp
│   │   │   │   │   ├── demolition_model.cpp
│   │   │   │   │   ├── demolition_rendering_subsystem.cpp
│   │   │   │   │   ├── demolition_scene.cpp
│   │   │   │   │   ├── GL/
│   │   │   │   │   │   ├── demolition_rendering_subsystem_gl.cpp
│   │   │   │   │   │   ├── gl_scene.cpp
│   │   │   ├── Tests/
│   │   │   │   ├── Test1/
│   │   │   │   │   ├── DemoLITION_test_blender_scene.cpp
│   │   │   │   │   ├── DemoLITION_test_clear.cpp
│   │   │   │   │   ├── DemoLITION_test_main.cpp
│   │   │   │   │   ├── DemoLITION_test_minimal.cpp
│   │   │   │   │   ├── DemoLITION_test_move_object.cpp
│   │   │   │   │   ├── DemoLITION_test_object.cpp
│   │   ├── Include/
│   │   │   ├── glfx.h
│   │   │   ├── ogldev.h
│   │   │   ├── ogldev_app.h
│   │   │   ├── ogldev_array_2d.h
│   │   │   ├── ogldev_atb.h
│   │   │   ├── ogldev_backend.h
│   │   │   ├── ogldev_basic_glfw_camera.h
│   │   │   ├── ogldev_basic_lighting.h
│   │   │   ├── ogldev_basic_mesh.h
│   │   │   ├── ogldev_callbacks.h
│   │   │   ├── ogldev_camera.h
│   │   │   ├── ogldev_cubemap_texture.h
│   │   │   ├── ogldev_engine_common.h
│   │   │   ├── ogldev_flat_passthru_technique.h
│   │   │   ├── ogldev_forward_skinning.h
│   │   │   ├── ogldev_framebuffer.h
│   │   │   ├── ogldev_glfw.h
│   │   │   ├── ogldev_glfw_backend.h
│   │   │   ├── ogldev_glut_backend.h
│   │   │   ├── ogldev_gui_texture.h
│   │   │   ├── ogldev_guitex_technique.h
│   │   │   ├── ogldev_io_buffer.h
│   │   │   ├── ogldev_keys.h
│   │   │   ├── ogldev_lights_common.h
│   │   │   ├── ogldev_material.h
│   │   │   ├── ogldev_math_3d.h
│   │   │   ├── ogldev_mesh_common.h
│   │   │   ├── ogldev_new_lighting.h
│   │   │   ├── ogldev_phong_renderer.h
│   │   │   ├── ogldev_pipeline.h
│   │   │   ├── ogldev_random_texture.h
│   │   │   ├── ogldev_save_viewport.h
│   │   │   ├── ogldev_screen_quad.h
│   │   │   ├── ogldev_shadow_cube_map_fbo.h
│   │   │   ├── ogldev_shadow_map_fbo.h
│   │   │   ├── ogldev_shadow_map_offset_texture.h
│   │   │   ├── ogldev_shadow_mapping_technique.h
│   │   │   ├── ogldev_shadow_mapping_technique_point_light.h
│   │   │   ├── ogldev_skinned_mesh.h
│   │   │   ├── ogldev_skinning_technique.h
│   │   │   ├── ogldev_skybox.h
│   │   │   ├── ogldev_skybox_technique.h
│   │   │   ├── ogldev_skydome.h
│   │   │   ├── ogldev_skydome_technique.h
│   │   │   ├── ogldev_sprite_technique.h
│   │   │   ├── ogldev_stb_image.h
│   │   │   ├── ogldev_tex_technique.h
│   │   │   ├── ogldev_texture.h
│   │   │   ├── ogldev_types.h
│   │   │   ├── ogldev_util.h
│   │   │   ├── ogldev_vulkan.h
│   │   │   ├── ogldev_vulkan_core.h
│   │   │   ├── ogldev_win32_control.h
│   │   │   ├── ogldev_world_transform.h
│   │   │   ├── ogldev_xcb_control.h
│   │   │   ├── technique.h
│   │   │   ├── 3rdparty/
│   │   │   │   ├── stb_image.h
│   │   │   │   ├── stb_image_write.h
│   │   │   ├── ATB/
│   │   │   │   ├── AntTweakBar.h
│   │   │   ├── GL/
│   │   │   │   ├── eglew.h
│   │   │   │   ├── freeglut.h
│   │   │   │   ├── freeglut_ext.h
│   │   │   │   ├── freeglut_std.h
│   │   │   │   ├── freeglut_ucall.h
│   │   │   │   ├── glew.h
│   │   │   │   ├── glut.h
│   │   │   │   ├── glxew.h
│   │   │   │   ├── wglew.h
│   │   │   ├── GLFW/
│   │   │   │   ├── glfw3.h
│   │   │   │   ├── glfw3native.h
│   │   │   ├── ImageMagick-6/
│   │   │   │   ├── Magick++.h
│   │   │   │   ├── Magick++/
│   │   │   │   │   ├── Blob.h
│   │   │   │   │   ├── BlobRef.h
│   │   │   │   │   ├── CoderInfo.h
│   │   │   │   │   ├── Color.h
│   │   │   │   │   ├── Drawable.h
│   │   │   │   │   ├── Exception.h
│   │   │   │   │   ├── Functions.h
│   │   │   │   │   ├── Geometry.h
│   │   │   │   │   ├── Image.h
│   │   │   │   │   ├── ImageRef.h
│   │   │   │   │   ├── Include.h
│   │   │   │   │   ├── Montage.h
│   │   │   │   │   ├── Options.h
│   │   │   │   │   ├── Pixels.h
│   │   │   │   │   ├── STL.h
│   │   │   │   │   ├── Thread.h
│   │   │   │   │   ├── TypeMetric.h
│   │   │   │   ├── magick/
│   │   │   │   │   ├── ImageMagick.h
│   │   │   │   │   ├── MagickCore.h
│   │   │   │   │   ├── PreRvIcccm.h
│   │   │   │   │   ├── accelerate.h
│   │   │   │   │   ├── animate-private.h
│   │   │   │   │   ├── animate.h
│   │   │   │   │   ├── annotate.h
│   │   │   │   │   ├── api.h
│   │   │   │   │   ├── artifact.h
│   │   │   │   │   ├── attribute.h
│   │   │   │   │   ├── blob-private.h
│   │   │   │   │   ├── blob.h
│   │   │   │   │   ├── cache-private.h
│   │   │   │   │   ├── cache-view.h
│   │   │   │   │   ├── cache.h
│   │   │   │   │   ├── channel.h
│   │   │   │   │   ├── cipher.h
│   │   │   │   │   ├── client.h
│   │   │   │   │   ├── coder.h
│   │   │   │   │   ├── color-private.h
│   │   │   │   │   ├── color.h
│   │   │   │   │   ├── colormap-private.h
│   │   │   │   │   ├── colormap.h
│   │   │   │   │   ├── colorspace-private.h
│   │   │   │   │   ├── colorspace.h
│   │   │   │   │   ├── compare.h
│   │   │   │   │   ├── composite-private.h
│   │   │   │   │   ├── composite.h
│   │   │   │   │   ├── compress.h
│   │   │   │   │   ├── configure.h
│   │   │   │   │   ├── constitute.h
│   │   │   │   │   ├── decorate.h
│   │   │   │   │   ├── delegate-private.h
│   │   │   │   │   ├── delegate.h
│   │   │   │   │   ├── deprecate.h
│   │   │   │   │   ├── display-private.h
│   │   │   │   │   ├── display.h
│   │   │   │   │   ├── distort.h
│   │   │   │   │   ├── draw-private.h
│   │   │   │   │   ├── draw.h
│   │   │   │   │   ├── effect.h
│   │   │   │   │   ├── enhance.h
│   │   │   │   │   ├── exception-private.h
│   │   │   │   │   ├── exception.h
│   │   │   │   │   ├── feature.h
│   │   │   │   │   ├── fourier.h
│   │   │   │   │   ├── fx-private.h
│   │   │   │   │   ├── fx.h
│   │   │   │   │   ├── gem.h
│   │   │   │   │   ├── geometry.h
│   │   │   │   │   ├── hashmap.h
│   │   │   │   │   ├── histogram.h
│   │   │   │   │   ├── identify.h
│   │   │   │   │   ├── image-private.h
│   │   │   │   │   ├── image-view.h
│   │   │   │   │   ├── image.h
│   │   │   │   │   ├── layer.h
│   │   │   │   │   ├── list.h
│   │   │   │   │   ├── locale_.h
│   │   │   │   │   ├── log.h
│   │   │   │   │   ├── mac.h
│   │   │   │   │   ├── magic.h
│   │   │   │   │   ├── magick-config.h
│   │   │   │   │   ├── magick-type.h
│   │   │   │   │   ├── magick.h
│   │   │   │   │   ├── matrix.h
│   │   │   │   │   ├── memory-private.h
│   │   │   │   │   ├── memory_.h
│   │   │   │   │   ├── method-attribute.h
│   │   │   │   │   ├── methods.h
│   │   │   │   │   ├── mime-private.h
│   │   │   │   │   ├── mime.h
│   │   │   │   │   ├── module.h
│   │   │   │   │   ├── monitor-private.h
│   │   │   │   │   ├── monitor.h
│   │   │   │   │   ├── montage.h
│   │   │   │   │   ├── morphology-private.h
│   │   │   │   │   ├── morphology.h
│   │   │   │   │   ├── nt-base.h
│   │   │   │   │   ├── nt-feature.h
│   │   │   │   │   ├── option.h
│   │   │   │   │   ├── paint.h
│   │   │   │   │   ├── pixel-accessor.h
│   │   │   │   │   ├── pixel-private.h
│   │   │   │   │   ├── pixel.h
│   │   │   │   │   ├── policy.h
│   │   │   │   │   ├── prepress.h
│   │   │   │   │   ├── profile.h
│   │   │   │   │   ├── property.h
│   │   │   │   │   ├── quantize.h
│   │   │   │   │   ├── quantum-private.h
│   │   │   │   │   ├── quantum.h
│   │   │   │   │   ├── random-private.h
│   │   │   │   │   ├── random_.h
│   │   │   │   │   ├── registry.h
│   │   │   │   │   ├── resample-private.h
│   │   │   │   │   ├── resample.h
│   │   │   │   │   ├── resize-private.h
│   │   │   │   │   ├── resize.h
│   │   │   │   │   ├── resource_.h
│   │   │   │   │   ├── segment.h
│   │   │   │   │   ├── semaphore-private.h
│   │   │   │   │   ├── semaphore.h
│   │   │   │   │   ├── shear.h
│   │   │   │   │   ├── signature-private.h
│   │   │   │   │   ├── signature.h
│   │   │   │   │   ├── splay-tree.h
│   │   │   │   │   ├── static.h
│   │   │   │   │   ├── statistic.h
│   │   │   │   │   ├── stream-private.h
│   │   │   │   │   ├── stream.h
│   │   │   │   │   ├── string-private.h
│   │   │   │   │   ├── string_.h
│   │   │   │   │   ├── studio.h
│   │   │   │   │   ├── thread-private.h
│   │   │   │   │   ├── thread_.h
│   │   │   │   │   ├── threshold.h
│   │   │   │   │   ├── timer.h
│   │   │   │   │   ├── token-private.h
│   │   │   │   │   ├── token.h
│   │   │   │   │   ├── transform.h
│   │   │   │   │   ├── type.h
│   │   │   │   │   ├── utility-private.h
│   │   │   │   │   ├── utility.h
│   │   │   │   │   ├── version.h
│   │   │   │   │   ├── vms.h
│   │   │   │   │   ├── widget.h
│   │   │   │   │   ├── xml-tree.h
│   │   │   │   │   ├── xwindow-private.h
│   │   │   │   │   ├── xwindow.h
│   │   │   │   ├── wand/
│   │   │   │   │   ├── MagickWand.h
│   │   │   │   │   ├── animate.h
│   │   │   │   │   ├── compare.h
│   │   │   │   │   ├── composite.h
│   │   │   │   │   ├── conjure.h
│   │   │   │   │   ├── convert.h
│   │   │   │   │   ├── deprecate.h
│   │   │   │   │   ├── display.h
│   │   │   │   │   ├── drawing-wand.h
│   │   │   │   │   ├── identify.h
│   │   │   │   │   ├── import.h
│   │   │   │   │   ├── magick-image.h
│   │   │   │   │   ├── magick-property.h
│   │   │   │   │   ├── magick-wand-private.h
│   │   │   │   │   ├── magick-wand.h
│   │   │   │   │   ├── magick_wand.h
│   │   │   │   │   ├── method-attribute.h
│   │   │   │   │   ├── mogrify-private.h
│   │   │   │   │   ├── mogrify.h
│   │   │   │   │   ├── montage.h
│   │   │   │   │   ├── pixel-iterator.h
│   │   │   │   │   ├── pixel-wand-private.h
│   │   │   │   │   ├── pixel-wand.h
│   │   │   │   │   ├── stream.h
│   │   │   │   │   ├── studio.h
│   │   │   │   │   ├── wand-config.h
│   │   │   │   │   ├── wand-view.h
│   │   │   │   │   ├── wand.h
│   │   │   ├── assimp5/
│   │   │   │   ├── assimp/
│   │   │   │   │   ├── BaseImporter.h
│   │   │   │   │   ├── Bitmap.h
│   │   │   │   │   ├── BlobIOSystem.h
│   │   │   │   │   ├── ByteSwapper.h
│   │   │   │   │   ├── ColladaMetaData.h
│   │   │   │   │   ├── CreateAnimMesh.h
│   │   │   │   │   ├── DefaultIOStream.h
│   │   │   │   │   ├── DefaultIOSystem.h
│   │   │   │   │   ├── DefaultLogger.hpp
│   │   │   │   │   ├── Defines.h
│   │   │   │   │   ├── Exceptional.h
│   │   │   │   │   ├── Exporter.hpp
│   │   │   │   │   ├── GenericProperty.h
│   │   │   │   │   ├── Hash.h
│   │   │   │   │   ├── IOStream.hpp
│   │   │   │   │   ├── IOStreamBuffer.h
│   │   │   │   │   ├── IOSystem.hpp
│   │   │   │   │   ├── Importer.hpp
│   │   │   │   │   ├── LineSplitter.h
│   │   │   │   │   ├── LogAux.h
│   │   │   │   │   ├── LogStream.hpp
│   │   │   │   │   ├── Logger.hpp
│   │   │   │   │   ├── MathFunctions.h
│   │   │   │   │   ├── MemoryIOWrapper.h
│   │   │   │   │   ├── NullLogger.hpp
│   │   │   │   │   ├── ParsingUtils.h
│   │   │   │   │   ├── Profiler.h
│   │   │   │   │   ├── ProgressHandler.hpp
│   │   │   │   │   ├── RemoveComments.h
│   │   │   │   │   ├── SGSpatialSort.h
│   │   │   │   │   ├── SceneCombiner.h
│   │   │   │   │   ├── SkeletonMeshBuilder.h
│   │   │   │   │   ├── SmallVector.h
│   │   │   │   │   ├── SmoothingGroups.h
│   │   │   │   │   ├── SmoothingGroups.inl
│   │   │   │   │   ├── SpatialSort.h
│   │   │   │   │   ├── StandardShapes.h
│   │   │   │   │   ├── StreamReader.h
│   │   │   │   │   ├── StreamWriter.h
│   │   │   │   │   ├── StringComparison.h
│   │   │   │   │   ├── StringUtils.h
│   │   │   │   │   ├── Subdivision.h
│   │   │   │   │   ├── TinyFormatter.h
│   │   │   │   │   ├── Vertex.h
│   │   │   │   │   ├── XMLTools.h
│   │   │   │   │   ├── XmlParser.h
│   │   │   │   │   ├── ZipArchiveIOSystem.h
│   │   │   │   │   ├── aabb.h
│   │   │   │   │   ├── ai_assert.h
│   │   │   │   │   ├── anim.h
│   │   │   │   │   ├── camera.h
│   │   │   │   │   ├── cexport.h
│   │   │   │   │   ├── cfileio.h
│   │   │   │   │   ├── cimport.h
│   │   │   │   │   ├── color4.h
│   │   │   │   │   ├── color4.inl
│   │   │   │   │   ├── commonMetaData.h
│   │   │   │   │   ├── config.h
│   │   │   │   │   ├── config.h.in
│   │   │   │   │   ├── defs.h
│   │   │   │   │   ├── fast_atof.h
│   │   │   │   │   ├── importerdesc.h
│   │   │   │   │   ├── light.h
│   │   │   │   │   ├── material.h
│   │   │   │   │   ├── material.inl
│   │   │   │   │   ├── matrix3x3.h
│   │   │   │   │   ├── matrix3x3.inl
│   │   │   │   │   ├── matrix4x4.h
│   │   │   │   │   ├── matrix4x4.inl
│   │   │   │   │   ├── mesh.h
│   │   │   │   │   ├── metadata.h
│   │   │   │   │   ├── pbrmaterial.h
│   │   │   │   │   ├── postprocess.h
│   │   │   │   │   ├── qnan.h
│   │   │   │   │   ├── quaternion.h
│   │   │   │   │   ├── quaternion.inl
│   │   │   │   │   ├── scene.h
│   │   │   │   │   ├── texture.h
│   │   │   │   │   ├── types.h
│   │   │   │   │   ├── vector2.h
│   │   │   │   │   ├── vector2.inl
│   │   │   │   │   ├── vector3.h
│   │   │   │   │   ├── vector3.inl
│   │   │   │   │   ├── version.h
│   │   │   │   │   ├── Compiler/
│   │   │   │   │   │   ├── poppack1.h
│   │   │   │   │   │   ├── pstdint.h
│   │   │   │   │   │   ├── pushpack1.h
│   │   │   │   │   ├── port/
│   │   │   │   │   │   ├── AndroidJNI/
│   │   │   │   │   │   │   ├── AndroidJNIIOSystem.h
│   │   │   │   │   │   │   ├── BundledAssetIOSystem.h
│   │   ├── Lib/
│   │   │   ├── CORE_DB_Magick++_.lib
│   │   │   ├── CORE_RL_Magick++_.lib
│   │   │   ├── assimp.lib
│   │   │   ├── glfx.lib
│   │   │   ├── glfx_debug.lib
│   │   │   ├── glfx_release.lib
│   │   │   ├── libAntTweakBar.a
│   │   │   ├── libAntTweakBar.so
│   │   │   ├── libAntTweakBar.so.1
│   │   ├── Sandbox/
│   │   │   ├── FrustumCullingTest/
│   │   │   │   ├── frustum_culling_test.cpp
│   │   ├── Terrain1/
│   │   │   ├── build.sh
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo1.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── triangle_list.cpp
│   │   │   ├── triangle_list.h
│   │   ├── Terrain10/
│   │   │   ├── build.sh
│   │   │   ├── demo_config.h
│   │   │   ├── geomip_grid.cpp
│   │   │   ├── geomip_grid.h
│   │   │   ├── imgui.ini
│   │   │   ├── lod_manager.cpp
│   │   │   ├── lod_manager.h
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo10.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   ├── Terrain2/
│   │   │   ├── build.sh
│   │   │   ├── fault_formation_terrain.cpp
│   │   │   ├── fault_formation_terrain.h
│   │   │   ├── imgui.ini
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo2.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── triangle_list.cpp
│   │   │   ├── triangle_list.h
│   │   ├── Terrain3/
│   │   │   ├── build.sh
│   │   │   ├── imgui.ini
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo3.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── triangle_list.cpp
│   │   │   ├── triangle_list.h
│   │   ├── Terrain4/
│   │   │   ├── build.sh
│   │   │   ├── imgui.ini
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── single_tex_terrain.fs
│   │   │   ├── single_tex_terrain.vs
│   │   │   ├── single_tex_terrain_technique.cpp
│   │   │   ├── single_tex_terrain_technique.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo4.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   │   ├── texture_generator.cpp
│   │   │   ├── texture_generator.h
│   │   │   ├── triangle_list.cpp
│   │   │   ├── triangle_list.h
│   │   ├── Terrain5/
│   │   │   ├── build.sh
│   │   │   ├── imgui.ini
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo5.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   │   ├── triangle_list.cpp
│   │   │   ├── triangle_list.h
│   │   ├── Terrain5.1/
│   │   │   ├── build.sh
│   │   │   ├── imgui.ini
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── slope_lighter.cpp
│   │   │   ├── slope_lighter.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo5.1.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   │   ├── triangle_list.cpp
│   │   │   ├── triangle_list.h
│   │   ├── Terrain6/
│   │   │   ├── build.sh
│   │   │   ├── geomip_grid.cpp
│   │   │   ├── geomip_grid.h
│   │   │   ├── imgui.ini
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo6.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   ├── Terrain7/
│   │   │   ├── build.sh
│   │   │   ├── demo_config.h
│   │   │   ├── geomip_grid.cpp
│   │   │   ├── geomip_grid.h
│   │   │   ├── imgui.ini
│   │   │   ├── lod_manager.cpp
│   │   │   ├── lod_manager.h
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo7.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   ├── Terrain8/
│   │   │   ├── README.txt
│   │   ├── Terrain9/
│   │   │   ├── build.sh
│   │   │   ├── demo_config.h
│   │   │   ├── geomip_grid.cpp
│   │   │   ├── geomip_grid.h
│   │   │   ├── imgui.ini
│   │   │   ├── lod_manager.cpp
│   │   │   ├── lod_manager.h
│   │   │   ├── midpoint_disp_terrain.cpp
│   │   │   ├── midpoint_disp_terrain.h
│   │   │   ├── terrain.cpp
│   │   │   ├── terrain.fs
│   │   │   ├── terrain.h
│   │   │   ├── terrain.vs
│   │   │   ├── terrain_demo9.cpp
│   │   │   ├── terrain_technique.cpp
│   │   │   ├── terrain_technique.h
│   │   │   ├── texture_config.h
│   │   ├── VulkanTutorials/
│   │   │   ├── Tutorial01/
│   │   │   │   ├── build.sh
│   │   │   │   ├── frag.spv
│   │   │   │   ├── tutorial01.cpp
│   │   │   │   ├── vert.spv
│   │   ├── Windows/
│   │   │   ├── DLL/
│   │   │   │   ├── assimp-vc142-mt.dll
│   │   │   │   ├── freeglut.dll
│   │   │   │   ├── freeglutd.dll
│   │   │   │   ├── glew32.dll
│   │   │   │   ├── glfw3.dll
│   │   │   ├── Lib/
│   │   │   │   ├── assimp-vc142-mt.lib
│   │   │   │   ├── freeglut.lib
│   │   │   │   ├── freeglutd.lib
│   │   │   │   ├── glew32.lib
│   │   │   │   ├── glfw3.lib
│   │   │   │   ├── glfw3dll.lib
│   │   │   ├── ogldev_vs_2022/
│   │   │   │   ├── ogldev_vs_2022.sln
│   │   │   │   ├── DemoLITION/
│   │   │   │   │   ├── DemoLITION.vcxproj
│   │   │   │   │   ├── DemoLITION.vcxproj.filters
│   │   │   │   │   ├── DemoLITION.vcxproj.user
│   │   │   │   │   ├── dllmain.cpp
│   │   │   │   ├── DemoLITION Test/
│   │   │   │   │   ├── DemoLITION Test.vcxproj
│   │   │   │   │   ├── DemoLITION Test.vcxproj.filters
│   │   │   │   │   ├── DemoLITION Test.vcxproj.user
│   │   │   │   ├── Sandbox/
│   │   │   │   │   ├── FrustumCullingTest/
│   │   │   │   │   │   ├── FrustumCullingTest.vcxproj
│   │   │   │   │   │   ├── FrustumCullingTest.vcxproj.filters
│   │   │   │   │   │   ├── FrustumCullingTest.vcxproj.user
│   │   │   │   │   │   ├── FrustumCullingTest.vcxprojuser
│   │   │   │   ├── Terrain1/
│   │   │   │   │   ├── Terrain1.vcxproj
│   │   │   │   │   ├── Terrain1.vcxproj.filters
│   │   │   │   │   ├── Terrain1.vcxproj.user
│   │   │   │   │   ├── Terrain1.vcxprojuser
│   │   │   │   ├── Terrain10/
│   │   │   │   │   ├── Terrain10.vcxproj
│   │   │   │   │   ├── Terrain10.vcxproj.filters
│   │   │   │   │   ├── Terrain10.vcxproj.user
│   │   │   │   │   ├── Terrain10.vcxprojuser
│   │   │   │   ├── Terrain2/
│   │   │   │   │   ├── Terrain2.vcxproj
│   │   │   │   │   ├── Terrain2.vcxproj.filters
│   │   │   │   │   ├── Terrain2.vcxproj.user
│   │   │   │   │   ├── Terrain2.vcxprojuser
│   │   │   │   ├── Terrain3/
│   │   │   │   │   ├── Terrain3.vcxproj
│   │   │   │   │   ├── Terrain3.vcxproj.filters
│   │   │   │   │   ├── Terrain3.vcxproj.user
│   │   │   │   │   ├── Terrain3.vcxprojuser
│   │   │   │   ├── Terrain4/
│   │   │   │   │   ├── Terrain4.vcxproj
│   │   │   │   │   ├── Terrain4.vcxproj.filters
│   │   │   │   │   ├── Terrain4.vcxproj.user
│   │   │   │   │   ├── Terrain4.vcxprojuser
│   │   │   │   ├── Terrain5/
│   │   │   │   │   ├── Terrain5.vcxproj
│   │   │   │   │   ├── Terrain5.vcxproj.filters
│   │   │   │   │   ├── Terrain5.vcxproj.user
│   │   │   │   │   ├── Terrain5.vcxprojuser
│   │   │   │   ├── Terrain5.1/
│   │   │   │   │   ├── Terrain5.1.vcxproj
│   │   │   │   │   ├── Terrain5.1.vcxproj.filters
│   │   │   │   │   ├── Terrain5.1.vcxproj.user
│   │   │   │   │   ├── Terrain5.1.vcxprojuser
│   │   │   │   ├── Terrain6/
│   │   │   │   │   ├── Terrain6.vcxproj
│   │   │   │   │   ├── Terrain6.vcxproj.filters
│   │   │   │   │   ├── Terrain6.vcxproj.user
│   │   │   │   │   ├── Terrain6.vcxprojuser
│   │   │   │   ├── Terrain7/
│   │   │   │   │   ├── Terrain7.vcxproj
│   │   │   │   │   ├── Terrain7.vcxproj.filters
│   │   │   │   │   ├── Terrain7.vcxproj.user
│   │   │   │   │   ├── Terrain7.vcxprojuser
│   │   │   │   ├── Terrain8/
│   │   │   │   │   ├── Terrain8.vcxproj
│   │   │   │   │   ├── Terrain8.vcxproj.filters
│   │   │   │   │   ├── Terrain8.vcxproj.user
│   │   │   │   ├── Terrain9/
│   │   │   │   │   ├── Terrain9.vcxproj
│   │   │   │   │   ├── Terrain9.vcxproj.filters
│   │   │   │   │   ├── Terrain9.vcxproj.user
│   │   │   │   │   ├── Terrain9.vcxprojuser
│   │   │   │   ├── Tessellation1/
│   │   │   │   │   ├── Tessellation1.filters
│   │   │   │   │   ├── Tessellation1.user
│   │   │   │   │   ├── Tessellation1.vcxproj
│   │   │   │   │   ├── Tessellation1.vcxproj.filters
│   │   │   │   │   ├── Tessellation1.vcxproj.user
│   │   │   │   ├── Tessellation2/
│   │   │   │   │   ├── Tessellation2.filters
│   │   │   │   │   ├── Tessellation2.user
│   │   │   │   │   ├── Tessellation2.vcxproj
│   │   │   │   │   ├── Tessellation2.vcxproj.filters
│   │   │   │   │   ├── Tessellation2.vcxproj.user
│   │   │   │   ├── Tutorial01/
│   │   │   │   │   ├── Tutorial01.vcxproj
│   │   │   │   │   ├── Tutorial01.vcxproj.filters
│   │   │   │   │   ├── Tutorial01.vcxproj.user
│   │   │   │   ├── Tutorial02/
│   │   │   │   │   ├── Tutorial02.vcxproj
│   │   │   │   │   ├── Tutorial02.vcxproj.filters
│   │   │   │   │   ├── Tutorial02.vcxproj.user
│   │   │   │   ├── Tutorial03/
│   │   │   │   │   ├── Tutorial03.vcxproj
│   │   │   │   │   ├── Tutorial03.vcxproj.filters
│   │   │   │   │   ├── Tutorial03.vcxproj.user
│   │   │   │   ├── Tutorial04/
│   │   │   │   │   ├── Tutorial04.vcxproj
│   │   │   │   │   ├── Tutorial04.vcxproj.filters
│   │   │   │   │   ├── Tutorial04.vcxproj.user
│   │   │   │   ├── Tutorial05/
│   │   │   │   │   ├── Tutorial05.vcxproj
│   │   │   │   │   ├── Tutorial05.vcxproj.filters
│   │   │   │   │   ├── Tutorial05.vcxproj.user
│   │   │   │   ├── Tutorial06/
│   │   │   │   │   ├── Tutorial06.vcxproj
│   │   │   │   │   ├── Tutorial06.vcxproj.filters
│   │   │   │   │   ├── Tutorial06.vcxproj.user
│   │   │   │   ├── Tutorial07/
│   │   │   │   │   ├── Tutorial07.vcxproj
│   │   │   │   │   ├── Tutorial07.vcxproj.filters
│   │   │   │   │   ├── Tutorial07.vcxproj.user
│   │   │   │   ├── Tutorial08/
│   │   │   │   │   ├── Tutorial08.vcxproj
│   │   │   │   │   ├── Tutorial08.vcxproj.filters
│   │   │   │   │   ├── Tutorial08.vcxproj.user
│   │   │   │   ├── Tutorial09/
│   │   │   │   │   ├── Tutorial09.vcxproj
│   │   │   │   │   ├── Tutorial09.vcxproj.filters
│   │   │   │   │   ├── Tutorial09.vcxproj.user
│   │   │   │   ├── Tutorial10/
│   │   │   │   │   ├── Tutorial10.vcxproj
│   │   │   │   │   ├── Tutorial10.vcxproj.filters
│   │   │   │   │   ├── Tutorial10.vcxproj.user
│   │   │   │   ├── Tutorial11/
│   │   │   │   │   ├── Tutorial11.vcxproj
│   │   │   │   │   ├── Tutorial11.vcxproj.filters
│   │   │   │   │   ├── Tutorial11.vcxproj.user
│   │   │   │   ├── Tutorial12/
│   │   │   │   │   ├── Tutorial12.vcxproj
│   │   │   │   │   ├── Tutorial12.vcxproj.filters
│   │   │   │   │   ├── Tutorial12.vcxproj.user
│   │   │   │   ├── Tutorial13/
│   │   │   │   │   ├── Tutorial13.vcxproj
│   │   │   │   │   ├── Tutorial13.vcxproj.filters
│   │   │   │   │   ├── Tutorial13.vcxproj.user
│   │   │   │   ├── Tutorial14/
│   │   │   │   │   ├── Tutorial14.vcxproj
│   │   │   │   │   ├── Tutorial14.vcxproj.filters
│   │   │   │   │   ├── Tutorial14.vcxproj.user
│   │   │   │   ├── Tutorial15/
│   │   │   │   │   ├── Tutorial15.vcxproj
│   │   │   │   │   ├── Tutorial15.vcxproj.filters
│   │   │   │   │   ├── Tutorial15.vcxproj.user
│   │   │   │   ├── Tutorial16/
│   │   │   │   │   ├── Tutorial16.vcxproj
│   │   │   │   │   ├── Tutorial16.vcxproj.filters
│   │   │   │   │   ├── Tutorial16.vcxproj.user
│   │   │   │   ├── Tutorial17/
│   │   │   │   │   ├── Tutorial17.vcxproj
│   │   │   │   │   ├── Tutorial17.vcxproj.filters
│   │   │   │   │   ├── Tutorial17.vcxproj.user
│   │   │   │   ├── Tutorial18/
│   │   │   │   │   ├── Tutorial18.vcxproj
│   │   │   │   │   ├── Tutorial18.vcxproj.filters
│   │   │   │   │   ├── Tutorial18.vcxproj.user
│   │   │   │   ├── Tutorial19/
│   │   │   │   │   ├── Tutorial19.vcxproj
│   │   │   │   │   ├── Tutorial19.vcxproj.filters
│   │   │   │   │   ├── Tutorial19.vcxproj.user
│   │   │   │   ├── Tutorial20/
│   │   │   │   │   ├── Tutorial20.vcxproj
│   │   │   │   │   ├── Tutorial20.vcxproj.filters
│   │   │   │   │   ├── Tutorial20.vcxproj.user
│   │   │   │   ├── Tutorial21/
│   │   │   │   │   ├── Tutorial21.vcxproj
│   │   │   │   │   ├── Tutorial21.vcxproj.filters
│   │   │   │   │   ├── Tutorial21.vcxproj.user
│   │   │   │   ├── Tutorial22/
│   │   │   │   │   ├── Tutorial22.vcxproj
│   │   │   │   │   ├── Tutorial22.vcxproj.filters
│   │   │   │   │   ├── Tutorial22.vcxproj.user
│   │   │   │   ├── Tutorial23/
│   │   │   │   │   ├── Tutorial23.vcxproj
│   │   │   │   │   ├── Tutorial23.vcxproj.filters
│   │   │   │   │   ├── Tutorial23.vcxproj.user
│   │   │   │   ├── Tutorial24/
│   │   │   │   │   ├── Tutorial24.vcxproj
│   │   │   │   │   ├── Tutorial24.vcxproj.filters
│   │   │   │   │   ├── Tutorial24.vcxproj.user
│   │   │   │   ├── Tutorial25/
│   │   │   │   │   ├── Tutorial25.vcxproj
│   │   │   │   │   ├── Tutorial25.vcxproj.filters
│   │   │   │   │   ├── Tutorial25.vcxproj.user
│   │   │   │   ├── Tutorial25_assimp_sandbox/
│   │   │   │   │   ├── Tutorial25_assimp_sandbox.vcxproj
│   │   │   │   │   ├── Tutorial25_assimp_sandbox.vcxproj.filters
│   │   │   │   │   ├── Tutorial25_assimp_sandbox.vcxproj.user
│   │   │   │   ├── Tutorial26/
│   │   │   │   │   ├── Tutorial26.vcxproj
│   │   │   │   │   ├── Tutorial26.vcxproj.filters
│   │   │   │   │   ├── Tutorial26.vcxproj.user
│   │   │   │   ├── Tutorial27/
│   │   │   │   │   ├── Tutorial27.vcxproj
│   │   │   │   │   ├── Tutorial27.vcxproj.filters
│   │   │   │   │   ├── Tutorial27.vcxproj.user
│   │   │   │   ├── Tutorial28/
│   │   │   │   │   ├── Tutorial28.vcxproj
│   │   │   │   │   ├── Tutorial28.vcxproj.filters
│   │   │   │   │   ├── Tutorial28.vcxproj.user
│   │   │   │   ├── Tutorial29/
│   │   │   │   │   ├── Tutorial29.vcxproj
│   │   │   │   │   ├── Tutorial29.vcxproj.filters
│   │   │   │   │   ├── Tutorial29.vcxproj.user
│   │   │   │   ├── Tutorial30/
│   │   │   │   │   ├── Tutorial30.vcxproj
│   │   │   │   │   ├── Tutorial30.vcxproj.filters
│   │   │   │   │   ├── Tutorial30.vcxproj.user
│   │   │   │   ├── Tutorial31/
│   │   │   │   │   ├── Tutorial31.vcxproj
│   │   │   │   │   ├── Tutorial31.vcxproj.filters
│   │   │   │   │   ├── Tutorial31.vcxproj.user
│   │   │   │   ├── Tutorial32/
│   │   │   │   │   ├── Tutorial32.vcxproj
│   │   │   │   │   ├── Tutorial32.vcxproj.filters
│   │   │   │   │   ├── Tutorial32.vcxproj.user
│   │   │   │   ├── Tutorial33/
│   │   │   │   │   ├── Tutorial33.vcxproj
│   │   │   │   │   ├── Tutorial33.vcxproj.filters
│   │   │   │   │   ├── Tutorial33.vcxproj.user
│   │   │   │   ├── Tutorial34/
│   │   │   │   │   ├── Tutorial34.vcxproj
│   │   │   │   │   ├── Tutorial34.vcxproj.filters
│   │   │   │   │   ├── Tutorial34.vcxproj.user
│   │   │   │   ├── Tutorial35/
│   │   │   │   │   ├── Tutorial35.vcxproj
│   │   │   │   │   ├── Tutorial35.vcxproj.filters
│   │   │   │   │   ├── Tutorial35.vcxproj.user
│   │   │   │   │   ├── Tutorial35.vcxprojuser
│   │   │   │   ├── Tutorial36/
│   │   │   │   │   ├── Tutorial36.vcxproj
│   │   │   │   │   ├── Tutorial36.vcxproj.filters
│   │   │   │   │   ├── Tutorial36.vcxproj.user
│   │   │   │   │   ├── Tutorial36.vcxprojuser
│   │   │   │   ├── Tutorial37/
│   │   │   │   │   ├── Tutorial37.vcxproj
│   │   │   │   │   ├── Tutorial37.vcxproj.filters
│   │   │   │   │   ├── Tutorial37.vcxproj.user
│   │   │   │   │   ├── Tutorial37.vcxprojuser
│   │   │   │   ├── Tutorial38/
│   │   │   │   │   ├── Tutorial38.vcxproj
│   │   │   │   │   ├── Tutorial38.vcxproj.filters
│   │   │   │   │   ├── Tutorial38.vcxproj.user
│   │   │   │   │   ├── Tutorial38.vcxprojuser
│   │   │   │   ├── Tutorial39/
│   │   │   │   │   ├── Tutorial39.vcxproj
│   │   │   │   │   ├── Tutorial39.vcxproj.filters
│   │   │   │   │   ├── Tutorial39.vcxproj.user
│   │   │   │   │   ├── Tutorial39.vcxprojuser
│   │   │   │   ├── Tutorial40/
│   │   │   │   │   ├── Tutorial40.vcxproj
│   │   │   │   │   ├── Tutorial40.vcxproj.filters
│   │   │   │   │   ├── Tutorial40.vcxproj.user
│   │   │   │   │   ├── Tutorial40.vcxprojuser
│   │   │   │   ├── Tutorial41/
│   │   │   │   │   ├── Tutorial41.vcxproj
│   │   │   │   │   ├── Tutorial41.vcxproj.filters
│   │   │   │   │   ├── Tutorial41.vcxproj.user
│   │   │   │   │   ├── Tutorial41.vcxprojuser
│   │   │   │   ├── Tutorial42/
│   │   │   │   │   ├── Tutorial42.vcxproj
│   │   │   │   │   ├── Tutorial42.vcxproj.filters
│   │   │   │   │   ├── Tutorial42.vcxproj.user
│   │   │   │   │   ├── Tutorial42.vcxprojuser
│   │   │   │   ├── Tutorial43/
│   │   │   │   │   ├── Tutorial43.vcxproj
│   │   │   │   │   ├── Tutorial43.vcxproj.filters
│   │   │   │   │   ├── Tutorial43.vcxproj.user
│   │   │   │   │   ├── Tutorial43.vcxprojuser
│   │   │   │   ├── VulkanTutorials/
│   │   │   │   │   ├── Tutorial01/
│   │   │   │   │   │   ├── Tutorial01.vcxproj
│   │   │   │   │   │   ├── Tutorial01.vcxproj.filters
│   │   │   │   │   │   ├── Tutorial01.vcxproj.user
│   │   │   │   │   ├── VulkanRenderer/
│   │   │   │   │   │   ├── VulkanRenderer.vcxproj
│   │   │   │   │   │   ├── VulkanRenderer.vcxproj.filters
│   │   │   │   │   │   ├── VulkanRenderer.vcxproj.user
│   │   │   │   │   │   ├── vulkan_renderer.cpp
│   │   │   │   ├── demo_forward_renderer/
│   │   │   │   │   ├── demo_forward_renderer.vcxproj
│   │   │   │   │   ├── demo_forward_renderer.vcxproj.filters
│   │   │   │   │   ├── demo_forward_renderer.vcxproj.user
│   │   │   │   │   ├── demo_forward_renderer.vcxprojuser
│   │   ├── data/
│   │   │   ├── heightmap.save
│   │   ├── demos/
│   │   │   ├── phong/
│   │   │   │   ├── build.sh
│   │   │   │   ├── phong.cpp
│   │   ├── deprecated_tutorial34/
│   │   │   ├── glfx_technique.cpp
│   │   │   ├── glfx_technique.h
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial34.cpp
│   │   │   ├── models/
│   │   │   │   ├── f.mtl
│   │   │   │   ├── f.obj
│   │   │   │   ├── g.mtl
│   │   │   │   ├── g.obj
│   │   │   │   ├── l.mtl
│   │   │   │   ├── l.obj
│   │   │   │   ├── x.mtl
│   │   │   │   ├── x.obj
│   │   │   ├── shaders/
│   │   │   │   ├── lighting.glsl
│   │   ├── opengl_qna/
│   │   │   ├── transform_order/
│   │   │   │   ├── build.sh
│   │   │   │   ├── camera.cpp
│   │   │   │   ├── camera.h
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   │   │   ├── lighting_technique.cpp
│   │   │   │   ├── lighting_technique.h
│   │   │   │   ├── simple.fs
│   │   │   │   ├── simple.vs
│   │   │   │   ├── simple_technique.cpp
│   │   │   │   ├── simple_technique.h
│   │   │   │   ├── tranform_order.cpp
│   │   ├── orca/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial23.cpp
│   │   ├── samples/
│   │   │   ├── freeglut_multiple_windows/
│   │   │   │   ├── build.sh
│   │   │   │   ├── freeglut_multiple_windows.cpp
│   │   ├── tools/
│   │   │   ├── assimp_report/
│   │   │   │   ├── assimp_report.cpp
│   │   │   │   ├── build.sh
│   │   ├── tutorial01/
│   │   │   ├── build.sh
│   │   │   ├── tutorial01
│   │   │   ├── tutorial01.cpp
│   │   ├── tutorial02/
│   │   │   ├── build.sh
│   │   │   ├── tutorial02
│   │   │   ├── tutorial02.cpp
│   │   ├── tutorial03/
│   │   │   ├── build.sh
│   │   │   ├── tutorial03
│   │   │   ├── tutorial03.cpp
│   │   ├── tutorial04/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial04
│   │   │   ├── tutorial04.cpp
│   │   ├── tutorial05/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial05
│   │   │   ├── tutorial05.cpp
│   │   ├── tutorial06/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial06
│   │   │   ├── tutorial06.cpp
│   │   ├── tutorial07/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial07
│   │   │   ├── tutorial07.cpp
│   │   ├── tutorial08/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial08
│   │   │   ├── tutorial08.cpp
│   │   ├── tutorial09/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial09
│   │   │   ├── tutorial09.cpp
│   │   ├── tutorial09_youtube/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial09
│   │   │   ├── tutorial09.cpp
│   │   ├── tutorial10/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial10
│   │   │   ├── tutorial10.cpp
│   │   ├── tutorial10_youtube/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial10
│   │   │   ├── tutorial10.cpp
│   │   ├── tutorial11/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial11
│   │   │   ├── tutorial11.cpp
│   │   ├── tutorial11_youtube/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial11
│   │   │   ├── tutorial11.cpp
│   │   ├── tutorial12/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial12
│   │   │   ├── tutorial12.cpp
│   │   ├── tutorial12_youtube/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial12
│   │   │   ├── tutorial12.cpp
│   │   ├── tutorial13/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial13
│   │   │   ├── tutorial13.cpp
│   │   ├── tutorial13_youtube/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial13
│   │   │   ├── tutorial13.cpp
│   │   ├── tutorial14/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial14
│   │   │   ├── tutorial14.cpp
│   │   ├── tutorial14_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial14
│   │   │   ├── tutorial14.cpp
│   │   │   ├── world_transform.cpp
│   │   │   ├── world_transform.h
│   │   ├── tutorial15/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial15
│   │   │   ├── tutorial15.cpp
│   │   ├── tutorial15_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial15
│   │   │   ├── tutorial15.cpp
│   │   │   ├── world_transform.cpp
│   │   │   ├── world_transform.h
│   │   ├── tutorial16/
│   │   │   ├── build.sh
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial16.cpp
│   │   ├── tutorial16_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial16.cpp
│   │   │   ├── world_transform.cpp
│   │   │   ├── world_transform.h
│   │   ├── tutorial17/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial17.cpp
│   │   ├── tutorial17_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial17.cpp
│   │   │   ├── world_transform.cpp
│   │   │   ├── world_transform.h
│   │   ├── tutorial18/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial18.cpp
│   │   ├── tutorial18_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── tutorial18
│   │   │   ├── tutorial18.cpp
│   │   ├── tutorial19/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial19.cpp
│   │   ├── tutorial19_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial19
│   │   │   ├── tutorial19.cpp
│   │   ├── tutorial20/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial20.cpp
│   │   ├── tutorial20_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial20
│   │   │   ├── tutorial20.cpp
│   │   ├── tutorial21/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial21.cpp
│   │   ├── tutorial21_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial21
│   │   │   ├── tutorial21.cpp
│   │   ├── tutorial22/
│   │   │   ├── build.sh
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── tutorial22.cpp
│   │   ├── tutorial22_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial22
│   │   │   ├── tutorial22.cpp
│   │   ├── tutorial23/
│   │   │   ├── build.sh
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── shadow_map.fs
│   │   │   ├── shadow_map.vs
│   │   │   ├── shadow_map_fbo.cpp
│   │   │   ├── shadow_map_fbo.h
│   │   │   ├── shadow_map_technique.cpp
│   │   │   ├── shadow_map_technique.h
│   │   │   ├── tutorial23.cpp
│   │   ├── tutorial23_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── tutorial23
│   │   │   ├── tutorial23.cpp
│   │   ├── tutorial24/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── shadow_map.fs
│   │   │   ├── shadow_map.vs
│   │   │   ├── shadow_map_technique.cpp
│   │   │   ├── shadow_map_technique.h
│   │   │   ├── tutorial24.cpp
│   │   ├── tutorial24_youtube/
│   │   │   ├── assimp_sandbox
│   │   │   ├── assimp_sandbox.cpp
│   │   │   ├── build.sh
│   │   │   ├── build_assimp_sandbox.sh
│   │   ├── tutorial25/
│   │   │   ├── build.sh
│   │   │   ├── skybox.cpp
│   │   │   ├── skybox.fs
│   │   │   ├── skybox.h
│   │   │   ├── skybox.vs
│   │   │   ├── skybox_technique.cpp
│   │   │   ├── skybox_technique.h
│   │   │   ├── tutorial25.cpp
│   │   ├── tutorial25_youtube/
│   │   │   ├── assimp_sandbox.cpp
│   │   │   ├── build.sh
│   │   │   ├── build_assimp_sandbox.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── skinned_mesh.cpp
│   │   │   ├── skinned_mesh.h
│   │   │   ├── skinning.fs
│   │   │   ├── skinning.vs
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── tutorial25
│   │   │   ├── tutorial25.cpp
│   │   │   ├── models/
│   │   │   │   ├── example1_single_bone.blend
│   │   │   │   ├── example1_single_bone.blend1
│   │   │   │   ├── example1_single_bone.fbx
│   │   │   │   ├── example1_two_bone.blend
│   │   │   │   ├── example1_two_bone.blend1
│   │   │   │   ├── example1_two_bone.fbx
│   │   │   │   ├── example3_two_bones_with_rotation.blend
│   │   │   │   ├── example3_two_bones_with_rotation.blend1
│   │   │   │   ├── example3_two_bones_with_rotation.fbx
│   │   │   │   ├── example4.blend
│   │   │   │   ├── example4.blend1
│   │   │   │   ├── example4.fbx
│   │   ├── tutorial26/
│   │   │   ├── build.sh
│   │   │   ├── engine_common.h
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── tutorial26.cpp
│   │   ├── tutorial26_youtube/
│   │   │   ├── assimp_sandbox
│   │   │   ├── assimp_sandbox.cpp
│   │   │   ├── build.sh
│   │   │   ├── build_assimp_sandbox.sh
│   │   │   ├── models/
│   │   │   │   ├── single_bone.blend
│   │   │   │   ├── single_bone.fbx
│   │   │   │   ├── two_bones_translation.blend
│   │   │   │   ├── two_bones_translation.fbx
│   │   │   │   ├── two_bones_translation_rotation.blend
│   │   │   │   ├── two_bones_translation_rotation.fbx
│   │   ├── tutorial27/
│   │   │   ├── billboard.fs
│   │   │   ├── billboard.gs
│   │   │   ├── billboard.vs
│   │   │   ├── billboard_list.cpp
│   │   │   ├── billboard_list.h
│   │   │   ├── billboard_technique.cpp
│   │   │   ├── billboard_technique.h
│   │   │   ├── build.sh
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── quad.obj
│   │   │   ├── tutorial27.cpp
│   │   ├── tutorial27_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── skinned_mesh.cpp
│   │   │   ├── skinned_mesh.h
│   │   │   ├── skinning.fs
│   │   │   ├── skinning.vs
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── tutorial27
│   │   │   ├── tutorial27.cpp
│   │   ├── tutorial28/
│   │   │   ├── billboard.fs
│   │   │   ├── billboard.gs
│   │   │   ├── billboard.vs
│   │   │   ├── billboard_technique.cpp
│   │   │   ├── billboard_technique.h
│   │   │   ├── build.sh
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── particle_system.cpp
│   │   │   ├── particle_system.h
│   │   │   ├── ps_update.fs
│   │   │   ├── ps_update.gs
│   │   │   ├── ps_update.vs
│   │   │   ├── ps_update_technique.cpp
│   │   │   ├── ps_update_technique.h
│   │   │   ├── quad.obj
│   │   │   ├── random_texture.cpp
│   │   │   ├── random_texture.h
│   │   │   ├── tutorial28.cpp
│   │   ├── tutorial28_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── skinned_mesh.cpp
│   │   │   ├── skinned_mesh.h
│   │   │   ├── skinning.fs
│   │   │   ├── skinning.vs
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── tutorial28.cpp
│   │   ├── tutorial29/
│   │   │   ├── build.sh
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── picking.fs
│   │   │   ├── picking.vs
│   │   │   ├── picking_technique.cpp
│   │   │   ├── picking_technique.h
│   │   │   ├── picking_texture.cpp
│   │   │   ├── picking_texture.h
│   │   │   ├── render_callbacks.h
│   │   │   ├── simple_color.fs
│   │   │   ├── simple_color.vs
│   │   │   ├── simple_color_technique.cpp
│   │   │   ├── simple_color_technique.h
│   │   │   ├── tutorial29.cpp
│   │   ├── tutorial29_youtube/
│   │   │   ├── build.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── skinned_mesh.cpp
│   │   │   ├── skinned_mesh.h
│   │   │   ├── skinning.fs
│   │   │   ├── skinning.vs
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── tutorial29.cpp
│   │   ├── tutorial30/
│   │   │   ├── build.sh
│   │   │   ├── lighting.cs
│   │   │   ├── lighting.es
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── render_callbacks.h
│   │   │   ├── tutorial30.cpp
│   │   ├── tutorial30_youtube/
│   │   │   ├── build.sh
│   │   │   ├── build_glfw_debug_output.sh
│   │   │   ├── build_textured_cube.sh
│   │   │   ├── camera.cpp
│   │   │   ├── camera.h
│   │   │   ├── glfw_debug_output.cpp
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── skinned_mesh.cpp
│   │   │   ├── skinned_mesh.h
│   │   │   ├── skinning.fs
│   │   │   ├── skinning.vs
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── textured_cube.cpp
│   │   │   ├── tutorial30.cpp
│   │   ├── tutorial31/
│   │   │   ├── build.sh
│   │   │   ├── lighting.cs
│   │   │   ├── lighting.es
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── render_callbacks.h
│   │   │   ├── tutorial31.cpp
│   │   ├── tutorial31_youtube/
│   │   │   ├── build.sh
│   │   │   ├── picking.fs
│   │   │   ├── picking.vs
│   │   │   ├── picking_technique.cpp
│   │   │   ├── picking_technique.h
│   │   │   ├── picking_texture.cpp
│   │   │   ├── picking_texture.h
│   │   │   ├── render_callbacks.h
│   │   │   ├── simple_color.fs
│   │   │   ├── simple_color.vs
│   │   │   ├── simple_color_technique.cpp
│   │   │   ├── simple_color_technique.h
│   │   │   ├── tutorial31.cpp
│   │   ├── tutorial32/
│   │   │   ├── build.sh
│   │   │   ├── tutorial32.cpp
│   │   ├── tutorial32_youtube/
│   │   │   ├── build.sh
│   │   │   ├── picking.fs
│   │   │   ├── picking.vs
│   │   │   ├── picking_technique.cpp
│   │   │   ├── picking_technique.h
│   │   │   ├── picking_texture.cpp
│   │   │   ├── picking_texture.h
│   │   │   ├── render_callbacks.h
│   │   │   ├── simple_color.fs
│   │   │   ├── simple_color.vs
│   │   │   ├── simple_color_technique.cpp
│   │   │   ├── simple_color_technique.h
│   │   │   ├── tutorial32.cpp
│   │   ├── tutorial33/
│   │   │   ├── build.sh
│   │   │   ├── lighting.fs
│   │   │   ├── lighting.vs
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── tutorial33.cpp
│   │   ├── tutorial33_youtube/
│   │   │   ├── build.sh
│   │   │   ├── quad_array.cpp
│   │   │   ├── quad_array.h
│   │   │   ├── shader.fs
│   │   │   ├── shader.vs
│   │   │   ├── sprite_batch.cpp
│   │   │   ├── sprite_batch.h
│   │   │   ├── tutorial33.cpp
│   │   ├── tutorial34_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial34.cpp
│   │   ├── tutorial35/
│   │   │   ├── build.sh
│   │   │   ├── ds_geom_pass_tech.cpp
│   │   │   ├── ds_geom_pass_tech.h
│   │   │   ├── gbuffer.cpp
│   │   │   ├── gbuffer.h
│   │   │   ├── tutorial35.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── geometry_pass.fs
│   │   │   │   ├── geometry_pass.vs
│   │   ├── tutorial35_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial35.cpp
│   │   ├── tutorial36/
│   │   │   ├── build.sh
│   │   │   ├── ds_dir_light_pass_tech.cpp
│   │   │   ├── ds_dir_light_pass_tech.h
│   │   │   ├── ds_geom_pass_tech.cpp
│   │   │   ├── ds_geom_pass_tech.h
│   │   │   ├── ds_light_pass_tech.cpp
│   │   │   ├── ds_light_pass_tech.h
│   │   │   ├── ds_point_light_pass_tech.cpp
│   │   │   ├── ds_point_light_pass_tech.h
│   │   │   ├── gbuffer.cpp
│   │   │   ├── gbuffer.h
│   │   │   ├── tutorial36.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── dir_light_pass.fs
│   │   │   │   ├── geometry_pass.fs
│   │   │   │   ├── geometry_pass.vs
│   │   │   │   ├── light_pass.vs
│   │   │   │   ├── point_light_pass.fs
│   │   ├── tutorial36_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial36.cpp
│   │   ├── tutorial37/
│   │   │   ├── build.sh
│   │   │   ├── ds_dir_light_pass_tech.cpp
│   │   │   ├── ds_dir_light_pass_tech.h
│   │   │   ├── ds_geom_pass_tech.cpp
│   │   │   ├── ds_geom_pass_tech.h
│   │   │   ├── ds_light_pass_tech.cpp
│   │   │   ├── ds_light_pass_tech.h
│   │   │   ├── ds_point_light_pass_tech.cpp
│   │   │   ├── ds_point_light_pass_tech.h
│   │   │   ├── gbuffer.cpp
│   │   │   ├── gbuffer.h
│   │   │   ├── null_technique.cpp
│   │   │   ├── null_technique.h
│   │   │   ├── tutorial37.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── dir_light_pass.fs
│   │   │   │   ├── geometry_pass.fs
│   │   │   │   ├── geometry_pass.vs
│   │   │   │   ├── light_pass.vs
│   │   │   │   ├── null_technique.fs
│   │   │   │   ├── null_technique.vs
│   │   │   │   ├── point_light_pass.fs
│   │   ├── tutorial37_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial37.cpp
│   │   ├── tutorial38/
│   │   │   ├── build.sh
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── tutorial38.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── skinning.fs
│   │   │   │   ├── skinning.vs
│   │   ├── tutorial38_youtube/
│   │   │   ├── build.sh
│   │   │   ├── build_frustum.sh
│   │   │   ├── frustum.cpp
│   │   │   ├── tutorial38.cpp
│   │   ├── tutorial39/
│   │   │   ├── build.sh
│   │   │   ├── engine_common.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── silhouette_technique.cpp
│   │   │   ├── silhouette_technique.h
│   │   │   ├── tutorial39.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── silhouette.fs
│   │   │   │   ├── silhouette.gs
│   │   │   │   ├── silhouette.vs
│   │   ├── tutorial39_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial39.cpp
│   │   ├── tutorial40/
│   │   │   ├── build.sh
│   │   │   ├── engine_common.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── null_technique.cpp
│   │   │   ├── null_technique.h
│   │   │   ├── shadow_volume_technique.cpp
│   │   │   ├── shadow_volume_technique.h
│   │   │   ├── tutorial40.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── null_technique.fs
│   │   │   │   ├── null_technique.vs
│   │   │   │   ├── shadow_volume.fs
│   │   │   │   ├── shadow_volume.gs
│   │   │   │   ├── shadow_volume.vs
│   │   ├── tutorial40_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial40.cpp
│   │   ├── tutorial41/
│   │   │   ├── build.sh
│   │   │   ├── intermediate_buffer.cpp
│   │   │   ├── intermediate_buffer.h
│   │   │   ├── motion_blur_technique.cpp
│   │   │   ├── motion_blur_technique.h
│   │   │   ├── skinning_technique.cpp
│   │   │   ├── skinning_technique.h
│   │   │   ├── tutorial41.cpp
│   │   │   ├── Debug/
│   │   │   │   ├── tutorial41.vpb
│   │   │   ├── shaders/
│   │   │   │   ├── motion_blur.fs
│   │   │   │   ├── motion_blur.vs
│   │   │   │   ├── skinning.fs
│   │   │   │   ├── skinning.vs
│   │   ├── tutorial41_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial41.cpp
│   │   ├── tutorial42/
│   │   │   ├── build.sh
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── shadow_map_fbo.cpp
│   │   │   ├── shadow_map_fbo.h
│   │   │   ├── shadow_map_technique.cpp
│   │   │   ├── shadow_map_technique.h
│   │   │   ├── tutorial42.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   │   │   ├── shadow_map.fs
│   │   │   │   ├── shadow_map.vs
│   │   ├── tutorial42_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial42.cpp
│   │   ├── tutorial43/
│   │   │   ├── build.sh
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── shadow_cube_map_fbo.cpp
│   │   │   ├── shadow_cube_map_fbo.h
│   │   │   ├── shadow_map_technique.cpp
│   │   │   ├── shadow_map_technique.h
│   │   │   ├── tutorial43.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   │   │   ├── shadow_map.fs
│   │   │   │   ├── shadow_map.vs
│   │   ├── tutorial43_youtube/
│   │   │   ├── build.sh
│   │   │   ├── tutorial43.cpp
│   │   ├── tutorial44/
│   │   │   ├── build.sh
│   │   │   ├── tutorial44.cpp
│   │   ├── tutorial45/
│   │   │   ├── blur_tech.cpp
│   │   │   ├── blur_tech.h
│   │   │   ├── build.sh
│   │   │   ├── engine_common.h
│   │   │   ├── geom_pass_tech.cpp
│   │   │   ├── geom_pass_tech.h
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── ssao_technique.cpp
│   │   │   ├── ssao_technique.h
│   │   │   ├── tutorial45.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── blur.fs
│   │   │   │   ├── blur.vs
│   │   │   │   ├── geometry_pass.fs
│   │   │   │   ├── geometry_pass.vs
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   │   │   ├── ssao.fs
│   │   │   │   ├── ssao.vs
│   │   ├── tutorial46/
│   │   │   ├── blur_tech.cpp
│   │   │   ├── blur_tech.h
│   │   │   ├── build.sh
│   │   │   ├── engine_common.h
│   │   │   ├── geom_pass_tech.cpp
│   │   │   ├── geom_pass_tech.h
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── ssao_technique.cpp
│   │   │   ├── ssao_technique.h
│   │   │   ├── tutorial46.cpp
│   │   │   ├── shaders/
│   │   │   │   ├── blur.fs
│   │   │   │   ├── blur.vs
│   │   │   │   ├── geometry_pass.fs
│   │   │   │   ├── geometry_pass.vs
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   │   │   ├── ssao.fs
│   │   │   │   ├── ssao.vs
│   │   ├── tutorial47/
│   │   │   ├── build.sh
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── shadow_map_technique.cpp
│   │   │   ├── shadow_map_technique.h
│   │   │   ├── tutorial47.cpp
│   │   │   ├── Shaders/
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   │   │   ├── shadow_map.fs
│   │   │   │   ├── shadow_map.vs
│   │   ├── tutorial48/
│   │   │   ├── build.sh
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── tutorial48.cpp
│   │   ├── tutorial49/
│   │   │   ├── build.sh
│   │   │   ├── csm_technique.cpp
│   │   │   ├── csm_technique.h
│   │   │   ├── lighting_technique.cpp
│   │   │   ├── lighting_technique.h
│   │   │   ├── mesh.cpp
│   │   │   ├── mesh.h
│   │   │   ├── tutorial49.cpp
│   │   │   ├── Shaders/
│   │   │   │   ├── csm.fs
│   │   │   │   ├── csm.vs
│   │   │   │   ├── lighting.fs
│   │   │   │   ├── lighting.vs
│   │   ├── tutorial50/
│   │   │   ├── build.sh
│   │   │   ├── frag.spv
│   │   │   ├── tutorial50.cpp
│   │   │   ├── vert.spv
│   │   ├── tutorial51/
│   │   │   ├── build.sh
│   │   │   ├── tutorial51.cpp
│   │   ├── tutorial52/
│   │   │   ├── build.sh
│   │   │   ├── frag.spv
│   │   │   ├── tutorial52.cpp
│   │   │   ├── vert.spv
│   │   │   ├── Shaders/
│   │   │   │   ├── frag.spv
│   │   │   │   ├── fs.spv
│   │   │   │   ├── fs.spv.txt
│   │   │   │   ├── vert.spv
│   │   │   │   ├── vs.spv
│   │   │   │   ├── vs.spv.txt
│   │   │   │   ├── vulkan.frag
│   │   │   │   ├── vulkan.vert
│   │   ├── tutorial53/
│   │   │   ├── build.sh
│   │   │   ├── tutorial53.cpp
│   │   │   ├── Shaders/
│   │   │   │   ├── fs.spv
│   │   │   │   ├── vs.spv
│   │   │   │   ├── vulkan.frag
│   │   │   │   ├── vulkan.vert
│   │   ├── tutorial54/
│   │   │   ├── build.sh
│   │   │   ├── frag.spv
│   │   │   ├── log
│   │   │   ├── tutorial54.cpp
│   │   │   ├── vert.spv
│   │   │   ├── Shaders/
│   │   │   │   ├── frag.spv
│   │   │   │   ├── fs.spv
│   │   │   │   ├── fs.spv.txt
│   │   │   │   ├── vert.spv
│   │   │   │   ├── vs.spv
│   │   │   │   ├── vs.spv.txt
│   │   │   │   ├── vulkan.frag
│   │   │   │   ├── vulkan.vert
│   │   ├── web/
│   │   │   ├── Introduction.html
│   │   │   ├── backup.sh
│   │   │   ├── buygreen-linux-penguin.jpg
│   │   │   ├── contact.html
│   │   │   ├── donate.html
│   │   │   ├── etay.jpg
│   │   │   ├── faq.html
│   │   │   ├── french_flag.jpg
│   │   │   ├── g3dviewer-screenshot-bot-a51red.pk3.png
│   │   │   ├── get_the_source.jpg
│   │   │   ├── glfx.jpg
│   │   │   ├── glfx.png
│   │   │   ├── glfx2.png
│   │   │   ├── index.html
│   │   │   ├── instructions.html
│   │   │   ├── logo.jpg
│   │   │   ├── logo.odg
│   │   │   ├── logo.png
│   │   │   ├── news.html
│   │   │   ├── ogl.jpg
│   │   │   ├── plan.odt
│   │   │   ├── russian_flag.jpg
│   │   │   ├── sellers.json
│   │   │   ├── test.html
│   │   │   ├── tutorial01.jpg
│   │   │   ├── tutorial02.jpg
│   │   │   ├── tutorial03.jpg
│   │   │   ├── tutorial04.jpg
│   │   │   ├── tutorial05.jpg
│   │   │   ├── tutorial06.jpg
│   │   │   ├── tutorial07.jpg
│   │   │   ├── tutorial08.jpg
│   │   │   ├── tutorial09.jpg
│   │   │   ├── tutorial10.jpg
│   │   │   ├── tutorial11.jpg
│   │   │   ├── tutorial12.jpg
│   │   │   ├── tutorial13.jpg
│   │   │   ├── tutorial14.jpg
│   │   │   ├── tutorial15.jpg
│   │   │   ├── tutorial16.jpg
│   │   │   ├── tutorial17.jpg
│   │   │   ├── tutorial18.jpg
│   │   │   ├── tutorial19.jpg
│   │   │   ├── tutorial20.jpg
│   │   │   ├── tutorial21.jpg
│   │   │   ├── tutorial22.jpg
│   │   │   ├── tutorial23.jpg
│   │   │   ├── tutorial24.jpg
│   │   │   ├── tutorial25.jpg
│   │   │   ├── tutorial26.jpg
│   │   │   ├── tutorial27.jpg
│   │   │   ├── tutorial28.jpg
│   │   │   ├── tutorial29.jpg
│   │   │   ├── tutorial30.jpg
│   │   │   ├── tutorial31.jpg
│   │   │   ├── tutorial32.jpg
│   │   │   ├── tutorial33.jpg
│   │   │   ├── tutorial34.jpg
│   │   │   ├── tutorial35.jpg
│   │   │   ├── tutorial36.jpg
│   │   │   ├── tutorial37.jpg
│   │   │   ├── tutorial38.jpg
│   │   │   ├── tutorial39.jpg
│   │   │   ├── tutorial40.jpg
│   │   │   ├── tutorial41.jpg
│   │   │   ├── tutorial42.jpg
│   │   │   ├── tutorial43.jpg
│   │   │   ├── tutorial44.jpg
│   │   │   ├── tutorial45.jpg
│   │   │   ├── tutorial46.jpg
│   │   │   ├── tutorial47.jpg
│   │   │   ├── tutorial48.jpg
│   │   │   ├── tutorial49.jpg
│   │   │   ├── tutorial50.jpg
│   │   │   ├── tutorial51.jpg
│   │   │   ├── tutorial52.jpg
│   │   │   ├── tutorial53.jpg
│   │   │   ├── tutorials.css
│   │   │   ├── faq/
│   │   │   │   ├── faq.html
│   │   │   │   ├── readme.pdf
│   │   │   │   ├── css/
│   │   │   │   │   ├── reset.css
│   │   │   │   │   ├── style.css
│   │   │   │   ├── js/
│   │   │   │   │   ├── jquery-2.1.1.js
│   │   │   │   │   ├── jquery.mobile.custom.min.js
│   │   │   │   │   ├── main.js
│   │   │   │   │   ├── modernizr.js
│   │   │   │   ├── partials/
│   │   │   │   │   ├── _layout.scss
│   │   │   │   │   ├── _mixins.scss
│   │   │   │   │   ├── _variables.scss
│   │   │   │   ├── scss/
│   │   │   │   │   ├── style.scss
│   │   │   ├── www/
│   │   │   │   ├── balloontip.css
│   │   │   │   ├── balloontip.js
│   │   │   │   ├── get_the_source.xcf
│   │   │   │   ├── home.jpg
│   │   │   │   ├── html5shiv-printshiv.min.js
│   │   │   │   ├── html5shiv.min.js
│   │   │   │   ├── logo hdpi.png
│   │   │   │   ├── logo ldpi.png
│   │   │   │   ├── next.jpg
│   │   │   │   ├── prev.jpg
│   │   │   │   ├── print.css
│   │   │   │   ├── style.css
│   │   │   │   ├── template.html
│   │   │   │   ├── tutorial01/
│   │   │   │   │   ├── tutorial01.html
│   │   │   │   │   ├── tutorial1_spanish.html
│   │   │   │   │   ├── tutorial1_spanish.rtf
│   │   │   │   ├── tutorial02/
│   │   │   │   │   ├── tutorial02.html
│   │   │   │   ├── tutorial03/
│   │   │   │   │   ├── coord_system.png
│   │   │   │   │   ├── tutorial03.html
│   │   │   │   ├── tutorial04/
│   │   │   │   │   ├── pipeline.odg
│   │   │   │   │   ├── pipeline.png
│   │   │   │   │   ├── tutorial04.html
│   │   │   │   ├── tutorial05/
│   │   │   │   │   ├── tutorial05.html
│   │   │   │   ├── tutorial06/
│   │   │   │   │   ├── equation1.jpg
│   │   │   │   │   ├── equation1.mml
│   │   │   │   │   ├── equation1.odf
│   │   │   │   │   ├── equation1.png
│   │   │   │   │   ├── equation2.jpg
│   │   │   │   │   ├── equation2.mml
│   │   │   │   │   ├── equation2.odf
│   │   │   │   │   ├── equation2.png
│   │   │   │   │   ├── equation3.jpg
│   │   │   │   │   ├── equation3.mml
│   │   │   │   │   ├── equation3.odf
│   │   │   │   │   ├── equation3.png
│   │   │   │   │   ├── translation.png
│   │   │   │   │   ├── tutorial06.html
│   │   │   │   ├── tutorial07/
│   │   │   │   │   ├── 07_01.mml
│   │   │   │   │   ├── 07_01.png
│   │   │   │   │   ├── 07_02.mml
│   │   │   │   │   ├── 07_02.png
│   │   │   │   │   ├── 07_03.mml
│   │   │   │   │   ├── 07_03.png
│   │   │   │   │   ├── eq_1.png
│   │   │   │   │   ├── eq_2.png
│   │   │   │   │   ├── eq_3.png
│   │   │   │   │   ├── rotation.odg
│   │   │   │   │   ├── rotation.png
│   │   │   │   │   ├── tutorial07.html
│   │   │   │   ├── tutorial08/
│   │   │   │   │   ├── tutorial08.html
│   │   │   │   ├── tutorial09/
│   │   │   │   │   ├── tutorial09.html
│   │   │   │   ├── tutorial10/
│   │   │   │   │   ├── index_draws.odg
│   │   │   │   │   ├── indexed_draw.png
│   │   │   │   │   ├── ordered_draw.png
│   │   │   │   │   ├── pyramid.odg
│   │   │   │   │   ├── pyramid.png
│   │   │   │   │   ├── tutorial10.html
│   │   │   │   ├── tutorial11/
│   │   │   │   │   ├── rot_trans.odg
│   │   │   │   │   ├── rot_trans.png
│   │   │   │   │   ├── trans_rot.odg
│   │   │   │   │   ├── trans_rot.png
│   │   │   │   │   ├── tutorial11.html
│   │   │   │   ├── tutorial12/
│   │   │   │   │   ├── 12_01.mml
│   │   │   │   │   ├── 12_01.png
│   │   │   │   │   ├── 12_02.mml
│   │   │   │   │   ├── 12_02.png
│   │   │   │   │   ├── 12_03.mml
│   │   │   │   │   ├── 12_03.png
│   │   │   │   │   ├── 12_04.mml
│   │   │   │   │   ├── 12_04.png
│   │   │   │   │   ├── 12_05.mml
│   │   │   │   │   ├── 12_05.png
│   │   │   │   │   ├── 12_06.mml
│   │   │   │   │   ├── 12_06.png
│   │   │   │   │   ├── 12_07.mml
│   │   │   │   │   ├── 12_07.png
│   │   │   │   │   ├── 12_08.mml
│   │   │   │   │   ├── 12_08.png
│   │   │   │   │   ├── 12_09.mml
│   │   │   │   │   ├── 12_09.png
│   │   │   │   │   ├── 12_10.mml
│   │   │   │   │   ├── 12_10.png
│   │   │   │   │   ├── 12_11.mml
│   │   │   │   │   ├── 12_11.png
│   │   │   │   │   ├── FOV.odg
│   │   │   │   │   ├── FOV.png
│   │   │   │   │   ├── projection_window.odg
│   │   │   │   │   ├── projection_window.png
│   │   │   │   │   ├── side_view1.odg
│   │   │   │   │   ├── side_view1.png
│   │   │   │   │   ├── side_view2.odg
│   │   │   │   │   ├── side_view2.png
│   │   │   │   │   ├── tutorial12.html
│   │   │   │   ├── tutorial13/
│   │   │   │   │   ├── camera_axes.odg
│   │   │   │   │   ├── camera_axes.png
│   │   │   │   │   ├── camera_axes2.odg
│   │   │   │   │   ├── camera_axes2.png
│   │   │   │   │   ├── camera_space.odg
│   │   │   │   │   ├── camera_space.png
│   │   │   │   │   ├── camera_space_translation
│   │   │   │   │   ├── camera_space_translation.png
│   │   │   │   │   ├── tutorial13.html
│   │   │   │   │   ├── uvn.mml
│   │   │   │   │   ├── uvn.png
│   │   │   │   ├── tutorial14/
│   │   │   │   │   ├── tutorial14.html
│   │   │   │   ├── tutorial15/
│   │   │   │   │   ├── aa_gun.jpg
│   │   │   │   │   ├── conjugate.mml
│   │   │   │   │   ├── conjugate.png
│   │   │   │   │   ├── h_angle.odg
│   │   │   │   │   ├── h_angle.png
│   │   │   │   │   ├── quaternion.mml
│   │   │   │   │   ├── quaternion.png
│   │   │   │   │   ├── quaternion1.mml
│   │   │   │   │   ├── quaternion1.png
│   │   │   │   │   ├── rotation.mml
│   │   │   │   │   ├── rotation.png
│   │   │   │   │   ├── rotationq.mml
│   │   │   │   │   ├── rotationq.png
│   │   │   │   │   ├── tutorial15.html
│   │   │   │   ├── tutorial16/
│   │   │   │   │   ├── checkers.odg
│   │   │   │   │   ├── sampling_diagram.odg
│   │   │   │   │   ├── sampling_diagram.png
│   │   │   │   │   ├── tri1.odg
│   │   │   │   │   ├── tri1.png
│   │   │   │   │   ├── tri2.odg
│   │   │   │   │   ├── tri2.png
│   │   │   │   │   ├── tutorial16.html
│   │   │   │   │   ├── txt_coords.odg
│   │   │   │   │   ├── txt_coords.png
│   │   │   │   │   ├── txt_example.png
│   │   │   │   ├── tutorial17/
│   │   │   │   │   ├── ambient_light.mml
│   │   │   │   │   ├── ambient_light.png
│   │   │   │   │   ├── directional_light.odg
│   │   │   │   │   ├── directional_light.png
│   │   │   │   │   ├── tutorial17.html
│   │   │   │   ├── tutorial18/
│   │   │   │   │   ├── lambert_law.odg
│   │   │   │   │   ├── lambert_law.png
│   │   │   │   │   ├── light_angle.odg
│   │   │   │   │   ├── light_angle.png
│   │   │   │   │   ├── normals.odg
│   │   │   │   │   ├── normals.png
│   │   │   │   │   ├── tutorial18.html
│   │   │   │   │   ├── vertex_normals.odg
│   │   │   │   │   ├── vertex_normals.png
│   │   │   │   ├── tutorial19/
│   │   │   │   │   ├── reflect.mml
│   │   │   │   │   ├── reflect.png
│   │   │   │   │   ├── reflected_light.odg
│   │   │   │   │   ├── reflected_light.png
│   │   │   │   │   ├── shininess_1.png
│   │   │   │   │   ├── shininess_32.png
│   │   │   │   │   ├── specular1.mml
│   │   │   │   │   ├── specular1.png
│   │   │   │   │   ├── specular_light.odg
│   │   │   │   │   ├── specular_light.png
│   │   │   │   │   ├── tutorial19.html
│   │   │   │   ├── tutorial20/
│   │   │   │   │   ├── attenuation.mml
│   │   │   │   │   ├── attenuation.png
│   │   │   │   │   ├── inverse_square_law.mml
│   │   │   │   │   ├── inverse_square_law.png
│   │   │   │   │   ├── tutorial20.html
│   │   │   │   ├── tutorial21/
│   │   │   │   │   ├── map.ml
│   │   │   │   │   ├── map.png
│   │   │   │   │   ├── spotlight.odg
│   │   │   │   │   ├── spotlight.png
│   │   │   │   │   ├── tutorial21.html
│   │   │   │   ├── tutorial22/
│   │   │   │   │   ├── tutorial22.html
│   │   │   │   ├── tutorial23/
│   │   │   │   │   ├── shadow.blend
│   │   │   │   │   ├── shadow.png
│   │   │   │   │   ├── tutorial23.html
│   │   │   │   ├── tutorial24/
│   │   │   │   │   ├── shadow.jpg
│   │   │   │   │   ├── tutorial24.html
│   │   │   │   ├── tutorial25/
│   │   │   │   │   ├── Halflife_skybox.jpg
│   │   │   │   │   ├── skybox.jpg
│   │   │   │   │   ├── texel_fetch.odg
│   │   │   │   │   ├── texel_fetch.png
│   │   │   │   │   ├── tutorial25.html
│   │   │   │   ├── tutorial26/
│   │   │   │   │   ├── compare.jpg
│   │   │   │   │   ├── no_normal_mapping.jpg
│   │   │   │   │   ├── normal_map.jpg
│   │   │   │   │   ├── normal_mapping.jpg
│   │   │   │   │   ├── normals.jpg
│   │   │   │   │   ├── normals.odg
│   │   │   │   │   ├── tangent_space.jpg
│   │   │   │   │   ├── tangent_space.odg
│   │   │   │   │   ├── tangent_space2.odg
│   │   │   │   │   ├── tangent_space3.odg
│   │   │   │   │   ├── tangent_space4.jpg
│   │   │   │   │   ├── tangent_space4.odg
│   │   │   │   │   ├── tangent_space5.jpg
│   │   │   │   │   ├── tangent_space5.odg
│   │   │   │   │   ├── tangent_space_calc1.jpg
│   │   │   │   │   ├── tangent_space_calc1.mml
│   │   │   │   │   ├── tangent_space_calc2.jpg
│   │   │   │   │   ├── tangent_space_calc2.mml
│   │   │   │   │   ├── tangent_space_calc3.jpg
│   │   │   │   │   ├── tangent_space_calc3.mml
│   │   │   │   │   ├── tangent_space_calc4.jpg
│   │   │   │   │   ├── tangent_space_calc4.mml
│   │   │   │   │   ├── tangent_space_calc5.jpg
│   │   │   │   │   ├── tangent_space_calc5.mml
│   │   │   │   │   ├── tangent_space_calc6.jpg
│   │   │   │   │   ├── tangent_space_calc6.mml
│   │   │   │   │   ├── tutorial26.html
│   │   │   │   ├── tutorial27/
│   │   │   │   │   ├── billboard1.jpg
│   │   │   │   │   ├── billboard2.jpg
│   │   │   │   │   ├── billboard3.jpg
│   │   │   │   │   ├── billboard4.jpg
│   │   │   │   │   ├── billboard4.odg
│   │   │   │   │   ├── quad.jpg
│   │   │   │   │   ├── quad.odg
│   │   │   │   │   ├── triangle_strip.jpg
│   │   │   │   │   ├── triangle_strip.odg
│   │   │   │   │   ├── triangle_strip2.jpg
│   │   │   │   │   ├── triangle_strips2.odg
│   │   │   │   │   ├── tutorial27.html
│   │   │   │   ├── tutorial28/
│   │   │   │   │   ├── pipeline.jpg
│   │   │   │   │   ├── pipeline.odg
│   │   │   │   │   ├── tutorial28.html
│   │   │   │   ├── tutorial29/
│   │   │   │   │   ├── tutorial29.html
│   │   │   │   ├── tutorial30/
│   │   │   │   │   ├── domain.jpg
│   │   │   │   │   ├── domain.odg
│   │   │   │   │   ├── domains.png
│   │   │   │   │   ├── patch.jpg
│   │   │   │   │   ├── pipeline.jpg
│   │   │   │   │   ├── pipeline.odg
│   │   │   │   │   ├── subdivision.jpg
│   │   │   │   │   ├── tutorial30.html
│   │   │   │   ├── tutorial31/
│   │   │   │   │   ├── CONTROL_POINTS.blend
│   │   │   │   │   ├── bezier_tri.jpg
│   │   │   │   │   ├── bezier_tri.mml
│   │   │   │   │   ├── control_points.jpg
│   │   │   │   │   ├── control_points.odg
│   │   │   │   │   ├── control_points.png
│   │   │   │   │   ├── cp_projection.jpg
│   │   │   │   │   ├── cp_projection.odg
│   │   │   │   │   ├── cp_projection2.jpg
│   │   │   │   │   ├── cp_projection2.odg
│   │   │   │   │   ├── tutorial31.html
│   │   │   │   ├── tutorial32/
│   │   │   │   │   ├── aos_soa.jpg
│   │   │   │   │   ├── aos_soa.odg
│   │   │   │   │   ├── tutorial32.html
│   │   │   │   ├── tutorial33/
│   │   │   │   │   ├── instance_vbs.jpg
│   │   │   │   │   ├── instance_vbs.odg
│   │   │   │   │   ├── tutorial33.html
│   │   │   │   ├── tutorial34/
│   │   │   │   │   ├── tutorial34.html
│   │   │   │   ├── tutorial35/
│   │   │   │   │   ├── gbuffer.jpg
│   │   │   │   │   ├── gbuffer.odg
│   │   │   │   │   ├── gbuffer.png
│   │   │   │   │   ├── tutorial35.html
│   │   │   │   ├── tutorial36/
│   │   │   │   │   ├── bbox.jpg
│   │   │   │   │   ├── bsphere.jpg
│   │   │   │   │   ├── threshold.jpg
│   │   │   │   │   ├── threshold.mml
│   │   │   │   │   ├── tutorial36.html
│   │   │   │   ├── tutorial37/
│   │   │   │   │   ├── light_volume.jpg
│   │   │   │   │   ├── light_volume.odg
│   │   │   │   │   ├── light_volume1.jpg
│   │   │   │   │   ├── light_volume1.odg
│   │   │   │   │   ├── light_volume2.jpg
│   │   │   │   │   ├── light_volume2.odg
│   │   │   │   │   ├── tutorial37.html
│   │   │   │   ├── tutorial38/
│   │   │   │   │   ├── assimp1.jpg
│   │   │   │   │   ├── assimp1.odg
│   │   │   │   │   ├── assimp2.jpg
│   │   │   │   │   ├── assimp2.odg
│   │   │   │   │   ├── rigging.jpg
│   │   │   │   │   ├── rigging1.png
│   │   │   │   │   ├── rigging2.png
│   │   │   │   │   ├── rigging3.png
│   │   │   │   │   ├── rigging4.png
│   │   │   │   │   ├── tutorial38.html
│   │   │   │   │   ├── vertex.jpg
│   │   │   │   │   ├── vertex.odg
│   │   │   │   ├── tutorial39/
│   │   │   │   │   ├── adjacencies.dia
│   │   │   │   │   ├── adjacencies.jpg
│   │   │   │   │   ├── silhouette1.jpg
│   │   │   │   │   ├── silhouette1.odg
│   │   │   │   │   ├── silhouette2.dia
│   │   │   │   │   ├── silhouette2.jpg
│   │   │   │   │   ├── tutorial39.html
│   │   │   │   ├── tutorial40/
│   │   │   │   │   ├── caps.jpg
│   │   │   │   │   ├── caps.odg
│   │   │   │   │   ├── infinity
│   │   │   │   │   ├── infinity.jpg
│   │   │   │   │   ├── infinity.odg
│   │   │   │   │   ├── infinity1.jpg
│   │   │   │   │   ├── infinity1.mml
│   │   │   │   │   ├── infinity2.jpg
│   │   │   │   │   ├── infinity2.mml
│   │   │   │   │   ├── lightBulb.png
│   │   │   │   │   ├── quad.jpg
│   │   │   │   │   ├── quad.odg
│   │   │   │   │   ├── shadow_volume1.jpg
│   │   │   │   │   ├── shadow_volume1.odg
│   │   │   │   │   ├── shadow_volume2.jpg
│   │   │   │   │   ├── shadow_volume2.odg
│   │   │   │   │   ├── tutorial40.html
│   │   │   │   ├── tutorial41/
│   │   │   │   │   ├── tutorial41.html
│   │   │   │   ├── tutorial42/
│   │   │   │   │   ├── no_pcf.png
│   │   │   │   │   ├── pcf.png
│   │   │   │   │   ├── shadow_map.odt
│   │   │   │   │   ├── shadow_map.png
│   │   │   │   │   ├── tutorial42.html
│   │   │   │   ├── tutorial43/
│   │   │   │   │   ├── cubemap.jpg
│   │   │   │   │   ├── cubemap.odg
│   │   │   │   │   ├── cubemap2.jpg
│   │   │   │   │   ├── cubemap2.odg
│   │   │   │   │   ├── tutorial43.html
│   │   │   │   ├── tutorial44/
│   │   │   │   │   ├── tutorial44.html
│   │   │   │   ├── tutorial45/
│   │   │   │   │   ├── algorithm.jpg
│   │   │   │   │   ├── ao.jpg
│   │   │   │   │   ├── ao.png
│   │   │   │   │   ├── diagram1.jpg
│   │   │   │   │   ├── diagram1.odg
│   │   │   │   │   ├── tutorial45.html
│   │   │   │   ├── tutorial46/
│   │   │   │   │   ├── diagram1.jpg
│   │   │   │   │   ├── diagram1.odf
│   │   │   │   │   ├── diagram2.jpg
│   │   │   │   │   ├── diagram2.odf
│   │   │   │   │   ├── diagram3.jpg
│   │   │   │   │   ├── diagram3.odf
│   │   │   │   │   ├── diagram4.jpg
│   │   │   │   │   ├── diagram4.odf
│   │   │   │   │   ├── diagram5.jpg
│   │   │   │   │   ├── diagram5.odf
│   │   │   │   │   ├── diagram6.jpg
│   │   │   │   │   ├── diagram6.odf
│   │   │   │   │   ├── tutorial46.html
│   │   │   │   ├── tutorial47/
│   │   │   │   │   ├── boxes.jpg
│   │   │   │   │   ├── calc.png
│   │   │   │   │   ├── calc1.jpg
│   │   │   │   │   ├── calc1.odf
│   │   │   │   │   ├── calc2.jpg
│   │   │   │   │   ├── calc2.odf
│   │   │   │   │   ├── calc2.png
│   │   │   │   │   ├── calc3.jpg
│   │   │   │   │   ├── calc3.odf
│   │   │   │   │   ├── calc3.png
│   │   │   │   │   ├── calc4.jpg
│   │   │   │   │   ├── calc4.odf
│   │   │   │   │   ├── calc4.png
│   │   │   │   │   ├── calc5.jpg
│   │   │   │   │   ├── calc5.odf
│   │   │   │   │   ├── calc5.png
│   │   │   │   │   ├── dirlight.jpg
│   │   │   │   │   ├── dirlight.odg
│   │   │   │   │   ├── high_res.jpg
│   │   │   │   │   ├── low_res.jpg
│   │   │   │   │   ├── ortho.jpg
│   │   │   │   │   ├── projections.odg
│   │   │   │   │   ├── spotlight.jpg
│   │   │   │   │   ├── spotlight.odg
│   │   │   │   │   ├── tutorial47.html
│   │   │   │   ├── tutorial48/
│   │   │   │   │   ├── atb1.jpg
│   │   │   │   │   ├── atb2.jpg
│   │   │   │   │   ├── atb3.jpg
│   │   │   │   │   ├── atb4.jpg
│   │   │   │   │   ├── atb5.jpg
│   │   │   │   │   ├── atb6.jpg
│   │   │   │   │   ├── atb7.jpg
│   │   │   │   │   ├── atb8.jpg
│   │   │   │   │   ├── tutorial48.html
│   │   │   │   ├── tutorial49/
│   │   │   │   │   ├── calc1.odf
│   │   │   │   │   ├── calc1.png
│   │   │   │   │   ├── calc2.odf
│   │   │   │   │   ├── calc2.png
│   │   │   │   │   ├── calc3.odf
│   │   │   │   │   ├── calc3.png
│   │   │   │   │   ├── csm.blend
│   │   │   │   │   ├── csm.blend1
│   │   │   │   │   ├── csm2.blend
│   │   │   │   │   ├── csm2.blend1
│   │   │   │   │   ├── final.jpg
│   │   │   │   │   ├── frustum1.odg
│   │   │   │   │   ├── frustum1.png
│   │   │   │   │   ├── frustum2.odg
│   │   │   │   │   ├── frustum2.png
│   │   │   │   │   ├── frustum3.odg
│   │   │   │   │   ├── frustum3.png
│   │   │   │   │   ├── img1.jpg
│   │   │   │   │   ├── img2.png
│   │   │   │   │   ├── img3.png
│   │   │   │   │   ├── img4.png
│   │   │   │   │   ├── img5.png
│   │   │   │   │   ├── img6.png
│   │   │   │   │   ├── img7.png
│   │   │   │   │   ├── tutorial49.html
│   │   │   │   ├── tutorial50/
│   │   │   │   │   ├── Vulkan.odg
│   │   │   │   │   ├── include.jpg
│   │   │   │   │   ├── link.jpg
│   │   │   │   │   ├── tutorial50.html
│   │   │   │   │   ├── vulkan.jpg
│   │   │   │   ├── tutorial51/
│   │   │   │   │   ├── tutorial51.html
│   │   │   │   ├── tutorial52/
│   │   │   │   │   ├── tutorial52.html
│   │   │   │   │   ├── tutorial52.jpg
│   │   │   │   ├── tutorial53/
│   │   │   │   │   ├── tutorial53.html
│   ├── Temporary Files/
│   │   ├── main.cpp
│   │   ├── tri.cpp
│   ├── dependencies/
│   │   ├── LICENSE.md
│   │   ├── README.md
│   │   ├── include/
│   │   │   ├── GLFW/
│   │   │   │   ├── glfw3.h
│   │   │   │   ├── glfw3native.h
│   │   │   ├── KHR/
│   │   │   │   ├── khrplatform.h
│   │   │   ├── glad/
│   │   │   │   ├── glad.h
│   │   ├── library/
│   │   │   ├── libglfw.3.3.dylib
├── 1 Source/
│   ├── commit-hist.txt
│   ├── 0 Rubik's Cube Visualization/
│   │   ├── README.md
│   │   ├── Rubiks Cube.gif
│   │   ├── main.cpp
│   │   ├── makefile
│   ├── 1 New Window/
│   │   ├── Makefile
│   │   ├── main.cpp
│   │   ├── main2.cpp
│   │   ├── GLFW/
│   │   │   ├── Makefile
│   │   │   ├── main.cpp
│   │   ├── SDL2/
│   │   │   ├── main.cpp
│   ├── 2 Triangle Shades/
│   │   ├── Makefile
│   │   ├── main.cpp
│   │   ├── glfw/
│   │   │   ├── Makefile
│   │   │   ├── main.cpp
│   ├── 3 Uniform Variables/
│   │   ├── Makefile
│   │   ├── glew32.dll
│   │   ├── main.cpp
│   ├── 9 Test3D/
│   │   ├── Makefile
│   │   ├── Mesh.cpp
│   │   ├── Mesh.h
│   │   ├── Mesh.o
│   │   ├── OpenGL
│   │   ├── Shader.cpp
│   │   ├── Shader.h
│   │   ├── Shader.o
│   │   ├── Window.cpp
│   │   ├── Window.h
│   │   ├── Window.o
│   │   ├── glew32.dll
│   │   ├── main.cpp
│   │   ├── main.o
│   │   ├── Shaders/
│   │   │   ├── shader.frag
│   │   │   ├── shader.vert
```
