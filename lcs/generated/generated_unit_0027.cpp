#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_render_config.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0027[4057] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 106, 107, 0, 0, 0, 108, 0,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119,
    0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182,
    0, 183, 0, 184, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 197, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0,
    210, 0, 0, 211, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 220, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0,
    0, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0,
    0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0,
    248, 0, 249, 0, 0, 250, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254,
    0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0,
    0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0,
    272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0,
    280, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 0, 286, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0,
    0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 300, 0, 0, 0, 0, 0, 301, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0,
    318, 0, 319, 0, 0, 320, 0, 321, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 329, 0, 330, 0, 0, 331, 332,
    0, 333, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0,
    0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0,
    404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0,
    0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 440, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 0, 446, 447, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 455, 0, 456, 457, 0,
    0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 460, 0, 0, 0, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 0,
    0, 0, 465, 0, 466, 0, 0, 0, 0, 467, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 474, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0,
    0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486,
    0, 0, 0, 0, 487, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0,
    0, 495, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 511, 0, 0, 0, 512, 0, 513, 0, 0, 0,
    0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0,
    0, 522, 0, 523, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0,
    0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 542, 0, 0,
    0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 550, 0, 0,
    0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0,
    0, 0, 558, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0,
    564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 0,
    572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 584,
    0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592,
    0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600,
    0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 0, 0,
    0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614,
    0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620,
    0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 636, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 645, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 657, 0,
    658, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 662,
};
void recomp_unit_0027_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08870000u;
        entry_id = (entry_delta < 16228u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0027[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08870000;
    case 2u: goto L_0887000C;
    case 3u: goto L_08870018;
    case 4u: goto L_08870048;
    case 5u: goto L_0887006C;
    case 6u: goto L_088700AC;
    case 7u: goto L_088700C8;
    case 8u: goto L_088700D4;
    case 9u: goto L_08870100;
    case 10u: goto L_0887011C;
    case 11u: goto L_08870130;
    case 12u: goto L_0887014C;
    case 13u: goto L_08870154;
    case 14u: goto L_08870174;
    case 15u: goto L_08870190;
    case 16u: goto L_08870198;
    case 17u: goto L_088701A0;
    case 18u: goto L_088701D4;
    case 19u: goto L_088701E8;
    case 20u: goto L_088701F4;
    case 21u: goto L_08870218;
    case 22u: goto L_08870228;
    case 23u: goto L_08870234;
    case 24u: goto L_0887023C;
    case 25u: goto L_0887024C;
    case 26u: goto L_08870260;
    case 27u: goto L_0887027C;
    case 28u: goto L_0887029C;
    case 29u: goto L_088702BC;
    case 30u: goto L_088702C4;
    case 31u: goto L_088702D0;
    case 32u: goto L_088702EC;
    case 33u: goto L_088702F4;
    case 34u: goto L_08870314;
    case 35u: goto L_08870324;
    case 36u: goto L_0887032C;
    case 37u: goto L_0887035C;
    case 38u: goto L_0887036C;
    case 39u: goto L_08870374;
    case 40u: goto L_088703A8;
    case 41u: goto L_088703B4;
    case 42u: goto L_088703C8;
    case 43u: goto L_088703D0;
    case 44u: goto L_08870400;
    case 45u: goto L_088704F0;
    case 46u: goto L_0887050C;
    case 47u: goto L_0887051C;
    case 48u: goto L_0887052C;
    case 49u: goto L_0887056C;
    case 50u: goto L_08870578;
    case 51u: goto L_088705DC;
    case 52u: goto L_088705FC;
    case 53u: goto L_08870614;
    case 54u: goto L_0887065C;
    case 55u: goto L_0887068C;
    case 56u: goto L_088706B0;
    case 57u: goto L_088706D4;
    case 58u: goto L_088706E4;
    case 59u: goto L_088706F4;
    case 60u: goto L_08870704;
    case 61u: goto L_08870714;
    case 62u: goto L_0887072C;
    case 63u: goto L_08870750;
    case 64u: goto L_08870770;
    case 65u: goto L_0887078C;
    case 66u: goto L_088707A8;
    case 67u: goto L_088707C4;
    case 68u: goto L_088707D0;
    case 69u: goto L_088707E4;
    case 70u: goto L_08870800;
    case 71u: goto L_0887081C;
    case 72u: goto L_08870824;
    case 73u: goto L_0887082C;
    case 74u: goto L_08870848;
    case 75u: goto L_08870858;
    case 76u: goto L_08870868;
    case 77u: goto L_08870878;
    case 78u: goto L_08870890;
    case 79u: goto L_088708B4;
    case 80u: goto L_088708D4;
    case 81u: goto L_088708FC;
    case 82u: goto L_0887090C;
    case 83u: goto L_0887093C;
    case 84u: goto L_08870948;
    case 85u: goto L_0887096C;
    case 86u: goto L_0887097C;
    case 87u: goto L_088709A8;
    case 88u: goto L_088709B0;
    case 89u: goto L_088709B8;
    case 90u: goto L_088709C0;
    case 91u: goto L_088709C8;
    case 92u: goto L_08870A20;
    case 93u: goto L_08870A2C;
    case 94u: goto L_08870A58;
    case 95u: goto L_08870A60;
    case 96u: goto L_08870A70;
    case 97u: goto L_08870AD0;
    case 98u: goto L_08870AE8;
    case 99u: goto L_08870B00;
    case 100u: goto L_08870B88;
    case 101u: goto L_08870B98;
    case 102u: goto L_08870BB0;
    case 103u: goto L_08870BC0;
    case 104u: goto L_08870BD0;
    case 105u: goto L_08870BE0;
    case 106u: goto L_08870BE4;
    case 107u: goto L_08870BE8;
    case 108u: goto L_08870BF8;
    case 109u: goto L_08870C08;
    case 110u: goto L_08870C10;
    case 111u: goto L_08870C18;
    case 112u: goto L_08870C24;
    case 113u: goto L_08870C74;
    case 114u: goto L_08870C84;
    case 115u: goto L_08870CAC;
    case 116u: goto L_08870CB8;
    case 117u: goto L_08870CE4;
    case 118u: goto L_08870CEC;
    case 119u: goto L_08870CFC;
    case 120u: goto L_08870D04;
    case 121u: goto L_08870D14;
    case 122u: goto L_08870D2C;
    case 123u: goto L_08870D34;
    case 124u: goto L_08870D40;
    case 125u: goto L_08870D50;
    case 126u: goto L_08870D64;
    case 127u: goto L_08870D7C;
    case 128u: goto L_08870D90;
    case 129u: goto L_08870DA0;
    case 130u: goto L_08870DB4;
    case 131u: goto L_08870DCC;
    case 132u: goto L_08870DE0;
    case 133u: goto L_08870E04;
    case 134u: goto L_08870E0C;
    case 135u: goto L_08870E20;
    case 136u: goto L_08870E38;
    case 137u: goto L_08870E54;
    case 138u: goto L_08870E5C;
    case 139u: goto L_08870E6C;
    case 140u: goto L_08870E80;
    case 141u: goto L_08870E98;
    case 142u: goto L_08870EAC;
    case 143u: goto L_08870ED0;
    case 144u: goto L_08870ED4;
    case 145u: goto L_08870F04;
    case 146u: goto L_08870F20;
    case 147u: goto L_08870F6C;
    case 148u: goto L_08870F74;
    case 149u: goto L_08870F84;
    case 150u: goto L_08870F9C;
    case 151u: goto L_08870FB8;
    case 152u: goto L_08870FC0;
    case 153u: goto L_08870FD4;
    case 154u: goto L_08870FDC;
    case 155u: goto L_08870FE4;
    case 156u: goto L_08870FEC;
    case 157u: goto L_08871010;
    case 158u: goto L_08871090;
    case 159u: goto L_088710AC;
    case 160u: goto L_088710BC;
    case 161u: goto L_088710DC;
    case 162u: goto L_088710F0;
    case 163u: goto L_088711B4;
    case 164u: goto L_088711BC;
    case 165u: goto L_088711D0;
    case 166u: goto L_088711F0;
    case 167u: goto L_08871214;
    case 168u: goto L_08871224;
    case 169u: goto L_0887124C;
    case 170u: goto L_08871268;
    case 171u: goto L_08871270;
    case 172u: goto L_0887127C;
    case 173u: goto L_08871288;
    case 174u: goto L_088712B4;
    case 175u: goto L_088712E4;
    case 176u: goto L_088712EC;
    case 177u: goto L_088712F4;
    case 178u: goto L_08871308;
    case 179u: goto L_08871328;
    case 180u: goto L_08871334;
    case 181u: goto L_08871358;
    case 182u: goto L_0887137C;
    case 183u: goto L_08871384;
    case 184u: goto L_0887138C;
    case 185u: goto L_08871390;
    case 186u: goto L_088713A4;
    case 187u: goto L_088713B0;
    case 188u: goto L_088713B8;
    case 189u: goto L_088713E8;
    case 190u: goto L_08871458;
    case 191u: goto L_08871488;
    case 192u: goto L_088714F0;
    case 193u: goto L_08871518;
    case 194u: goto L_08871524;
    case 195u: goto L_08871530;
    case 196u: goto L_08871538;
    case 197u: goto L_0887153C;
    case 198u: goto L_08871540;
    case 199u: goto L_0887154C;
    case 200u: goto L_08871568;
    case 201u: goto L_088715B4;
    case 202u: goto L_088715DC;
    case 203u: goto L_088715E4;
    case 204u: goto L_088715EC;
    case 205u: goto L_0887161C;
    case 206u: goto L_08871650;
    case 207u: goto L_0887165C;
    case 208u: goto L_0887166C;
    case 209u: goto L_08871678;
    case 210u: goto L_08871680;
    case 211u: goto L_0887168C;
    case 212u: goto L_08871690;
    case 213u: goto L_088716A8;
    case 214u: goto L_088716C0;
    case 215u: goto L_088716D4;
    case 216u: goto L_088716EC;
    case 217u: goto L_08871700;
    case 218u: goto L_08871718;
    case 219u: goto L_0887172C;
    case 220u: goto L_08871734;
    case 221u: goto L_08871738;
    case 222u: goto L_08871740;
    case 223u: goto L_08871774;
    case 224u: goto L_08871784;
    case 225u: goto L_0887178C;
    case 226u: goto L_08871794;
    case 227u: goto L_0887179C;
    case 228u: goto L_088717A4;
    case 229u: goto L_088717AC;
    case 230u: goto L_088717C4;
    case 231u: goto L_088717D0;
    case 232u: goto L_088717EC;
    case 233u: goto L_088717F4;
    case 234u: goto L_08871810;
    case 235u: goto L_08871818;
    case 236u: goto L_08871824;
    case 237u: goto L_0887183C;
    case 238u: goto L_08871848;
    case 239u: goto L_08871864;
    case 240u: goto L_0887186C;
    case 241u: goto L_08871888;
    case 242u: goto L_08871890;
    case 243u: goto L_0887189C;
    case 244u: goto L_088718B4;
    case 245u: goto L_088718C0;
    case 246u: goto L_088718DC;
    case 247u: goto L_088718E4;
    case 248u: goto L_08871900;
    case 249u: goto L_08871908;
    case 250u: goto L_08871914;
    case 251u: goto L_08871918;
    case 252u: goto L_0887192C;
    case 253u: goto L_0887196C;
    case 254u: goto L_0887197C;
    case 255u: goto L_08871984;
    case 256u: goto L_0887198C;
    case 257u: goto L_08871994;
    case 258u: goto L_0887199C;
    case 259u: goto L_088719A4;
    case 260u: goto L_088719B8;
    case 261u: goto L_088719C4;
    case 262u: goto L_088719E0;
    case 263u: goto L_088719E8;
    case 264u: goto L_08871A04;
    case 265u: goto L_08871A0C;
    case 266u: goto L_08871A18;
    case 267u: goto L_08871A2C;
    case 268u: goto L_08871A38;
    case 269u: goto L_08871A54;
    case 270u: goto L_08871A5C;
    case 271u: goto L_08871A78;
    case 272u: goto L_08871A80;
    case 273u: goto L_08871A8C;
    case 274u: goto L_08871AA0;
    case 275u: goto L_08871AAC;
    case 276u: goto L_08871AC8;
    case 277u: goto L_08871AD0;
    case 278u: goto L_08871AEC;
    case 279u: goto L_08871AF4;
    case 280u: goto L_08871B00;
    case 281u: goto L_08871B04;
    case 282u: goto L_08871B18;
    case 283u: goto L_08871B50;
    case 284u: goto L_08871B58;
    case 285u: goto L_08871B68;
    case 286u: goto L_08871B78;
    case 287u: goto L_08871B88;
    case 288u: goto L_08871BAC;
    case 289u: goto L_08871BC0;
    case 290u: goto L_08871BC8;
    case 291u: goto L_08871BE8;
    case 292u: goto L_08871BF0;
    case 293u: goto L_08871C08;
    case 294u: goto L_08871C10;
    case 295u: goto L_08871C18;
    case 296u: goto L_08871C20;
    case 297u: goto L_08871C28;
    case 298u: goto L_08871C30;
    case 299u: goto L_08871C38;
    case 300u: goto L_08871C3C;
    case 301u: goto L_08871C54;
    case 302u: goto L_08871C58;
    case 303u: goto L_08871C84;
    case 304u: goto L_08871CBC;
    case 305u: goto L_08871CC4;
    case 306u: goto L_08871CD4;
    case 307u: goto L_08871CE4;
    case 308u: goto L_08871CF4;
    case 309u: goto L_08871D18;
    case 310u: goto L_08871D2C;
    case 311u: goto L_08871D4C;
    case 312u: goto L_08871D54;
    case 313u: goto L_08871D60;
    case 314u: goto L_08871D78;
    case 315u: goto L_08871DA8;
    case 316u: goto L_08871DE8;
    case 317u: goto L_08871DF4;
    case 318u: goto L_08871E00;
    case 319u: goto L_08871E08;
    case 320u: goto L_08871E14;
    case 321u: goto L_08871E1C;
    case 322u: goto L_08871E20;
    case 323u: goto L_08871E28;
    case 324u: goto L_08871E30;
    case 325u: goto L_08871E38;
    case 326u: goto L_08871E48;
    case 327u: goto L_08871E50;
    case 328u: goto L_08871E58;
    case 329u: goto L_08871E64;
    case 330u: goto L_08871E6C;
    case 331u: goto L_08871E78;
    case 332u: goto L_08871E7C;
    case 333u: goto L_08871E84;
    case 334u: goto L_08871E88;
    case 335u: goto L_08871E90;
    case 336u: goto L_08871EC0;
    case 337u: goto L_08871EDC;
    case 338u: goto L_08871EE8;
    case 339u: goto L_08871EF0;
    case 340u: goto L_08871F08;
    case 341u: goto L_08871F20;
    case 342u: goto L_08871F34;
    case 343u: goto L_08871F64;
    case 344u: goto L_08871F70;
    case 345u: goto L_08871F88;
    case 346u: goto L_08871F9C;
    case 347u: goto L_08871FB0;
    case 348u: goto L_08871FD4;
    case 349u: goto L_08871FEC;
    case 350u: goto L_08872010;
    case 351u: goto L_0887202C;
    case 352u: goto L_0887206C;
    case 353u: goto L_08872078;
    case 354u: goto L_08872090;
    case 355u: goto L_088720A4;
    case 356u: goto L_088720C4;
    case 357u: goto L_088720E8;
    case 358u: goto L_08872108;
    case 359u: goto L_088721A0;
    case 360u: goto L_088721B4;
    case 361u: goto L_088721CC;
    case 362u: goto L_088721E0;
    case 363u: goto L_0887222C;
    case 364u: goto L_0887224C;
    case 365u: goto L_0887227C;
    case 366u: goto L_088722A4;
    case 367u: goto L_088722B0;
    case 368u: goto L_088722C8;
    case 369u: goto L_088722DC;
    case 370u: goto L_088722F8;
    case 371u: goto L_08872320;
    case 372u: goto L_0887232C;
    case 373u: goto L_08872344;
    case 374u: goto L_08872358;
    case 375u: goto L_08872374;
    case 376u: goto L_0887239C;
    case 377u: goto L_088723A8;
    case 378u: goto L_088723C0;
    case 379u: goto L_088723D4;
    case 380u: goto L_088723F0;
    case 381u: goto L_0887240C;
    case 382u: goto L_08872428;
    case 383u: goto L_08872444;
    case 384u: goto L_08872470;
    case 385u: goto L_08872488;
    case 386u: goto L_08872498;
    case 387u: goto L_088724A0;
    case 388u: goto L_088724B8;
    case 389u: goto L_088724C0;
    case 390u: goto L_088724C8;
    case 391u: goto L_088724E0;
    case 392u: goto L_0887250C;
    case 393u: goto L_08872520;
    case 394u: goto L_08872530;
    case 395u: goto L_08872538;
    case 396u: goto L_0887254C;
    case 397u: goto L_08872568;
    case 398u: goto L_08872574;
    case 399u: goto L_08872590;
    case 400u: goto L_0887259C;
    case 401u: goto L_088725B8;
    case 402u: goto L_088725DC;
    case 403u: goto L_088725F8;
    case 404u: goto L_08872600;
    case 405u: goto L_0887260C;
    case 406u: goto L_08872614;
    case 407u: goto L_08872628;
    case 408u: goto L_08872644;
    case 409u: goto L_08872650;
    case 410u: goto L_0887266C;
    case 411u: goto L_08872678;
    case 412u: goto L_08872694;
    case 413u: goto L_088726B8;
    case 414u: goto L_088726D4;
    case 415u: goto L_088726DC;
    case 416u: goto L_088726E8;
    case 417u: goto L_0887271C;
    case 418u: goto L_08872754;
    case 419u: goto L_08872788;
    case 420u: goto L_08872798;
    case 421u: goto L_088727D0;
    case 422u: goto L_088727DC;
    case 423u: goto L_08872814;
    case 424u: goto L_08872820;
    case 425u: goto L_08872858;
    case 426u: goto L_088728D0;
    case 427u: goto L_08872908;
    case 428u: goto L_08872914;
    case 429u: goto L_0887291C;
    case 430u: goto L_08872928;
    case 431u: goto L_08872930;
    case 432u: goto L_0887294C;
    case 433u: goto L_088729E0;
    case 434u: goto L_08872A24;
    case 435u: goto L_08872A3C;
    case 436u: goto L_08872A4C;
    case 437u: goto L_08872A58;
    case 438u: goto L_08872A64;
    case 439u: goto L_08872A6C;
    case 440u: goto L_08872A78;
    case 441u: goto L_08872A80;
    case 442u: goto L_08872AA8;
    case 443u: goto L_08872AB8;
    case 444u: goto L_08872AC0;
    case 445u: goto L_08872AD4;
    case 446u: goto L_08872AE0;
    case 447u: goto L_08872AE4;
    case 448u: goto L_08872B00;
    case 449u: goto L_08872B20;
    case 450u: goto L_08872B28;
    case 451u: goto L_08872B30;
    case 452u: goto L_08872B48;
    case 453u: goto L_08872B58;
    case 454u: goto L_08872B64;
    case 455u: goto L_08872B6C;
    case 456u: goto L_08872B74;
    case 457u: goto L_08872B78;
    case 458u: goto L_08872B84;
    case 459u: goto L_08872BC0;
    case 460u: goto L_08872BC4;
    case 461u: goto L_08872BD8;
    case 462u: goto L_08872BE4;
    case 463u: goto L_08872BEC;
    case 464u: goto L_08872BF4;
    case 465u: goto L_08872C08;
    case 466u: goto L_08872C10;
    case 467u: goto L_08872C24;
    case 468u: goto L_08872C28;
    case 469u: goto L_08872C38;
    case 470u: goto L_08872C44;
    case 471u: goto L_08872C58;
    case 472u: goto L_08872C60;
    case 473u: goto L_08872C70;
    case 474u: goto L_08872C74;
    case 475u: goto L_08872C84;
    case 476u: goto L_08872CA0;
    case 477u: goto L_08872CC8;
    case 478u: goto L_08872CD0;
    case 479u: goto L_08872CE8;
    case 480u: goto L_08872D04;
    case 481u: goto L_08872D38;
    case 482u: goto L_08872D40;
    case 483u: goto L_08872D48;
    case 484u: goto L_08872D5C;
    case 485u: goto L_08872D64;
    case 486u: goto L_08872D7C;
    case 487u: goto L_08872D90;
    case 488u: goto L_08872D94;
    case 489u: goto L_08872D9C;
    case 490u: goto L_08872DA4;
    case 491u: goto L_08872DAC;
    case 492u: goto L_08872DB4;
    case 493u: goto L_08872DDC;
    case 494u: goto L_08872DE4;
    case 495u: goto L_08872E04;
    case 496u: goto L_08872E0C;
    case 497u: goto L_08872E18;
    case 498u: goto L_08872E28;
    case 499u: goto L_08872E34;
    case 500u: goto L_08872E3C;
    case 501u: goto L_08872E48;
    case 502u: goto L_08872E50;
    case 503u: goto L_08872E64;
    case 504u: goto L_08872E74;
    case 505u: goto L_08872E90;
    case 506u: goto L_08872E98;
    case 507u: goto L_08872EA0;
    case 508u: goto L_08872EAC;
    case 509u: goto L_08872ECC;
    case 510u: goto L_08872ED4;
    case 511u: goto L_08872ED8;
    case 512u: goto L_08872EE8;
    case 513u: goto L_08872EF0;
    case 514u: goto L_08872F04;
    case 515u: goto L_08872F0C;
    case 516u: goto L_08872F2C;
    case 517u: goto L_08872F38;
    case 518u: goto L_08872F44;
    case 519u: goto L_08872F50;
    case 520u: goto L_08872F5C;
    case 521u: goto L_08872F78;
    case 522u: goto L_08872F84;
    case 523u: goto L_08872F8C;
    case 524u: goto L_08872F90;
    case 525u: goto L_08872F9C;
    case 526u: goto L_08872FA8;
    case 527u: goto L_08872FB0;
    case 528u: goto L_08872FB8;
    case 529u: goto L_08872FCC;
    case 530u: goto L_08872FD4;
    case 531u: goto L_08872FF8;
    case 532u: goto L_0887300C;
    case 533u: goto L_08873028;
    case 534u: goto L_08873034;
    case 535u: goto L_08873040;
    case 536u: goto L_08873048;
    case 537u: goto L_08873050;
    case 538u: goto L_08873058;
    case 539u: goto L_08873060;
    case 540u: goto L_08873068;
    case 541u: goto L_08873070;
    case 542u: goto L_08873074;
    case 543u: goto L_08873088;
    case 544u: goto L_088730A8;
    case 545u: goto L_088730B8;
    case 546u: goto L_088730C0;
    case 547u: goto L_088730D0;
    case 548u: goto L_088730D8;
    case 549u: goto L_088730F0;
    case 550u: goto L_088730F4;
    case 551u: goto L_08873108;
    case 552u: goto L_08873118;
    case 553u: goto L_08873140;
    case 554u: goto L_08873150;
    case 555u: goto L_08873158;
    case 556u: goto L_08873168;
    case 557u: goto L_08873170;
    case 558u: goto L_08873188;
    case 559u: goto L_0887318C;
    case 560u: goto L_088731A0;
    case 561u: goto L_088731B4;
    case 562u: goto L_088731C8;
    case 563u: goto L_088731F4;
    case 564u: goto L_08873200;
    case 565u: goto L_0887322C;
    case 566u: goto L_08873248;
    case 567u: goto L_08873250;
    case 568u: goto L_08873258;
    case 569u: goto L_08873260;
    case 570u: goto L_08873268;
    case 571u: goto L_08873270;
    case 572u: goto L_08873280;
    case 573u: goto L_08873290;
    case 574u: goto L_088732A8;
    case 575u: goto L_088732B8;
    case 576u: goto L_088732D0;
    case 577u: goto L_08873334;
    case 578u: goto L_08873350;
    case 579u: goto L_0887336C;
    case 580u: goto L_08873408;
    case 581u: goto L_08873418;
    case 582u: goto L_08873430;
    case 583u: goto L_08873478;
    case 584u: goto L_0887347C;
    case 585u: goto L_0887348C;
    case 586u: goto L_08873494;
    case 587u: goto L_088734B0;
    case 588u: goto L_088734B8;
    case 589u: goto L_088734CC;
    case 590u: goto L_088734EC;
    case 591u: goto L_088734F4;
    case 592u: goto L_088734FC;
    case 593u: goto L_08873510;
    case 594u: goto L_08873524;
    case 595u: goto L_08873538;
    case 596u: goto L_08873544;
    case 597u: goto L_08873550;
    case 598u: goto L_08873568;
    case 599u: goto L_08873574;
    case 600u: goto L_0887357C;
    case 601u: goto L_08873590;
    case 602u: goto L_08873598;
    case 603u: goto L_088735A0;
    case 604u: goto L_088735B8;
    case 605u: goto L_088735C4;
    case 606u: goto L_088735CC;
    case 607u: goto L_088735E0;
    case 608u: goto L_088735E8;
    case 609u: goto L_088735F0;
    case 610u: goto L_08873604;
    case 611u: goto L_08873610;
    case 612u: goto L_08873624;
    case 613u: goto L_08873630;
    case 614u: goto L_0887367C;
    case 615u: goto L_08873688;
    case 616u: goto L_088736D0;
    case 617u: goto L_08873740;
    case 618u: goto L_0887374C;
    case 619u: goto L_08873770;
    case 620u: goto L_0887377C;
    case 621u: goto L_08873790;
    case 622u: goto L_0887379C;
    case 623u: goto L_088737A8;
    case 624u: goto L_088737B8;
    case 625u: goto L_088737D0;
    case 626u: goto L_088737E4;
    case 627u: goto L_0887382C;
    case 628u: goto L_0887383C;
    case 629u: goto L_08873844;
    case 630u: goto L_0887384C;
    case 631u: goto L_08873854;
    case 632u: goto L_088738A0;
    case 633u: goto L_088738A8;
    case 634u: goto L_088738DC;
    case 635u: goto L_088738E4;
    case 636u: goto L_088738E8;
    case 637u: goto L_08873918;
    case 638u: goto L_08873920;
    case 639u: goto L_08873928;
    case 640u: goto L_08873948;
    case 641u: goto L_08873954;
    case 642u: goto L_0887395C;
    case 643u: goto L_08873964;
    case 644u: goto L_0887396C;
    case 645u: goto L_08873978;
    case 646u: goto L_08873B98;
    case 647u: goto L_08873C18;
    case 648u: goto L_08873D70;
    case 649u: goto L_08873DB4;
    case 650u: goto L_08873DC4;
    case 651u: goto L_08873E2C;
    case 652u: goto L_08873E34;
    case 653u: goto L_08873E50;
    case 654u: goto L_08873E60;
    case 655u: goto L_08873E6C;
    case 656u: goto L_08873E74;
    case 657u: goto L_08873E78;
    case 658u: goto L_08873E80;
    case 659u: goto L_08873E88;
    case 660u: goto L_08873E9C;
    case 661u: goto L_08873F40;
    case 662u: goto L_08873F60;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08870000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08870018;
      }
      goto L_0887000C;
    }
