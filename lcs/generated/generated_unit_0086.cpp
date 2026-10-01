#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_controls.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0086[4093] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0,
    47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52,
    53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0,
    0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210,
    0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229,
    0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 0,
    0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276,
    0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0,
    285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293,
    0, 0, 0, 0, 294, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 302, 0, 303, 0, 0,
    304, 0, 0, 305, 0, 0, 0, 0, 306, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0,
    0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333,
    0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 349,
    350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    358, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 377, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 379, 0, 0, 380, 381, 0, 382, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386,
    0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0,
    403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 410, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 417, 0, 418, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 423, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 430, 0, 431, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436,
    0, 0, 0, 0, 0, 0, 437, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 472, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0,
    486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 495, 496,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 512,
    0, 0, 513, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0,
    0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0,
    0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0,
    0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0,
    0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 561, 562, 0, 563,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0,
    574, 0, 0, 575, 0, 0, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 583,
    0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0,
    0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 596, 0, 597, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0,
    0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0,
    612, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0,
    618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625,
    0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0,
    638, 0, 639, 640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0,
    0, 645, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 650, 0, 0, 0,
    651, 0, 0, 652, 0, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0,
    0, 0, 0, 659, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0,
    0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0,
    0, 683, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690,
    0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 697,
    0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0,
    0, 0, 0, 703, 0, 0, 704, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0,
    707, 0, 708, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0,
    0, 714, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0,
    0, 0, 0, 721, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0,
    728, 0, 0, 0, 0, 0, 0, 729, 730, 0, 731, 0, 732, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0,
    740, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0,
    0, 750, 0, 0, 0, 751, 0, 752, 753, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 0,
    0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0,
    763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 767, 0, 0, 768, 0, 0, 0,
    769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0,
    0, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 0, 0,
    785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 794, 0, 795, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0,
    0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 805, 0, 806, 0, 807, 0, 808, 809, 0, 0, 0, 0,
    0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 815, 0, 816, 0, 0, 0,
    0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 820, 0, 821, 0, 822, 823, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827,
    0, 0, 0, 0, 0, 0, 828, 829, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 835, 0, 836, 0, 0, 0,
    0, 0, 837, 0, 838, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 843,
};
void recomp_unit_0086_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0895C000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0086[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895C000;
    case 2u: goto L_0895C00C;
    case 3u: goto L_0895C028;
    case 4u: goto L_0895C030;
    case 5u: goto L_0895C050;
    case 6u: goto L_0895C058;
    case 7u: goto L_0895C080;
    case 8u: goto L_0895C088;
    case 9u: goto L_0895C0A4;
    case 10u: goto L_0895C0B8;
    case 11u: goto L_0895C0D4;
    case 12u: goto L_0895C0DC;
    case 13u: goto L_0895C104;
    case 14u: goto L_0895C10C;
    case 15u: goto L_0895C128;
    case 16u: goto L_0895C13C;
    case 17u: goto L_0895C158;
    case 18u: goto L_0895C15C;
    case 19u: goto L_0895C170;
    case 20u: goto L_0895C19C;
    case 21u: goto L_0895C1AC;
    case 22u: goto L_0895C1B4;
    case 23u: goto L_0895C1CC;
    case 24u: goto L_0895C200;
    case 25u: goto L_0895C210;
    case 26u: goto L_0895C23C;
    case 27u: goto L_0895C244;
    case 28u: goto L_0895C26C;
    case 29u: goto L_0895C274;
    case 30u: goto L_0895C290;
    case 31u: goto L_0895C2A4;
    case 32u: goto L_0895C2C0;
    case 33u: goto L_0895C2C8;
    case 34u: goto L_0895C2F0;
    case 35u: goto L_0895C2F8;
    case 36u: goto L_0895C314;
    case 37u: goto L_0895C328;
    case 38u: goto L_0895C344;
    case 39u: goto L_0895C34C;
    case 40u: goto L_0895C374;
    case 41u: goto L_0895C37C;
    case 42u: goto L_0895C3A4;
    case 43u: goto L_0895C3AC;
    case 44u: goto L_0895C3C8;
    case 45u: goto L_0895C3DC;
    case 46u: goto L_0895C3F8;
    case 47u: goto L_0895C400;
    case 48u: goto L_0895C428;
    case 49u: goto L_0895C430;
    case 50u: goto L_0895C44C;
    case 51u: goto L_0895C460;
    case 52u: goto L_0895C47C;
    case 53u: goto L_0895C480;
    case 54u: goto L_0895C494;
    case 55u: goto L_0895C4D0;
    case 56u: goto L_0895C4E0;
    case 57u: goto L_0895C4E8;
    case 58u: goto L_0895C4FC;
    case 59u: goto L_0895C510;
    case 60u: goto L_0895C528;
    case 61u: goto L_0895C53C;
    case 62u: goto L_0895C550;
    case 63u: goto L_0895C568;
    case 64u: goto L_0895C57C;
    case 65u: goto L_0895C590;
    case 66u: goto L_0895C5A8;
    case 67u: goto L_0895C5BC;
    case 68u: goto L_0895C5D0;
    case 69u: goto L_0895C5E8;
    case 70u: goto L_0895C5FC;
    case 71u: goto L_0895C610;
    case 72u: goto L_0895C628;
    case 73u: goto L_0895C63C;
    case 74u: goto L_0895C650;
    case 75u: goto L_0895C668;
    case 76u: goto L_0895C67C;
    case 77u: goto L_0895C690;
    case 78u: goto L_0895C6A8;
    case 79u: goto L_0895C6BC;
    case 80u: goto L_0895C6D0;
    case 81u: goto L_0895C6E8;
    case 82u: goto L_0895C6FC;
    case 83u: goto L_0895C710;
    case 84u: goto L_0895C728;
    case 85u: goto L_0895C73C;
    case 86u: goto L_0895C750;
    case 87u: goto L_0895C768;
    case 88u: goto L_0895C77C;
    case 89u: goto L_0895C790;
    case 90u: goto L_0895C7A8;
    case 91u: goto L_0895C7BC;
    case 92u: goto L_0895C7D0;
    case 93u: goto L_0895C7E8;
    case 94u: goto L_0895C7EC;
    case 95u: goto L_0895C814;
    case 96u: goto L_0895C850;
    case 97u: goto L_0895C86C;
    case 98u: goto L_0895C880;
    case 99u: goto L_0895C894;
    case 100u: goto L_0895C8AC;
    case 101u: goto L_0895C8C0;
    case 102u: goto L_0895C8D4;
    case 103u: goto L_0895C8EC;
    case 104u: goto L_0895C900;
    case 105u: goto L_0895C914;
    case 106u: goto L_0895C92C;
    case 107u: goto L_0895C940;
    case 108u: goto L_0895C954;
    case 109u: goto L_0895C96C;
    case 110u: goto L_0895C980;
    case 111u: goto L_0895C994;
    case 112u: goto L_0895C9B0;
    case 113u: goto L_0895C9C4;
    case 114u: goto L_0895C9D8;
    case 115u: goto L_0895C9F0;
    case 116u: goto L_0895CA04;
    case 117u: goto L_0895CA18;
    case 118u: goto L_0895CA34;
    case 119u: goto L_0895CA48;
    case 120u: goto L_0895CA5C;
    case 121u: goto L_0895CA74;
    case 122u: goto L_0895CA88;
    case 123u: goto L_0895CA9C;
    case 124u: goto L_0895CAB8;
    case 125u: goto L_0895CACC;
    case 126u: goto L_0895CAE0;
    case 127u: goto L_0895CAF8;
    case 128u: goto L_0895CB0C;
    case 129u: goto L_0895CB20;
    case 130u: goto L_0895CB3C;
    case 131u: goto L_0895CB50;
    case 132u: goto L_0895CB64;
    case 133u: goto L_0895CB7C;
    case 134u: goto L_0895CB90;
    case 135u: goto L_0895CBA4;
    case 136u: goto L_0895CBC0;
    case 137u: goto L_0895CBD4;
    case 138u: goto L_0895CBE8;
    case 139u: goto L_0895CC00;
    case 140u: goto L_0895CC14;
    case 141u: goto L_0895CC28;
    case 142u: goto L_0895CC44;
    case 143u: goto L_0895CC58;
    case 144u: goto L_0895CC6C;
    case 145u: goto L_0895CC84;
    case 146u: goto L_0895CC98;
    case 147u: goto L_0895CCAC;
    case 148u: goto L_0895CCC8;
    case 149u: goto L_0895CCDC;
    case 150u: goto L_0895CCF0;
    case 151u: goto L_0895CD08;
    case 152u: goto L_0895CD1C;
    case 153u: goto L_0895CD30;
    case 154u: goto L_0895CD4C;
    case 155u: goto L_0895CD60;
    case 156u: goto L_0895CD74;
    case 157u: goto L_0895CD8C;
    case 158u: goto L_0895CDA0;
    case 159u: goto L_0895CDBC;
    case 160u: goto L_0895CDE0;
    case 161u: goto L_0895CDF4;
    case 162u: goto L_0895CE10;
    case 163u: goto L_0895CE34;
    case 164u: goto L_0895CE48;
    case 165u: goto L_0895CE5C;
    case 166u: goto L_0895CE80;
    case 167u: goto L_0895CE94;
    case 168u: goto L_0895CEA8;
    case 169u: goto L_0895CECC;
    case 170u: goto L_0895CEE0;
    case 171u: goto L_0895CEF4;
    case 172u: goto L_0895CF18;
    case 173u: goto L_0895CF2C;
    case 174u: goto L_0895CF40;
    case 175u: goto L_0895CF64;
    case 176u: goto L_0895CF78;
    case 177u: goto L_0895CF94;
    case 178u: goto L_0895CFB8;
    case 179u: goto L_0895CFCC;
    case 180u: goto L_0895CFE8;
    case 181u: goto L_0895D00C;
    case 182u: goto L_0895D020;
    case 183u: goto L_0895D034;
    case 184u: goto L_0895D058;
    case 185u: goto L_0895D06C;
    case 186u: goto L_0895D080;
    case 187u: goto L_0895D0A4;
    case 188u: goto L_0895D0B8;
    case 189u: goto L_0895D0CC;
    case 190u: goto L_0895D0F0;
    case 191u: goto L_0895D104;
    case 192u: goto L_0895D118;
    case 193u: goto L_0895D13C;
    case 194u: goto L_0895D150;
    case 195u: goto L_0895D164;
    case 196u: goto L_0895D174;
    case 197u: goto L_0895D188;
    case 198u: goto L_0895D19C;
    case 199u: goto L_0895D1AC;
    case 200u: goto L_0895D1C0;
    case 201u: goto L_0895D1D4;
    case 202u: goto L_0895D1E4;
    case 203u: goto L_0895D1F8;
    case 204u: goto L_0895D20C;
    case 205u: goto L_0895D21C;
    case 206u: goto L_0895D230;
    case 207u: goto L_0895D244;
    case 208u: goto L_0895D254;
    case 209u: goto L_0895D268;
    case 210u: goto L_0895D27C;
    case 211u: goto L_0895D28C;
    case 212u: goto L_0895D2A0;
    case 213u: goto L_0895D2B4;
    case 214u: goto L_0895D2C4;
    case 215u: goto L_0895D2D8;
    case 216u: goto L_0895D2EC;
    case 217u: goto L_0895D2FC;
    case 218u: goto L_0895D310;
    case 219u: goto L_0895D324;
    case 220u: goto L_0895D33C;
    case 221u: goto L_0895D350;
    case 222u: goto L_0895D364;
    case 223u: goto L_0895D37C;
    case 224u: goto L_0895D390;
    case 225u: goto L_0895D3A4;
    case 226u: goto L_0895D3BC;
    case 227u: goto L_0895D3D0;
    case 228u: goto L_0895D3E4;
    case 229u: goto L_0895D3FC;
    case 230u: goto L_0895D410;
    case 231u: goto L_0895D424;
    case 232u: goto L_0895D43C;
    case 233u: goto L_0895D450;
    case 234u: goto L_0895D464;
    case 235u: goto L_0895D47C;
    case 236u: goto L_0895D490;
    case 237u: goto L_0895D4A4;
    case 238u: goto L_0895D4BC;
    case 239u: goto L_0895D4D0;
    case 240u: goto L_0895D4E4;
    case 241u: goto L_0895D4FC;
    case 242u: goto L_0895D50C;
    case 243u: goto L_0895D51C;
    case 244u: goto L_0895D528;
    case 245u: goto L_0895D534;
    case 246u: goto L_0895D544;
    case 247u: goto L_0895D554;
    case 248u: goto L_0895D560;
    case 249u: goto L_0895D56C;
    case 250u: goto L_0895D57C;
    case 251u: goto L_0895D598;
    case 252u: goto L_0895D5A4;
    case 253u: goto L_0895D5B0;
    case 254u: goto L_0895D5C0;
    case 255u: goto L_0895D5DC;
    case 256u: goto L_0895D5E8;
    case 257u: goto L_0895D5F4;
    case 258u: goto L_0895D604;
    case 259u: goto L_0895D610;
    case 260u: goto L_0895D618;
    case 261u: goto L_0895D620;
    case 262u: goto L_0895D628;
    case 263u: goto L_0895D64C;
    case 264u: goto L_0895D65C;
    case 265u: goto L_0895D668;
    case 266u: goto L_0895D678;
    case 267u: goto L_0895D694;
    case 268u: goto L_0895D6A8;
    case 269u: goto L_0895D6B4;
    case 270u: goto L_0895D6BC;
    case 271u: goto L_0895D6C4;
    case 272u: goto L_0895D6CC;
    case 273u: goto L_0895D6D4;
    case 274u: goto L_0895D6E8;
    case 275u: goto L_0895D6F4;
    case 276u: goto L_0895D6FC;
    case 277u: goto L_0895D710;
    case 278u: goto L_0895D720;
    case 279u: goto L_0895D728;
    case 280u: goto L_0895D73C;
    case 281u: goto L_0895D74C;
    case 282u: goto L_0895D754;
    case 283u: goto L_0895D768;
    case 284u: goto L_0895D778;
    case 285u: goto L_0895D780;
    case 286u: goto L_0895D794;
    case 287u: goto L_0895D7A4;
    case 288u: goto L_0895D7AC;
    case 289u: goto L_0895D7C0;
    case 290u: goto L_0895D7D0;
    case 291u: goto L_0895D7E4;
    case 292u: goto L_0895D7F0;
    case 293u: goto L_0895D7FC;
    case 294u: goto L_0895D810;
    case 295u: goto L_0895D814;
    case 296u: goto L_0895D81C;
    case 297u: goto L_0895D830;
    case 298u: goto L_0895D840;
    case 299u: goto L_0895D84C;
    case 300u: goto L_0895D858;
    case 301u: goto L_0895D868;
    case 302u: goto L_0895D86C;
    case 303u: goto L_0895D874;
    case 304u: goto L_0895D880;
    case 305u: goto L_0895D88C;
    case 306u: goto L_0895D8A0;
    case 307u: goto L_0895D8A4;
    case 308u: goto L_0895D91C;
    case 309u: goto L_0895D928;
    case 310u: goto L_0895D92C;
    case 311u: goto L_0895D990;
    case 312u: goto L_0895D9A4;
    case 313u: goto L_0895D9B0;
    case 314u: goto L_0895D9BC;
    case 315u: goto L_0895D9C8;
    case 316u: goto L_0895D9D0;
    case 317u: goto L_0895D9E0;
    case 318u: goto L_0895DA04;
    case 319u: goto L_0895DA1C;
    case 320u: goto L_0895DA28;
    case 321u: goto L_0895DA40;
    case 322u: goto L_0895DA48;
    case 323u: goto L_0895DA60;
    case 324u: goto L_0895DA70;
    case 325u: goto L_0895DA78;
    case 326u: goto L_0895DA84;
    case 327u: goto L_0895DA9C;
    case 328u: goto L_0895DAA4;
    case 329u: goto L_0895DAC0;
    case 330u: goto L_0895DAD0;
    case 331u: goto L_0895DADC;
    case 332u: goto L_0895DAE8;
    case 333u: goto L_0895DAFC;
    case 334u: goto L_0895DB04;
    case 335u: goto L_0895DB1C;
    case 336u: goto L_0895DB34;
    case 337u: goto L_0895DB40;
    case 338u: goto L_0895DB50;
    case 339u: goto L_0895DB58;
    case 340u: goto L_0895DB70;
    case 341u: goto L_0895DB80;
    case 342u: goto L_0895DB94;
    case 343u: goto L_0895DBA4;
    case 344u: goto L_0895DBAC;
    case 345u: goto L_0895DBB4;
    case 346u: goto L_0895DBE0;
    case 347u: goto L_0895DBE8;
    case 348u: goto L_0895DBF0;
    case 349u: goto L_0895DBFC;
    case 350u: goto L_0895DC00;
    case 351u: goto L_0895DC18;
    case 352u: goto L_0895DC20;
    case 353u: goto L_0895DC2C;
    case 354u: goto L_0895DC34;
    case 355u: goto L_0895DC40;
    case 356u: goto L_0895DC44;
    case 357u: goto L_0895DC4C;
    case 358u: goto L_0895DC80;
    case 359u: goto L_0895DC88;
    case 360u: goto L_0895DCA0;
    case 361u: goto L_0895DCB0;
    case 362u: goto L_0895DCE0;
    case 363u: goto L_0895DCE8;
    case 364u: goto L_0895DD00;
    case 365u: goto L_0895DD10;
    case 366u: goto L_0895DD20;
    case 367u: goto L_0895DD28;
    case 368u: goto L_0895DD2C;
    case 369u: goto L_0895DD34;
    case 370u: goto L_0895DD4C;
    case 371u: goto L_0895DD5C;
    case 372u: goto L_0895DD8C;
    case 373u: goto L_0895DD94;
    case 374u: goto L_0895DDAC;
    case 375u: goto L_0895DDBC;
    case 376u: goto L_0895DDCC;
    case 377u: goto L_0895DDD4;
    case 378u: goto L_0895DDD8;
    case 379u: goto L_0895DE04;
    case 380u: goto L_0895DE10;
    case 381u: goto L_0895DE14;
    case 382u: goto L_0895DE1C;
    case 383u: goto L_0895DE24;
    case 384u: goto L_0895DE38;
    case 385u: goto L_0895DE64;
    case 386u: goto L_0895DE7C;
    case 387u: goto L_0895DE84;
    case 388u: goto L_0895DE94;
    case 389u: goto L_0895DEC0;
    case 390u: goto L_0895DED8;
    case 391u: goto L_0895DEE0;
    case 392u: goto L_0895DF0C;
    case 393u: goto L_0895DF24;
    case 394u: goto L_0895DF2C;
    case 395u: goto L_0895DF34;
    case 396u: goto L_0895DF64;
    case 397u: goto L_0895DF7C;
    case 398u: goto L_0895DF90;
    case 399u: goto L_0895DFA8;
    case 400u: goto L_0895DFDC;
    case 401u: goto L_0895DFE4;
    case 402u: goto L_0895DFF8;
    case 403u: goto L_0895E000;
    case 404u: goto L_0895E018;
    case 405u: goto L_0895E028;
    case 406u: goto L_0895E034;
    case 407u: goto L_0895E044;
    case 408u: goto L_0895E054;
    case 409u: goto L_0895E05C;
    case 410u: goto L_0895E064;
    case 411u: goto L_0895E068;
    case 412u: goto L_0895E08C;
    case 413u: goto L_0895E094;
    case 414u: goto L_0895E0B0;
    case 415u: goto L_0895E0C4;
    case 416u: goto L_0895E0E0;
    case 417u: goto L_0895E0E4;
    case 418u: goto L_0895E0EC;
    case 419u: goto L_0895E104;
    case 420u: goto L_0895E114;
    case 421u: goto L_0895E124;
    case 422u: goto L_0895E12C;
    case 423u: goto L_0895E130;
    case 424u: goto L_0895E138;
    case 425u: goto L_0895E154;
    case 426u: goto L_0895E15C;
    case 427u: goto L_0895E164;
    case 428u: goto L_0895E16C;
    case 429u: goto L_0895E18C;
    case 430u: goto L_0895E194;
    case 431u: goto L_0895E19C;
    case 432u: goto L_0895E1A0;
    case 433u: goto L_0895E1C4;
    case 434u: goto L_0895E1CC;
    case 435u: goto L_0895E1E8;
    case 436u: goto L_0895E1FC;
    case 437u: goto L_0895E218;
    case 438u: goto L_0895E21C;
    case 439u: goto L_0895E230;
    case 440u: goto L_0895E25C;
    case 441u: goto L_0895E26C;
    case 442u: goto L_0895E274;
    case 443u: goto L_0895E28C;
    case 444u: goto L_0895E29C;
    case 445u: goto L_0895E2AC;
    case 446u: goto L_0895E2B4;
    case 447u: goto L_0895E2B8;
    case 448u: goto L_0895E2C0;
    case 449u: goto L_0895E2E8;
    case 450u: goto L_0895E2F0;
    case 451u: goto L_0895E2F8;
    case 452u: goto L_0895E300;
    case 453u: goto L_0895E324;
    case 454u: goto L_0895E32C;
    case 455u: goto L_0895E334;
    case 456u: goto L_0895E338;
    case 457u: goto L_0895E35C;
    case 458u: goto L_0895E364;
    case 459u: goto L_0895E380;
    case 460u: goto L_0895E394;
    case 461u: goto L_0895E3B0;
    case 462u: goto L_0895E3B4;
    case 463u: goto L_0895E3C8;
    case 464u: goto L_0895E404;
    case 465u: goto L_0895E414;
    case 466u: goto L_0895E41C;
    case 467u: goto L_0895E434;
    case 468u: goto L_0895E43C;
    case 469u: goto L_0895E444;
    case 470u: goto L_0895E450;
    case 471u: goto L_0895E45C;
    case 472u: goto L_0895E46C;
    case 473u: goto L_0895E470;
    case 474u: goto L_0895E49C;
    case 475u: goto L_0895E4A8;
    case 476u: goto L_0895E4AC;
    case 477u: goto L_0895E4B4;
    case 478u: goto L_0895E4DC;
    case 479u: goto L_0895E528;
    case 480u: goto L_0895E534;
    case 481u: goto L_0895E53C;
    case 482u: goto L_0895E54C;
    case 483u: goto L_0895E564;
    case 484u: goto L_0895E56C;
    case 485u: goto L_0895E578;
    case 486u: goto L_0895E580;
    case 487u: goto L_0895E58C;
    case 488u: goto L_0895E598;
    case 489u: goto L_0895E5A8;
    case 490u: goto L_0895E5AC;
    case 491u: goto L_0895E5C8;
    case 492u: goto L_0895E5D8;
    case 493u: goto L_0895E5E4;
    case 494u: goto L_0895E5F4;
    case 495u: goto L_0895E5F8;
    case 496u: goto L_0895E5FC;
    case 497u: goto L_0895E628;
    case 498u: goto L_0895E634;
    case 499u: goto L_0895E638;
    case 500u: goto L_0895E640;
    case 501u: goto L_0895E684;
    case 502u: goto L_0895E6AC;
    case 503u: goto L_0895E6F8;
    case 504u: goto L_0895E714;
    case 505u: goto L_0895E720;
    case 506u: goto L_0895E728;
    case 507u: goto L_0895E738;
    case 508u: goto L_0895E750;
    case 509u: goto L_0895E760;
    case 510u: goto L_0895E768;
    case 511u: goto L_0895E774;
    case 512u: goto L_0895E77C;
    case 513u: goto L_0895E788;
    case 514u: goto L_0895E790;
    case 515u: goto L_0895E798;
    case 516u: goto L_0895E7A0;
    case 517u: goto L_0895E7AC;
    case 518u: goto L_0895E7B4;
    case 519u: goto L_0895E7C0;
    case 520u: goto L_0895E7D8;
    case 521u: goto L_0895E7E0;
    case 522u: goto L_0895E7F8;
    case 523u: goto L_0895E808;
    case 524u: goto L_0895E814;
    case 525u: goto L_0895E81C;
    case 526u: goto L_0895E824;
    case 527u: goto L_0895E82C;
    case 528u: goto L_0895E848;
    case 529u: goto L_0895E854;
    case 530u: goto L_0895E86C;
    case 531u: goto L_0895E874;
    case 532u: goto L_0895E890;
    case 533u: goto L_0895E8A0;
    case 534u: goto L_0895E8C8;
    case 535u: goto L_0895E8D4;
    case 536u: goto L_0895E8D8;
    case 537u: goto L_0895E8E0;
    case 538u: goto L_0895E904;
    case 539u: goto L_0895E90C;
    case 540u: goto L_0895E918;
    case 541u: goto L_0895E920;
    case 542u: goto L_0895E954;
    case 543u: goto L_0895E964;
    case 544u: goto L_0895E970;
    case 545u: goto L_0895E978;
    case 546u: goto L_0895E994;
    case 547u: goto L_0895E9A4;
    case 548u: goto L_0895E9B0;
    case 549u: goto L_0895E9D4;
    case 550u: goto L_0895E9EC;
    case 551u: goto L_0895EA04;
    case 552u: goto L_0895EA14;
    case 553u: goto L_0895EA20;
    case 554u: goto L_0895EA40;
    case 555u: goto L_0895EA50;
    case 556u: goto L_0895EA88;
    case 557u: goto L_0895EA90;
    case 558u: goto L_0895EAAC;
    case 559u: goto L_0895EABC;
    case 560u: goto L_0895EAE4;
    case 561u: goto L_0895EAF0;
    case 562u: goto L_0895EAF4;
    case 563u: goto L_0895EAFC;
    case 564u: goto L_0895EB30;
    case 565u: goto L_0895EB5C;
    case 566u: goto L_0895EB74;
    case 567u: goto L_0895EB7C;
    case 568u: goto L_0895EBA8;
    case 569u: goto L_0895EBC0;
    case 570u: goto L_0895EBD0;
    case 571u: goto L_0895EBE8;
    case 572u: goto L_0895EBF0;
    case 573u: goto L_0895EBF8;
    case 574u: goto L_0895EC00;
    case 575u: goto L_0895EC0C;
    case 576u: goto L_0895EC1C;
    case 577u: goto L_0895EC24;
    case 578u: goto L_0895EC2C;
    case 579u: goto L_0895EC48;
    case 580u: goto L_0895EC50;
    case 581u: goto L_0895EC58;
    case 582u: goto L_0895EC74;
    case 583u: goto L_0895EC7C;
    case 584u: goto L_0895EC84;
    case 585u: goto L_0895ECA4;
    case 586u: goto L_0895ECAC;
    case 587u: goto L_0895ECB4;
    case 588u: goto L_0895ECBC;
    case 589u: goto L_0895ECD4;
    case 590u: goto L_0895ECE4;
    case 591u: goto L_0895ECF0;
    case 592u: goto L_0895ED04;
    case 593u: goto L_0895ED0C;
    case 594u: goto L_0895ED1C;
    case 595u: goto L_0895ED2C;
    case 596u: goto L_0895ED34;
    case 597u: goto L_0895ED3C;
    case 598u: goto L_0895ED40;
    case 599u: goto L_0895ED64;
    case 600u: goto L_0895ED6C;
    case 601u: goto L_0895ED88;
    case 602u: goto L_0895ED9C;
    case 603u: goto L_0895EDB8;
    case 604u: goto L_0895EDBC;
    case 605u: goto L_0895EDC4;
    case 606u: goto L_0895EDE0;
    case 607u: goto L_0895EDF0;
    case 608u: goto L_0895EE34;
    case 609u: goto L_0895EE44;
    case 610u: goto L_0895EE54;
    case 611u: goto L_0895EE70;
    case 612u: goto L_0895EE80;
    case 613u: goto L_0895EE90;
    case 614u: goto L_0895EEAC;
    case 615u: goto L_0895EEBC;
    case 616u: goto L_0895EED0;
    case 617u: goto L_0895EEEC;
    case 618u: goto L_0895EF00;
    case 619u: goto L_0895EF1C;
    case 620u: goto L_0895EF2C;
    case 621u: goto L_0895EF44;
    case 622u: goto L_0895EF4C;
    case 623u: goto L_0895EF54;
    case 624u: goto L_0895EF58;
    case 625u: goto L_0895EF7C;
    case 626u: goto L_0895EF84;
    case 627u: goto L_0895EFA0;
    case 628u: goto L_0895EFB4;
    case 629u: goto L_0895EFD0;
    case 630u: goto L_0895EFD4;
    case 631u: goto L_0895EFE8;
    case 632u: goto L_0895F014;
    case 633u: goto L_0895F024;
    case 634u: goto L_0895F02C;
    case 635u: goto L_0895F048;
    case 636u: goto L_0895F058;
    case 637u: goto L_0895F078;
    case 638u: goto L_0895F080;
    case 639u: goto L_0895F088;
    case 640u: goto L_0895F08C;
    case 641u: goto L_0895F0B0;
    case 642u: goto L_0895F0B8;
    case 643u: goto L_0895F0D4;
    case 644u: goto L_0895F0E8;
    case 645u: goto L_0895F104;
    case 646u: goto L_0895F108;
    case 647u: goto L_0895F11C;
    case 648u: goto L_0895F158;
    case 649u: goto L_0895F168;
    case 650u: goto L_0895F170;
    case 651u: goto L_0895F180;
    case 652u: goto L_0895F18C;
    case 653u: goto L_0895F198;
    case 654u: goto L_0895F1A0;
    case 655u: goto L_0895F1A8;
    case 656u: goto L_0895F1B0;
    case 657u: goto L_0895F1C8;
    case 658u: goto L_0895F1F4;
    case 659u: goto L_0895F20C;
    case 660u: goto L_0895F214;
    case 661u: goto L_0895F224;
    case 662u: goto L_0895F230;
    case 663u: goto L_0895F23C;
    case 664u: goto L_0895F244;
    case 665u: goto L_0895F24C;
    case 666u: goto L_0895F254;
    case 667u: goto L_0895F26C;
    case 668u: goto L_0895F298;
    case 669u: goto L_0895F2AC;
    case 670u: goto L_0895F2B4;
    case 671u: goto L_0895F2C4;
    case 672u: goto L_0895F2D0;
    case 673u: goto L_0895F2DC;
    case 674u: goto L_0895F2E4;
    case 675u: goto L_0895F2EC;
    case 676u: goto L_0895F2F4;
    case 677u: goto L_0895F30C;
    case 678u: goto L_0895F338;
    case 679u: goto L_0895F354;
    case 680u: goto L_0895F35C;
    case 681u: goto L_0895F36C;
    case 682u: goto L_0895F378;
    case 683u: goto L_0895F384;
    case 684u: goto L_0895F38C;
    case 685u: goto L_0895F394;
    case 686u: goto L_0895F39C;
    case 687u: goto L_0895F3B4;
    case 688u: goto L_0895F3E0;
    case 689u: goto L_0895F3F4;
    case 690u: goto L_0895F3FC;
    case 691u: goto L_0895F404;
    case 692u: goto L_0895F40C;
    case 693u: goto L_0895F43C;
    case 694u: goto L_0895F444;
    case 695u: goto L_0895F460;
    case 696u: goto L_0895F474;
    case 697u: goto L_0895F47C;
    case 698u: goto L_0895F49C;
    case 699u: goto L_0895F4B0;
    case 700u: goto L_0895F4C4;
    case 701u: goto L_0895F4CC;
    case 702u: goto L_0895F4E8;
    case 703u: goto L_0895F50C;
    case 704u: goto L_0895F518;
    case 705u: goto L_0895F51C;
    case 706u: goto L_0895F578;
    case 707u: goto L_0895F580;
    case 708u: goto L_0895F588;
    case 709u: goto L_0895F58C;
    case 710u: goto L_0895F5B0;
    case 711u: goto L_0895F5B8;
    case 712u: goto L_0895F5D4;
    case 713u: goto L_0895F5E8;
    case 714u: goto L_0895F604;
    case 715u: goto L_0895F608;
    case 716u: goto L_0895F610;
    case 717u: goto L_0895F638;
    case 718u: goto L_0895F640;
    case 719u: goto L_0895F65C;
    case 720u: goto L_0895F670;
    case 721u: goto L_0895F68C;
    case 722u: goto L_0895F690;
    case 723u: goto L_0895F698;
    case 724u: goto L_0895F6A0;
    case 725u: goto L_0895F6C8;
    case 726u: goto L_0895F6D0;
    case 727u: goto L_0895F6EC;
    case 728u: goto L_0895F700;
    case 729u: goto L_0895F71C;
    case 730u: goto L_0895F720;
    case 731u: goto L_0895F728;
    case 732u: goto L_0895F730;
    case 733u: goto L_0895F734;
    case 734u: goto L_0895F764;
    case 735u: goto L_0895F79C;
    case 736u: goto L_0895F7B8;
    case 737u: goto L_0895F7D0;
    case 738u: goto L_0895F7E4;
    case 739u: goto L_0895F7F4;
    case 740u: goto L_0895F800;
    case 741u: goto L_0895F804;
    case 742u: goto L_0895F80C;
    case 743u: goto L_0895F824;
    case 744u: goto L_0895F82C;
    case 745u: goto L_0895F83C;
    case 746u: goto L_0895F848;
    case 747u: goto L_0895F854;
    case 748u: goto L_0895F85C;
    case 749u: goto L_0895F874;
    case 750u: goto L_0895F884;
    case 751u: goto L_0895F894;
    case 752u: goto L_0895F89C;
    case 753u: goto L_0895F8A0;
    case 754u: goto L_0895F8B0;
    case 755u: goto L_0895F8C4;
    case 756u: goto L_0895F8D0;
    case 757u: goto L_0895F8E4;
    case 758u: goto L_0895F8F0;
    case 759u: goto L_0895F8F8;
    case 760u: goto L_0895F908;
    case 761u: goto L_0895F918;
    case 762u: goto L_0895F968;
    case 763u: goto L_0895F980;
    case 764u: goto L_0895F988;
    case 765u: goto L_0895F9D4;
    case 766u: goto L_0895F9DC;
    case 767u: goto L_0895F9E4;
    case 768u: goto L_0895F9F0;
    case 769u: goto L_0895FA00;
    case 770u: goto L_0895FA08;
    case 771u: goto L_0895FA10;
    case 772u: goto L_0895FA5C;
    case 773u: goto L_0895FA64;
    case 774u: goto L_0895FA84;
    case 775u: goto L_0895FA8C;
    case 776u: goto L_0895FAA4;
    case 777u: goto L_0895FAD8;
    case 778u: goto L_0895FB18;
    case 779u: goto L_0895FB2C;
    case 780u: goto L_0895FB38;
    case 781u: goto L_0895FB4C;
    case 782u: goto L_0895FB58;
    case 783u: goto L_0895FB60;
    case 784u: goto L_0895FB70;
    case 785u: goto L_0895FB80;
    case 786u: goto L_0895FBD0;
    case 787u: goto L_0895FBE8;
    case 788u: goto L_0895FBF0;
    case 789u: goto L_0895FC3C;
    case 790u: goto L_0895FC44;
    case 791u: goto L_0895FC4C;
    case 792u: goto L_0895FC58;
    case 793u: goto L_0895FC68;
    case 794u: goto L_0895FC70;
    case 795u: goto L_0895FC78;
    case 796u: goto L_0895FCC4;
    case 797u: goto L_0895FCCC;
    case 798u: goto L_0895FCEC;
    case 799u: goto L_0895FCF4;
    case 800u: goto L_0895FD10;
    case 801u: goto L_0895FD20;
    case 802u: goto L_0895FD34;
    case 803u: goto L_0895FD44;
    case 804u: goto L_0895FD4C;
    case 805u: goto L_0895FD50;
    case 806u: goto L_0895FD58;
    case 807u: goto L_0895FD60;
    case 808u: goto L_0895FD68;
    case 809u: goto L_0895FD6C;
    case 810u: goto L_0895FD90;
    case 811u: goto L_0895FD98;
    case 812u: goto L_0895FDB4;
    case 813u: goto L_0895FDC8;
    case 814u: goto L_0895FDE4;
    case 815u: goto L_0895FDE8;
    case 816u: goto L_0895FDF0;
    case 817u: goto L_0895FE0C;
    case 818u: goto L_0895FE1C;
    case 819u: goto L_0895FE54;
    case 820u: goto L_0895FE8C;
    case 821u: goto L_0895FE94;
    case 822u: goto L_0895FE9C;
    case 823u: goto L_0895FEA0;
    case 824u: goto L_0895FEC4;
    case 825u: goto L_0895FECC;
    case 826u: goto L_0895FEE8;
    case 827u: goto L_0895FEFC;
    case 828u: goto L_0895FF18;
    case 829u: goto L_0895FF1C;
    case 830u: goto L_0895FF24;
    case 831u: goto L_0895FF3C;
    case 832u: goto L_0895FF4C;
    case 833u: goto L_0895FF5C;
    case 834u: goto L_0895FF64;
    case 835u: goto L_0895FF68;
    case 836u: goto L_0895FF70;
    case 837u: goto L_0895FF88;
    case 838u: goto L_0895FF90;
    case 839u: goto L_0895FF94;
    case 840u: goto L_0895FFB8;
    case 841u: goto L_0895FFC0;
    case 842u: goto L_0895FFDC;
    case 843u: goto L_0895FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895C000:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C00C;
    }
