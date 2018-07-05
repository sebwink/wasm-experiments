#include <emscripten.h>
#include <cmath>

EM_JS(void, draw_circle, (float x, float y, float r), {
    const canvas = document.querySelector('canvas');
    const context = canvas.getContext('2d');
    context.fillStyle = '#ff0000';
    context.beginPath();
    context.arc(x, y, r, 0, 2 * Math.PI);
    context.fill();
});

EM_JS(void, clear_canvas, (), {
    const canvas = document.querySelector('canvas');
    const context = canvas.getContext('2d');
    context.clearRect(0, 0, canvas.width, canvas.height);
});

static float t = 0.0;

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    void update() {
        float dt = 1.0f / 60.0f;
        t += dt;
        clear_canvas();
        draw_circle(350 + (std::sin(t) * 200),
                    250 - (std::sin(2*t) * 200),
                    50.0);
    }
}