L_0887000C:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 48u);
    goto L_08870018;
L_08870018:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 176u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1464)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08870048;
L_08870048:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1468)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1464)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870048;
      }
      goto L_0887006C;
    }
L_0887006C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2888)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x088700ACu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 532u, 0x0886F2D4u>(ctx, &aot_mem) && ctx.pc == 0x088700ACu) goto L_088700AC;
    return;
L_088700AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2884)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887011C;
      }
      goto L_088700C8;
    }
L_088700C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887011C;
      }
      goto L_088700D4;
    }
L_088700D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08870100u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 482u, 0x0886EDE8u>(ctx, &aot_mem) && ctx.pc == 0x08870100u) goto L_08870100;
    return;
L_08870100:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2884), ctx.gpr[5]);
    goto L_0887011C;
L_0887011C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08870154;
      }
      goto L_08870130;
    }
L_08870130:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0887014Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 482u, 0x0886EDE8u>(ctx, &aot_mem) && ctx.pc == 0x0887014Cu) goto L_0887014C;
    return;
L_0887014C:
    ctx.gpr[30] = (ctx.gpr[30] + ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    goto L_08870154;
L_08870154:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887027C;
      }
      goto L_08870174;
    }
L_08870174:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870198;
      }
      goto L_08870190;
    }