L_0895C00C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C028;
    }
L_0895C028:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C030;
    }
L_0895C030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0895C050u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x0895C050u) goto L_0895C050;
    return;
L_0895C050:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C0DC;
      }
      goto L_0895C058;
    }
L_0895C058:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C088;
      }
      goto L_0895C080;
    }
L_0895C080:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C088;
    }
L_0895C088:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C0B8;
    }
    goto L_0895C0A4;
L_0895C0A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C0B8;
    }
L_0895C0B8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C0D4;
    }
L_0895C0D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C0DC;
    }
L_0895C0DC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C10C;
      }
      goto L_0895C104;
    }
L_0895C104:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C10C;
    }
L_0895C10C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C13C;
    }
    goto L_0895C128;
L_0895C128:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C13C;
    }
L_0895C13C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C15C;
      }
      goto L_0895C158;
    }
L_0895C158:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895C15C;
L_0895C15C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C19C;
      }
      goto L_0895C170;
    }
L_0895C170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0895C19Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0895C19Cu) goto L_0895C19C;
    return;
L_0895C19C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C1AC;
      }
      goto L_0895C1AC;
    }
L_0895C1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C1B4;
    }
L_0895C1B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895C1CCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895C1CCu) goto L_0895C1CC;
    return;
L_0895C1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C34C;
      }
      goto L_0895C200;
    }
