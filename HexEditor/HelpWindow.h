#pragma once

#include "Window.h"

class HelpWindow : public Window
{
public:
    virtual void OnWindowRefreshed();
    virtual void OnWindowResized(int width, int height);
    virtual void OnKeyEvent(KeyEvent& keyEvent);

private:
    int m_x, m_y;
};