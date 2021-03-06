#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param, std::string_view first_name_param, std::string_view last_name_param)
{
    m_game = game_param;
    m_first_name = first_name_param;
    m_last_name = last_name_param;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << "Player: [ game: " << player.m_game << ", names: " << player.m_first_name << " " << player.m_last_name << " ]";
    return out;
}