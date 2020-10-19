/*#include "features.hpp"

#include "../../dependencies/interfaces/interfaces.hpp"
#include "../../dependencies/interfaces/i_material_system.hpp"
#include "../../dependencies/interfaces/i_client_entity_list.hpp"
#include "../../dependencies/interfaces/iv_model_render.hpp"
#include "../../dependencies/interfaces/i_studio_render.h"
#include "../../source-sdk/classes/key_values.h"
#include "../../source-sdk/structs/materials.hpp"

static std::vector<i_material*> materials;

void visuals::chams::initialize() {
	materials.emplace_back(interfaces::material_system->create_material("normal", key_values::from_string("VertexLitGeneric", nullptr)));
	materials.emplace_back(interfaces::material_system->create_material("flat", key_values::from_string("UnlitGeneric", nullptr)));
}

static void override_material(bool ignorez, bool flat, const color& color) {
	const auto material = flat ? materials[1] : materials[0];

	// change the color, alpha, and set whether to render through walls
	material->color_modulate(color.r / 255.f, color.g / 255.f, color.b / 255.f);
	material->alpha_modulate(color.a / 255.f);
	material->set_material_var_flag(material_var_flags_t::material_var_ignorez, ignorez);

	interfaces::model_render->override_material(material);
}

bool visuals::chams::render(void* ctx, void* state, const model_render_info_t& info, matrix_t* matrix) {
	bool should_redraw = true;

	if (!variables::chams || !std::string_view{ info.model->name }._Starts_with("models/player"))
		return should_redraw;

	const auto player = reinterpret_cast<player_t*>(interfaces::entity_list->get_client_entity(info.entity_index));
	if (!player || player == csgo::local_player || !player->is_alive() || player->is_dormant()) // don't override the local player for now
		return should_redraw;

	if (player->is_enemy(csgo::local_player)) {
		if (variables::xqz) {
			override_material(true, true, 66, 200, 255);
			hooks::original_draw_model_execute(interfaces::model_render, ctx, state, info, matrix);
		}
		override_material(false, false, variables::visuals::chams_colors::enemies_visible);
		hooks::original_draw_model_execute(interfaces::model_render, ctx, state, info, matrix);
		should_redraw = false;
	}
	else {
		if (variables::visuals::chams_through_walls) {
			override_material(true, true, variables::visuals::chams_colors::team_invisible);
			hooks::original_draw_model_execute(interfaces::model_render, ctx, state, info, matrix);
		}
		override_material(false, false, variables::visuals::chams_colors::team_visible);
	}

	return should_redraw;
}*/