L_08870190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870260;
      }
      goto L_08870198;
    }
L_08870198:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887023C;
      }
      goto L_088701A0;
    }
L_088701A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887023C;
      }
      goto L_088701D4;
    }
L_088701D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088701E8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 482u, 0x0886EDE8u>(ctx, &aot_mem) && ctx.pc == 0x088701E8u) goto L_088701E8;
    return;
L_088701E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887023C;
      }
      goto L_088701F4;
    }
L_088701F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2878), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870234;
      }
      goto L_08870218;
    }
L_08870218:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2904), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08870228u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08870228u) goto L_08870228;
    return;
L_08870228:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2904)));
      if (branch_taken) {
          goto L_08870234;
      }
      goto L_08870234;
    }
L_08870234:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2879), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0887023C;
L_0887023C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870260;
      }
      goto L_0887024C;
    }
L_0887024C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08870260u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 462u, 0x0886EAE0u>(ctx, &aot_mem) && ctx.pc == 0x08870260u) goto L_08870260;
    return;
L_08870260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08870174;
      }
      goto L_0887027C;
    }
L_0887027C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
        goto L_088702D0;
    }
    goto L_0887029C;
L_0887029C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (0u | 47u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[5] ^ 47u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088702C4;
      }
      goto L_088702BC;
    }
L_088702BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), 0u);
      if (branch_taken) {
          goto L_088702EC;
      }
      goto L_088702C4;
    }