L_0895C200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C34C;
      }
      goto L_0895C210;
    }
L_0895C210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0895C23Cu);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0895C23Cu) goto L_0895C23C;
    return;
L_0895C23C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C2C8;
      }
      goto L_0895C244;
    }
L_0895C244:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C274;
      }
      goto L_0895C26C;
    }
L_0895C26C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C274;
    }
L_0895C274:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C2A4;
    }
    goto L_0895C290;
L_0895C290:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C2A4;
    }
L_0895C2A4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C2C0;
    }
L_0895C2C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C2C8;
    }
L_0895C2C8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C2F8;
      }
      goto L_0895C2F0;
    }
L_0895C2F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C2F8;
    }
L_0895C2F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C328;
    }
    goto L_0895C314;
L_0895C314:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C328;
    }
L_0895C328:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C344;
    }
L_0895C344:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C34C;
    }
L_0895C34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0895C374u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0895C374u) goto L_0895C374;
    return;
L_0895C374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C400;
      }
      goto L_0895C37C;
    }
L_0895C37C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C3AC;
      }
      goto L_0895C3A4;
    }
L_0895C3A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C3AC;
    }
L_0895C3AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C3DC;
    }
    goto L_0895C3C8;
L_0895C3C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C3DC;
    }
L_0895C3DC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C3F8;
    }
