#pragma once

#include "ampch.hxx"

namespace Automata {
    class ElementBuffer {
      private:
        GLuint ID = 0;
        GLenum type = 0;
        GLsizei count = 0;

      public:
        ElementBuffer(GLsizeiptr size, const GLvoid *data, GLenum usage, GLenum type);
        ~ElementBuffer();

        void Bind() const;
        void Unbind() const;

        inline GLenum GetType() const {
            return type;
        }
        inline GLsizei GetCount() const {
            return count;
        }
        static inline std::shared_ptr<ElementBuffer> Create(GLsizeiptr size, const GLvoid *data, GLenum usage, GLenum type) {
            return std::make_shared<ElementBuffer>(size, data, usage, type);
        }
    };
} // namespace Automata