L_088702C4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088702EC;
      }
      goto L_088702D0;
    }
L_088702D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 47u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088702EC;
L_088702EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 657u, 0x0886FFACu>(ctx, &aot_mem); return;
      }
      goto L_088702F4;
    }
L_088702F4:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2880), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887032C;
      }
      goto L_08870314;
    }
L_08870314:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08870324u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08870324u) goto L_08870324;
    return;
L_08870324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887032C;
      }
      goto L_0887032C;
    }
L_0887032C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2881), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2884)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2882), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870374;
      }
      goto L_0887035C;
    }
L_0887035C:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0887036Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x0887036Cu) goto L_0887036C;
    return;
L_0887036C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08870374;
      }
      goto L_08870374;
    }
L_08870374:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2883), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1456), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1452), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 656u, 0x0886FF48u>(ctx, &aot_mem); return;
      }
      goto L_088703A8;
    }
L_088703A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088703D0;
      }
      goto L_088703B4;
    }
L_088703B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088703D0;
      }
      goto L_088703C8;
    }
L_088703C8:
    ctx.gpr[31] = (0x088703D0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 190u, 0x0886D4B8u>(ctx, &aot_mem) && ctx.pc == 0x088703D0u) goto L_088703D0;
    return;
L_088703D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2908)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2912)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2916)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2920)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2924)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2928)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2944)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[3] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[10] ^ ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08870AE8;
      }
      goto L_088704F0;
    }
L_088704F0:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[14] = (ctx.gpr[7] & 4095u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_0887050C;
L_0887050C:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870A60;
      }
      goto L_0887051C;
    }
L_0887051C:
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[25] = (ctx.gpr[25] & 4095u);
    { const bool branch_taken = ctx.gpr[25] != ctx.gpr[14];
    // nop
      if (branch_taken) {
          goto L_08870A60;
      }
      goto L_0887052C;
    }
L_0887052C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (ctx.gpr[7] & 61440u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870578;
      }
      goto L_0887056C;
    }
L_0887056C:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08870A58;
      }
      goto L_08870578;
    }
L_08870578:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(192))))));
    ctx.gpr[25] = (ctx.gpr[6] | 0u);
    ctx.gpr[24] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[9] = (16128u << 16u);
    ctx.gpr[4] = (1u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[7] = (1u << 16u);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[10] = (1u << 16u);
    ctx.gpr[11] = (1u << 16u);
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[12] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[9] = (1u << 16u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[3] = (1u << 16u);
      if (branch_taken) {
          goto L_088705FC;
      }
      goto L_088705DC;
    }
L_088705DC:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(4)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[24]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
      if (branch_taken) {
          goto L_08870614;
      }
      goto L_088705FC;
    }
L_088705FC:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(8));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[24] - ctx.gpr[13]);
    goto L_08870614;
L_08870614:
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(ctx.gpr[15]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148))))));
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(152))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(154))))));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[14] = (ctx.gpr[15] - ctx.gpr[14]);
    ctx.gpr[14] = (ctx.gpr[14] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 16u));
    ctx.gpr[24] = (ctx.gpr[24] ^ 31u);
    ctx.gpr[15] = (ctx.gpr[14] << 16u);
    ctx.gpr[24] = (ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 16u));
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828)));
      if (branch_taken) {
          goto L_088708D4;
      }
      goto L_0887065C;
    }
L_0887065C:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-1));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[16] = (1u << 16u);
    ctx.gpr[18] = (1u << 16u);
    ctx.gpr[19] = (ctx.gpr[24] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    ctx.gpr[25] = (0u | 45724u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[17] = (0u | 45548u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088706B0;
      }
      goto L_0887068C;
    }
L_0887068C:
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088706D4;
      }
      goto L_088706B0;
    }
L_088706B0:
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-32));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[25]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[15] = (ctx.gpr[15] - ctx.gpr[24]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088706D4;
L_088706D4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088706F4;
      }
      goto L_088706E4;
    }
L_088706E4:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_088706F4;
L_088706F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870714;
      }
      goto L_08870704;
    }
L_08870704:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_08870714;
L_08870714:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[24] + ctx.gpr[24]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19820)));
    ctx.gpr[15] = (ctx.gpr[5] + ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[16];
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08870750;
      }
      goto L_0887072C;
    }
L_0887072C:
    ctx.gpr[24] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[9]);
    ctx.gpr[24] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(-19812))))));
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[9]);
    goto L_08870750;
L_08870750:
    aot_mem.aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
      if (branch_taken) {
          goto L_0887078C;
      }
      goto L_08870770;
    }
L_08870770:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_088707A8;
      }
      goto L_0887078C;
    }
L_0887078C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    goto L_088707A8;
L_088707A8:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[14]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
      if (branch_taken) {
          goto L_088707D0;
      }
      goto L_088707C4;
    }
L_088707C4:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088707D0;
L_088707D0:
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[14] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08870800;
      }
      goto L_088707E4;
    }
L_088707E4:
    ctx.gpr[8] = (ctx.gpr[14] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0887081C;
      }
      goto L_08870800;
    }
L_08870800:
    ctx.gpr[8] = (ctx.gpr[14] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_0887081C;
L_0887081C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_0887082C;
      }
      goto L_08870824;
    }
L_08870824:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_0887082C;
L_0887082C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870858;
      }
      goto L_08870848;
    }
L_08870848:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08870858;
L_08870858:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870878;
      }
      goto L_08870868;
    }
L_08870868:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08870878;
L_08870878:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-19996)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[18];
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_088708B4;
      }
      goto L_08870890;
    }
L_08870890:
    ctx.gpr[9] = (ctx.gpr[18] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-19988)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    goto L_088708B4;
L_088708B4:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_088709A8;
      }
      goto L_088708D4;
    }
L_088708D4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824)));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887090C;
      }
      goto L_088708FC;
    }
L_088708FC:
    ctx.gpr[15] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.gpr[15] = (0u | 32u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    goto L_0887090C;
L_0887090C:
    ctx.gpr[24] = (ctx.gpr[15] + ctx.gpr[15]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.gpr[24] = (ctx.gpr[5] + ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19824), ctx.gpr[15]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[8] = (ctx.gpr[24] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-19812), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860), ctx.gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
      if (branch_taken) {
          goto L_08870948;
      }
      goto L_0887093C;
    }
L_0887093C:
    ctx.gpr[8] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08870948;
L_08870948:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887097C;
      }
      goto L_0887096C;
    }
L_0887096C:
    ctx.gpr[8] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_0887097C;
L_0887097C:
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-20000), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19988), ctx.gpr[13]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-19992)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-19860)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    goto L_088709A8;
L_088709A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[8] = (20352u << 16u);
      if (branch_taken) {
          goto L_088709B8;
      }
      goto L_088709B0;
    }
L_088709B0:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_088709B8;
L_088709B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_088709C8;
      }
      goto L_088709C0;
    }
L_088709C0:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_088709C8;
L_088709C8:
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19856)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-19848), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-19828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-19816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-19852)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
      if (branch_taken) {
          goto L_08870A2C;
      }
      goto L_08870A20;
    }
L_08870A20:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08870A2C;
L_08870A2C:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (14080u << 16u);
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-19836), ctx.gpr[4]);
    goto L_08870A58;
L_08870A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870AE8;
      }
      goto L_08870A60;
    }
L_08870A60:
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    if (ctx.gpr[6] == ctx.gpr[15]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
        goto L_08870A70;
    }
    goto L_08870A70;
L_08870A70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[10] ^ ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    ctx.gpr[13] = (ctx.gpr[13] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[13] & 255u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0887050C;
      }
      goto L_08870AD0;
    }
L_08870AD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[9]);
    goto L_08870AE8;
L_08870AE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2404)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(42));
    ctx.gpr[8] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2404), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2388)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(42));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(2388), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_08870F04;
      }
      goto L_08870B88;
    }
L_08870B88:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F04;
      }
      goto L_08870B98;
    }
L_08870B98:
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08870BF8;
      }
      goto L_08870BB0;
    }
L_08870BB0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08870BE4;
      }
      goto L_08870BC0;
    }
L_08870BC0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[8] != ctx.gpr[9]) {
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
        goto L_08870BE8;
    }
    goto L_08870BD0;
L_08870BD0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08870BE8;
      }
      goto L_08870BE0;
    }
L_08870BE0:
    ctx.gpr[7] = (0u | 1u);
    goto L_08870BE4;
L_08870BE4:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08870BE8;
L_08870BE8:
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870C10;
      }
      goto L_08870BF8;
    }
L_08870BF8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08870C18;
      }
      goto L_08870C08;
    }
L_08870C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08870C24;
      }
      goto L_08870C10;
    }
L_08870C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F04;
      }
      goto L_08870C18;
    }
L_08870C18:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08870C24;
L_08870C24:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (1u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-19748))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870C84;
      }
      goto L_08870C74;
    }
L_08870C74:
    ctx.gpr[4] = (0u | 45788u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08870C84;
L_08870C84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08870CACu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 489u, 0x0886EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08870CACu) goto L_08870CAC;
    return;
L_08870CAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F04;
      }
      goto L_08870CB8;
    }
L_08870CB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[19] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(594)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870CEC;
      }
      goto L_08870CE4;
    }
L_08870CE4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4096));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    goto L_08870CEC;
L_08870CEC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F04;
      }
      goto L_08870CFC;
    }
L_08870CFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08870ED4;
      }
      goto L_08870D04;
    }
L_08870D04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(604)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870E0C;
      }
      goto L_08870D14;
    }
L_08870D14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(604), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08870D34;
      }
      goto L_08870D2C;
    }
L_08870D2C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
    goto L_08870D34;
L_08870D34:
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08870D90;
      }
      goto L_08870D40;
    }
L_08870D40:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870D64;
      }
      goto L_08870D50;
    }
L_08870D50:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08870D7C;
      }
      goto L_08870D64;
    }
L_08870D64:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(608));
    goto L_08870D7C;
L_08870D7C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08870D40;
      }
      goto L_08870D90;
    }
L_08870D90:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870DB4;
      }
      goto L_08870DA0;
    }