L_0895C3F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C400;
    }
L_0895C400:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895C430;
      }
      goto L_0895C428;
    }
L_0895C428:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C430;
    }
L_0895C430:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895C460;
    }
    goto L_0895C44C;
L_0895C44C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C460;
    }
L_0895C460:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C480;
      }
      goto L_0895C47C;
    }
L_0895C47C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895C480;
L_0895C480:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C4D0;
      }
      goto L_0895C494;
    }
L_0895C494:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895C4D0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0895C4D0u) goto L_0895C4D0;
    return;
L_0895C4D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C4E0;
      }
      goto L_0895C4E0;
    }
L_0895C4E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C4E8;
    }
L_0895C4E8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C4FCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C4FCu) goto L_0895C4FC;
    return;
L_0895C4FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C510u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C510u) goto L_0895C510;
    return;
L_0895C510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C528;
    }
L_0895C528:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C53Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C53Cu) goto L_0895C53C;
    return;
L_0895C53C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C550u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C550u) goto L_0895C550;
    return;
L_0895C550:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C568;
    }
L_0895C568:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C57Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C57Cu) goto L_0895C57C;
    return;
L_0895C57C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C590u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C590u) goto L_0895C590;
    return;
L_0895C590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C5A8;
    }
L_0895C5A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C5BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C5BCu) goto L_0895C5BC;
    return;
L_0895C5BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C5D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C5D0u) goto L_0895C5D0;
    return;
L_0895C5D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C5E8;
    }
L_0895C5E8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C5FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C5FCu) goto L_0895C5FC;
    return;
L_0895C5FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C610u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C610u) goto L_0895C610;
    return;
L_0895C610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C628;
    }
L_0895C628:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C63Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C63Cu) goto L_0895C63C;
    return;
L_0895C63C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C650u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C650u) goto L_0895C650;
    return;
L_0895C650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C668;
    }
L_0895C668:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C67Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C67Cu) goto L_0895C67C;
    return;
L_0895C67C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C690u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C690u) goto L_0895C690;
    return;
L_0895C690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C6A8;
    }
L_0895C6A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C6BCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C6BCu) goto L_0895C6BC;
    return;
L_0895C6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C6D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C6D0u) goto L_0895C6D0;
    return;
L_0895C6D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C6E8;
    }
L_0895C6E8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C6FCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C6FCu) goto L_0895C6FC;
    return;
L_0895C6FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C710u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C710u) goto L_0895C710;
    return;
L_0895C710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C728;
    }
L_0895C728:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C73Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C73Cu) goto L_0895C73C;
    return;
L_0895C73C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C750u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C750u) goto L_0895C750;
    return;
L_0895C750:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C768;
    }
L_0895C768:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C77Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C77Cu) goto L_0895C77C;
    return;
L_0895C77C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C790u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C790u) goto L_0895C790;
    return;
L_0895C790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C7A8;
    }
L_0895C7A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C7BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C7BCu) goto L_0895C7BC;
    return;
L_0895C7BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C7D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C7D0u) goto L_0895C7D0;
    return;
L_0895C7D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895C7EC;
      }
      goto L_0895C7E8;
    }
L_0895C7E8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895C7EC;
L_0895C7EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895F730;
      }
      goto L_0895C850;
    }
L_0895C850:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895C86C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C880u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C880u) goto L_0895C880;
    return;
L_0895C880:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C894u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C894u) goto L_0895C894;
    return;
L_0895C894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895C8AC;
    }
L_0895C8AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C8C0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C8C0u) goto L_0895C8C0;
    return;
L_0895C8C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C8D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C8D4u) goto L_0895C8D4;
    return;
L_0895C8D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895C8EC;
    }
L_0895C8EC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C900u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C900u) goto L_0895C900;
    return;
L_0895C900:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C914u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C914u) goto L_0895C914;
    return;
L_0895C914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895C92C;
    }
L_0895C92C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C940u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C940u) goto L_0895C940;
    return;
L_0895C940:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C954u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C954u) goto L_0895C954;
    return;
L_0895C954:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895C96C;
    }
L_0895C96C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C980u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C980u) goto L_0895C980;
    return;
L_0895C980:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C994u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C994u) goto L_0895C994;
    return;
L_0895C994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895C9B0;
    }
L_0895C9B0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C9C4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C9C4u) goto L_0895C9C4;
    return;
L_0895C9C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895C9D8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895C9D8u) goto L_0895C9D8;
    return;
L_0895C9D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895C9F0;
    }
L_0895C9F0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CA04u) goto L_0895CA04;
    return;
L_0895CA04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CA18u) goto L_0895CA18;
    return;
L_0895CA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CA34;
    }
L_0895CA34:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CA48u) goto L_0895CA48;
    return;
L_0895CA48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CA5Cu) goto L_0895CA5C;
    return;
L_0895CA5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CA74;
    }
L_0895CA74:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA88u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CA88u) goto L_0895CA88;
    return;
L_0895CA88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CA9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CA9Cu) goto L_0895CA9C;
    return;
L_0895CA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CAB8;
    }
L_0895CAB8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CACCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CACCu) goto L_0895CACC;
    return;
L_0895CACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CAE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CAE0u) goto L_0895CAE0;
    return;
L_0895CAE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CAF8;
    }
L_0895CAF8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CB0Cu) goto L_0895CB0C;
    return;
L_0895CB0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB20u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CB20u) goto L_0895CB20;
    return;
L_0895CB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CB3C;
    }
L_0895CB3C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CB50u) goto L_0895CB50;
    return;
L_0895CB50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB64u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CB64u) goto L_0895CB64;
    return;
L_0895CB64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CB7C;
    }
L_0895CB7C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CB90u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CB90u) goto L_0895CB90;
    return;
L_0895CB90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CBA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CBA4u) goto L_0895CBA4;
    return;
L_0895CBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CBC0;
    }
L_0895CBC0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CBD4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CBD4u) goto L_0895CBD4;
    return;
L_0895CBD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CBE8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CBE8u) goto L_0895CBE8;
    return;
L_0895CBE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CC00;
    }
L_0895CC00:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CC14u) goto L_0895CC14;
    return;
L_0895CC14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CC28u) goto L_0895CC28;
    return;
L_0895CC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CC44;
    }
L_0895CC44:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CC58u) goto L_0895CC58;
    return;
L_0895CC58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CC6Cu) goto L_0895CC6C;
    return;
L_0895CC6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CC84;
    }
L_0895CC84:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CC98u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CC98u) goto L_0895CC98;
    return;
L_0895CC98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CCACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CCACu) goto L_0895CCAC;
    return;
L_0895CCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CCC8;
    }
L_0895CCC8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CCDCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CCDCu) goto L_0895CCDC;
    return;
L_0895CCDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CCF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CCF0u) goto L_0895CCF0;
    return;
L_0895CCF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CD08;
    }
L_0895CD08:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CD1Cu) goto L_0895CD1C;
    return;
L_0895CD1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD30u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CD30u) goto L_0895CD30;
    return;
L_0895CD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CD4C;
    }
L_0895CD4C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CD60u) goto L_0895CD60;
    return;
L_0895CD60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CD74u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CD74u) goto L_0895CD74;
    return;
L_0895CD74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CD8C;
    }
L_0895CD8C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CDA0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CDA0u) goto L_0895CDA0;
    return;
L_0895CDA0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CDBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CDBCu) goto L_0895CDBC;
    return;
L_0895CDBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CDE0;
    }
L_0895CDE0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CDF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CDF4u) goto L_0895CDF4;
    return;
L_0895CDF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CE10u) goto L_0895CE10;
    return;
L_0895CE10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CE34;
    }
L_0895CE34:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE48u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CE48u) goto L_0895CE48;
    return;
L_0895CE48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE5Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CE5Cu) goto L_0895CE5C;
    return;
L_0895CE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CE80;
    }
L_0895CE80:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CE94u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CE94u) goto L_0895CE94;
    return;
L_0895CE94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CEA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CEA8u) goto L_0895CEA8;
    return;
L_0895CEA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CECC;
    }
L_0895CECC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CEE0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CEE0u) goto L_0895CEE0;
    return;
L_0895CEE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CEF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CEF4u) goto L_0895CEF4;
    return;
L_0895CEF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CF18;
    }
L_0895CF18:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF2Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CF2Cu) goto L_0895CF2C;
    return;
L_0895CF2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF40u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CF40u) goto L_0895CF40;
    return;
L_0895CF40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CF64;
    }
L_0895CF64:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF78u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CF78u) goto L_0895CF78;
    return;
L_0895CF78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CF94u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CF94u) goto L_0895CF94;
    return;
L_0895CF94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895CFB8;
    }
L_0895CFB8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CFCCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895CFCCu) goto L_0895CFCC;
    return;
L_0895CFCC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895CFE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895CFE8u) goto L_0895CFE8;
    return;
L_0895CFE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D00C;
    }
L_0895D00C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D020u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D020u) goto L_0895D020;
    return;
L_0895D020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D034u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D034u) goto L_0895D034;
    return;
L_0895D034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D058;
    }
L_0895D058:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D06Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D06Cu) goto L_0895D06C;
    return;
L_0895D06C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D080u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D080u) goto L_0895D080;
    return;
L_0895D080:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D0A4;
    }
L_0895D0A4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D0B8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D0B8u) goto L_0895D0B8;
    return;
L_0895D0B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D0CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D0CCu) goto L_0895D0CC;
    return;
L_0895D0CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D0F0;
    }
L_0895D0F0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D104u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D104u) goto L_0895D104;
    return;
L_0895D104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D118u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D118u) goto L_0895D118;
    return;
L_0895D118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D13C;
    }
L_0895D13C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D150u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D150u) goto L_0895D150;
    return;
L_0895D150:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D164u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D164u) goto L_0895D164;
    return;
L_0895D164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D174;
    }
L_0895D174:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D188u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D188u) goto L_0895D188;
    return;
L_0895D188:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D19Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D19Cu) goto L_0895D19C;
    return;
L_0895D19C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D1AC;
    }
L_0895D1AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D1C0u) goto L_0895D1C0;
    return;
L_0895D1C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D1D4u) goto L_0895D1D4;
    return;
L_0895D1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D1E4;
    }
L_0895D1E4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D1F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D1F8u) goto L_0895D1F8;
    return;
L_0895D1F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D20Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D20Cu) goto L_0895D20C;
    return;
L_0895D20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D21C;
    }
L_0895D21C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D230u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D230u) goto L_0895D230;
    return;
L_0895D230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D244u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D244u) goto L_0895D244;
    return;
L_0895D244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D254;
    }
L_0895D254:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D268u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D268u) goto L_0895D268;
    return;
L_0895D268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D27Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D27Cu) goto L_0895D27C;
    return;
L_0895D27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D28C;
    }
L_0895D28C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D2A0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D2A0u) goto L_0895D2A0;
    return;
L_0895D2A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D2B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D2B4u) goto L_0895D2B4;
    return;
L_0895D2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D2C4;
    }
L_0895D2C4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D2D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D2D8u) goto L_0895D2D8;
    return;
L_0895D2D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D2ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D2ECu) goto L_0895D2EC;
    return;
L_0895D2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D2FC;
    }
L_0895D2FC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D310u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D310u) goto L_0895D310;
    return;
