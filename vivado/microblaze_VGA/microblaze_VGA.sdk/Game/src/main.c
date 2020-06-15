#include <stdlib.h>
#include <stdint.h>

#include "drivers/vga.h"

int main() {

	while(1){
		vga_clean();
		delay(1000);
		vga_draw_rect(50,50,5,5,0xf0f);
		delay(1000);
	}
}