L_08870DA0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08870DCC;
      }
      goto L_08870DB4;
    }
L_08870DB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
    goto L_08870DCC;
L_08870DCC:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08870DE0;
L_08870DE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08870DE0;
      }
      goto L_08870E04;
    }
L_08870E04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870ED4;
      }
      goto L_08870E0C;
    }
L_08870E0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870E38;
      }
      goto L_08870E20;
    }
L_08870E20:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(608));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870E54;
      }
      goto L_08870E38;
    }
L_08870E38:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(608));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08870E54;
L_08870E54:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870ED4;
      }
      goto L_08870E5C;
    }
L_08870E5C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
      if (branch_taken) {
          goto L_08870E80;
      }
      goto L_08870E6C;
    }
L_08870E6C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
      if (branch_taken) {
          goto L_08870E98;
      }
      goto L_08870E80;
    }
L_08870E80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(608));
    goto L_08870E98;
L_08870E98:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_08870EAC;
L_08870EAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08870EAC;
      }
      goto L_08870ED0;
    }
L_08870ED0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08870ED4;
L_08870ED4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7344)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08870F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 263u, 0x0886DB78u>(ctx, &aot_mem) && ctx.pc == 0x08870F04u) goto L_08870F04;
    return;
L_08870F04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (0u | 47u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[31]);
    goto L_08870F6C;
L_08870F6C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870FEC;
      }
      goto L_08870F74;
    }
L_08870F74:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
      if (branch_taken) {
          goto L_08870F9C;
      }
      goto L_08870F84;
    }
L_08870F84:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870FB8;
      }
      goto L_08870F9C;
    }
L_08870F9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08870FB8;
L_08870FB8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870FEC;
      }
      goto L_08870FC0;
    }
L_08870FC0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08870FDC;
      }
      goto L_08870FD4;
    }
L_08870FD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08870FE4;
      }
      goto L_08870FDC;
    }
L_08870FDC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    goto L_08870FE4;
L_08870FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870F6C;
      }
      goto L_08870FEC;
    }
L_08870FEC:
    ctx.gpr[4] = (ctx.gpr[12] - ctx.gpr[3]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08871458;
      }
      goto L_08871010;
    }
L_08871010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[7]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(100));
    ctx.gpr[17] = (0u | 46u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    goto L_08871090;
L_08871090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[9] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_088710BC;
      }
      goto L_088710AC;
    }
L_088710AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
      if (branch_taken) {
          goto L_088713B8;
      }
      goto L_088710BC;
    }
L_088710BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08871390;
      }
      goto L_088710DC;
    }
L_088710DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08871390;
      }
      goto L_088710F0;
    }
L_088710F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(592));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (1u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088711B4;
L_088711B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[9]);
      if (branch_taken) {
          goto L_0887124C;
      }
      goto L_088711BC;
    }
L_088711BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[9]);
        goto L_0887124C;
    }
    goto L_088711D0;
L_088711D0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19848)));
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871214;
      }
      goto L_088711F0;
    }
L_088711F0:
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_08871268;
      }
      goto L_08871214;
    }
L_08871214:
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (ctx.gpr[4] == ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
        goto L_08871224;
    }
    goto L_08871224;
L_08871224:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[9] ^ ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088711B4;
      }
      goto L_0887124C;
    }
L_0887124C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[14]);
    ctx.gpr[9] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    goto L_08871268;
L_08871268:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887138C;
      }
      goto L_08871270;
    }
L_08871270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08871288;
      }
      goto L_0887127C;
    }
L_0887127C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
    goto L_08871288;
L_08871288:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08871328;
      }
      goto L_088712B4;
    }
L_088712B4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088712EC;
      }
      goto L_088712E4;
    }
L_088712E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088712F4;
      }
      goto L_088712EC;
    }
L_088712EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_088712F4;
L_088712F4:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08871308u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 462u, 0x0886EAE0u>(ctx, &aot_mem) && ctx.pc == 0x08871308u) goto L_08871308;
    return;
L_08871308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887137C;
      }
      goto L_08871328;
    }
L_08871328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08871358;
      }
      goto L_08871334;
    }
L_08871334:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0887137C;
      }
      goto L_08871358;
    }
L_08871358:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[8] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0887137C;
L_0887137C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871270;
      }
      goto L_08871384;
    }
L_08871384:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    goto L_0887138C;
L_0887138C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08871390;
L_08871390:
    ctx.gpr[4] = (ctx.gpr[4] ^ 46u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088713B8;
      }
      goto L_088713A4;
    }
L_088713A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088713B8;
      }
      goto L_088713B0;
    }
L_088713B0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088713B8;
L_088713B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[12] - ctx.gpr[3]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871090;
      }
      goto L_088713E8;
    }
L_088713E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_08871458;
L_08871458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871488:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-7344), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7344)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6008));
    ctx.gpr[8] = (2225u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3396));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7343), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7343)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3392));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088714F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08871540;
      }
      goto L_08871518;
    }
L_08871518:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08871524u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08871524u) goto L_08871524;
    return;
L_08871524:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887153C;
      }
      goto L_08871530;
    }
L_08871530:
    ctx.gpr[31] = (0x08871538u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08871538u) goto L_08871538;
    return;
L_08871538:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0887153C;
L_0887153C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08871540;
L_08871540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0887154Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0887154Cu) goto L_0887154C;
    return;
L_0887154C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871568:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088715E4;
      }
      goto L_088715B4;
    }
L_088715B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088715EC;
      }
      goto L_088715DC;
    }
L_088715DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887166C;
      }
      goto L_088715E4;
    }
L_088715E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871690;
      }
      goto L_088715EC;
    }
L_088715EC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871650;
      }
      goto L_0887161C;
    }
L_0887161C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871680;
      }
      goto L_08871650;
    }
L_08871650:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0887165Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0887165Cu) goto L_0887165C;
    return;
L_0887165C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871680;
      }
      goto L_0887166C;
    }
L_0887166C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08871678u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08871678u) goto L_08871678;
    return;
L_08871678:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08871680;
L_08871680:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887168Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08871B18;
L_0887168C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08871690;
L_08871690:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088716A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871734;
      }
      goto L_088716C0;
    }
L_088716C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871734;
      }
      goto L_088716D4;
    }
L_088716D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871734;
      }
      goto L_088716EC;
    }
L_088716EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871734;
      }
      goto L_08871700;
    }
L_08871700:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871734;
      }
      goto L_08871718;
    }
L_08871718:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871734;
      }
      goto L_0887172C;
    }
L_0887172C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08871738;
      }
      goto L_08871734;
    }
L_08871734:
    ctx.gpr[2] = (0u | 0u);
    goto L_08871738;
L_08871738:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13568)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871774u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08871774u) goto L_08871774;
    return;
L_08871774:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871794;
      }
      goto L_08871784;
    }
L_08871784:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08871914;
      }
      goto L_0887178C;
    }
L_0887178C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088717AC;
      }
      goto L_08871794;
    }
L_08871794:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871824;
      }
      goto L_0887179C;
    }
L_0887179C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887189C;
      }
      goto L_088717A4;
    }
L_088717A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871914;
      }
      goto L_088717AC;
    }
L_088717AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871810;
      }
      goto L_088717C4;
    }
L_088717C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088717D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887240C;
L_088717D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088717F4;
      }
      goto L_088717EC;
    }
L_088717EC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871818;
      }
      goto L_088717F4;
    }
L_088717F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088717C4;
      }
      goto L_08871810;
    }
L_08871810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871914;
      }
      goto L_08871818;
    }
L_08871818:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871918;
      }
      goto L_08871824;
    }
L_08871824:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871888;
      }
      goto L_0887183C;
    }
L_0887183C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08871848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723F0;
L_08871848:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0887186C;
      }
      goto L_08871864;
    }
L_08871864:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871890;
      }
      goto L_0887186C;
    }
L_0887186C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887183C;
      }
      goto L_08871888;
    }
L_08871888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871914;
      }
      goto L_08871890;
    }
L_08871890:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871918;
      }
      goto L_0887189C;
    }
L_0887189C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871914;
      }
      goto L_088718B4;
    }
L_088718B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088718C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872428;
L_088718C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088718E4;
      }
      goto L_088718DC;
    }
L_088718DC:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871908;
      }
      goto L_088718E4;
    }
L_088718E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088718B4;
      }
      goto L_08871900;
    }
L_08871900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871914;
      }
      goto L_08871908;
    }
L_08871908:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871918;
      }
      goto L_08871914;
    }
L_08871914:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871918;
L_08871918:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887192C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13568)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887196Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x0887196Cu) goto L_0887196C;
    return;
L_0887196C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887198C;
      }
      goto L_0887197C;
    }
L_0887197C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08871B00;
      }
      goto L_08871984;
    }
L_08871984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088719A4;
      }
      goto L_0887198C;
    }
L_0887198C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08871A18;
      }
      goto L_08871994;
    }
L_08871994:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871A8C;
      }
      goto L_0887199C;
    }
L_0887199C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B00;
      }
      goto L_088719A4;
    }
L_088719A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A04;
      }
      goto L_088719B8;
    }
L_088719B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088719C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887240C;
L_088719C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088719E8;
      }
      goto L_088719E0;
    }
L_088719E0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871A0C;
      }
      goto L_088719E8;
    }
L_088719E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088719B8;
      }
      goto L_08871A04;
    }
L_08871A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B00;
      }
      goto L_08871A0C;
    }
L_08871A0C:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871B04;
      }
      goto L_08871A18;
    }
L_08871A18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A78;
      }
      goto L_08871A2C;
    }
L_08871A2C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08871A38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723F0;
L_08871A38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08871A5C;
      }
      goto L_08871A54;
    }
L_08871A54:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871A80;
      }
      goto L_08871A5C;
    }
L_08871A5C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871A2C;
      }
      goto L_08871A78;
    }
L_08871A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B00;
      }
      goto L_08871A80;
    }
L_08871A80:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871B04;
      }
      goto L_08871A8C;
    }
L_08871A8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B00;
      }
      goto L_08871AA0;
    }
L_08871AA0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08871AACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872428;
L_08871AAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08871AD0;
      }
      goto L_08871AC8;
    }