L_0895D310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D324u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D324u) goto L_0895D324;
    return;
L_0895D324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D33C;
    }
L_0895D33C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D350u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D350u) goto L_0895D350;
    return;
L_0895D350:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D364u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D364u) goto L_0895D364;
    return;
L_0895D364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D37C;
    }
L_0895D37C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D390u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D390u) goto L_0895D390;
    return;
L_0895D390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D3A4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D3A4u) goto L_0895D3A4;
    return;
L_0895D3A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D3BC;
    }
L_0895D3BC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D3D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D3D0u) goto L_0895D3D0;
    return;
L_0895D3D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D3E4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D3E4u) goto L_0895D3E4;
    return;
L_0895D3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D3FC;
    }
L_0895D3FC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D410u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D410u) goto L_0895D410;
    return;
L_0895D410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D424u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D424u) goto L_0895D424;
    return;
L_0895D424:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D43C;
    }
L_0895D43C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D450u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D450u) goto L_0895D450;
    return;
L_0895D450:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D464u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D464u) goto L_0895D464;
    return;
L_0895D464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D47C;
    }
L_0895D47C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D490u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D490u) goto L_0895D490;
    return;
L_0895D490:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D4A4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D4A4u) goto L_0895D4A4;
    return;
L_0895D4A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D4BC;
    }
L_0895D4BC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D4D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D4D0u) goto L_0895D4D0;
    return;
L_0895D4D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895D4E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D4E4u) goto L_0895D4E4;
    return;
L_0895D4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D4FC;
    }
L_0895D4FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D50Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D50Cu) goto L_0895D50C;
    return;
L_0895D50C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D528;
    }
    goto L_0895D51C;
L_0895D51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895D528;
      }
      goto L_0895D528;
    }
L_0895D528:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D534;
    }
L_0895D534:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D544u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D544u) goto L_0895D544;
    return;
L_0895D544:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D560;
    }
    goto L_0895D554;
L_0895D554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895D560;
      }
      goto L_0895D560;
    }
L_0895D560:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D56C;
    }
L_0895D56C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D57Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D57Cu) goto L_0895D57C;
    return;
L_0895D57C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D5A4;
    }
    goto L_0895D598;
L_0895D598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0895D5A4;
      }
      goto L_0895D5A4;
    }
L_0895D5A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D5B0;
    }
L_0895D5B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D5C0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D5C0u) goto L_0895D5C0;
    return;
L_0895D5C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0895D5E8;
    }
    goto L_0895D5DC;
L_0895D5DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0895D5E8;
      }
      goto L_0895D5E8;
    }
L_0895D5E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D5F4;
    }
L_0895D5F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D604u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D604u) goto L_0895D604;
    return;
L_0895D604:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895D610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0895D610u) goto L_0895D610;
    return;
L_0895D610:
    ctx.gpr[31] = (0x0895D618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0895D618u) goto L_0895D618;
    return;
L_0895D618:
    ctx.gpr[31] = (0x0895D620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0895D620u) goto L_0895D620;
    return;
L_0895D620:
    ctx.gpr[31] = (0x0895D628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0895D628u) goto L_0895D628;
    return;
L_0895D628:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14208u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D64C;
    }
L_0895D64C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895D65Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0895D65Cu) goto L_0895D65C;
    return;
L_0895D65C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895D668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0895D668u) goto L_0895D668;
    return;
L_0895D668:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895D678;
    }
L_0895D678:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0895D694u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D694u) goto L_0895D694;
    return;
L_0895D694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D6A8;
    }
L_0895D6A8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0895D6FC;
      }
      goto L_0895D6B4;
    }
L_0895D6B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0895D728;
      }
      goto L_0895D6BC;
    }
L_0895D6BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895D754;
      }
      goto L_0895D6C4;
    }
L_0895D6C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0895D780;
      }
      goto L_0895D6CC;
    }
L_0895D6CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0895D7AC;
      }
      goto L_0895D6D4;
    }
L_0895D6D4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D6F4;
      }
      goto L_0895D6E8;
    }
L_0895D6E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_0895D6F4;
L_0895D6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D6FC;
    }
L_0895D6FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D720;
      }
      goto L_0895D710;
    }
L_0895D710:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D720;
L_0895D720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D728;
    }
L_0895D728:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D74C;
      }
      goto L_0895D73C;
    }
L_0895D73C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D74C;
L_0895D74C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D754;
    }
L_0895D754:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D778;
      }
      goto L_0895D768;
    }
L_0895D768:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D778;
L_0895D778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D780;
    }
L_0895D780:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D7A4;
      }
      goto L_0895D794;
    }
L_0895D794:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D7A4;
L_0895D7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D7AC;
    }
L_0895D7AC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D7D0;
      }
      goto L_0895D7C0;
    }
L_0895D7C0:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0895D7D0;
L_0895D7D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D81C;
      }
      goto L_0895D7E4;
    }
L_0895D7E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895D7F0u);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D7F0u) goto L_0895D7F0;
    return;
L_0895D7F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D814;
      }
      goto L_0895D7FC;
    }
L_0895D7FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895D810u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 738u, 0x08A8F7E4u>(ctx, &aot_mem) && ctx.pc == 0x0895D810u) goto L_0895D810;
    return;
L_0895D810:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895D814;
L_0895D814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D8A4;
      }
      goto L_0895D81C;
    }
L_0895D81C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D840;
      }
      goto L_0895D830;
    }
L_0895D830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895D874;
      }
      goto L_0895D840;
    }
L_0895D840:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895D84Cu);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D84Cu) goto L_0895D84C;
    return;
L_0895D84C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D86C;
      }
      goto L_0895D858;
    }
L_0895D858:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895D868u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 442u, 0x0894E898u>(ctx, &aot_mem) && ctx.pc == 0x0895D868u) goto L_0895D868;
    return;
L_0895D868:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895D86C;
L_0895D86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D8A4;
      }
      goto L_0895D874;
    }
L_0895D874:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895D880u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D880u) goto L_0895D880;
    return;
L_0895D880:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895D8A4;
      }
      goto L_0895D88C;
    }
L_0895D88C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895D8A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x0895D8A0u) goto L_0895D8A0;
    return;
L_0895D8A0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895D8A4;
L_0895D8A4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D92C;
      }
      goto L_0895D91C;
    }
L_0895D91C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0895D928u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895D928u) goto L_0895D928;
    return;
L_0895D928:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895D92C;
L_0895D92C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0895D990u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x0895D990u) goto L_0895D990;
    return;
L_0895D990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x0895D9A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x0895D9A4u) goto L_0895D9A4;
    return;
L_0895D9A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895D9B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895D9B0u) goto L_0895D9B0;
    return;
L_0895D9B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D9C8;
      }
      goto L_0895D9BC;
    }
L_0895D9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0895D9C8;
L_0895D9C8:
    ctx.gpr[31] = (0x0895D9D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D9D0u) goto L_0895D9D0;
    return;
L_0895D9D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x0895D9E0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x0895D9E0u) goto L_0895D9E0;
    return;
L_0895D9E0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DA04u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x0895DA04u) goto L_0895DA04;
    return;
L_0895DA04:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DA1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895DA1Cu) goto L_0895DA1C;
    return;
L_0895DA1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA40;
      }
      goto L_0895DA28;
    }
L_0895DA28:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0895DA40u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x0895DA40u) goto L_0895DA40;
    return;
L_0895DA40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DA48;
    }
L_0895DA48:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DA60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DA60u) goto L_0895DA60;
    return;
L_0895DA60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DA70u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895DA70u) goto L_0895DA70;
    return;
L_0895DA70:
    if (ctx.gpr[2] != 0u && ctx.gpr[2] == lcs::lcs_guest_player_ped(aot_mem)) goto L_0895DA78;
    ctx.gpr[31] = (0x0895DA78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 135u, 0x0887C9D8u>(ctx, &aot_mem) && ctx.pc == 0x0895DA78u) goto L_0895DA78;
    return;
L_0895DA78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA9C;
      }
      goto L_0895DA84;
    }
L_0895DA84:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0895DA9Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x0895DA9Cu) goto L_0895DA9C;
    return;
L_0895DA9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DAA4;
    }
L_0895DAA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895DAC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DAC0u) goto L_0895DAC0;
    return;
L_0895DAC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DAD0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895DAD0u) goto L_0895DAD0;
    return;
L_0895DAD0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895DADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 463u, 0x089A2034u>(ctx, &aot_mem) && ctx.pc == 0x0895DADCu) goto L_0895DADC;
    return;
L_0895DADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895DAFC;
      }
      goto L_0895DAE8;
    }
L_0895DAE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB34;
      }
      goto L_0895DAFC;
    }
L_0895DAFC:
    ctx.gpr[31] = (0x0895DB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0895DB04u) goto L_0895DB04;
    return;
L_0895DB04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29548)));
    ctx.gpr[31] = (0x0895DB1Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29552)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0895DB1Cu) goto L_0895DB1C;
    return;
L_0895DB1C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895DB40;
      }
      goto L_0895DB34;
    }
L_0895DB34:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0895DB40;
L_0895DB40:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x0895DB50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x0895DB50u) goto L_0895DB50;
    return;
L_0895DB50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DB58;
    }
L_0895DB58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DB70u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DB70u) goto L_0895DB70;
    return;
L_0895DB70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DB80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895DB80u) goto L_0895DB80;
    return;
L_0895DB80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DBE8;
      }
      goto L_0895DB94;
    }
L_0895DB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DBE8;
      }
      goto L_0895DBA4;
    }
L_0895DBA4:
    ctx.gpr[31] = (0x0895DBACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0895DBACu) goto L_0895DBAC;
    return;
L_0895DBAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DBE8;
      }
      goto L_0895DBB4;
    }
L_0895DBB4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895DBF0;
      }
      goto L_0895DBE0;
    }
L_0895DBE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC00;
      }
      goto L_0895DBE8;
    }
L_0895DBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DBF0;
    }
L_0895DBF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0895DBFCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895DBFCu) goto L_0895DBFC;
    return;
L_0895DBFC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895DC00;
L_0895DC00:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0895DC2C;
    }
    goto L_0895DC18;
L_0895DC18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895DC40;
      }
      goto L_0895DC20;
    }
L_0895DC20:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC44;
      }
      goto L_0895DC2C;
    }
L_0895DC2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC40;
      }
      goto L_0895DC34;
    }
L_0895DC34:
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC44;
      }
      goto L_0895DC40;
    }
L_0895DC40:
    ctx.gpr[17] = (0u | 2u);
    goto L_0895DC44;
L_0895DC44:
    ctx.gpr[31] = (0x0895DC4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 463u, 0x089A2034u>(ctx, &aot_mem) && ctx.pc == 0x0895DC4Cu) goto L_0895DC4C;
    return;
L_0895DC4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(916), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (15u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16959));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895DC80u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 443u, 0x089AE400u>(ctx, &aot_mem) && ctx.pc == 0x0895DC80u) goto L_0895DC80;
    return;
L_0895DC80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DC88;
    }
L_0895DC88:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DCA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DCA0u) goto L_0895DCA0;
    return;
L_0895DCA0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DCB0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895DCB0u) goto L_0895DCB0;
    return;
L_0895DCB0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895DCE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0895DCE0u) goto L_0895DCE0;
    return;
L_0895DCE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DCE8;
    }
L_0895DCE8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DD00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DD00u) goto L_0895DD00;
    return;
L_0895DD00:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DD10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895DD10u) goto L_0895DD10;
    return;
L_0895DD10:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD28;
      }
      goto L_0895DD20;
    }
L_0895DD20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895DD2C;
      }
      goto L_0895DD28;
    }
L_0895DD28:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895DD2C;
L_0895DD2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD4C;
      }
      goto L_0895DD34;
    }
L_0895DD34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD5C;
      }
      goto L_0895DD4C;
    }
L_0895DD4C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0895DD5C;
L_0895DD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DD8Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895DD8Cu) goto L_0895DD8C;
    return;
L_0895DD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895DD94;
    }
L_0895DD94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DDACu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DDACu) goto L_0895DDAC;
    return;
L_0895DDAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895DDBCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895DDBCu) goto L_0895DDBC;
    return;
L_0895DDBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDD4;
      }
      goto L_0895DDCC;
    }
L_0895DDCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895DDD8;
      }
      goto L_0895DDD4;
    }
L_0895DDD4:
    ctx.gpr[17] = (0u | 0u);
    goto L_0895DDD8;
L_0895DDD8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895DE14;
      }
      goto L_0895DE04;
    }
L_0895DE04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895DE10u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895DE10u) goto L_0895DE10;
    return;
L_0895DE10:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895DE14;
L_0895DE14:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF2C;
      }
      goto L_0895DE1C;
    }
L_0895DE1C:
    ctx.gpr[31] = (0x0895DE24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0895DE24u) goto L_0895DE24;
    return;
L_0895DE24:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DE84;
      }
      goto L_0895DE38;
    }
