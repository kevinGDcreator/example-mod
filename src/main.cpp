#include <Geode/Geode.hpp>
#include <Geode/modify/CCDirector.hpp>

using namespace geode::prelude;

class $modify(MyDirector, CCDirector) {
    void showStats() {
        CCDirector::showStats();

        bool enabled = Mod::get()->getSettingValue<bool>("enable-240");

        if (enabled && m_FPSLabel) {
            m_FPSLabel->setString("240.0 FPS");
        }
    }
};