L_08871AC8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08871AF4;
      }
      goto L_08871AD0;
    }
L_08871AD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871AA0;
      }
      goto L_08871AEC;
    }
L_08871AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871B00;
      }
      goto L_08871AF4;
    }
L_08871AF4:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08871B04;
      }
      goto L_08871B00;
    }
L_08871B00:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871B04;
L_08871B04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871B50u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_088716A8;
L_08871B50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871BAC;
      }
      goto L_08871B58;
    }
L_08871B58:
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08871B68u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3372));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08871B68u) goto L_08871B68;
    return;
L_08871B68:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871B78u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08871B78u) goto L_08871B78;
    return;
L_08871B78:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871B88u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08871B88u) goto L_08871B88;
    return;
L_08871B88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08871BACu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08871BACu) goto L_08871BAC;
    return;
L_08871BAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08871C54;
      }
      goto L_08871BC0;
    }
L_08871BC0:
    ctx.gpr[18] = (0u | 4u);
    ctx.gpr[19] = (2230u << 16u);
    goto L_08871BC8;
L_08871BC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (ctx.gpr[22] << 6u);
    ctx.gpr[4] = (ctx.gpr[22] << 3u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08871BE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088716A8;
L_08871BE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871C3C;
      }
      goto L_08871BF0;
    }
L_08871BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08871C18;
      }
      goto L_08871C08;
    }
L_08871C08:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08871C20;
      }
      goto L_08871C10;
    }
L_08871C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871C3C;
      }
      goto L_08871C18;
    }
L_08871C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871C58;
      }
      goto L_08871C20;
    }
L_08871C20:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08871C38;
      }
      goto L_08871C28;
    }
L_08871C28:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871C3C;
      }
      goto L_08871C30;
    }
L_08871C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08871C3C;
      }
      goto L_08871C38;
    }
L_08871C38:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08871C3C;
L_08871C3C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871BC8;
      }
      goto L_08871C54;
    }
L_08871C54:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08871C58;
L_08871C58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871CBCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_088716A8;
L_08871CBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871D18;
      }
      goto L_08871CC4;
    }
L_08871CC4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08871CD4u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3372));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08871CD4u) goto L_08871CD4;
    return;
L_08871CD4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871CE4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08871CE4u) goto L_08871CE4;
    return;
L_08871CE4:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08871CF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08871CF4u) goto L_08871CF4;
    return;
L_08871CF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08871D18u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08871D18u) goto L_08871D18;
    return;
L_08871D18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08871D78;
      }
      goto L_08871D2C;
    }
L_08871D2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08871D4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088716A8;
L_08871D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871D60;
      }
      goto L_08871D54;
    }
L_08871D54:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08871D78;
      }
      goto L_08871D60;
    }
L_08871D60:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871D2C;
      }
      goto L_08871D78;
    }
L_08871D78:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871DE8u);
    ctx.gpr[22] = (ctx.gpr[7] & 255u);
    goto L_088716A8;
L_08871DE8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08871E00;
      }
      goto L_08871DF4;
    }
L_08871DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E14;
      }
      goto L_08871E00;
    }
L_08871E00:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E1C;
      }
      goto L_08871E08;
    }
L_08871E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08871E1C;
      }
      goto L_08871E14;
    }
L_08871E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08871E20;
      }
      goto L_08871E1C;
    }
L_08871E1C:
    ctx.gpr[20] = (0u | 0u);
    goto L_08871E20;
L_08871E20:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (0u | 0u);
    goto L_08871E28;
L_08871E28:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871E38;
      }
      goto L_08871E30;
    }
L_08871E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08871E88;
      }
      goto L_08871E38;
    }
L_08871E38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08871E48u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088716A8;
L_08871E48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E84;
      }
      goto L_08871E50;
    }
L_08871E50:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871E58;
    }
L_08871E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E78;
      }
      goto L_08871E64;
    }
L_08871E64:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E7C;
      }
      goto L_08871E6C;
    }
L_08871E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08871E7C;
      }
      goto L_08871E78;
    }
L_08871E78:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08871E7C;
L_08871E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08871E88;
      }
      goto L_08871E84;
    }
L_08871E84:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_08871E88;
L_08871E88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871E28;
      }
      goto L_08871E90;
    }
L_08871E90:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871EC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871EDCu);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    goto L_08871C84;
L_08871EDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08871F20;
      }
      goto L_08871EE8;
    }
L_08871EE8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08871F08;
      }
      goto L_08871EF0;
    }
L_08871EF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08871F20;
      }
      goto L_08871F08;
    }
L_08871F08:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08871F20;
      }
      goto L_08871F20;
    }
L_08871F20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08871F64u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_088723F0;
L_08871F64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08871F88;
      }
      goto L_08871F70;
    }
L_08871F70:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08871F9C;
      }
      goto L_08871F88;
    }
L_08871F88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08871F9C;
L_08871F9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08871FB0;
L_08871FB0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08871FB0;
      }
      goto L_08871FD4;
    }
L_08871FD4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_08871FEC;
L_08871FEC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08871FEC;
      }
      goto L_08872010;
    }
L_08872010:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887202C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] << 16u);
    ctx.gpr[17] = (ctx.gpr[8] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887206Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_088723F0;
L_0887206C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08872090;
      }
      goto L_08872078;
    }
L_08872078:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088720A4;
      }
      goto L_08872090;
    }
L_08872090:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088720A4;
L_088720A4:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    goto L_088720C4;
L_088720C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088720C4;
      }
      goto L_088720E8;
    }
L_088720E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] << 16u);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[9] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[10] << 16u);
    ctx.gpr[22] = (ctx.gpr[11] << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x088721A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088723F0;
L_088721A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088721CC;
      }
      goto L_088721B4;
    }
L_088721B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088721E0;
      }
      goto L_088721CC;
    }
L_088721CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088721E0;
L_088721E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[23]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_0887222C;
L_0887222C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887222C;
      }
      goto L_0887224C;
    }
L_0887224C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887227C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088722A4u);
    ctx.gpr[16] = (ctx.gpr[7] & 65535u);
    goto L_088723F0;
L_088722A4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088722C8;
      }
      goto L_088722B0;
    }
L_088722B0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088722DC;
      }
      goto L_088722C8;
    }
L_088722C8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088722DC;
L_088722DC:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088722F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872320u);
    ctx.gpr[16] = (ctx.gpr[7] & 65535u);
    goto L_088723F0;
L_08872320:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08872344;
      }
      goto L_0887232C;
    }
L_0887232C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872358;
      }
      goto L_08872344;
    }
L_08872344:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08872358;
L_08872358:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887239Cu);
    ctx.gpr[16] = (ctx.gpr[7] & 65535u);
    goto L_088723F0;
L_0887239C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088723C0;
      }
      goto L_088723A8;
    }
L_088723A8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088723D4;
      }
      goto L_088723C0;
    }
L_088723C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088723D4;
L_088723D4:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088723F0:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887240C:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872428:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(106)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088724B8;
      }
      goto L_08872470;
    }
L_08872470:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08872488u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_0887240C;
L_08872488:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08872498u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_088716A8;
L_08872498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088724C0;
      }
      goto L_088724A0;
    }
L_088724A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872470;
      }
      goto L_088724B8;
    }
L_088724B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088724C8;
      }
      goto L_088724C0;
    }
L_088724C0:
    ctx.gpr[2] = (ctx.gpr[18] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    goto L_088724C8;
L_088724C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088724E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887250Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08871EC0;
L_0887250C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08872520u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08871EC0;
L_08872520:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08872530u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08872530u) goto L_08872530;
    return;
L_08872530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872600;
      }
      goto L_08872538;
    }
L_08872538:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887254C;
L_0887254C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887254C;
      }
      goto L_08872568;
    }
L_08872568:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872574;
L_08872574:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872574;
      }
      goto L_08872590;
    }
L_08872590:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0887259C;
L_0887259C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887259C;
      }
      goto L_088725B8;
    }
L_088725B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088725DC;
L_088725DC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088725DC;
      }
      goto L_088725F8;
    }
L_088725F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872908;
      }
      goto L_08872600;
    }
L_08872600:
    ctx.gpr[4] = (0u | 22u);
    ctx.gpr[31] = (0x0887260Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x0887260Cu) goto L_0887260C;
    return;
L_0887260C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088726DC;
      }
      goto L_08872614;
    }
L_08872614:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872628;
L_08872628:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872628;
      }
      goto L_08872644;
    }
L_08872644:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872650;
L_08872650:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872650;
      }
      goto L_0887266C;
    }
L_0887266C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872678;
L_08872678:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872678;
      }
      goto L_08872694;
    }
L_08872694:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088726B8;
L_088726B8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088726B8;
      }
      goto L_088726D4;
    }
L_088726D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872908;
      }
      goto L_088726DC;
    }
L_088726DC:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[31] = (0x088726E8u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x088726E8u) goto L_088726E8;
    return;
L_088726E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872754;
      }
      goto L_0887271C;
    }
L_0887271C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08872788;
      }
      goto L_08872754;
    }
L_08872754:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08872788;
L_08872788:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872798;
L_08872798:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872798;
      }
      goto L_088727D0;
    }
L_088727D0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088727DC;
L_088727DC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088727DC;
      }
      goto L_08872814;
    }
L_08872814:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08872820;
L_08872820:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08872820;
      }
      goto L_08872858;
    }
L_08872858:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_088728D0;
L_088728D0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(46)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088728D0;
      }
      goto L_08872908;
    }
L_08872908:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08872914u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08872914u) goto L_08872914;
    return;
L_08872914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872928;
      }
      goto L_0887291C;
    }
L_0887291C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08872930;
      }
      goto L_08872928;
    }
L_08872928:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08872930;
L_08872930:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887294C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13532)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13528)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(13556)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(13536), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(13544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(13540), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(13560), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088729E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872A24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08872A24u) goto L_08872A24;
    return;
L_08872A24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08872A3Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 754u, 0x08AFB2C0u>(ctx, &aot_mem) && ctx.pc == 0x08872A3Cu) goto L_08872A3C;
    return;