L_0895DE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DE64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DE64u) goto L_0895DE64;
    return;
L_0895DE64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DE7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895DE7Cu) goto L_0895DE7C;
    return;
L_0895DE7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DFF8;
      }
      goto L_0895DE84;
    }
L_0895DE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895DEE0;
      }
      goto L_0895DE94;
    }
L_0895DE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DEC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DEC0u) goto L_0895DEC0;
    return;
L_0895DEC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DED8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895DED8u) goto L_0895DED8;
    return;
L_0895DED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DFF8;
      }
      goto L_0895DEE0;
    }
L_0895DEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DF0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DF0Cu) goto L_0895DF0C;
    return;
L_0895DF0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895DF24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895DF24u) goto L_0895DF24;
    return;
L_0895DF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DFF8;
      }
      goto L_0895DF2C;
    }
L_0895DF2C:
    ctx.gpr[31] = (0x0895DF34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0895DF34u) goto L_0895DF34;
    return;
L_0895DF34:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DF64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DF64u) goto L_0895DF64;
    return;
L_0895DF64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895DF7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895DF7Cu) goto L_0895DF7C;
    return;
L_0895DF7C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DFF8;
      }
      goto L_0895DF90;
    }
L_0895DF90:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895DFE4;
      }
      goto L_0895DFA8;
    }
L_0895DFA8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895DFDCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DFDCu) goto L_0895DFDC;
    return;
L_0895DFDC:
    ctx.gpr[31] = (0x0895DFE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 774u, 0x08887D08u>(ctx, &aot_mem) && ctx.pc == 0x0895DFE4u) goto L_0895DFE4;
    return;
L_0895DFE4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF90;
      }
      goto L_0895DFF8;
    }
L_0895DFF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E000;
    }
L_0895E000:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E018u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E018u) goto L_0895E018;
    return;
L_0895E018:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895E028u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895E028u) goto L_0895E028;
    return;
L_0895E028:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E064;
      }
      goto L_0895E034;
    }
L_0895E034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895E054;
      }
      goto L_0895E044;
    }
L_0895E044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895E05C;
      }
      goto L_0895E054;
    }
L_0895E054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E068;
      }
      goto L_0895E05C;
    }
L_0895E05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E068;
      }
      goto L_0895E064;
    }
L_0895E064:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E068;
L_0895E068:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E094;
      }
      goto L_0895E08C;
    }
L_0895E08C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E0E4;
      }
      goto L_0895E094;
    }
L_0895E094:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895E0C4;
    }
    goto L_0895E0B0;
L_0895E0B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E0E4;
      }
      goto L_0895E0C4;
    }
L_0895E0C4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E0E4;
      }
      goto L_0895E0E0;
    }
L_0895E0E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895E0E4;
L_0895E0E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E0EC;
    }
L_0895E0EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E104u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E104u) goto L_0895E104;
    return;
L_0895E104:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895E114u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895E114u) goto L_0895E114;
    return;
L_0895E114:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E12C;
      }
      goto L_0895E124;
    }
L_0895E124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895E130;
      }
      goto L_0895E12C;
    }
L_0895E12C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E130;
L_0895E130:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E16C;
      }
      goto L_0895E138;
    }
L_0895E138:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0895E154u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x0895E154u) goto L_0895E154;
    return;
L_0895E154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E164;
      }
      goto L_0895E15C;
    }
L_0895E15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E1A0;
      }
      goto L_0895E164;
    }
L_0895E164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E1A0;
      }
      goto L_0895E16C;
    }
L_0895E16C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895E18Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x0895E18Cu) goto L_0895E18C;
    return;
L_0895E18C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E19C;
      }
      goto L_0895E194;
    }
L_0895E194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E1A0;
      }
      goto L_0895E19C;
    }
L_0895E19C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E1A0;
L_0895E1A0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E1CC;
      }
      goto L_0895E1C4;
    }
L_0895E1C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E21C;
      }
      goto L_0895E1CC;
    }
L_0895E1CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895E1FC;
    }
    goto L_0895E1E8;
L_0895E1E8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E21C;
      }
      goto L_0895E1FC;
    }
L_0895E1FC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E21C;
      }
      goto L_0895E218;
    }
L_0895E218:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895E21C;
L_0895E21C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E25C;
      }
      goto L_0895E230;
    }
L_0895E230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0895E25Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0895E25Cu) goto L_0895E25C;
    return;
L_0895E25C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E26C;
      }
      goto L_0895E26C;
    }
L_0895E26C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E274;
    }
L_0895E274:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E28Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E28Cu) goto L_0895E28C;
    return;
L_0895E28C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895E29Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895E29Cu) goto L_0895E29C;
    return;
L_0895E29C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E2B4;
      }
      goto L_0895E2AC;
    }
L_0895E2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895E2B8;
      }
      goto L_0895E2B4;
    }
L_0895E2B4:
    ctx.gpr[5] = (0u | 0u);
    goto L_0895E2B8;
L_0895E2B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E300;
      }
      goto L_0895E2C0;
    }
L_0895E2C0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895E2E8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0895E2E8u) goto L_0895E2E8;
    return;
L_0895E2E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E2F8;
      }
      goto L_0895E2F0;
    }
L_0895E2F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E338;
      }
      goto L_0895E2F8;
    }
L_0895E2F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895E338;
      }
      goto L_0895E300;
    }
L_0895E300:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0895E324u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0895E324u) goto L_0895E324;
    return;
L_0895E324:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E334;
      }
      goto L_0895E32C;
    }
L_0895E32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895E338;
      }
      goto L_0895E334;
    }
L_0895E334:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895E338;
L_0895E338:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E364;
      }
      goto L_0895E35C;
    }
L_0895E35C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E3B4;
      }
      goto L_0895E364;
    }
L_0895E364:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895E394;
    }
    goto L_0895E380;
L_0895E380:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E3B4;
      }
      goto L_0895E394;
    }
L_0895E394:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E3B4;
      }
      goto L_0895E3B0;
    }
L_0895E3B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895E3B4;
L_0895E3B4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E404;
      }
      goto L_0895E3C8;
    }
L_0895E3C8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895E404u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0895E404u) goto L_0895E404;
    return;
L_0895E404:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E414;
      }
      goto L_0895E414;
    }
L_0895E414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E41C;
    }
L_0895E41C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E434u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E434u) goto L_0895E434;
    return;
L_0895E434:
    ctx.gpr[31] = (0x0895E43Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 112u, 0x08A28DACu>(ctx, &aot_mem) && ctx.pc == 0x0895E43Cu) goto L_0895E43C;
    return;
L_0895E43C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E56C;
      }
      goto L_0895E444;
    }
L_0895E444:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895E450u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0895E450u) goto L_0895E450;
    return;
L_0895E450:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895E470;
      }
      goto L_0895E45C;
    }
L_0895E45C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895E46Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 418u, 0x08A4DFA8u>(ctx, &aot_mem) && ctx.pc == 0x0895E46Cu) goto L_0895E46C;
    return;
L_0895E46C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895E470;
L_0895E470:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E4AC;
      }
      goto L_0895E49C;
    }
L_0895E49C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895E4A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895E4A8u) goto L_0895E4A8;
    return;
L_0895E4A8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895E4AC;
L_0895E4AC:
    ctx.gpr[31] = (0x0895E4B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0895E4B4u) goto L_0895E4B4;
    return;
L_0895E4B4:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0895E4DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895E4DCu) goto L_0895E4DC;
    return;
L_0895E4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E534;
      }
      goto L_0895E528;
    }
L_0895E528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0895E534;
L_0895E534:
    ctx.gpr[31] = (0x0895E53Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E53Cu) goto L_0895E53C;
    return;
L_0895E53C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895E54Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E54Cu) goto L_0895E54C;
    return;
L_0895E54C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E564u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895E564u) goto L_0895E564;
    return;
L_0895E564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E750;
      }
      goto L_0895E56C;
    }
L_0895E56C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x0895E578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x0895E578u) goto L_0895E578;
    return;
L_0895E578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E5C8;
      }
      goto L_0895E580;
    }
L_0895E580:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895E58Cu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0895E58Cu) goto L_0895E58C;
    return;
L_0895E58C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895E5AC;
      }
      goto L_0895E598;
    }
L_0895E598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895E5A8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x0895E5A8u) goto L_0895E5A8;
    return;
L_0895E5A8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0895E5AC;
L_0895E5AC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E5FC;
      }
      goto L_0895E5C8;
    }
L_0895E5C8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0895E5D8u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0895E5D8u) goto L_0895E5D8;
    return;
L_0895E5D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0895E5F8;
      }
      goto L_0895E5E4;
    }
L_0895E5E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895E5F4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x0895E5F4u) goto L_0895E5F4;
    return;
L_0895E5F4:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0895E5F8;
L_0895E5F8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0895E5FC;
L_0895E5FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E638;
      }
      goto L_0895E628;
    }
L_0895E628:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895E634u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895E634u) goto L_0895E634;
    return;
L_0895E634:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895E638;
L_0895E638:
    ctx.gpr[31] = (0x0895E640u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0895E640u) goto L_0895E640;
    return;
L_0895E640:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0895E684u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895E684u) goto L_0895E684;
    return;
L_0895E684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0895E6ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0895E6ACu) goto L_0895E6AC;
    return;
L_0895E6AC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x0895E6F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x0895E6F8u) goto L_0895E6F8;
    return;
L_0895E6F8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E720;
      }
      goto L_0895E714;
    }
L_0895E714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0895E720;
L_0895E720:
    ctx.gpr[31] = (0x0895E728u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E728u) goto L_0895E728;
    return;
L_0895E728:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895E738u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E738u) goto L_0895E738;
    return;
L_0895E738:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E750u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895E750u) goto L_0895E750;
    return;
L_0895E750:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7B4;
      }
      goto L_0895E760;
    }
L_0895E760:
    ctx.gpr[31] = (0x0895E768u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0895E768u) goto L_0895E768;
    return;
L_0895E768:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895E798;
      }
      goto L_0895E774;
    }
L_0895E774:
    ctx.gpr[31] = (0x0895E77Cu);
    ctx.gpr[4] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0895E77Cu) goto L_0895E77C;
    return;
L_0895E77C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7B4;
      }
      goto L_0895E788;
    }
L_0895E788:
    ctx.gpr[31] = (0x0895E790u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 396u, 0x089DA078u>(ctx, &aot_mem) && ctx.pc == 0x0895E790u) goto L_0895E790;
    return;
L_0895E790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7B4;
      }
      goto L_0895E798;
    }
L_0895E798:
    ctx.gpr[31] = (0x0895E7A0u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0895E7A0u) goto L_0895E7A0;
    return;
L_0895E7A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7B4;
      }
      goto L_0895E7AC;
    }
L_0895E7AC:
    ctx.gpr[31] = (0x0895E7B4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 260u, 0x08ABD8B8u>(ctx, &aot_mem) && ctx.pc == 0x0895E7B4u) goto L_0895E7B4;
    return;
L_0895E7B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E7D8;
      }
      goto L_0895E7C0;
    }
L_0895E7C0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0895E7D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x0895E7D8u) goto L_0895E7D8;
    return;
L_0895E7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E7E0;
    }
L_0895E7E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E7F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E7F8u) goto L_0895E7F8;
    return;
L_0895E7F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895E808u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895E808u) goto L_0895E808;
    return;
L_0895E808:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E848;
      }
      goto L_0895E814;
    }
L_0895E814:
    ctx.gpr[31] = (0x0895E81Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0895E81Cu) goto L_0895E81C;
    return;
L_0895E81C:
    ctx.gpr[31] = (0x0895E824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C3124u>(ctx, &aot_mem) && ctx.pc == 0x0895E824u) goto L_0895E824;
    return;
L_0895E824:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E848;
      }
      goto L_0895E82C;
    }
L_0895E82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895E848u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895E848u) goto L_0895E848;
    return;
L_0895E848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E86C;
      }
      goto L_0895E854;
    }
L_0895E854:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0895E86Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x0895E86Cu) goto L_0895E86C;
    return;
L_0895E86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E874;
    }
L_0895E874:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895E890u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E890u) goto L_0895E890;
    return;
L_0895E890:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895E8A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895E8A0u) goto L_0895E8A0;
    return;
L_0895E8A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E8D8;
      }
      goto L_0895E8C8;
    }
L_0895E8C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895E8D4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895E8D4u) goto L_0895E8D4;
    return;
L_0895E8D4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895E8D8;
L_0895E8D8:
    ctx.gpr[31] = (0x0895E8E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0895E8E0u) goto L_0895E8E0;
    return;
L_0895E8E0:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E904u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E904u) goto L_0895E904;
    return;
L_0895E904:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E918;
      }
      goto L_0895E90C;
    }
L_0895E90C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895E920;
      }
      goto L_0895E918;
    }
L_0895E918:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0895E920;
L_0895E920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_0895E954;
    }
    goto L_0895E954;
