#include "Graphics/VertexBuffer.hxx"

namespace Automata {
    VertexBuffer::VertexBuffer(GLsizeiptr size, const GLvoid *data, GLenum usage) {
        glGenBuffers(1, &ID);
        glBindBuffer(GL_ARRAY_BUFFER, ID);
        glBufferData(GL_ARRAY_BUFFER, size, data, usage);
    }

    VertexBuffer::~VertexBuffer() {
        glDeleteBuffers(1, &ID);
    }

    void VertexBuffer::Bind() const {
        glBindBuffer(GL_ARRAY_BUFFER, ID);
    }

    void VertexBuffer::Unbind() const {
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }
} // namespace Automata