L_08872A3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08872A4Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08872A4Cu) goto L_08872A4C;
    return;
L_08872A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08872A64;
      }
      goto L_08872A58;
    }
L_08872A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08872A64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08872A64u) goto L_08872A64;
    return;
L_08872A64:
    ctx.gpr[31] = (0x08872A6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x08872A6Cu) goto L_08872A6C;
    return;
L_08872A6C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872AC0;
      }
      goto L_08872A78;
    }
L_08872A78:
    ctx.gpr[31] = (0x08872A80u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08872A80u) goto L_08872A80;
    return;
L_08872A80:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08872AB8;
      }
      goto L_08872AA8;
    }
L_08872AA8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08872AB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08872AB8u) goto L_08872AB8;
    return;
L_08872AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08872AE4;
      }
      goto L_08872AC0;
    }
L_08872AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08872AE0;
      }
      goto L_08872AD4;
    }
L_08872AD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08872AE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08872AE0u) goto L_08872AE0;
    return;
L_08872AE0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08872AE4;
L_08872AE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872B20u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x08872B20u) goto L_08872B20;
    return;
L_08872B20:
    ctx.gpr[31] = (0x08872B28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08872B28u) goto L_08872B28;
    return;
L_08872B28:
    ctx.gpr[31] = (0x08872B30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08872B30u) goto L_08872B30;
    return;
L_08872B30:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 448u, 0x08AC70E8u>(ctx, &aot_mem) && ctx.pc == 0x08872B58u) goto L_08872B58;
    return;
L_08872B58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872B74;
      }
      goto L_08872B64;
    }
L_08872B64:
    ctx.gpr[31] = (0x08872B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 452u, 0x08AC7130u>(ctx, &aot_mem) && ctx.pc == 0x08872B6Cu) goto L_08872B6C;
    return;
L_08872B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08872B78;
      }
      goto L_08872B74;
    }
L_08872B74:
    ctx.gpr[2] = (0u | 0u);
    goto L_08872B78;
L_08872B78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08872CA0;
      }
      goto L_08872BC0;
    }
L_08872BC0:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-16384));
    goto L_08872BC4;
L_08872BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872C44;
      }
      goto L_08872BD8;
    }
L_08872BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872BF4;
      }
      goto L_08872BE4;
    }
L_08872BE4:
    ctx.gpr[31] = (0x08872BECu);
    ctx.gpr[4] = (0u | 16384u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08872BECu) goto L_08872BEC;
    return;
L_08872BEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08872BF4;
L_08872BF4:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[31] = (0x08872C08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 456u, 0x08AC7178u>(ctx, &aot_mem) && ctx.pc == 0x08872C08u) goto L_08872C08;
    return;
L_08872C08:
    ctx.gpr[31] = (0x08872C10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x08872C10u) goto L_08872C10;
    return;
L_08872C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16385 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872C28;
      }
      goto L_08872C24;
    }
L_08872C24:
    ctx.gpr[4] = (0u | 16384u);
    goto L_08872C28;
L_08872C28:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08872C38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 468u, 0x08AC7270u>(ctx, &aot_mem) && ctx.pc == 0x08872C38u) goto L_08872C38;
    return;
L_08872C38:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08872C44;
L_08872C44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872C60;
      }
      goto L_08872C58;
    }
L_08872C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872CA0;
      }
      goto L_08872C60;
    }
L_08872C60:
    ctx.gpr[21] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08872C74;
      }
      goto L_08872C70;
    }
L_08872C70:
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    goto L_08872C74;
L_08872C74:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08872C84u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08872C84u) goto L_08872C84;
    return;
L_08872C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872BC4;
      }
      goto L_08872CA0;
    }
L_08872CA0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872CC8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872CD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08872CE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x08872CE8u) goto L_08872CE8;
    return;
L_08872CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08872D5C;
      }
      goto L_08872D38;
    }
L_08872D38:
    ctx.gpr[31] = (0x08872D40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08872CD0;
L_08872D40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872D5C;
      }
      goto L_08872D48;
    }
L_08872D48:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_08872D64;
      }
      goto L_08872D5C;
    }
L_08872D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872DB4;
      }
      goto L_08872D64;
    }
L_08872D64:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08872D7Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08872B84;
L_08872D7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08872D94;
      }
      goto L_08872D90;
    }
L_08872D90:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08872D94;
L_08872D94:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872DAC;
      }
      goto L_08872D9C;
    }
L_08872D9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08872DAC;
      }
      goto L_08872DA4;
    }
L_08872DA4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08872D64;
      }
      goto L_08872DAC;
    }
L_08872DAC:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08872DB4;
L_08872DB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872DDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08872E0C;
      }
      goto L_08872E04;
    }
L_08872E04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08872E48;
      }
      goto L_08872E0C;
    }
L_08872E0C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872E28;
      }
      goto L_08872E18;
    }
L_08872E18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08872E48;
      }
      goto L_08872E28;
    }
L_08872E28:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872E48;
      }
      goto L_08872E34;
    }
L_08872E34:
    ctx.gpr[31] = (0x08872E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x08872E3Cu) goto L_08872E3C;
    return;
L_08872E3C:
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08872E48;
L_08872E48:
    ctx.gpr[31] = (0x08872E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 460u, 0x08AC71E0u>(ctx, &aot_mem) && ctx.pc == 0x08872E50u) goto L_08872E50;
    return;
L_08872E50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08872E74;
      }
      goto L_08872E64;
    }
L_08872E64:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08872E74;
    }
    goto L_08872E74;
L_08872E74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872E90:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872E98:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872EA0:
    ctx.gpr[2] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(13576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872EAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08872ED8;
      }
      goto L_08872ECC;
    }
L_08872ECC:
    ctx.gpr[31] = (0x08872ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08872ED4u) goto L_08872ED4;
    return;
L_08872ED4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08872ED8;
L_08872ED8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7336));
    ctx.gpr[31] = (0x08872EE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08872EE8u) goto L_08872EE8;
    return;
L_08872EE8:
    ctx.gpr[31] = (0x08872EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 60u, 0x08A8C450u>(ctx, &aot_mem) && ctx.pc == 0x08872EF0u) goto L_08872EF0;
    return;
L_08872EF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872F04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08872F90;
      }
      goto L_08872F2C;
    }
L_08872F2C:
    ctx.gpr[5] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08872F44;
      }
      goto L_08872F38;
    }
L_08872F38:
    ctx.gpr[5] = (0u | 114u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08872F44;
L_08872F44:
    ctx.gpr[5] = (ctx.gpr[17] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872F5C;
      }
      goto L_08872F50;
    }
L_08872F50:
    ctx.gpr[5] = (0u | 119u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08872F5C;
L_08872F5C:
    ctx.gpr[5] = (0u | 98u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08872F78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088729E0;
L_08872F78:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872F8C;
      }
      goto L_08872F84;
    }
L_08872F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872FF8;
      }
      goto L_08872F8C;
    }
L_08872F8C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08872F90;
L_08872F90:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872FB0;
      }
      goto L_08872F9C;
    }
L_08872F9C:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08872FCC;
      }
      goto L_08872FA8;
    }
L_08872FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08872FF8;
      }
      goto L_08872FB0;
    }
L_08872FB0:
    ctx.gpr[31] = (0x08872FB8u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08872FB8u) goto L_08872FB8;
    return;
L_08872FB8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08872FF8;
      }
      goto L_08872FCC;
    }
L_08872FCC:
    ctx.gpr[31] = (0x08872FD4u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08872FD4u) goto L_08872FD4;
    return;
L_08872FD4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08872FF8;
      }
      goto L_08872FF8;
    }
L_08872FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887300C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08873068;
      }
      goto L_08873028;
    }
L_08873028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_08873034;
    }
L_08873034:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08873070;
      }
      goto L_08873040;
    }
L_08873040:
    ctx.gpr[31] = (0x08873048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08873048u) goto L_08873048;
    return;
L_08873048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08873074;
      }
      goto L_08873050;
    }
L_08873050:
    ctx.gpr[31] = (0x08873058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08872B00;
L_08873058:
    ctx.gpr[31] = (0x08873060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08873060u) goto L_08873060;
    return;
L_08873060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08873074;
      }
      goto L_08873068;
    }
L_08873068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08873074;
      }
      goto L_08873070;
    }
L_08873070:
    ctx.gpr[2] = (0u | 0u);
    goto L_08873074;
L_08873074:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088730C0;
      }
      goto L_088730A8;
    }
L_088730A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088730D8;
      }
      goto L_088730B8;
    }
L_088730B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08873108;
      }
      goto L_088730C0;
    }
L_088730C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x088730D0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08872DE4;
L_088730D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08873108;
      }
      goto L_088730D8;
    }
L_088730D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088730F4;
      }
      goto L_088730F0;
    }
L_088730F0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088730F4;
L_088730F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08873108;
      }
      goto L_08873108;
    }
L_08873108:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873118:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08873158;
      }
      goto L_08873140;
    }
L_08873140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08873170;
      }
      goto L_08873150;
    }
L_08873150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088731B4;
      }
      goto L_08873158;
    }
L_08873158:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08873168u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08872B84;
L_08873168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088731B4;
      }
      goto L_08873170;
    }
L_08873170:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887318C;
      }
      goto L_08873188;
    }
L_08873188:
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0887318C;
L_0887318C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088731A0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088731A0u) goto L_088731A0;
    return;
L_088731A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088731B4;
      }
      goto L_088731B4;
    }
L_088731B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088731C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7336), 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7336));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088731F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13620));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088731F4u) goto L_088731F4;
    return;
L_088731F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887322C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08873260;
      }
      goto L_08873248;
    }
L_08873248:
    ctx.gpr[31] = (0x08873250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08873F40;
L_08873250:
    ctx.gpr[31] = (0x08873258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 2u, 0x088740E8u>(ctx, &aot_mem) && ctx.pc == 0x08873258u) goto L_08873258;
    return;
L_08873258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873270;
      }
      goto L_08873260;
    }
L_08873260:
    ctx.gpr[31] = (0x08873268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 6u, 0x08874A20u>(ctx, &aot_mem) && ctx.pc == 0x08873268u) goto L_08873268;
    return;