L_0895E954:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895E970;
      }
      goto L_0895E964;
    }
L_0895E964:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0895E970;
L_0895E970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E978;
    }
L_0895E978:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895E994u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895E994u) goto L_0895E994;
    return;
L_0895E994:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895E9A4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895E9A4u) goto L_0895E9A4;
    return;
L_0895E9A4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0895E9B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0895E9B0u) goto L_0895E9B0;
    return;
L_0895E9B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_0895E9D4;
    }
    goto L_0895E9D4;
L_0895E9D4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895E9EC;
    }
L_0895E9EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EA04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EA04u) goto L_0895EA04;
    return;
L_0895EA04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EA14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EA14u) goto L_0895EA14;
    return;
L_0895EA14:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895EA20;
    }
L_0895EA20:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0895EA40u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EA40u) goto L_0895EA40;
    return;
L_0895EA40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EA50u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EA50u) goto L_0895EA50;
    return;
L_0895EA50:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EA88u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895EA88u) goto L_0895EA88;
    return;
L_0895EA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895EA90;
    }
L_0895EA90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895EAACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EAACu) goto L_0895EAAC;
    return;
L_0895EAAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EABCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EABCu) goto L_0895EABC;
    return;
L_0895EABC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895EAF4;
      }
      goto L_0895EAE4;
    }
L_0895EAE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0895EAF0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895EAF0u) goto L_0895EAF0;
    return;
L_0895EAF0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895EAF4;
L_0895EAF4:
    ctx.gpr[31] = (0x0895EAFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x0895EAFCu) goto L_0895EAFC;
    return;
L_0895EAFC:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895EB7C;
      }
      goto L_0895EB30;
    }
L_0895EB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895EB5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EB5Cu) goto L_0895EB5C;
    return;
L_0895EB5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EB74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895EB74u) goto L_0895EB74;
    return;
L_0895EB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EB7C;
    }
L_0895EB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895EBA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895EBA8u) goto L_0895EBA8;
    return;
L_0895EBA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EBC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x0895EBC0u) goto L_0895EBC0;
    return;
L_0895EBC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EBD0;
    }
L_0895EBD0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895EBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EBF0;
    }
L_0895EBF0:
    ctx.gpr[31] = (0x0895EBF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0895EBF8u) goto L_0895EBF8;
    return;
L_0895EBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC00;
    }
L_0895EC00:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x0895EC0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0895EC0Cu) goto L_0895EC0C;
    return;
L_0895EC0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895EC1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EC1Cu) goto L_0895EC1C;
    return;
L_0895EC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC24;
    }
L_0895EC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC2C;
    }
L_0895EC2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EC48u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EC48u) goto L_0895EC48;
    return;
L_0895EC48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC50;
    }
L_0895EC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC58;
    }
L_0895EC58:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895EC74u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EC74u) goto L_0895EC74;
    return;
L_0895EC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC7C;
    }
L_0895EC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895EC84;
    }
L_0895EC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895ECA4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0895ECA4u) goto L_0895ECA4;
    return;
L_0895ECA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895ECAC;
    }
L_0895ECAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ECB4;
      }
      goto L_0895ECB4;
    }
L_0895ECB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895ECBC;
    }
L_0895ECBC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895ECD4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895ECD4u) goto L_0895ECD4;
    return;
L_0895ECD4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895ECE4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895ECE4u) goto L_0895ECE4;
    return;
L_0895ECE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED3C;
      }
      goto L_0895ECF0;
    }
L_0895ECF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[6] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895ED0C;
      }
      goto L_0895ED04;
    }
L_0895ED04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895ED40;
      }
      goto L_0895ED0C;
    }
L_0895ED0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0895ED34;
      }
      goto L_0895ED1C;
    }
L_0895ED1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ED34;
      }
      goto L_0895ED2C;
    }
L_0895ED2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895ED40;
      }
      goto L_0895ED34;
    }
L_0895ED34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895ED40;
      }
      goto L_0895ED3C;
    }
L_0895ED3C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895ED40;
L_0895ED40:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895ED6C;
      }
      goto L_0895ED64;
    }
L_0895ED64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895EDBC;
      }
      goto L_0895ED6C;
    }
L_0895ED6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895ED9C;
    }
    goto L_0895ED88;
L_0895ED88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895EDBC;
      }
      goto L_0895ED9C;
    }
L_0895ED9C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EDBC;
      }
      goto L_0895EDB8;
    }
L_0895EDB8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895EDBC;
L_0895EDBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895EDC4;
    }
L_0895EDC4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895EDE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EDE0u) goto L_0895EDE0;
    return;
L_0895EDE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EDF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EDF0u) goto L_0895EDF0;
    return;
L_0895EDF0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
        goto L_0895EE44;
    }
    goto L_0895EE34;
L_0895EE34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    goto L_0895EE44;
L_0895EE44:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895EE54;
    }
L_0895EE54:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895EE70u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EE70u) goto L_0895EE70;
    return;
L_0895EE70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EE80u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EE80u) goto L_0895EE80;
    return;
L_0895EE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895EE90;
    }
L_0895EE90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895EEACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EEACu) goto L_0895EEAC;
    return;
L_0895EEAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EEBCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EEBCu) goto L_0895EEBC;
    return;
L_0895EEBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895EEEC;
      }
      goto L_0895EED0;
    }
L_0895EED0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0895EEEC;
L_0895EEEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895EF00;
    }
L_0895EF00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0895EF1Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895EF1Cu) goto L_0895EF1C;
    return;
L_0895EF1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895EF2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895EF2Cu) goto L_0895EF2C;
    return;
L_0895EF2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895EF44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x0895EF44u) goto L_0895EF44;
    return;
L_0895EF44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EF54;
      }
      goto L_0895EF4C;
    }
L_0895EF4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895EF58;
      }
      goto L_0895EF54;
    }
L_0895EF54:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895EF58;
L_0895EF58:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EF84;
      }
      goto L_0895EF7C;
    }
L_0895EF7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EF84;
    }
L_0895EF84:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895EFB4;
    }
    goto L_0895EFA0;
L_0895EFA0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFB4;
    }
L_0895EFB4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFD4;
      }
      goto L_0895EFD0;
    }
L_0895EFD0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895EFD4;
L_0895EFD4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F014;
      }
      goto L_0895EFE8;
    }
L_0895EFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0895F014u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0895F014u) goto L_0895F014;
    return;
L_0895F014:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F024;
      }
      goto L_0895F024;
    }
L_0895F024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F02C;
    }
L_0895F02C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0895F048u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F048u) goto L_0895F048;
    return;
L_0895F048:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895F058u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895F058u) goto L_0895F058;
    return;
L_0895F058:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F078u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0895F078u) goto L_0895F078;
    return;
L_0895F078:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F088;
      }
      goto L_0895F080;
    }
L_0895F080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895F08C;
      }
      goto L_0895F088;
    }
L_0895F088:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895F08C;
L_0895F08C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F0B8;
      }
      goto L_0895F0B0;
    }
L_0895F0B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F108;
      }
      goto L_0895F0B8;
    }
L_0895F0B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F0E8;
    }
    goto L_0895F0D4;
L_0895F0D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F108;
      }
      goto L_0895F0E8;
    }
L_0895F0E8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F108;
      }
      goto L_0895F104;
    }
L_0895F104:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F108;
L_0895F108:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F158;
      }
      goto L_0895F11C;
    }
L_0895F11C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0895F158u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0895F158u) goto L_0895F158;
    return;
L_0895F158:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F168;
      }
      goto L_0895F168;
    }
L_0895F168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F170;
    }
L_0895F170:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F1B0;
      }
      goto L_0895F180;
    }
L_0895F180:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F18Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0895F18Cu) goto L_0895F18C;
    return;
L_0895F18C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F1A8;
      }
      goto L_0895F198;
    }
L_0895F198:
    ctx.gpr[31] = (0x0895F1A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F1A0u) goto L_0895F1A0;
    return;
L_0895F1A0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F1A8;
L_0895F1A8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F1B0;
L_0895F1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F1C8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0895F1C8u) goto L_0895F1C8;
    return;
L_0895F1C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F1F4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F1F4u) goto L_0895F1F4;
    return;
L_0895F1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0895F20Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F20Cu) goto L_0895F20C;
    return;
L_0895F20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F214;
    }
L_0895F214:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F254;
      }
      goto L_0895F224;
    }
L_0895F224:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F230u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0895F230u) goto L_0895F230;
    return;
L_0895F230:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F24C;
      }
      goto L_0895F23C;
    }
L_0895F23C:
    ctx.gpr[31] = (0x0895F244u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F244u) goto L_0895F244;
    return;
L_0895F244:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F24C;
L_0895F24C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F254;
L_0895F254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F26Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0895F26Cu) goto L_0895F26C;
    return;
L_0895F26C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F298u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F298u) goto L_0895F298;
    return;
L_0895F298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0895F2ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 239u, 0x08879450u>(ctx, &aot_mem) && ctx.pc == 0x0895F2ACu) goto L_0895F2AC;
    return;
L_0895F2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F2B4;
    }
L_0895F2B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F2F4;
      }
      goto L_0895F2C4;
    }
L_0895F2C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F2D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0895F2D0u) goto L_0895F2D0;
    return;
L_0895F2D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F2EC;
      }
      goto L_0895F2DC;
    }
L_0895F2DC:
    ctx.gpr[31] = (0x0895F2E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F2E4u) goto L_0895F2E4;
    return;
L_0895F2E4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F2EC;
L_0895F2EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F2F4;
L_0895F2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F30Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0895F30Cu) goto L_0895F30C;
    return;
L_0895F30C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F338u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F338u) goto L_0895F338;
    return;
L_0895F338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0895F354u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 256u, 0x0887966Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F354u) goto L_0895F354;
    return;
L_0895F354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F35C;
    }
L_0895F35C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F39C;
      }
      goto L_0895F36C;
    }
L_0895F36C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0895F378u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0895F378u) goto L_0895F378;
    return;
L_0895F378:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0895F394;
      }
      goto L_0895F384;
    }
L_0895F384:
    ctx.gpr[31] = (0x0895F38Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0895F38Cu) goto L_0895F38C;
    return;
L_0895F38C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F394;
L_0895F394:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0895F39C;
L_0895F39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0895F3B4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0895F3B4u) goto L_0895F3B4;
    return;
L_0895F3B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F3E0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F3E0u) goto L_0895F3E0;
    return;
L_0895F3E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x0895F3F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 262u, 0x08879774u>(ctx, &aot_mem) && ctx.pc == 0x0895F3F4u) goto L_0895F3F4;
    return;
L_0895F3F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F3FC;
    }
L_0895F3FC:
    ctx.gpr[31] = (0x0895F404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 271u, 0x0887990Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F404u) goto L_0895F404;
    return;
L_0895F404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F40C;
    }
L_0895F40C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F43Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895F43Cu) goto L_0895F43C;
    return;
L_0895F43C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F444;
    }
L_0895F444:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F460u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F460u) goto L_0895F460;
    return;
L_0895F460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895F474u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x0895F474u) goto L_0895F474;
    return;
L_0895F474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F47C;
    }
L_0895F47C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895F49Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F49Cu) goto L_0895F49C;
    return;
L_0895F49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0895F4B0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 58u, 0x0883C408u>(ctx, &aot_mem) && ctx.pc == 0x0895F4B0u) goto L_0895F4B0;
    return;
L_0895F4B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895F4C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895F4C4u) goto L_0895F4C4;
    return;
L_0895F4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F4CC;
    }
L_0895F4CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895F4E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F4E8u) goto L_0895F4E8;
    return;
L_0895F4E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895F51C;
      }
      goto L_0895F50C;
    }
L_0895F50C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0895F518u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0895F518u) goto L_0895F518;
    return;
L_0895F518:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895F51C;
L_0895F51C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0895F580;
      }
      goto L_0895F578;
    }
L_0895F578:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_0895F580;
L_0895F580:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F58C;
      }
      goto L_0895F588;
    }
L_0895F588:
    ctx.gpr[4] = (0u | 1u);
    goto L_0895F58C;
L_0895F58C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F5B8;
      }
      goto L_0895F5B0;
    }
L_0895F5B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F608;
      }
      goto L_0895F5B8;
    }
L_0895F5B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F5E8;
    }
    goto L_0895F5D4;
L_0895F5D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F608;
      }
      goto L_0895F5E8;
    }
L_0895F5E8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F608;
      }
      goto L_0895F604;
    }
L_0895F604:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F608;
L_0895F608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F610;
    }
L_0895F610:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F640;
      }
      goto L_0895F638;
    }
L_0895F638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F690;
      }
      goto L_0895F640;
    }
L_0895F640:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F670;
    }
    goto L_0895F65C;
L_0895F65C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F690;
      }
      goto L_0895F670;
    }
L_0895F670:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F690;
      }
      goto L_0895F68C;
    }
