#include "menu.hpp"

//todo auto elements positioning

auto do_frame = [&](std::int32_t x, std::int32_t y, std::int32_t w, std::int32_t h, color bg, color header_text, color header_line, const std::string& name) {
		render::draw_filled_rect(x, y, w, h, bg);
		render::draw_filled_rect(x, y, w, 30, header_text);
		render::draw_filled_rect(x, y + 30, w, 2, header_line);
		render::text(x + 10, y + 8, render::fonts::watermark_font, name, false, color::white());
};

void menu::render() {
	if (!variables::menu::opened)
		return;

	do_frame(variables::menu::x, variables::menu::y, variables::menu::w, variables::menu::h, color(36, 36, 36, 255), color(25, 25, 25, 255), color(36, 36, 36, 255), "project-kek");
	
	menu_framework::group_box(variables::menu::x + 5, variables::menu::y + 35, 100, 260, render::fonts::watermark_font, "tabs", false); {
		menu_framework::tab(variables::menu::x + 5, variables::menu::y + (260 / 2) - 35, 100, 30, render::fonts::watermark_font, "aimbot", menu::current_tab, 0, false);
		menu_framework::tab(variables::menu::x + 5, variables::menu::y + (260 / 2), 100, 30, render::fonts::watermark_font, "visuals", menu::current_tab, 1, false);
		menu_framework::tab(variables::menu::x + 5, variables::menu::y + (260 / 2) + 35, 100, 30, render::fonts::watermark_font, "misc", menu::current_tab, 2, false);
	}

	switch (current_tab) {
	case 0:
		menu_framework::group_box(variables::menu::x + 110, variables::menu::y + 35, 285, 260, render::fonts::watermark_font, "aimbot", false); {
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 60, 125, render::fonts::watermark_font, "test slider", variables::test_float, -101.f, 101.f);
			//menu.cpp in aim tab
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 45, variables::menu::x + 375, render::fonts::watermark_font, "aimbot enable", variables::aimbot);
			menu_framework::slider(variables::menu::x + 120, variables::menu::y + 60, 125, render::fonts::watermark_font, "fov", variables::aimbot_fov, 0.f, 10.f);
			menu_framework::slider(variables::menu::x + 120, variables::menu::y + 75, 125, render::fonts::watermark_font, "smooth", variables::aimbot_smoothing, 1.f, 5.f);
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 90, variables::menu::x + 375, render::fonts::watermark_font, "rcs", variables::simple_rcs);
			menu_framework::slider(variables::menu::x + 120, variables::menu::y + 105, 125, render::fonts::watermark_font, "rcs x", variables::rcs_x, 1.f, 3.f);
			menu_framework::slider(variables::menu::x + 120, variables::menu::y + 120, 125, render::fonts::watermark_font, "rcs y", variables::rcs_y, 1.f, 3.f);
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 135, variables::menu::x + 375, render::fonts::watermark_font, "visible only", variables::aimbot_isvisiblecheck);
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 150, variables::menu::x + 375, render::fonts::watermark_font, "Zurückhol", variables::backtrack);
		}
		break;
	case 1:
		menu_framework::group_box(variables::menu::x + 110, variables::menu::y + 35, 285, 260, render::fonts::watermark_font, "visuals", false); {
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 45, variables::menu::x + 375, render::fonts::watermark_font, "chams enable", variables::chams);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 60, 125, render::fonts::watermark_font, "Team red", variables::chamsvisteamred, 0.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 75, 125, render::fonts::watermark_font, "Team green", variables::chamsvisteamgreen, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 90, 125, render::fonts::watermark_font, "Team blue", variables::chamsvisteamblue, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 105, 125, render::fonts::watermark_font, "Enemy red", variables::chamsvisenemyred, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 120, 125, render::fonts::watermark_font, "Enemy green", variables::chamsvisenemygreen, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 135, 125, render::fonts::watermark_font, "Enemy blue", variables::chamsvisenemyblue, 1.f, 255.f);
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 60, variables::menu::x + 375, render::fonts::watermark_font, "xqz", variables::xqz);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 165, 125, render::fonts::watermark_font, "Team red", variables::chamsinvisteamred, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 180, 125, render::fonts::watermark_font, "Team green", variables::chamsinvisteamgreen, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 195, 125, render::fonts::watermark_font, "Team blue", variables::chamsinvisteamblue, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 210, 125, render::fonts::watermark_font, "Enemy red", variables::chamsinvisenemyred, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 225, 125, render::fonts::watermark_font, "Enemy green", variables::chamsinvisenemygreen, 1.f, 255.f);
			//menu_framework::slider(variables::menu::x + 120, variables::menu::y + 240, 125, render::fonts::watermark_font, "Enemy blue", variables::chamsinvisenemyblue, 1.f, 255.f);
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 75, variables::menu::x + 375, render::fonts::watermark_font, "durch wand seher", variables::esp);

		}
		break;
	case 2:
		menu_framework::group_box(variables::menu::x + 110, variables::menu::y + 35, 285, 260, render::fonts::watermark_font, "misc", false); {
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 45, variables::menu::x + 375, render::fonts::watermark_font, "Hasenhoppel", variables::test_bool);
			menu_framework::check_box(variables::menu::x + 120, variables::menu::y + 60, variables::menu::x + 375, render::fonts::watermark_font, "Antiziel", variables::antiaim);

		}
		break;
	}

	menu_framework::menu_movement(variables::menu::x, variables::menu::y, variables::menu::w, 30);
}

void menu::toggle() {
	if (GetAsyncKeyState(VK_INSERT) & 1)
		variables::menu::opened = !variables::menu::opened;
}