L_08873268:
    ctx.gpr[31] = (0x08873270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 8u, 0x08874BC4u>(ctx, &aot_mem) && ctx.pc == 0x08873270u) goto L_08873270;
    return;
L_08873270:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(296));
    ctx.gpr[31] = (0x08873280u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 623u, 0x088B7D28u>(ctx, &aot_mem) && ctx.pc == 0x08873280u) goto L_08873280;
    return;
L_08873280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_088732B8;
      }
      goto L_088732A8;
    }
L_088732A8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088732D0;
      }
      goto L_088732B8;
    }
L_088732B8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    goto L_088732D0;
L_088732D0:
    ctx.gpr[5] = (18303u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 64000u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (14545u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[18] = ctx.fpr[18] / ctx.fpr[13];
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[14];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873334:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13668), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18844)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0887336Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13672)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x0887336Cu) goto L_0887336C;
    return;
L_0887336C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2183u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20740));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13108));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08873408u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08873290;
L_08873408:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(13672));
    ctx.gpr[31] = (0x08873418u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 326u, 0x08A36068u>(ctx, &aot_mem) && ctx.pc == 0x08873418u) goto L_08873418;
    return;
L_08873418:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[14])) && ctx.fpr[15] == ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887347C;
      }
      goto L_08873478;
    }
L_08873478:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887347C;
L_0887347C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08873494;
      }
      goto L_0887348C;
    }
L_0887348C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08873494;
L_08873494:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088734B8;
      }
      goto L_088734B0;
    }
L_088734B0:
    ctx.gpr[31] = (0x088734B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x088734B8u) goto L_088734B8;
    return;
L_088734B8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088734CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088734ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13672));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x088734ECu) goto L_088734EC;
    return;
L_088734EC:
    ctx.gpr[31] = (0x088734F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 187u, 0x08A5D504u>(ctx, &aot_mem) && ctx.pc == 0x088734F4u) goto L_088734F4;
    return;
L_088734F4:
    ctx.gpr[31] = (0x088734FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x088734FCu) goto L_088734FC;
    return;
L_088734FC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873524u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 182u, 0x08A5D49Cu>(ctx, &aot_mem) && ctx.pc == 0x08873524u) goto L_08873524;
    return;
L_08873524:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873538:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873544:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873568u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08873290;
L_08873568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887357C;
      }
      goto L_08873574;
    }
L_08873574:
    ctx.gpr[31] = (0x0887357Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x0887357Cu) goto L_0887357C;
    return;
L_0887357C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873590:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873598:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088735B8u);
    // RwCamera far clip at +132.
    ctx.fpr[12] = ctx.fpr[12] * lcs::view_distance_scale();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08873290;
L_088735B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088735CC;
      }
      goto L_088735C4;
    }
L_088735C4:
    ctx.gpr[31] = (0x088735CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x088735CCu) goto L_088735CC;
    return;
L_088735CC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735E8:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088735F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08873604u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873604u) goto L_08873604;
    return;
L_08873604:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08873624u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08873624u) goto L_08873624;
    return;
L_08873624:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13716)));
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887383C;
      }
      goto L_0887367C;
    }
L_0887367C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[31] = (0x08873688u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.pc = 0x08B0BCBCu;
    return;
L_08873688:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4544)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4548), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[3] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4544), ctx.gpr[2]);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4552)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[18] = (ctx.gpr[10] - ctx.gpr[9]);
    ctx.gpr[31] = (0x088736D0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4552), ctx.gpr[10]);
    ctx.pc = 0x08B0BCACu;
    return;
L_088736D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26896)));
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[7] = (2225u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-3344));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08873740u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26896), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08873740u) goto L_08873740;
    return;
L_08873740:
    ctx.gpr[20] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x0887374Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x0887374Cu) goto L_0887374C;
    return;
L_0887374C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[2] >> 10u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] >> 10u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    ctx.gpr[31] = (0x08873770u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08873770u) goto L_08873770;
    return;
L_08873770:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0887377Cu);
    ctx.gpr[22] = (ctx.gpr[2] >> 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x0887377Cu) goto L_0887377C;
    return;
L_0887377C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[23] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x08873790u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08873790u) goto L_08873790;
    return;
L_08873790:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0887379Cu);
    ctx.gpr[30] = (ctx.gpr[2] >> 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 839u, 0x08AA3F84u>(ctx, &aot_mem) && ctx.pc == 0x0887379Cu) goto L_0887379C;
    return;
L_0887379C:
    ctx.gpr[17] = (ctx.gpr[2] >> 10u);
    ctx.gpr[31] = (0x088737A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.pc = 0x08B0BCD4u;
    return;
L_088737A8:
    ctx.gpr[16] = (ctx.gpr[2] >> 10u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088737B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088737B8u) goto L_088737B8;
    return;
L_088737B8:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[31] = (0x088737D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088737D0u) goto L_088737D0;
    return;
L_088737D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088737E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15324)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 463u, 0x08AFDE74u>(ctx, &aot_mem) && ctx.pc == 0x088737E4u) goto L_088737E4;
    return;
L_088737E4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0887382Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08873200;
L_0887382C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13716), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08873844;
      }
      goto L_0887383C;
    }
L_0887383C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(13716), ctx.gpr[4]);
    goto L_08873844;
L_08873844:
    ctx.gpr[31] = (0x0887384Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x0887384Cu) goto L_0887384C;
    return;
L_0887384C:
    ctx.gpr[31] = (0x08873854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 74u, 0x08A28A68u>(ctx, &aot_mem) && ctx.pc == 0x08873854u) goto L_08873854;
    return;
L_08873854:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18836)));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(18836), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088738A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088738A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(13668)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088738E8;
      }
      goto L_088738DC;
    }
L_088738DC:
    ctx.gpr[31] = (0x088738E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088735F0;
L_088738E4:
    ctx.gpr[19] = (0u | 0u);
    goto L_088738E8;
L_088738E8:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    ctx.gpr[6] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    ctx.gpr[7] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08873918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5168));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08873918u) goto L_08873918;
    return;
L_08873918:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08873928;
      }
      goto L_08873920;
    }
L_08873920:
    ctx.gpr[31] = (0x08873928u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08873610;
L_08873928:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873948:
    // RwCamera fog plane at +136.
    ctx.fpr[12] = ctx.fpr[12] * lcs::view_distance_scale();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873954:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887395C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873964:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887396C:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13668)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (15872u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13712)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[6] = (0u | 64u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873C18u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08873C18u) goto L_08873C18;
    return;
L_08873C18:
    ctx.gpr[4] = (18303u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-744));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 65520u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (18303u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] | 61440u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17408u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (18176u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (54784u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[7] = (55041u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[6] = (55041u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08873D70u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[6]);
    goto L_08873978;
L_08873D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[5] = (2816u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-744), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873DB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7324)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_08873E2C;
      }
      goto L_08873DC4;
    }
L_08873DC4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-896));
    ctx.gpr[6] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[9] = (4096u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (2560u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7324), static_cast<std::uint8_t>(0u));
    goto L_08873E2C;
L_08873E2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08873E88;
      }
      goto L_08873E50;
    }
L_08873E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08873E78;
      }
      goto L_08873E60;
    }
L_08873E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08873E78;
    }
    goto L_08873E6C;
L_08873E6C:
    ctx.gpr[31] = (0x08873E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08873E74u) goto L_08873E74;
    return;
L_08873E74:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08873E78;
L_08873E78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873E88;
      }
      goto L_08873E80;
    }
L_08873E80:
    ctx.gpr[31] = (0x08873E88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08873E88u) goto L_08873E88;
    return;
L_08873E88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873E9C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(53), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08873F60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08873F60u) goto L_08873F60;
    return;
L_08873F60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[19];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[0];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[2];
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.pc = 0x08874000u; return;
}

void recomp_unit_0027(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0027_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_27(Runtime &runtime) {
    runtime.register_generated_unit(27u, 0x08870000u, 16384u, &recomp_unit_0027, &recomp_unit_0027_entry);
    runtime.register_function(0x08870000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887000Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870018u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887006Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088700D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870100u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887011Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870130u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887014Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870154u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870174u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870190u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870198u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870218u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870228u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870234u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887023Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887024Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887027Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887029Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870314u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870324u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887032Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887035Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887036Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887050Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887051Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887052Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887056Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870578u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870614u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887065Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887068Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870704u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887072Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870750u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887078Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870800u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887081Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870824u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887082Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870858u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870868u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870878u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887090Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887093Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887096Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887097Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ED0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ED4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871010u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871090u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871214u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887124Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871268u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871270u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887127Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871288u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871328u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871334u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871358u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887137Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871384u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887138Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871390u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871458u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871488u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871518u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871524u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871530u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871538u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887153Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871540u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887154Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871568u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887161Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887165Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887166Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887168Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871690u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871718u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887172Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871734u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871740u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871774u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887178Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871794u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887179Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871810u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871818u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871824u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887183Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871864u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887186Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871888u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887189Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871900u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871908u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871914u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887192Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887196Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887197Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871984u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887198Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887199Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872010u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887202Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887206Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872078u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872090u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872108u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887222Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887224Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887227Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872320u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887232Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872344u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872358u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887239Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887240Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872428u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872444u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872470u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872488u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872498u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887250Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872520u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872530u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872538u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887254Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872568u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872574u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872590u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887259Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887260Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872614u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872628u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872644u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887266Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887271Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872754u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872788u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872798u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872814u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872820u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872858u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872908u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872914u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887291Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872928u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872930u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887294Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ECCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ED4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ED8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872FF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887300Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873028u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873034u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873040u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873058u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873060u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873068u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873074u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873108u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873118u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873140u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873150u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873158u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873168u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873170u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873188u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887318Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873200u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887322Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873248u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873250u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873268u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873270u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873280u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873290u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873334u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873350u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887336Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873408u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873430u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887347Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887348Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873494u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873510u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873524u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873538u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873544u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873568u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873574u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887357Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873590u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873598u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873604u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873610u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873624u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873630u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887367Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873688u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873740u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887374Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887377Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873790u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887379Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887382Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887383Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873844u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887384Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873854u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873920u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873928u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873954u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887395Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873964u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887396Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873978u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F60u, &recomp_unit_0027, "recomp_unit_0027");
}
} // namespace psprecomp