L_0895F68C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F690;
L_0895F690:
    ctx.gpr[31] = (0x0895F698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 657u, 0x08957FD8u>(ctx, &aot_mem) && ctx.pc == 0x0895F698u) goto L_0895F698;
    return;
L_0895F698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F6A0;
    }
L_0895F6A0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F6D0;
      }
      goto L_0895F6C8;
    }
L_0895F6C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F720;
      }
      goto L_0895F6D0;
    }
L_0895F6D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895F700;
    }
    goto L_0895F6EC;
L_0895F6EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F720;
      }
      goto L_0895F700;
    }
L_0895F700:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F720;
      }
      goto L_0895F71C;
    }
L_0895F71C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895F720;
L_0895F720:
    ctx.gpr[31] = (0x0895F728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 657u, 0x08957FD8u>(ctx, &aot_mem) && ctx.pc == 0x0895F728u) goto L_0895F728;
    return;
L_0895F728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895F734;
      }
      goto L_0895F730;
    }
L_0895F730:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0895F734;
L_0895F734:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-219));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(85) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 385u, 0x08961C50u>(ctx, &aot_mem); return;
      }
      goto L_0895F79C;
    }
L_0895F79C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-219));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30784)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895F7B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F7D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F7D0u) goto L_0895F7D0;
    return;
L_0895F7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F804;
      }
      goto L_0895F7E4;
    }
L_0895F7E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F800;
      }
      goto L_0895F7F4;
    }
L_0895F7F4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895F804;
      }
      goto L_0895F800;
    }
L_0895F800:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(0u));
    goto L_0895F804;
L_0895F804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895F80C;
    }
L_0895F80C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F824u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F824u) goto L_0895F824;
    return;
L_0895F824:
    ctx.gpr[31] = (0x0895F82Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 27u, 0x089581ECu>(ctx, &aot_mem) && ctx.pc == 0x0895F82Cu) goto L_0895F82C;
    return;
L_0895F82C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(526), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895F83C;
    }
L_0895F83C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F854;
      }
      goto L_0895F848;
    }
L_0895F848:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x0895F854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 40u, 0x089582F4u>(ctx, &aot_mem) && ctx.pc == 0x0895F854u) goto L_0895F854;
    return;
L_0895F854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895F85C;
    }
L_0895F85C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895F874u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F874u) goto L_0895F874;
    return;
L_0895F874:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895F884u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895F884u) goto L_0895F884;
    return;
L_0895F884:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F89C;
      }
      goto L_0895F894;
    }
L_0895F894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895F8A0;
      }
      goto L_0895F89C;
    }
L_0895F89C:
    ctx.gpr[19] = (0u | 0u);
    goto L_0895F8A0;
L_0895F8A0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895F8B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0895F8B0u) goto L_0895F8B0;
    return;
L_0895F8B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895F8C4;
    }
L_0895F8C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895F8D0;
    }
L_0895F8D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0895F8E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895F8E4u) goto L_0895F8E4;
    return;
L_0895F8E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F968;
      }
      goto L_0895F8F0;
    }
L_0895F8F0:
    ctx.gpr[31] = (0x0895F8F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 210u, 0x089ED530u>(ctx, &aot_mem) && ctx.pc == 0x0895F8F8u) goto L_0895F8F8;
    return;
L_0895F8F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895F968;
      }
      goto L_0895F908;
    }
L_0895F908:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6822)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F968;
      }
      goto L_0895F918;
    }
L_0895F918:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[31] = (0x0895F968u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x0895F968u) goto L_0895F968;
    return;
L_0895F968:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895F9DC;
      }
      goto L_0895F980;
    }
L_0895F980:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895F988;
    }
L_0895F988:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[31] = (0x0895F9D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x0895F9D4u) goto L_0895F9D4;
    return;
L_0895F9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895F9DC;
    }
L_0895F9DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FA00;
      }
      goto L_0895F9E4;
    }
L_0895F9E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA10;
      }
      goto L_0895F9F0;
    }
L_0895F9F0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895FA00;
    }
L_0895FA00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F9F0;
      }
      goto L_0895FA08;
    }
L_0895FA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895FA10;
    }
L_0895FA10:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[31] = (0x0895FA5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x0895FA5Cu) goto L_0895FA5C;
    return;
L_0895FA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895FA64;
    }
L_0895FA64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FA84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895FA84u) goto L_0895FA84;
    return;
L_0895FA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895FA8C;
    }
L_0895FA8C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FAA4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FAA4u) goto L_0895FAA4;
    return;
L_0895FAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCEC;
      }
      goto L_0895FAD8;
    }
L_0895FAD8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895FB18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FB18u) goto L_0895FB18;
    return;
L_0895FB18:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FB2C;
    }
L_0895FB2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FB38;
    }
L_0895FB38:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0895FB4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895FB4Cu) goto L_0895FB4C;
    return;
L_0895FB4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBD0;
      }
      goto L_0895FB58;
    }
L_0895FB58:
    ctx.gpr[31] = (0x0895FB60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 210u, 0x089ED530u>(ctx, &aot_mem) && ctx.pc == 0x0895FB60u) goto L_0895FB60;
    return;
L_0895FB60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895FBD0;
      }
      goto L_0895FB70;
    }
L_0895FB70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6822)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBD0;
      }
      goto L_0895FB80;
    }
L_0895FB80:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[31] = (0x0895FBD0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x0895FBD0u) goto L_0895FBD0;
    return;
L_0895FBD0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FC44;
      }
      goto L_0895FBE8;
    }
L_0895FBE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FBF0;
    }
L_0895FBF0:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[31] = (0x0895FC3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x0895FC3Cu) goto L_0895FC3C;
    return;
L_0895FC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FC44;
    }
L_0895FC44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FC68;
      }
      goto L_0895FC4C;
    }
L_0895FC4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC78;
      }
      goto L_0895FC58;
    }
L_0895FC58:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FC68;
    }
L_0895FC68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC58;
      }
      goto L_0895FC70;
    }
L_0895FC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FC78;
    }
L_0895FC78:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17448), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17444), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6822), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[31] = (0x0895FCC4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x0895FCC4u) goto L_0895FCC4;
    return;
L_0895FCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FCCC;
      }
      goto L_0895FCCC;
    }
L_0895FCCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6820)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FCECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895FCECu) goto L_0895FCEC;
    return;
L_0895FCEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895FCF4;
    }
L_0895FCF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895FD10u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FD10u) goto L_0895FD10;
    return;
L_0895FD10:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895FD20u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895FD20u) goto L_0895FD20;
    return;
L_0895FD20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895FD34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895FD34u) goto L_0895FD34;
    return;
L_0895FD34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD4C;
      }
      goto L_0895FD44;
    }
L_0895FD44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895FD50;
      }
      goto L_0895FD4C;
    }
L_0895FD4C:
    ctx.gpr[17] = (0u | 0u);
    goto L_0895FD50;
L_0895FD50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD68;
      }
      goto L_0895FD58;
    }
L_0895FD58:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FD68;
      }
      goto L_0895FD60;
    }
L_0895FD60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895FD6C;
      }
      goto L_0895FD68;
    }
L_0895FD68:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FD6C;
L_0895FD6C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FD98;
      }
      goto L_0895FD90;
    }
L_0895FD90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FDE8;
      }
      goto L_0895FD98;
    }
L_0895FD98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895FDC8;
    }
    goto L_0895FDB4;
L_0895FDB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FDE8;
      }
      goto L_0895FDC8;
    }
L_0895FDC8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FDE8;
      }
      goto L_0895FDE4;
    }
L_0895FDE4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895FDE8;
L_0895FDE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895FDF0;
    }
L_0895FDF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0895FE0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FE0Cu) goto L_0895FE0C;
    return;
L_0895FE0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0895FE1Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0895FE1Cu) goto L_0895FE1C;
    return;
L_0895FE1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FE9C;
      }
      goto L_0895FE54;
    }
L_0895FE54:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895FE94;
      }
      goto L_0895FE8C;
    }
L_0895FE8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895FEA0;
      }
      goto L_0895FE94;
    }
L_0895FE94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895FEA0;
      }
      goto L_0895FE9C;
    }
L_0895FE9C:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FEA0;
L_0895FEA0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FECC;
      }
      goto L_0895FEC4;
    }
L_0895FEC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FF1C;
      }
      goto L_0895FECC;
    }
L_0895FECC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895FEFC;
    }
    goto L_0895FEE8;
L_0895FEE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895FF1C;
      }
      goto L_0895FEFC;
    }
L_0895FEFC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF1C;
      }
      goto L_0895FF18;
    }
L_0895FF18:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895FF1C;
L_0895FF1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 386u, 0x08961C54u>(ctx, &aot_mem); return;
      }
      goto L_0895FF24;
    }
L_0895FF24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895FF3Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0895FF3Cu) goto L_0895FF3C;
    return;
L_0895FF3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0895FF4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0895FF4Cu) goto L_0895FF4C;
    return;
L_0895FF4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF64;
      }
      goto L_0895FF5C;
    }
L_0895FF5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0895FF68;
      }
      goto L_0895FF64;
    }
L_0895FF64:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FF68;
L_0895FF68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF90;
      }
      goto L_0895FF70;
    }
L_0895FF70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895FF90;
      }
      goto L_0895FF88;
    }
L_0895FF88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0895FF94;
      }
      goto L_0895FF90;
    }
L_0895FF90:
    ctx.gpr[4] = (0u | 0u);
    goto L_0895FF94;
L_0895FF94:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895FFC0;
      }
      goto L_0895FFB8;
    }
L_0895FFB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 3u, 0x08960010u>(ctx, &aot_mem); return;
      }
      goto L_0895FFC0;
    }
L_0895FFC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895FFF0;
    }
    goto L_0895FFDC;
L_0895FFDC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 3u, 0x08960010u>(ctx, &aot_mem); return;
      }
      goto L_0895FFF0;
    }
L_0895FFF0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.pc = 0x08960000u; return;
}

void recomp_unit_0086(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0086_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_86(Runtime &runtime) {
    runtime.register_generated_unit(86u, 0x0895C000u, 16384u, &recomp_unit_0086, &recomp_unit_0086_entry);
    runtime.register_function(0x0895C000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C00Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C030u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C050u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C080u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C088u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C10Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C128u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C13Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C158u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C15Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C170u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C19Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C200u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C210u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C23Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C26Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C274u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C290u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C314u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C328u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C344u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C34Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C37Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C3F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C400u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C428u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C430u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C44Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C460u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C47Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C480u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C494u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C4FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C510u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C53Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C550u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C568u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C57Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C590u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C5FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C628u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C650u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C668u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C67Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C690u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C73Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C750u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C768u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C77Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C7ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C814u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C850u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C86Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C880u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C894u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C914u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C92Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C940u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C954u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C96Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C980u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C994u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CECCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D00Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D034u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D06Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D080u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D118u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D13Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D150u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D164u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D174u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D188u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D19Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D20Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D254u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D268u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D27Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D28Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D310u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D350u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D364u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D37Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D390u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D410u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D424u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D43Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D450u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D464u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D47Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D490u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D50Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D534u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D544u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D554u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D560u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D56Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D57Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D604u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D620u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D628u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D64Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D65Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D668u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D678u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D694u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D720u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D73Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D74Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D754u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D768u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D780u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D794u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D810u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D814u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D81Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D830u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D840u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D84Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D858u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D86Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D874u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D880u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D88Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D91Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D928u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D92Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D990u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DADCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DED8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E018u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E028u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E034u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E054u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E05Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E064u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E068u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E094u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E114u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E124u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E12Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E130u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E138u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E154u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E15Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E164u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E16Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E18Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E194u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E19Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E218u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E25Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E26Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E274u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E28Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E29Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E300u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E32Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E334u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E35Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E364u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E380u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E3C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E404u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E41Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E434u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E43Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E444u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E450u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E45Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E470u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E49Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E528u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E534u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E53Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E54Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E564u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E56Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E58Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E628u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E634u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E638u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E684u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E714u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E720u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E738u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E750u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E760u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E768u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E774u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E77Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E788u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E798u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E808u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E814u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E81Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E824u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E82Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E848u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E854u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E86Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E874u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E890u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E904u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E90Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E918u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E920u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E954u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E964u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E970u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E978u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E994u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EABCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ECF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EED0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F014u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F024u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F02Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F048u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F078u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F080u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F088u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F108u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F11Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F158u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F168u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F170u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F18Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F198u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F20Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F224u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F230u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F23Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F24Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F254u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F26Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F298u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F30Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F338u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F354u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F35Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F36Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F378u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F384u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F38Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F394u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F39Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F404u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F40Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F43Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F444u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F460u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F474u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F47Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F49Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F50Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F518u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F588u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F58Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F604u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F608u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F638u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F65Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F670u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F68Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F690u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F700u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F71Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F720u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F728u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F730u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F734u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F764u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F79Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F7F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F800u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F804u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F80Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F824u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F82Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F83Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F848u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F854u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F85Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F874u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F884u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F894u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F89Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F8F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F908u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F918u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F968u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F980u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F988u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBD0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FECCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFF0u, &recomp_unit_0086, "recomp_unit_0086");
}
} // namespace psprecomp
