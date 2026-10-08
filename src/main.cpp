##include <Geode/Geode.hpp>
#include <Geode/modify/CCDirector.hpp>

using namespace geode::prelude;

class $modify(MyDirector, CCDirector) {
    void showFPS() {
        CCDirector::showFPS();

        bool habilitado = Mod::get()->getSettingValue<bool>("habilitar-240");

        if (habilitado && m_pFPSLabel) {
            m_pFPSLabel->setString("240.0 FPS");
        }
    }
};
