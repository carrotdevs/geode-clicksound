#pragma once
#include <Geode/Geode.hpp>
#include <matjson.hpp>
using namespace geode::prelude;

auto jsonString = "{"Clicks": {"Meme": [{"name": "huh", "prefix": "huh", "files": ["huh-Clicks-Meme-1"], "fileCount": 1}, {"name": "Dash", "prefix": "Dash", "files": ["Dash-Clicks-Meme-2", "Dash-Clicks-Meme-1", "Dash-Clicks-Meme-5", "Dash-Clicks-Meme-4", "Dash-Clicks-Meme-3"], "fileCount": 5}, {"name": "bwomp", "prefix": "bwomp", "files": ["bwomp-Clicks-Meme-1"], "fileCount": 1}, {"name": "spectre", "prefix": "spectre", "files": ["spectre-Clicks-Meme-1"], "fileCount": 1}, {"name": "el gato", "prefix": "el_gato", "files": [], "fileCount": 0}, {"name": "fire in the hole", "prefix": "fire_in_the_hole", "files": [], "fileCount": 0}, {"name": "vine boom", "prefix": "vine_boom", "files": [], "fileCount": 0}, {"name": "npestaohmygod", "prefix": "npestaohmygod", "files": ["npestaohmygod-Clicks-Meme-1"], "fileCount": 1}, {"name": "riot quack", "prefix": "riot_quack", "files": [], "fileCount": 0}, {"name": "gd death", "prefix": "gd_death", "files": [], "fileCount": 0}, {"name": "bonk", "prefix": "bonk", "files": ["bonk-Clicks-Meme-1"], "fileCount": 1}, {"name": "metal pipe", "prefix": "metal_pipe", "files": [], "fileCount": 0}, {"name": "hamburger", "prefix": "hamburger", "files": ["hamburger-Clicks-Meme-1"], "fileCount": 1}, {"name": "congregation jumpscare", "prefix": "congregation_jumpscare", "files": [], "fileCount": 0}, {"name": "gravity coil", "prefix": "gravity_coil", "files": [], "fileCount": 0}, {"name": "discordping", "prefix": "discordping", "files": ["discordping-Clicks-Meme-1"], "fileCount": 1}, {"name": "Windows USB", "prefix": "Windows_USB", "files": [], "fileCount": 0}, {"name": "car door slam", "prefix": "car_door_slam", "files": [], "fileCount": 0}, {"name": "aughhh", "prefix": "aughhh", "files": ["aughhh-Clicks-Meme-1"], "fileCount": 1}, {"name": "bad to the bone", "prefix": "bad_to_the_bone", "files": [], "fileCount": 0}, {"name": "i love gd cologne", "prefix": "i_love_gd_cologne", "files": [], "fileCount": 0}, {"name": "Soda", "prefix": "Soda", "files": ["Soda-Clicks-Meme-1"], "fileCount": 1}, {"name": "TikTok", "prefix": "TikTok", "files": ["TikTok-Clicks-Meme-1"], "fileCount": 1}, {"name": "plate", "prefix": "plate", "files": ["plate-Clicks-Meme-1"], "fileCount": 1}, {"name": "taco bell", "prefix": "taco_bell", "files": [], "fileCount": 0}, {"name": "plug", "prefix": "plug", "files": ["plug-Clicks-Meme-1"], "fileCount": 1}, {"name": "desk hit", "prefix": "desk_hit", "files": [], "fileCount": 0}, {"name": "water on the hill", "prefix": "water_on_the_hill", "files": [], "fileCount": 0}, {"name": "fuck", "prefix": "fuck", "files": ["fuck-Clicks-Meme-1"], "fileCount": 1}], "Useful": [{"name": "spaceuk", "prefix": "spaceuk", "files": ["spaceuk-Clicks-Useful-1"], "fileCount": 1}, {"name": "Faze", "prefix": "Faze", "files": ["Faze-Clicks-Useful-3", "Faze-Clicks-Useful-4", "Faze-Clicks-Useful-2", "Faze-Clicks-Useful-1", "Faze-Clicks-Useful-5"], "fileCount": 5}, {"name": "click1", "prefix": "click1", "files": ["click1-Clicks-Useful-1"], "fileCount": 1}, {"name": "uparrow3", "prefix": "uparrow3", "files": ["uparrow3-Clicks-Useful-1"], "fileCount": 1}, {"name": "Viper Mouse", "prefix": "Viper_Mouse", "files": [], "fileCount": 0}, {"name": "Logitech MX Anywhere 2s", "prefix": "Logitech_MX_Anywhere_2s", "files": [], "fileCount": 0}, {"name": "Pacitys", "prefix": "Pacitys", "files": ["Pacitys-clicks-Useful-3", "Pacitys-clicks-Useful-6", "Pacitys-clicks-Useful-5", "Pacitys-clicks-Useful-4", "Pacitys-clicks-Useful-8", "Pacitys-clicks-Useful-7", "Pacitys-clicks-Useful-2", "Pacitys-clicks-Useful-1"], "fileCount": 8}, {"name": "Bloody", "prefix": "Bloody", "files": ["Bloody-Clicks-Useful-2", "Bloody-Clicks-Useful-1", "Bloody-Clicks-Useful-3", "Bloody-Clicks-Useful-4", "Bloody-Clicks-Useful-5"], "fileCount": 5}, {"name": "Click Release 1", "prefix": "Click_Release_1", "files": [], "fileCount": 0}, {"name": "Click Release 2", "prefix": "Click_Release_2", "files": [], "fileCount": 0}, {"name": "Sayo Device", "prefix": "Sayo_Device", "files": [], "fileCount": 0}, {"name": "Vipers Spacebar", "prefix": "Vipers_Spacebar", "files": [], "fileCount": 0}, {"name": "Up Arrow 4", "prefix": "Up_Arrow_4", "files": [], "fileCount": 0}, {"name": "click3", "prefix": "click3", "files": ["click3-Clicks-Useful-1"], "fileCount": 1}, {"name": "osu! hit", "prefix": "osu!_hit", "files": [], "fileCount": 0}, {"name": "uparrow1", "prefix": "uparrow1", "files": ["uparrow1-Clicks-Useful-1"], "fileCount": 1}, {"name": "screen tap 1", "prefix": "screen_tap_1", "files": [], "fileCount": 0}, {"name": "uparrow1 click", "prefix": "uparrow1_click", "files": [], "fileCount": 0}, {"name": "Mouse Click 7", "prefix": "Mouse_Click_7", "files": [], "fileCount": 0}, {"name": "Neiro", "prefix": "Neiro", "files": ["Neiro-Clicks-Useful-1"], "fileCount": 1}, {"name": "Space Bar 2", "prefix": "Space_Bar_2", "files": [], "fileCount": 0}, {"name": "doggie", "prefix": "doggie", "files": ["doggie-Clicks-Useful-1"], "fileCount": 1}, {"name": "Zoink", "prefix": "Zoink", "files": ["Zoink-Clicks-Useful-1"], "fileCount": 1}, {"name": "metronome", "prefix": "metronome", "files": ["metronome-Clicks-Useful-1"], "fileCount": 1}, {"name": "cursed", "prefix": "cursed", "files": ["cursed-Clicks-Useful-1"], "fileCount": 1}, {"name": "Click Release 3", "prefix": "Click_Release_3", "files": [], "fileCount": 0}, {"name": "uparrow2", "prefix": "uparrow2", "files": ["uparrow2-Clicks-Useful-1"], "fileCount": 1}, {"name": "spacebar1", "prefix": "spacebar1", "files": ["spacebar1-Clicks-Useful-1"], "fileCount": 1}, {"name": "gazonk", "prefix": "gazonk", "files": ["gazonk-Clicks-Useful-1"], "fileCount": 1}, {"name": "Mouse Click 6", "prefix": "Mouse_Click_6", "files": [], "fileCount": 0}, {"name": "click2", "prefix": "click2", "files": ["click2-Clicks-Useful-1"], "fileCount": 1}, {"name": "Npesta", "prefix": "Npesta", "files": ["Npesta-Clicks-Useful-1"], "fileCount": 1}, {"name": "Click Release 4", "prefix": "Click_Release_4", "files": [], "fileCount": 0}, {"name": "trusta", "prefix": "trusta", "files": ["trusta-Clicks-Useful-1"], "fileCount": 1}, {"name": "Logitech G502", "prefix": "Logitech_G502", "files": [], "fileCount": 0}, {"name": "Electro", "prefix": "Electro", "files": ["Electro-Clicks-Useful-5", "Electro-Clicks-Useful-4", "Electro-Clicks-Useful-10", "Electro-Clicks-Useful-6", "Electro-Clicks-Useful-7", "Electro-Clicks-Useful-9", "Electro-Clicks-Useful-2", "Electro-Clicks-Useful-3", "Electro-Clicks-Useful-1", "Electro-Clicks-Useful-8"], "fileCount": 10}]}, "Releases": {"Meme": [{"name": "TikTok", "prefix": "TikTok", "files": ["TikTok-Release-Meme-1"], "fileCount": 1}], "Useful": [{"name": "Faze", "prefix": "Faze", "files": ["Faze-Release-Useful-1", "Faze-Release-Useful-4", "Faze-Release-Useful-2", "Faze-Release-Useful-3"], "fileCount": 4}, {"name": "Viper Mouse", "prefix": "Viper_Mouse", "files": [], "fileCount": 0}, {"name": "Logitech MX Anywhere 2s", "prefix": "Logitech_MX_Anywhere_2s", "files": [], "fileCount": 0}, {"name": "Pacitys", "prefix": "Pacitys", "files": ["Pacitys-Release-Useful-1", "Pacitys-Release-Useful-6", "Pacitys-Release-Useful-5", "Pacitys-Release-Useful-2", "Pacitys-Release-Useful-3", "Pacitys-Release-Useful-8", "Pacitys-Release-Useful-7", "Pacitys-Release-Useful-4"], "fileCount": 8}, {"name": "Bloody", "prefix": "Bloody", "files": ["Bloody-Release-Useful-3", "Bloody-Release-Useful-2", "Bloody-Release-Useful-1", "Bloody-Release-Useful-4", "Bloody-Release-Useful-5"], "fileCount": 5}, {"name": "Click Release 1", "prefix": "Click_Release_1", "files": [], "fileCount": 0}, {"name": "Click Release 2", "prefix": "Click_Release_2", "files": [], "fileCount": 0}, {"name": "Sayo Device", "prefix": "Sayo_Device", "files": [], "fileCount": 0}, {"name": "Vipers Spacebar", "prefix": "Vipers_Spacebar", "files": [], "fileCount": 0}, {"name": "Up Arrow 4", "prefix": "Up_Arrow_4", "files": [], "fileCount": 0}, {"name": "Mouse Click 7", "prefix": "Mouse_Click_7", "files": [], "fileCount": 0}, {"name": "Neiro", "prefix": "Neiro", "files": ["Neiro-Release-Useful-1"], "fileCount": 1}, {"name": "Space Bar 2", "prefix": "Space_Bar_2", "files": [], "fileCount": 0}, {"name": "Zoink", "prefix": "Zoink", "files": ["Zoink-Release-Useful-1"], "fileCount": 1}, {"name": "Click Release 3", "prefix": "Click_Release_3", "files": [], "fileCount": 0}, {"name": "Mouse Click 6", "prefix": "Mouse_Click_6", "files": [], "fileCount": 0}, {"name": "Npesta", "prefix": "Npesta", "files": ["Npesta-Release-Useful-1"], "fileCount": 1}, {"name": "Click Release 4", "prefix": "Click_Release_4", "files": [], "fileCount": 0}, {"name": "Logitech G502", "prefix": "Logitech_G502", "files": [], "fileCount": 0}, {"name": "Electro", "prefix": "Electro", "files": ["Electro-Release-Useful-3", "Electro-Release-Useful-4", "Electro-Release-Useful-5", "Electro-Release-Useful-9", "Electro-Release-Useful-10", "Electro-Release-Useful-1", "Electro-Release-Useful-6", "Electro-Release-Useful-8", "Electro-Release-Useful-7", "Electro-Release-Useful-2"], "fileCount": 10}]}}";

matjson::Value getJson() {
return matjson::parse(jsonString)
}
