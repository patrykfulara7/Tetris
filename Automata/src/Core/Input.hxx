#pragma once

#include "ampch.hxx"

#include "Core/Window.hxx"

#include "Core/KeyCodes.hxx"

namespace Automata {
    class Input {
      public:
        static bool IsKeyPressed(Key key);
    };
} // namespace Automata
