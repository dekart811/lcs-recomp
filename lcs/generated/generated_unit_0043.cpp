#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_lang.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0043[4095] = {
    1, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 23,
    24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31,
    0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 0, 0, 48,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54,
    0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68, 0,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 79, 0, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89,
    0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138,
    0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0,
    0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0,
    161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 171, 0, 0,
    0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 188, 0,
    189, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0,
    0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220,
    0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 235, 0, 0, 236, 0, 0, 0, 237, 238, 0, 0, 239, 0, 0, 0, 240, 241,
    0, 0, 242, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 253, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257,
    0, 0, 258, 0, 259, 260, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 266, 0, 267, 268, 0, 269, 0, 270, 0, 271, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0,
    287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294,
    0, 0, 0, 295, 0, 296, 0, 0, 297, 0, 0, 0, 298, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0,
    319, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 326, 0, 0, 327, 0, 328, 329, 0, 0, 330, 0, 331, 332, 0, 333, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0,
    338, 0, 339, 0, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0, 356, 357, 0, 358,
    0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383,
    0, 384, 0, 385, 0, 386, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 398, 0, 0,
    0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421,
    0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 433,
    0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 446, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452,
    0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458,
    0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0,
    467, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 478, 0,
    0, 0, 479, 0, 480, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 490, 0, 491,
    0, 492, 493, 0, 494, 0, 495, 0, 496, 0, 497, 498, 0, 499, 0, 500, 0, 501, 0, 502, 503, 0, 504, 505, 0, 506, 0, 0, 507, 0, 0, 0,
    0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    510, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0,
    0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0,
    524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 531,
    532, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0,
    539, 0, 540, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 546, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 551,
    0, 0, 552, 0, 553, 554, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 562, 0, 563, 0, 0, 0,
    0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 569, 0, 570, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0,
    574, 0, 0, 575, 0, 0, 576, 0, 577, 578, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 584, 585, 0, 586, 0,
    0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 600,
    0, 601, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609,
    0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0,
    619, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 628,
    0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634,
    0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641,
    0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0,
    0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0,
    666, 0, 667, 0, 668, 0, 669, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0,
    673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    681, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0,
    0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 702, 0,
    0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0,
    709, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 717,
    0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0,
    0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    729, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0,
    0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0,
    0, 742, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749,
    0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 0,
    759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0,
    0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0,
    0, 767, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773,
    0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0,
    0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 0, 788, 0, 0, 789, 0, 0, 0, 790, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0,
    0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 798, 0, 0,
    0, 0, 799, 0, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 805,
    0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 812, 0, 0, 0,
    0, 813, 0, 814, 0, 0, 815, 0, 816, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 823, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0,
    0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 0, 835, 0, 836, 0, 0, 0, 837,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 842, 0,
    0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849,
    0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0,
    0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 863, 0, 864, 0,
    0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 873, 0,
    874, 0, 875, 0, 0, 876, 0, 0, 877, 0, 878, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 881, 0, 882, 0, 883, 0, 0, 884,
};
void recomp_unit_0043_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0043[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B0000;
    case 2u: goto L_088B0004;
    case 3u: goto L_088B001C;
    case 4u: goto L_088B0034;
    case 5u: goto L_088B004C;
    case 6u: goto L_088B0064;
    case 7u: goto L_088B007C;
    case 8u: goto L_088B0094;
    case 9u: goto L_088B00AC;
    case 10u: goto L_088B00B8;
    case 11u: goto L_088B00C8;
    case 12u: goto L_088B00DC;
    case 13u: goto L_088B0100;
    case 14u: goto L_088B0114;
    case 15u: goto L_088B0124;
    case 16u: goto L_088B012C;
    case 17u: goto L_088B0134;
    case 18u: goto L_088B0140;
    case 19u: goto L_088B014C;
    case 20u: goto L_088B0158;
    case 21u: goto L_088B016C;
    case 22u: goto L_088B0174;
    case 23u: goto L_088B017C;
    case 24u: goto L_088B0180;
    case 25u: goto L_088B0188;
    case 26u: goto L_088B01AC;
    case 27u: goto L_088B01B4;
    case 28u: goto L_088B01C4;
    case 29u: goto L_088B01D8;
    case 30u: goto L_088B01E8;
    case 31u: goto L_088B01FC;
    case 32u: goto L_088B020C;
    case 33u: goto L_088B0214;
    case 34u: goto L_088B021C;
    case 35u: goto L_088B0228;
    case 36u: goto L_088B0234;
    case 37u: goto L_088B0244;
    case 38u: goto L_088B024C;
    case 39u: goto L_088B0254;
    case 40u: goto L_088B0260;
    case 41u: goto L_088B02B8;
    case 42u: goto L_088B02C0;
    case 43u: goto L_088B02C8;
    case 44u: goto L_088B02D4;
    case 45u: goto L_088B02DC;
    case 46u: goto L_088B02E4;
    case 47u: goto L_088B02EC;
    case 48u: goto L_088B02FC;
    case 49u: goto L_088B0310;
    case 50u: goto L_088B0328;
    case 51u: goto L_088B0344;
    case 52u: goto L_088B034C;
    case 53u: goto L_088B0370;
    case 54u: goto L_088B037C;
    case 55u: goto L_088B0388;
    case 56u: goto L_088B0390;
    case 57u: goto L_088B03A0;
    case 58u: goto L_088B0400;
    case 59u: goto L_088B0410;
    case 60u: goto L_088B041C;
    case 61u: goto L_088B0428;
    case 62u: goto L_088B043C;
    case 63u: goto L_088B0448;
    case 64u: goto L_088B04C8;
    case 65u: goto L_088B04D8;
    case 66u: goto L_088B04E0;
    case 67u: goto L_088B04F0;
    case 68u: goto L_088B04F8;
    case 69u: goto L_088B0508;
    case 70u: goto L_088B0510;
    case 71u: goto L_088B0554;
    case 72u: goto L_088B0584;
    case 73u: goto L_088B058C;
    case 74u: goto L_088B0594;
    case 75u: goto L_088B05B0;
    case 76u: goto L_088B05BC;
    case 77u: goto L_088B05D4;
    case 78u: goto L_088B05DC;
    case 79u: goto L_088B05E0;
    case 80u: goto L_088B05FC;
    case 81u: goto L_088B060C;
    case 82u: goto L_088B0624;
    case 83u: goto L_088B062C;
    case 84u: goto L_088B0630;
    case 85u: goto L_088B0638;
    case 86u: goto L_088B063C;
    case 87u: goto L_088B0658;
    case 88u: goto L_088B0664;
    case 89u: goto L_088B067C;
    case 90u: goto L_088B0684;
    case 91u: goto L_088B0688;
    case 92u: goto L_088B0690;
    case 93u: goto L_088B0718;
    case 94u: goto L_088B0724;
    case 95u: goto L_088B0730;
    case 96u: goto L_088B0754;
    case 97u: goto L_088B0770;
    case 98u: goto L_088B077C;
    case 99u: goto L_088B07A8;
    case 100u: goto L_088B07D0;
    case 101u: goto L_088B07E0;
    case 102u: goto L_088B0814;
    case 103u: goto L_088B0820;
    case 104u: goto L_088B0838;
    case 105u: goto L_088B085C;
    case 106u: goto L_088B0864;
    case 107u: goto L_088B086C;
    case 108u: goto L_088B08E8;
    case 109u: goto L_088B08F8;
    case 110u: goto L_088B0904;
    case 111u: goto L_088B0920;
    case 112u: goto L_088B0944;
    case 113u: goto L_088B0958;
    case 114u: goto L_088B0960;
    case 115u: goto L_088B0990;
    case 116u: goto L_088B09A4;
    case 117u: goto L_088B09B8;
    case 118u: goto L_088B09C8;
    case 119u: goto L_088B09F0;
    case 120u: goto L_088B0A18;
    case 121u: goto L_088B0A44;
    case 122u: goto L_088B0A58;
    case 123u: goto L_088B0A60;
    case 124u: goto L_088B0A6C;
    case 125u: goto L_088B0A78;
    case 126u: goto L_088B0A98;
    case 127u: goto L_088B0AA0;
    case 128u: goto L_088B0AB0;
    case 129u: goto L_088B0C88;
    case 130u: goto L_088B0CF4;
    case 131u: goto L_088B0CFC;
    case 132u: goto L_088B0D04;
    case 133u: goto L_088B0D28;
    case 134u: goto L_088B0D38;
    case 135u: goto L_088B0D4C;
    case 136u: goto L_088B0D54;
    case 137u: goto L_088B0D70;
    case 138u: goto L_088B0D7C;
    case 139u: goto L_088B0D88;
    case 140u: goto L_088B0D94;
    case 141u: goto L_088B0D9C;
    case 142u: goto L_088B0DA4;
    case 143u: goto L_088B0DB0;
    case 144u: goto L_088B0DB8;
    case 145u: goto L_088B0DC4;
    case 146u: goto L_088B0DCC;
    case 147u: goto L_088B0DD4;
    case 148u: goto L_088B0DDC;
    case 149u: goto L_088B0DE8;
    case 150u: goto L_088B0DF0;
    case 151u: goto L_088B0DF8;
    case 152u: goto L_088B0E04;
    case 153u: goto L_088B0E0C;
    case 154u: goto L_088B0E14;
    case 155u: goto L_088B0E1C;
    case 156u: goto L_088B0E28;
    case 157u: goto L_088B0E54;
    case 158u: goto L_088B0E5C;
    case 159u: goto L_088B0E6C;
    case 160u: goto L_088B0E74;
    case 161u: goto L_088B0E80;
    case 162u: goto L_088B0E88;
    case 163u: goto L_088B0E90;
    case 164u: goto L_088B0E9C;
    case 165u: goto L_088B0EA4;
    case 166u: goto L_088B0EAC;
    case 167u: goto L_088B0EC8;
    case 168u: goto L_088B0EDC;
    case 169u: goto L_088B0EE4;
    case 170u: goto L_088B0EF0;
    case 171u: goto L_088B0EF4;
    case 172u: goto L_088B0F08;
    case 173u: goto L_088B0F18;
    case 174u: goto L_088B0F20;
    case 175u: goto L_088B0F34;
    case 176u: goto L_088B0F40;
    case 177u: goto L_088B0F5C;
    case 178u: goto L_088B0F64;
    case 179u: goto L_088B0F6C;
    case 180u: goto L_088B0F8C;
    case 181u: goto L_088B0FA0;
    case 182u: goto L_088B0FB4;
    case 183u: goto L_088B0FC0;
    case 184u: goto L_088B0FC8;
    case 185u: goto L_088B0FD4;
    case 186u: goto L_088B0FE8;
    case 187u: goto L_088B0FF0;
    case 188u: goto L_088B0FF8;
    case 189u: goto L_088B1000;
    case 190u: goto L_088B1008;
    case 191u: goto L_088B1010;
    case 192u: goto L_088B1020;
    case 193u: goto L_088B1034;
    case 194u: goto L_088B1054;
    case 195u: goto L_088B1064;
    case 196u: goto L_088B1074;
    case 197u: goto L_088B1094;
    case 198u: goto L_088B10A0;
    case 199u: goto L_088B10A8;
    case 200u: goto L_088B10B4;
    case 201u: goto L_088B10BC;
    case 202u: goto L_088B10C8;
    case 203u: goto L_088B10D0;
    case 204u: goto L_088B10DC;
    case 205u: goto L_088B10E4;
    case 206u: goto L_088B10F0;
    case 207u: goto L_088B10F8;
    case 208u: goto L_088B1104;
    case 209u: goto L_088B110C;
    case 210u: goto L_088B1118;
    case 211u: goto L_088B1120;
    case 212u: goto L_088B112C;
    case 213u: goto L_088B1134;
    case 214u: goto L_088B1140;
    case 215u: goto L_088B1148;
    case 216u: goto L_088B1154;
    case 217u: goto L_088B115C;
    case 218u: goto L_088B1168;
    case 219u: goto L_088B1170;
    case 220u: goto L_088B117C;
    case 221u: goto L_088B1184;
    case 222u: goto L_088B1190;
    case 223u: goto L_088B1198;
    case 224u: goto L_088B11A4;
    case 225u: goto L_088B11AC;
    case 226u: goto L_088B11B8;
    case 227u: goto L_088B11C0;
    case 228u: goto L_088B11CC;
    case 229u: goto L_088B11D4;
    case 230u: goto L_088B11E4;
    case 231u: goto L_088B11EC;
    case 232u: goto L_088B11F8;
    case 233u: goto L_088B1228;
    case 234u: goto L_088B1238;
    case 235u: goto L_088B123C;
    case 236u: goto L_088B1248;
    case 237u: goto L_088B1258;
    case 238u: goto L_088B125C;
    case 239u: goto L_088B1268;
    case 240u: goto L_088B1278;
    case 241u: goto L_088B127C;
    case 242u: goto L_088B1288;
    case 243u: goto L_088B1298;
    case 244u: goto L_088B129C;
    case 245u: goto L_088B12B8;
    case 246u: goto L_088B1300;
    case 247u: goto L_088B1310;
    case 248u: goto L_088B1318;
    case 249u: goto L_088B1324;
    case 250u: goto L_088B1330;
    case 251u: goto L_088B1338;
    case 252u: goto L_088B1344;
    case 253u: goto L_088B1348;
    case 254u: goto L_088B1350;
    case 255u: goto L_088B135C;
    case 256u: goto L_088B1370;
    case 257u: goto L_088B137C;
    case 258u: goto L_088B1388;
    case 259u: goto L_088B1390;
    case 260u: goto L_088B1394;
    case 261u: goto L_088B13A0;
    case 262u: goto L_088B13A8;
    case 263u: goto L_088B13B8;
    case 264u: goto L_088B13CC;
    case 265u: goto L_088B13F0;
    case 266u: goto L_088B1408;
    case 267u: goto L_088B1410;
    case 268u: goto L_088B1414;
    case 269u: goto L_088B141C;
    case 270u: goto L_088B1424;
    case 271u: goto L_088B142C;
    case 272u: goto L_088B1430;
    case 273u: goto L_088B1438;
    case 274u: goto L_088B1440;
    case 275u: goto L_088B1448;
    case 276u: goto L_088B1450;
    case 277u: goto L_088B1458;
    case 278u: goto L_088B146C;
    case 279u: goto L_088B1474;
    case 280u: goto L_088B1488;
    case 281u: goto L_088B14B0;
    case 282u: goto L_088B14CC;
    case 283u: goto L_088B14D4;
    case 284u: goto L_088B14E0;
    case 285u: goto L_088B14E8;
    case 286u: goto L_088B14F4;
    case 287u: goto L_088B1500;
    case 288u: goto L_088B1508;
    case 289u: goto L_088B1540;
    case 290u: goto L_088B1550;
    case 291u: goto L_088B1558;
    case 292u: goto L_088B1564;
    case 293u: goto L_088B1574;
    case 294u: goto L_088B157C;
    case 295u: goto L_088B158C;
    case 296u: goto L_088B1594;
    case 297u: goto L_088B15A0;
    case 298u: goto L_088B15B0;
    case 299u: goto L_088B15B4;
    case 300u: goto L_088B15BC;
    case 301u: goto L_088B15CC;
    case 302u: goto L_088B15E4;
    case 303u: goto L_088B15F4;
    case 304u: goto L_088B161C;
    case 305u: goto L_088B162C;
    case 306u: goto L_088B1654;
    case 307u: goto L_088B1670;
    case 308u: goto L_088B1698;
    case 309u: goto L_088B16C4;
    case 310u: goto L_088B16CC;
    case 311u: goto L_088B16F8;
    case 312u: goto L_088B1738;
    case 313u: goto L_088B1760;
    case 314u: goto L_088B17B4;
    case 315u: goto L_088B17C0;
    case 316u: goto L_088B17D8;
    case 317u: goto L_088B17E8;
    case 318u: goto L_088B17F8;
    case 319u: goto L_088B1800;
    case 320u: goto L_088B1808;
    case 321u: goto L_088B1810;
    case 322u: goto L_088B1818;
    case 323u: goto L_088B1824;
    case 324u: goto L_088B1830;
    case 325u: goto L_088B1838;
    case 326u: goto L_088B183C;
    case 327u: goto L_088B1848;
    case 328u: goto L_088B1850;
    case 329u: goto L_088B1854;
    case 330u: goto L_088B1860;
    case 331u: goto L_088B1868;
    case 332u: goto L_088B186C;
    case 333u: goto L_088B1874;
    case 334u: goto L_088B1880;
    case 335u: goto L_088B18B0;
    case 336u: goto L_088B18DC;
    case 337u: goto L_088B18E8;
    case 338u: goto L_088B1900;
    case 339u: goto L_088B1908;
    case 340u: goto L_088B1918;
    case 341u: goto L_088B1920;
    case 342u: goto L_088B1928;
    case 343u: goto L_088B1930;
    case 344u: goto L_088B1938;
    case 345u: goto L_088B1944;
    case 346u: goto L_088B194C;
    case 347u: goto L_088B1958;
    case 348u: goto L_088B1978;
    case 349u: goto L_088B199C;
    case 350u: goto L_088B19A8;
    case 351u: goto L_088B19B8;
    case 352u: goto L_088B19C8;
    case 353u: goto L_088B19D0;
    case 354u: goto L_088B19DC;
    case 355u: goto L_088B19E8;
    case 356u: goto L_088B19F0;
    case 357u: goto L_088B19F4;
    case 358u: goto L_088B19FC;
    case 359u: goto L_088B1A10;
    case 360u: goto L_088B1A20;
    case 361u: goto L_088B1A30;
    case 362u: goto L_088B1A3C;
    case 363u: goto L_088B1A48;
    case 364u: goto L_088B1A54;
    case 365u: goto L_088B1A5C;
    case 366u: goto L_088B1A70;
    case 367u: goto L_088B1A84;
    case 368u: goto L_088B1A8C;
    case 369u: goto L_088B1AA0;
    case 370u: goto L_088B1AA8;
    case 371u: goto L_088B1AC8;
    case 372u: goto L_088B1AD4;
    case 373u: goto L_088B1ADC;
    case 374u: goto L_088B1B00;
    case 375u: goto L_088B1B10;
    case 376u: goto L_088B1B1C;
    case 377u: goto L_088B1B24;
    case 378u: goto L_088B1B38;
    case 379u: goto L_088B1B54;
    case 380u: goto L_088B1B60;
    case 381u: goto L_088B1B68;
    case 382u: goto L_088B1B70;
    case 383u: goto L_088B1B7C;
    case 384u: goto L_088B1B84;
    case 385u: goto L_088B1B8C;
    case 386u: goto L_088B1B94;
    case 387u: goto L_088B1B98;
    case 388u: goto L_088B1BB4;
    case 389u: goto L_088B1BF0;
    case 390u: goto L_088B1C04;
    case 391u: goto L_088B1C18;
    case 392u: goto L_088B1C2C;
    case 393u: goto L_088B1C38;
    case 394u: goto L_088B1C44;
    case 395u: goto L_088B1C50;
    case 396u: goto L_088B1C58;
    case 397u: goto L_088B1C68;
    case 398u: goto L_088B1C74;
    case 399u: goto L_088B1C84;
    case 400u: goto L_088B1C8C;
    case 401u: goto L_088B1C98;
    case 402u: goto L_088B1CA0;
    case 403u: goto L_088B1CAC;
    case 404u: goto L_088B1CB4;
    case 405u: goto L_088B1CBC;
    case 406u: goto L_088B1CC4;
    case 407u: goto L_088B1CCC;
    case 408u: goto L_088B1CD4;
    case 409u: goto L_088B1CD8;
    case 410u: goto L_088B1D08;
    case 411u: goto L_088B1D3C;
    case 412u: goto L_088B1D50;
    case 413u: goto L_088B1D64;
    case 414u: goto L_088B1DB0;
    case 415u: goto L_088B1DC4;
    case 416u: goto L_088B1DD4;
    case 417u: goto L_088B1DDC;
    case 418u: goto L_088B1DE4;
    case 419u: goto L_088B1DEC;
    case 420u: goto L_088B1DF4;
    case 421u: goto L_088B1DFC;
    case 422u: goto L_088B1E04;
    case 423u: goto L_088B1E10;
    case 424u: goto L_088B1E18;
    case 425u: goto L_088B1E20;
    case 426u: goto L_088B1E3C;
    case 427u: goto L_088B1E44;
    case 428u: goto L_088B1E50;
    case 429u: goto L_088B1E58;
    case 430u: goto L_088B1E60;
    case 431u: goto L_088B1E6C;
    case 432u: goto L_088B1E74;
    case 433u: goto L_088B1E7C;
    case 434u: goto L_088B1E8C;
    case 435u: goto L_088B1E9C;
    case 436u: goto L_088B1EB0;
    case 437u: goto L_088B1EB8;
    case 438u: goto L_088B1EC4;
    case 439u: goto L_088B1ED8;
    case 440u: goto L_088B1EF0;
    case 441u: goto L_088B1F00;
    case 442u: goto L_088B1F20;
    case 443u: goto L_088B1F2C;
    case 444u: goto L_088B1F40;
    case 445u: goto L_088B1F48;
    case 446u: goto L_088B1F50;
    case 447u: goto L_088B1F54;
    case 448u: goto L_088B1F5C;
    case 449u: goto L_088B1F64;
    case 450u: goto L_088B1F6C;
    case 451u: goto L_088B1F74;
    case 452u: goto L_088B1F7C;
    case 453u: goto L_088B1F90;
    case 454u: goto L_088B1F98;
    case 455u: goto L_088B1FA8;
    case 456u: goto L_088B1FD8;
    case 457u: goto L_088B1FF4;
    case 458u: goto L_088B1FFC;
    case 459u: goto L_088B2008;
    case 460u: goto L_088B2010;
    case 461u: goto L_088B201C;
    case 462u: goto L_088B2028;
    case 463u: goto L_088B204C;
    case 464u: goto L_088B205C;
    case 465u: goto L_088B2064;
    case 466u: goto L_088B2078;
    case 467u: goto L_088B2080;
    case 468u: goto L_088B2090;
    case 469u: goto L_088B2098;
    case 470u: goto L_088B20A0;
    case 471u: goto L_088B20AC;
    case 472u: goto L_088B20B4;
    case 473u: goto L_088B20C0;
    case 474u: goto L_088B20C8;
    case 475u: goto L_088B20D0;
    case 476u: goto L_088B20DC;
    case 477u: goto L_088B20EC;
    case 478u: goto L_088B20F8;
    case 479u: goto L_088B2108;
    case 480u: goto L_088B2110;
    case 481u: goto L_088B2114;
    case 482u: goto L_088B2130;
    case 483u: goto L_088B22B0;
    case 484u: goto L_088B22F4;
    case 485u: goto L_088B2338;
    case 486u: goto L_088B2348;
    case 487u: goto L_088B2354;
    case 488u: goto L_088B235C;
    case 489u: goto L_088B236C;
    case 490u: goto L_088B2374;
    case 491u: goto L_088B237C;
    case 492u: goto L_088B2384;
    case 493u: goto L_088B2388;
    case 494u: goto L_088B2390;
    case 495u: goto L_088B2398;
    case 496u: goto L_088B23A0;
    case 497u: goto L_088B23A8;
    case 498u: goto L_088B23AC;
    case 499u: goto L_088B23B4;
    case 500u: goto L_088B23BC;
    case 501u: goto L_088B23C4;
    case 502u: goto L_088B23CC;
    case 503u: goto L_088B23D0;
    case 504u: goto L_088B23D8;
    case 505u: goto L_088B23DC;
    case 506u: goto L_088B23E4;
    case 507u: goto L_088B23F0;
    case 508u: goto L_088B2404;
    case 509u: goto L_088B2470;
    case 510u: goto L_088B2480;
    case 511u: goto L_088B248C;
    case 512u: goto L_088B2498;
    case 513u: goto L_088B24AC;
    case 514u: goto L_088B24B8;
    case 515u: goto L_088B24C8;
    case 516u: goto L_088B24DC;
    case 517u: goto L_088B24E8;
    case 518u: goto L_088B24F8;
    case 519u: goto L_088B250C;
    case 520u: goto L_088B2540;
    case 521u: goto L_088B2550;
    case 522u: goto L_088B2564;
    case 523u: goto L_088B2570;
    case 524u: goto L_088B2580;
    case 525u: goto L_088B2594;
    case 526u: goto L_088B25A0;
    case 527u: goto L_088B25AC;
    case 528u: goto L_088B25DC;
    case 529u: goto L_088B25E8;
    case 530u: goto L_088B25F4;
    case 531u: goto L_088B25FC;
    case 532u: goto L_088B2600;
    case 533u: goto L_088B2604;
    case 534u: goto L_088B2618;
    case 535u: goto L_088B264C;
    case 536u: goto L_088B2664;
    case 537u: goto L_088B266C;
    case 538u: goto L_088B2674;
    case 539u: goto L_088B2680;
    case 540u: goto L_088B2688;
    case 541u: goto L_088B2690;
    case 542u: goto L_088B269C;
    case 543u: goto L_088B26A8;
    case 544u: goto L_088B26B4;
    case 545u: goto L_088B26BC;
    case 546u: goto L_088B26C0;
    case 547u: goto L_088B26C8;
    case 548u: goto L_088B26DC;
    case 549u: goto L_088B26E4;
    case 550u: goto L_088B26F0;
    case 551u: goto L_088B26FC;
    case 552u: goto L_088B2708;
    case 553u: goto L_088B2710;
    case 554u: goto L_088B2714;
    case 555u: goto L_088B271C;
    case 556u: goto L_088B2730;
    case 557u: goto L_088B2738;
    case 558u: goto L_088B2744;
    case 559u: goto L_088B2750;
    case 560u: goto L_088B275C;
    case 561u: goto L_088B2764;
    case 562u: goto L_088B2768;
    case 563u: goto L_088B2770;
    case 564u: goto L_088B2784;
    case 565u: goto L_088B278C;
    case 566u: goto L_088B27A8;
    case 567u: goto L_088B27B0;
    case 568u: goto L_088B27BC;
    case 569u: goto L_088B27C8;
    case 570u: goto L_088B27D0;
    case 571u: goto L_088B27D4;
    case 572u: goto L_088B27DC;
    case 573u: goto L_088B27F4;
    case 574u: goto L_088B2800;
    case 575u: goto L_088B280C;
    case 576u: goto L_088B2818;
    case 577u: goto L_088B2820;
    case 578u: goto L_088B2824;
    case 579u: goto L_088B282C;
    case 580u: goto L_088B2840;
    case 581u: goto L_088B284C;
    case 582u: goto L_088B2858;
    case 583u: goto L_088B2864;
    case 584u: goto L_088B286C;
    case 585u: goto L_088B2870;
    case 586u: goto L_088B2878;
    case 587u: goto L_088B2890;
    case 588u: goto L_088B28C0;
    case 589u: goto L_088B28C8;
    case 590u: goto L_088B28D0;
    case 591u: goto L_088B2904;
    case 592u: goto L_088B2920;
    case 593u: goto L_088B2930;
    case 594u: goto L_088B2938;
    case 595u: goto L_088B2940;
    case 596u: goto L_088B2948;
    case 597u: goto L_088B2950;
    case 598u: goto L_088B2960;
    case 599u: goto L_088B2968;
    case 600u: goto L_088B297C;
    case 601u: goto L_088B2984;
    case 602u: goto L_088B2990;
    case 603u: goto L_088B2998;
    case 604u: goto L_088B29A0;
    case 605u: goto L_088B29B0;
    case 606u: goto L_088B29CC;
    case 607u: goto L_088B29E0;
    case 608u: goto L_088B29F0;
    case 609u: goto L_088B29FC;
    case 610u: goto L_088B2A14;
    case 611u: goto L_088B2A20;
    case 612u: goto L_088B2A28;
    case 613u: goto L_088B2A30;
    case 614u: goto L_088B2A38;
    case 615u: goto L_088B2A48;
    case 616u: goto L_088B2A50;
    case 617u: goto L_088B2A60;
    case 618u: goto L_088B2A70;
    case 619u: goto L_088B2A80;
    case 620u: goto L_088B2A8C;
    case 621u: goto L_088B2A94;
    case 622u: goto L_088B2AA0;
    case 623u: goto L_088B2AB0;
    case 624u: goto L_088B2AC0;
    case 625u: goto L_088B2ACC;
    case 626u: goto L_088B2AD8;
    case 627u: goto L_088B2AE4;
    case 628u: goto L_088B2AFC;
    case 629u: goto L_088B2B08;
    case 630u: goto L_088B2B18;
    case 631u: goto L_088B2B24;
    case 632u: goto L_088B2B40;
    case 633u: goto L_088B2B58;
    case 634u: goto L_088B2B7C;
    case 635u: goto L_088B2B84;
    case 636u: goto L_088B2B8C;
    case 637u: goto L_088B2BA0;
    case 638u: goto L_088B2BBC;
    case 639u: goto L_088B2BD0;
    case 640u: goto L_088B2BE0;
    case 641u: goto L_088B2BFC;
    case 642u: goto L_088B2C08;
    case 643u: goto L_088B2C18;
    case 644u: goto L_088B2C20;
    case 645u: goto L_088B2C48;
    case 646u: goto L_088B2C50;
    case 647u: goto L_088B2C58;
    case 648u: goto L_088B2C64;
    case 649u: goto L_088B2C6C;
    case 650u: goto L_088B2C74;
    case 651u: goto L_088B2C84;
    case 652u: goto L_088B2C94;
    case 653u: goto L_088B2CA4;
    case 654u: goto L_088B2CB4;
    case 655u: goto L_088B2CC8;
    case 656u: goto L_088B2CD0;
    case 657u: goto L_088B2CDC;
    case 658u: goto L_088B2CF4;
    case 659u: goto L_088B2D2C;
    case 660u: goto L_088B2D48;
    case 661u: goto L_088B2D58;
    case 662u: goto L_088B2D60;
    case 663u: goto L_088B2D68;
    case 664u: goto L_088B2D70;
    case 665u: goto L_088B2D78;
    case 666u: goto L_088B2D80;
    case 667u: goto L_088B2D88;
    case 668u: goto L_088B2D90;
    case 669u: goto L_088B2D98;
    case 670u: goto L_088B2D9C;
    case 671u: goto L_088B2DB8;
    case 672u: goto L_088B2DEC;
    case 673u: goto L_088B2E00;
    case 674u: goto L_088B2E08;
    case 675u: goto L_088B2E1C;
    case 676u: goto L_088B2E28;
    case 677u: goto L_088B2E34;
    case 678u: goto L_088B2E3C;
    case 679u: goto L_088B2E44;
    case 680u: goto L_088B2E4C;
    case 681u: goto L_088B2E80;
    case 682u: goto L_088B2E90;
    case 683u: goto L_088B2EA4;
    case 684u: goto L_088B2EB4;
    case 685u: goto L_088B2EC8;
    case 686u: goto L_088B2ED8;
    case 687u: goto L_088B2F14;
    case 688u: goto L_088B2F28;
    case 689u: goto L_088B2F38;
    case 690u: goto L_088B2F48;
    case 691u: goto L_088B2F58;
    case 692u: goto L_088B2F68;
    case 693u: goto L_088B2FD4;
    case 694u: goto L_088B2FE4;
    case 695u: goto L_088B2FEC;
    case 696u: goto L_088B3004;
    case 697u: goto L_088B3018;
    case 698u: goto L_088B302C;
    case 699u: goto L_088B3044;
    case 700u: goto L_088B305C;
    case 701u: goto L_088B3064;
    case 702u: goto L_088B3078;
    case 703u: goto L_088B3090;
    case 704u: goto L_088B30A4;
    case 705u: goto L_088B30BC;
    case 706u: goto L_088B30C4;
    case 707u: goto L_088B30DC;
    case 708u: goto L_088B30EC;
    case 709u: goto L_088B3100;
    case 710u: goto L_088B3108;
    case 711u: goto L_088B3118;
    case 712u: goto L_088B3134;
    case 713u: goto L_088B3148;
    case 714u: goto L_088B3150;
    case 715u: goto L_088B3160;
    case 716u: goto L_088B3174;
    case 717u: goto L_088B317C;
    case 718u: goto L_088B3188;
    case 719u: goto L_088B3190;
    case 720u: goto L_088B31A0;
    case 721u: goto L_088B31AC;
    case 722u: goto L_088B31B8;
    case 723u: goto L_088B31C0;
    case 724u: goto L_088B31C4;
    case 725u: goto L_088B31D0;
    case 726u: goto L_088B31EC;
    case 727u: goto L_088B31F8;
    case 728u: goto L_088B3208;
    case 729u: goto L_088B3280;
    case 730u: goto L_088B3290;
    case 731u: goto L_088B3298;
    case 732u: goto L_088B32BC;
    case 733u: goto L_088B32D0;
    case 734u: goto L_088B32E4;
    case 735u: goto L_088B32F8;
    case 736u: goto L_088B330C;
    case 737u: goto L_088B3324;
    case 738u: goto L_088B332C;
    case 739u: goto L_088B3340;
    case 740u: goto L_088B3358;
    case 741u: goto L_088B336C;
    case 742u: goto L_088B3384;
    case 743u: goto L_088B338C;
    case 744u: goto L_088B33A4;
    case 745u: goto L_088B33B4;
    case 746u: goto L_088B33C8;
    case 747u: goto L_088B33D0;
    case 748u: goto L_088B33E0;
    case 749u: goto L_088B33FC;
    case 750u: goto L_088B3410;
    case 751u: goto L_088B3418;
    case 752u: goto L_088B3428;
    case 753u: goto L_088B343C;
    case 754u: goto L_088B3444;
    case 755u: goto L_088B3450;
    case 756u: goto L_088B3458;
    case 757u: goto L_088B3464;
    case 758u: goto L_088B3470;
    case 759u: goto L_088B3480;
    case 760u: goto L_088B34F8;
    case 761u: goto L_088B3508;
    case 762u: goto L_088B3510;
    case 763u: goto L_088B3534;
    case 764u: goto L_088B3548;
    case 765u: goto L_088B355C;
    case 766u: goto L_088B3570;
    case 767u: goto L_088B3584;
    case 768u: goto L_088B359C;
    case 769u: goto L_088B35A4;
    case 770u: goto L_088B35B8;
    case 771u: goto L_088B35D0;
    case 772u: goto L_088B35E4;
    case 773u: goto L_088B35FC;
    case 774u: goto L_088B3604;
    case 775u: goto L_088B361C;
    case 776u: goto L_088B362C;
    case 777u: goto L_088B3640;
    case 778u: goto L_088B3648;
    case 779u: goto L_088B3658;
    case 780u: goto L_088B3674;
    case 781u: goto L_088B3688;
    case 782u: goto L_088B3690;
    case 783u: goto L_088B36A0;
    case 784u: goto L_088B36B4;
    case 785u: goto L_088B36BC;
    case 786u: goto L_088B36C8;
    case 787u: goto L_088B36D0;
    case 788u: goto L_088B36DC;
    case 789u: goto L_088B36E8;
    case 790u: goto L_088B36F8;
    case 791u: goto L_088B3774;
    case 792u: goto L_088B3784;
    case 793u: goto L_088B3798;
    case 794u: goto L_088B37AC;
    case 795u: goto L_088B37C0;
    case 796u: goto L_088B37D4;
    case 797u: goto L_088B37EC;
    case 798u: goto L_088B37F4;
    case 799u: goto L_088B3808;
    case 800u: goto L_088B3820;
    case 801u: goto L_088B3834;
    case 802u: goto L_088B384C;
    case 803u: goto L_088B3854;
    case 804u: goto L_088B386C;
    case 805u: goto L_088B387C;
    case 806u: goto L_088B3890;
    case 807u: goto L_088B3898;
    case 808u: goto L_088B38A8;
    case 809u: goto L_088B38C4;
    case 810u: goto L_088B38D8;
    case 811u: goto L_088B38E0;
    case 812u: goto L_088B38F0;
    case 813u: goto L_088B3904;
    case 814u: goto L_088B390C;
    case 815u: goto L_088B3918;
    case 816u: goto L_088B3920;
    case 817u: goto L_088B392C;
    case 818u: goto L_088B39AC;
    case 819u: goto L_088B39B8;
    case 820u: goto L_088B39D0;
    case 821u: goto L_088B39DC;
    case 822u: goto L_088B39E4;
    case 823u: goto L_088B39F4;
    case 824u: goto L_088B3A2C;
    case 825u: goto L_088B3A40;
    case 826u: goto L_088B3A50;
    case 827u: goto L_088B3A64;
    case 828u: goto L_088B3A74;
    case 829u: goto L_088B3A88;
    case 830u: goto L_088B3A98;
    case 831u: goto L_088B3AA8;
    case 832u: goto L_088B3AB4;
    case 833u: goto L_088B3AC0;
    case 834u: goto L_088B3AD8;
    case 835u: goto L_088B3AE4;
    case 836u: goto L_088B3AEC;
    case 837u: goto L_088B3AFC;
    case 838u: goto L_088B3B30;
    case 839u: goto L_088B3B44;
    case 840u: goto L_088B3B54;
    case 841u: goto L_088B3B68;
    case 842u: goto L_088B3B78;
    case 843u: goto L_088B3B8C;
    case 844u: goto L_088B3B9C;
    case 845u: goto L_088B3BA8;
    case 846u: goto L_088B3BB0;
    case 847u: goto L_088B3BBC;
    case 848u: goto L_088B3BF4;
    case 849u: goto L_088B3BFC;
    case 850u: goto L_088B3C14;
    case 851u: goto L_088B3C28;
    case 852u: goto L_088B3C40;
    case 853u: goto L_088B3C78;
    case 854u: goto L_088B3C8C;
    case 855u: goto L_088B3C9C;
    case 856u: goto L_088B3CB0;
    case 857u: goto L_088B3CC0;
    case 858u: goto L_088B3CD4;
    case 859u: goto L_088B3CE4;
    case 860u: goto L_088B3D50;
    case 861u: goto L_088B3D5C;
    case 862u: goto L_088B3D68;
    case 863u: goto L_088B3D70;
    case 864u: goto L_088B3D78;
    case 865u: goto L_088B3D84;
    case 866u: goto L_088B3DA8;
    case 867u: goto L_088B3E9C;
    case 868u: goto L_088B3EE8;
    case 869u: goto L_088B3F34;
    case 870u: goto L_088B3F48;
    case 871u: goto L_088B3F64;
    case 872u: goto L_088B3F6C;
    case 873u: goto L_088B3F78;
    case 874u: goto L_088B3F80;
    case 875u: goto L_088B3F88;
    case 876u: goto L_088B3F94;
    case 877u: goto L_088B3FA0;
    case 878u: goto L_088B3FA8;
    case 879u: goto L_088B3FBC;
    case 880u: goto L_088B3FD4;
    case 881u: goto L_088B3FDC;
    case 882u: goto L_088B3FE4;
    case 883u: goto L_088B3FEC;
    case 884u: goto L_088B3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B0000:
    ctx.gpr[8] = (0u | 255u);
    goto L_088B0004;
L_088B0004:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 151u);
    ctx.gpr[6] = (0u | 82u);
    ctx.gpr[7] = (0u | 197u);
    ctx.gpr[31] = (0x088B001Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B001Cu) goto L_088B001C;
    return;
L_088B001C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 240u);
    ctx.gpr[6] = (0u | 158u);
    ctx.gpr[7] = (0u | 147u);
    ctx.gpr[31] = (0x088B0034u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B0034u) goto L_088B0034;
    return;
L_088B0034:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[7] = (0u | 51u);
    ctx.gpr[31] = (0x088B004Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B004Cu) goto L_088B004C;
    return;
L_088B004C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 227u);
    ctx.gpr[7] = (0u | 79u);
    ctx.gpr[31] = (0x088B0064u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B0064u) goto L_088B0064;
    return;
L_088B0064:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088B007Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B007Cu) goto L_088B007C;
    return;
L_088B007C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B0094u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B0094u) goto L_088B0094;
    return;
L_088B0094:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[7] = (0u | 153u);
    ctx.gpr[31] = (0x088B00ACu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B00ACu) goto L_088B00AC;
    return;
L_088B00AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088B00B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16288));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088B00B8u) goto L_088B00B8;
    return;
L_088B00B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B00C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B00DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (2187u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0100u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x088B0100u) goto L_088B0100;
    return;
L_088B0100:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088B0134;
      }
      goto L_088B0124;
    }
L_088B0124:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0134;
      }
      goto L_088B012C;
    }
L_088B012C:
    ctx.gpr[31] = (0x088B0134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088B0134u) goto L_088B0134;
    return;
L_088B0134:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0140:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088B014C;
L_088B014C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0174;
      }
      goto L_088B0158;
    }
L_088B0158:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B014C;
      }
      goto L_088B016C;
    }
L_088B016C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B017C;
      }
      goto L_088B0174;
    }
L_088B0174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B0180;
      }
      goto L_088B017C;
    }
L_088B017C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B0180;
L_088B0180:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B01ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088B01ACu) goto L_088B01AC;
    return;
L_088B01AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B020C;
      }
      goto L_088B01B4;
    }
L_088B01B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B020C;
      }
      goto L_088B01C4;
    }
L_088B01C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B020C;
      }
      goto L_088B01D8;
    }
L_088B01D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B020C;
      }
      goto L_088B01E8;
    }
L_088B01E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B020C;
      }
      goto L_088B01FC;
    }
L_088B01FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0214;
      }
      goto L_088B020C;
    }
L_088B020C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0310;
      }
      goto L_088B0214;
    }
L_088B0214:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B021C;
L_088B021C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0234;
      }
      goto L_088B0228;
    }
L_088B0228:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B024C;
      }
      goto L_088B0234;
    }
L_088B0234:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B021C;
      }
      goto L_088B0244;
    }
L_088B0244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0254;
      }
      goto L_088B024C;
    }
L_088B024C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0310;
      }
      goto L_088B0254;
    }
L_088B0254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B02E4;
      }
      goto L_088B0260;
    }
L_088B0260:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x088B02B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x088B02B8u) goto L_088B02B8;
    return;
L_088B02B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B02DC;
      }
      goto L_088B02C0;
    }
L_088B02C0:
    ctx.gpr[31] = (0x088B02C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B0140;
L_088B02C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B02EC;
      }
      goto L_088B02D4;
    }
L_088B02D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0310;
      }
      goto L_088B02DC;
    }
L_088B02DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0310;
      }
      goto L_088B02E4;
    }
L_088B02E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0310;
      }
      goto L_088B02EC;
    }
L_088B02EC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B02FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088B02FCu) goto L_088B02FC;
    return;
L_088B02FC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1372), ctx.gpr[18]);
    ctx.gpr[31] = (0x088B0310u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B05DC;
L_088B0310:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0344u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 541u, 0x08A926D4u>(ctx, &aot_mem) && ctx.pc == 0x088B0344u) goto L_088B0344;
    return;
L_088B0344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0390;
      }
      goto L_088B034C;
    }
L_088B034C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088B0370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 579u, 0x08A06DACu>(ctx, &aot_mem) && ctx.pc == 0x088B0370u) goto L_088B0370;
    return;
L_088B0370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0390;
      }
      goto L_088B037C;
    }
L_088B037C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088B0388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B0188;
L_088B0388:
    ctx.gpr[31] = (0x088B0390u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 553u, 0x08A927B8u>(ctx, &aot_mem) && ctx.pc == 0x088B0390u) goto L_088B0390;
    return;
L_088B0390:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B03A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[7] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (18804u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[10] | 9200u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[9] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (16128u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    goto L_088B0400;
L_088B0400:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.fpr[8] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    goto L_088B0410;
L_088B0410:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B04E0;
      }
      goto L_088B041C;
    }
L_088B041C:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B04E0;
      }
      goto L_088B0428;
    }
L_088B0428:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[7])) && ctx.fpr[14] == ctx.fpr[7]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B04E0;
      }
      goto L_088B043C;
    }
L_088B043C:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[8];
    ctx.gpr[12] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088B04E0;
      }
      goto L_088B0448;
    }
L_088B0448:
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[18] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[10] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[10];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[21] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.fpr[11] = ctx.fpr[11] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[11] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B04E0;
      }
      goto L_088B04C8;
    }
L_088B04C8:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[8]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B04E0;
      }
      goto L_088B04D8;
    }
L_088B04D8:
    ctx.gpr[3] = (ctx.gpr[2] | 0u);
    ctx.fpr[8] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088B04E0;
L_088B04E0:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[2]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B0410;
      }
      goto L_088B04F0;
    }
L_088B04F0:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
      if (branch_taken) {
          goto L_088B0510;
      }
      goto L_088B04F8;
    }
L_088B04F8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
        goto L_088B0554;
    }
    goto L_088B0508;
L_088B0508:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088B0400;
      }
      goto L_088B0510;
    }
L_088B0510:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B0584;
      }
      goto L_088B0554;
    }
L_088B0554:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (0u | 0u);
    goto L_088B0584;
L_088B0584:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B058C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088B0594;
L_088B0594:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B05BC;
      }
      goto L_088B05B0;
    }
L_088B05B0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    goto L_088B05BC;
L_088B05BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0594;
      }
      goto L_088B05D4;
    }
L_088B05D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[6] & 65535u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B05DC:
    ctx.gpr[6] = (0u | 0u);
    goto L_088B05E0;
L_088B05E0:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B060C;
      }
      goto L_088B05FC;
    }
L_088B05FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B062C;
      }
      goto L_088B060C;
    }
L_088B060C:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B05E0;
      }
      goto L_088B0624;
    }
L_088B0624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B0630;
      }
      goto L_088B062C;
    }
L_088B062C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B0630;
L_088B0630:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0638:
    ctx.gpr[6] = (0u | 0u);
    goto L_088B063C;
L_088B063C:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0664;
      }
      goto L_088B0658;
    }
L_088B0658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0684;
      }
      goto L_088B0664;
    }
L_088B0664:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B063C;
      }
      goto L_088B067C;
    }
L_088B067C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B0688;
      }
      goto L_088B0684;
    }
L_088B0684:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B0688;
L_088B0688:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0690:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16308)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16304)));
    ctx.gpr[8] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16664));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(16324), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0718u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B00DC;
L_088B0718:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088B0724u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16332));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088B0724u) goto L_088B0724;
    return;
L_088B0724:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0754u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7196));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B0754u) goto L_088B0754;
    return;
L_088B0754:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x088B0770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7192));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x088B0770u) goto L_088B0770;
    return;
L_088B0770:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B077C:
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
L_088B07A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B07E0;
      }
      goto L_088B07D0;
    }
L_088B07D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B07E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B07E0u) goto L_088B07E0;
    return;
L_088B07E0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16472), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16476), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16480), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16484), ctx.gpr[16]);
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
L_088B0814:
    ctx.gpr[4] = (2227u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16472)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0820:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B0864;
      }
      goto L_088B085C;
    }
L_088B085C:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_088B086C;
    }
    goto L_088B0864;
L_088B0864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0904;
      }
      goto L_088B086C;
    }
L_088B086C:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16476), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16476), ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16476), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16476), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B08E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B08E8u) goto L_088B08E8;
    return;
L_088B08E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B08F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B08F8u) goto L_088B08F8;
    return;
L_088B08F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16476)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16476), ctx.gpr[4]);
    goto L_088B0904;
L_088B0904:
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
L_088B0920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5868));
    goto L_088B077C;
L_088B0944:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16480)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B0958u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x088B0958u) goto L_088B0958;
    return;
L_088B0958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0990;
      }
      goto L_088B0960;
    }
L_088B0960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16480)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5896));
    ctx.gpr[31] = (0x088B0990u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    goto L_088B077C;
L_088B0990:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B09A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16480)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B09B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16480)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B09C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B09F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B09F0u) goto L_088B09F0;
    return;
L_088B09F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16480)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16480), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0A18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16480)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16480), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0A58u);
    // nop
    goto L_088B0814;
L_088B0A58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B0A98;
      }
      goto L_088B0A60;
    }
L_088B0A60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B0A6Cu);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    goto L_088B0814;
L_088B0A6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0A78u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0A78u) goto L_088B0A78;
    return;
L_088B0A78:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16472), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16476), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16480), 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16484), 0u);
    goto L_088B0A98;
L_088B0A98:
    ctx.gpr[31] = (0x088B0AA0u);
    // nop
    goto L_088B11F8;
L_088B0AA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8052)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7936)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-8046)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27328)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8128)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31204)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7316))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7314))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-7184))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7220)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11232)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22640)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11240)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25846)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25812)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25844)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21984)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25792)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0C88u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088B0C88u) goto L_088B0C88;
    return;
L_088B0C88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25331)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(174), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25332)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(175), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(15921)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25824)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7176));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7176)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0CFC;
      }
      goto L_088B0CF4;
    }
L_088B0CF4:
    ctx.gpr[31] = (0x088B0CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B0CFCu) goto L_088B0CFC;
    return;
L_088B0CFC:
    ctx.gpr[31] = (0x088B0D04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x088B0D04u) goto L_088B0D04;
    return;
L_088B0D04:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25330)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0D28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B0D38;
L_088B0D38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B0D38;
      }
      goto L_088B0D4C;
    }
L_088B0D4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0D70u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7188), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 590u, 0x08A9693Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0D70u) goto L_088B0D70;
    return;
L_088B0D70:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5944));
    goto L_088B0920;
L_088B0D7C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088B0D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B09C8;
L_088B0D88:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5952));
    goto L_088B0920;
L_088B0D94:
    ctx.gpr[31] = (0x088B0D9Cu);
    // nop
    goto L_088B09B8;
L_088B0D9C:
    ctx.gpr[31] = (0x088B0DA4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088B09A4;
L_088B0DA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B0DB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 689u, 0x0887BC8Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0DB0u) goto L_088B0DB0;
    return;
L_088B0DB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B0DCC;
      }
      goto L_088B0DB8;
    }
L_088B0DB8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0DC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5960));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0DC4u) goto L_088B0DC4;
    return;
L_088B0DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B0EF4;
      }
      goto L_088B0DCC;
    }
L_088B0DCC:
    ctx.gpr[31] = (0x088B0DD4u);
    // nop
    goto L_088B0A18;
L_088B0DD4:
    ctx.gpr[31] = (0x088B0DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B2130;
L_088B0DDC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0DE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5984));
    goto L_088B0920;
L_088B0DE8:
    ctx.gpr[31] = (0x088B0DF0u);
    // nop
    goto L_088B09B8;
L_088B0DF0:
    ctx.gpr[31] = (0x088B0DF8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B09A4;
L_088B0DF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0E04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 147u, 0x0893CB40u>(ctx, &aot_mem) && ctx.pc == 0x088B0E04u) goto L_088B0E04;
    return;
L_088B0E04:
    ctx.gpr[31] = (0x088B0E0Cu);
    // nop
    goto L_088B0A18;
L_088B0E0C:
    ctx.gpr[31] = (0x088B0E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 140u, 0x08834B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0E14u) goto L_088B0E14;
    return;
L_088B0E14:
    ctx.gpr[31] = (0x088B0E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 294u, 0x0883D760u>(ctx, &aot_mem) && ctx.pc == 0x088B0E1Cu) goto L_088B0E1C;
    return;
L_088B0E1C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    goto L_088B0920;
L_088B0E28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[31] = (0x088B0E54u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088B09B8;
L_088B0E54:
    ctx.gpr[31] = (0x088B0E5Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088B09A4;
L_088B0E5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B0E6Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 403u, 0x089D6B18u>(ctx, &aot_mem) && ctx.pc == 0x088B0E6Cu) goto L_088B0E6C;
    return;
L_088B0E6C:
    ctx.gpr[31] = (0x088B0E74u);
    // nop
    goto L_088B0A18;
L_088B0E74:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0E80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6000));
    goto L_088B0920;
L_088B0E80:
    ctx.gpr[31] = (0x088B0E88u);
    // nop
    goto L_088B09B8;
L_088B0E88:
    ctx.gpr[31] = (0x088B0E90u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B09A4;
L_088B0E90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0E9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 20u, 0x088481A8u>(ctx, &aot_mem) && ctx.pc == 0x088B0E9Cu) goto L_088B0E9C;
    return;
L_088B0E9C:
    ctx.gpr[31] = (0x088B0EA4u);
    // nop
    goto L_088B0A18;
L_088B0EA4:
    ctx.gpr[31] = (0x088B0EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 377u, 0x089C5934u>(ctx, &aot_mem) && ctx.pc == 0x088B0EACu) goto L_088B0EAC;
    return;
L_088B0EAC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0EC8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 110u, 0x088647F8u>(ctx, &aot_mem) && ctx.pc == 0x088B0EC8u) goto L_088B0EC8;
    return;
L_088B0EC8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B0EDCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 106u, 0x088647C0u>(ctx, &aot_mem) && ctx.pc == 0x088B0EDCu) goto L_088B0EDC;
    return;
L_088B0EDC:
    ctx.gpr[31] = (0x088B0EE4u);
    // nop
    goto L_088B0A44;
L_088B0EE4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0EF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6008));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0EF0u) goto L_088B0EF0;
    return;
L_088B0EF0:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B0EF4;
L_088B0EF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B0F18u);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 70u, 0x08A8C548u>(ctx, &aot_mem) && ctx.pc == 0x088B0F18u) goto L_088B0F18;
    return;
L_088B0F18:
    ctx.gpr[31] = (0x088B0F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088B0F20u) goto L_088B0F20;
    return;
L_088B0F20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088B0F34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 223u, 0x088BCD50u>(ctx, &aot_mem) && ctx.pc == 0x088B0F34u) goto L_088B0F34;
    return;
L_088B0F34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F40:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20032));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F5C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F64:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B0F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B1010;
      }
      goto L_088B0F8C;
    }
L_088B0F8C:
    ctx.gpr[6] = (32770u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(403));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B0FC8;
      }
      goto L_088B0FA0;
    }
L_088B0FA0:
    ctx.gpr[6] = (32770u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(402));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11D4;
      }
      goto L_088B0FB4;
    }
L_088B0FB4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B0FC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6036));
    goto L_088B077C;
L_088B0FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B0FC8;
    }
L_088B0FC8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11D4;
      }
      goto L_088B0FD4;
    }
L_088B0FD4:
    ctx.gpr[4] = (32751u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B1094;
      }
      goto L_088B0FE8;
    }
L_088B0FE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B10A8;
      }
      goto L_088B0FF0;
    }
L_088B0FF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B10BC;
      }
      goto L_088B0FF8;
    }
L_088B0FF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B10D0;
      }
      goto L_088B1000;
    }
L_088B1000:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088B10E4;
      }
      goto L_088B1008;
    }
L_088B1008:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B10F8;
      }
      goto L_088B1010;
    }
L_088B1010:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(779));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B1054;
      }
      goto L_088B1020;
    }
L_088B1020:
    ctx.gpr[6] = (32785u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(767));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (32751u << 16u);
      if (branch_taken) {
          goto L_088B11D4;
      }
      goto L_088B1034;
    }
L_088B1034:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-768));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8224)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1054:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B11D4;
      }
      goto L_088B1064;
    }
L_088B1064:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(907));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (32751u << 16u);
      if (branch_taken) {
          goto L_088B11D4;
      }
      goto L_088B1074;
    }
L_088B1074:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-897));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1094:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6084));
    goto L_088B077C;
L_088B10A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B10A8;
    }
L_088B10A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6132));
    goto L_088B077C;
L_088B10B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B10BC;
    }
L_088B10BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6192));
    goto L_088B077C;
L_088B10C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B10D0;
    }
L_088B10D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6232));
    goto L_088B077C;
L_088B10DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B10E4;
    }
L_088B10E4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B10F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6288));
    goto L_088B077C;
L_088B10F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B10F8;
    }
L_088B10F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1104u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6388));
    goto L_088B077C;
L_088B1104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B110C;
    }
L_088B110C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6440));
    goto L_088B077C;
L_088B1118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B1120;
    }
L_088B1120:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B112Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6468));
    goto L_088B077C;
L_088B112C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B1134;
    }
L_088B1134:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6504));
    goto L_088B077C;
L_088B1140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B1148;
    }
L_088B1148:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1154u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6544));
    goto L_088B077C;
L_088B1154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B115C;
    }
L_088B115C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6592));
    goto L_088B077C;
L_088B1168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B1170;
    }
L_088B1170:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B117Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6628));
    goto L_088B077C;
L_088B117C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B1184;
    }
L_088B1184:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1190u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6668));
    goto L_088B077C;
L_088B1190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B1198;
    }
L_088B1198:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B11A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6704));
    goto L_088B077C;
L_088B11A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B11AC;
    }
L_088B11AC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B11B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6732));
    goto L_088B077C;
L_088B11B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B11C0;
    }
L_088B11C0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B11CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6776));
    goto L_088B077C;
L_088B11CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B11D4;
    }
L_088B11D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B11E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6816));
    goto L_088B077C;
L_088B11E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B11E4;
      }
      goto L_088B11EC;
    }
L_088B11EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B11F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B123C;
      }
      goto L_088B1228;
    }
L_088B1228:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B1238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1238u) goto L_088B1238;
    return;
L_088B1238:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16524), 0u);
    goto L_088B123C;
L_088B123C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B125C;
      }
      goto L_088B1248;
    }
L_088B1248:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B1258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1258u) goto L_088B1258;
    return;
L_088B1258:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16528), 0u);
    goto L_088B125C;
L_088B125C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B127C;
      }
      goto L_088B1268;
    }
L_088B1268:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B1278u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1278u) goto L_088B1278;
    return;
L_088B1278:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16536), 0u);
    goto L_088B127C;
L_088B127C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B129C;
      }
      goto L_088B1288;
    }
L_088B1288:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B1298u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1298u) goto L_088B1298;
    return;
L_088B1298:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16532), 0u);
    goto L_088B129C;
L_088B129C:
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
L_088B12B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5688)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B1310;
      }
      goto L_088B1300;
    }
L_088B1300:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26464));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B1310;
L_088B1310:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088B1338;
      }
      goto L_088B1318;
    }
L_088B1318:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16540)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1338;
      }
      goto L_088B1324;
    }
L_088B1324:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1330u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x088B1330u) goto L_088B1330;
    return;
L_088B1330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16540)));
      if (branch_taken) {
          goto L_088B1348;
      }
      goto L_088B1338;
    }
L_088B1338:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1344u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x088B1344u) goto L_088B1344;
    return;
L_088B1344:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(16540)));
    goto L_088B1348;
L_088B1348:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1370;
      }
      goto L_088B1350;
    }
L_088B1350:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B135Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6856));
    goto L_088B077C;
L_088B135C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16470)));
      if (branch_taken) {
          goto L_088B1388;
      }
      goto L_088B1370;
    }
L_088B1370:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B137Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6884));
    goto L_088B077C;
L_088B137C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16470)));
    goto L_088B1388;
L_088B1388:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1394;
      }
      goto L_088B1390;
    }
L_088B1390:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
    goto L_088B1394;
L_088B1394:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-25839)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B13B8;
      }
      goto L_088B13A0;
    }
L_088B13A0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B13B8;
      }
      goto L_088B13A8;
    }
L_088B13A8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-28743), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_088B13B8;
L_088B13B8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6912));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088B13CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16504)));
    goto L_088B077C;
L_088B13CC:
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
L_088B13F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1410;
      }
      goto L_088B1408;
    }
L_088B1408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088B1414;
      }
      goto L_088B1410;
    }
L_088B1410:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088B1414;
L_088B1414:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16540), static_cast<std::uint8_t>(0u));
    goto L_088B141C;
L_088B141C:
    ctx.gpr[31] = (0x088B1424u);
    // nop
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B1424:
    ctx.gpr[31] = (0x088B142Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B2904;
L_088B142C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B1430;
L_088B1430:
    ctx.gpr[31] = (0x088B1438u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B9E4u;
    return;
L_088B1438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1450;
      }
      goto L_088B1440;
    }
L_088B1440:
    ctx.gpr[31] = (0x088B1448u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B0BC14u;
    return;
L_088B1448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1430;
      }
      goto L_088B1450;
    }
L_088B1450:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B141C;
      }
      goto L_088B1458;
    }
L_088B1458:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16504), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B146Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088B12B8;
L_088B146C:
    ctx.gpr[31] = (0x088B1474u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBBCu;
    return;
L_088B1474:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B14D4;
      }
      goto L_088B14B0;
    }
L_088B14B0:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(297)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5688), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B14E8;
      }
      goto L_088B14CC;
    }
L_088B14CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1500;
      }
      goto L_088B14D4;
    }
L_088B14D4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B14E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6956));
    goto L_088B077C;
L_088B14E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B15CC;
      }
      goto L_088B14E8;
    }
L_088B14E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B14F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 146u, 0x089D5578u>(ctx, &aot_mem) && ctx.pc == 0x088B14F4u) goto L_088B14F4;
    return;
L_088B14F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B14E8;
      }
      goto L_088B1500;
    }
L_088B1500:
    ctx.gpr[31] = (0x088B1508u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B0BC14u;
    return;
L_088B1508:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7020));
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5104));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x088B1540u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088B1540:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16504), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B157C;
      }
      goto L_088B1550;
    }
L_088B1550:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1594;
      }
      goto L_088B1558;
    }
L_088B1558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088B1564u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B2CF4;
L_088B1564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[5] = (0u | 1200u);
    ctx.gpr[31] = (0x088B1574u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088B1574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B15B4;
      }
      goto L_088B157C;
    }
L_088B157C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7032));
    ctx.gpr[31] = (0x088B158Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    goto L_088B077C;
L_088B158C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B15CC;
      }
      goto L_088B1594;
    }
L_088B1594:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088B15A0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088B2CF4;
L_088B15A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B15B0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088B15B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B15B4;
L_088B15B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B15CC;
      }
      goto L_088B15BC;
    }
L_088B15BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B15CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7072));
    goto L_088B077C;
L_088B15CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B15E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B15F4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B1488;
L_088B15F4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16470), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B161C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B162Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088B1488;
L_088B162C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16470), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1670u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(9288));
    goto L_088B1488;
L_088B1670:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16470), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(10488), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(10488));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B16C4u);
    ctx.gpr[6] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B16C4u) goto L_088B16C4;
    return;
L_088B16C4:
    ctx.gpr[31] = (0x088B16CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B1488;
L_088B16CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16470), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B16F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(11688), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(11688));
    ctx.gpr[8] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (1u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(7280));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1738u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_088B1488;
L_088B1738:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16470), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B17C0;
      }
      goto L_088B17B4;
    }
L_088B17B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B17C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 146u, 0x089D5578u>(ctx, &aot_mem) && ctx.pc == 0x088B17C0u) goto L_088B17C0;
    return;
L_088B17C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088B17D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7112));
    goto L_088B077C;
L_088B17D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B17E8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_088B16F8;
L_088B17E8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2229u << 16u);
    goto L_088B17F8;
L_088B17F8:
    ctx.gpr[31] = (0x088B1800u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 529u, 0x08AB2EE4u>(ctx, &aot_mem) && ctx.pc == 0x088B1800u) goto L_088B1800;
    return;
L_088B1800:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1818;
      }
      goto L_088B1808;
    }
L_088B1808:
    ctx.gpr[31] = (0x088B1810u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B0BC14u;
    return;
L_088B1810:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088B17F8;
      }
      goto L_088B1818;
    }
L_088B1818:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1824u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7144));
    goto L_088B077C;
L_088B1824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16524)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B183C;
      }
      goto L_088B1830;
    }
L_088B1830:
    ctx.gpr[31] = (0x088B1838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x088B1838u) goto L_088B1838;
    return;
L_088B1838:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16524), 0u);
    goto L_088B183C;
L_088B183C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1854;
      }
      goto L_088B1848;
    }
L_088B1848:
    ctx.gpr[31] = (0x088B1850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x088B1850u) goto L_088B1850;
    return;
L_088B1850:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16528), 0u);
    goto L_088B1854;
L_088B1854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B186C;
      }
      goto L_088B1860;
    }
L_088B1860:
    ctx.gpr[31] = (0x088B1868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x088B1868u) goto L_088B1868;
    return;
L_088B1868:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16536), 0u);
    goto L_088B186C;
L_088B186C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1880;
      }
      goto L_088B1874;
    }
L_088B1874:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1880u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x088B1880u) goto L_088B1880;
    return;
L_088B1880:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B18B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(297)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B18E8;
      }
      goto L_088B18DC;
    }
L_088B18DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B18E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 146u, 0x089D5578u>(ctx, &aot_mem) && ctx.pc == 0x088B18E8u) goto L_088B18E8;
    return;
L_088B18E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8688));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B1900u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7172));
    goto L_088B077C;
L_088B1900:
    ctx.gpr[31] = (0x088B1908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B1698;
L_088B1908:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2229u << 16u);
    goto L_088B1918;
L_088B1918:
    ctx.gpr[31] = (0x088B1920u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 529u, 0x08AB2EE4u>(ctx, &aot_mem) && ctx.pc == 0x088B1920u) goto L_088B1920;
    return;
L_088B1920:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1938;
      }
      goto L_088B1928;
    }
L_088B1928:
    ctx.gpr[31] = (0x088B1930u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = 0x08B0BC14u;
    return;
L_088B1930:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27036), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088B1918;
      }
      goto L_088B1938;
    }
L_088B1938:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7144));
    goto L_088B077C;
L_088B1944:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1958;
      }
      goto L_088B194C;
    }
L_088B194C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B1958u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x088B1958u) goto L_088B1958;
    return;
L_088B1958:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-768));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B199Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7208));
    goto L_088B077C;
L_088B199C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B19A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7228));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B19A8u) goto L_088B19A8;
    return;
L_088B19A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B19B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7240));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B19B8u) goto L_088B19B8;
    return;
L_088B19B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B19D0;
      }
      goto L_088B19C8;
    }
L_088B19C8:
    ctx.gpr[31] = (0x088B19D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B19D0u) goto L_088B19D0;
    return;
L_088B19D0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[31] = (0x088B19DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 14u, 0x088380F8u>(ctx, &aot_mem) && ctx.pc == 0x088B19DCu) goto L_088B19DC;
    return;
L_088B19DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B19F4;
      }
      goto L_088B19E8;
    }
L_088B19E8:
    ctx.gpr[31] = (0x088B19F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B19F0u) goto L_088B19F0;
    return;
L_088B19F0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B19F4;
L_088B19F4:
    ctx.gpr[31] = (0x088B19FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 59u, 0x088383B8u>(ctx, &aot_mem) && ctx.pc == 0x088B19FCu) goto L_088B19FC;
    return;
L_088B19FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x088B1A10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8688));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1A10u) goto L_088B1A10;
    return;
L_088B1A10:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B1A20u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1A20u) goto L_088B1A20;
    return;
L_088B1A20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B1A30u);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1A30u) goto L_088B1A30;
    return;
L_088B1A30:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1A3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7152));
    ctx.pc = 0x08B0BDA4u;
    return;
L_088B1A3C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B1B94;
      }
      goto L_088B1A48;
    }
L_088B1A48:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x088B1A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BDACu;
    return;
L_088B1A54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B1B68;
      }
      goto L_088B1A5C;
    }
L_088B1A5C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1A70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7244));
    goto L_088B077C;
L_088B1A70:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B1A84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7228));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x088B1A84u) goto L_088B1A84;
    return;
L_088B1A84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B1B54;
      }
      goto L_088B1A8C;
    }
L_088B1A8C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B1AA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7240));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x088B1AA0u) goto L_088B1AA0;
    return;
L_088B1AA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B54;
      }
      goto L_088B1AA8;
    }
L_088B1AA8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7256));
    ctx.gpr[31] = (0x088B1AC8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7152));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088B1AC8u) goto L_088B1AC8;
    return;
L_088B1AC8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x088B1AD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BDC4u;
    return;
L_088B1AD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B54;
      }
      goto L_088B1ADC;
    }
L_088B1ADC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(706)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(710)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(714)));
    ctx.gpr[31] = (0x088B1B00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7264));
    goto L_088B077C;
L_088B1B00:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[31] = (0x088B1B10u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B6D4u;
    return;
L_088B1B10:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[31] = (0x088B1B1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B6DCu;
    return;
L_088B1B1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B1B54;
      }
      goto L_088B1B24;
    }
L_088B1B24:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(392));
    ctx.gpr[31] = (0x088B1B38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8688));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B1B38u) goto L_088B1B38;
    return;
L_088B1B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    ctx.gpr[31] = (0x088B1B54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7304));
    goto L_088B077C;
L_088B1B54:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[31] = (0x088B1B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BDACu;
    return;
L_088B1B60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088B1A5C;
      }
      goto L_088B1B68;
    }
L_088B1B68:
    ctx.gpr[31] = (0x088B1B70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0BDB4u;
    return;
L_088B1B70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088B1B7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8688));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B1B7Cu) goto L_088B1B7C;
    return;
L_088B1B7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1B8C;
      }
      goto L_088B1B84;
    }
L_088B1B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B1B98;
      }
      goto L_088B1B8C;
    }
L_088B1B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B1B98;
      }
      goto L_088B1B94;
    }
L_088B1B94:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B1B98;
L_088B1B98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1BB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), ctx.gpr[30]);
    ctx.gpr[30] = (2225u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(7228));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(764), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1BF0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B1BF0u) goto L_088B1BF0;
    return;
L_088B1BF0:
    ctx.gpr[22] = (2225u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7240));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B1C04u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B1C04u) goto L_088B1C04;
    return;
L_088B1C04:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B1C18u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1C18u) goto L_088B1C18;
    return;
L_088B1C18:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B1C2Cu);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1C2Cu) goto L_088B1C2C;
    return;
L_088B1C2C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1C38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7152));
    ctx.pc = 0x08B0BDA4u;
    return;
L_088B1C38:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B1CD4;
      }
      goto L_088B1C44;
    }
L_088B1C44:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1C50u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BDACu;
    return;
L_088B1C50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_088B1CCC;
      }
      goto L_088B1C58;
    }
L_088B1C58:
    ctx.gpr[18] = (2225u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7244));
    goto L_088B1C68;
L_088B1C68:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B1C74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088B077C;
L_088B1C74:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B1C84u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x088B1C84u) goto L_088B1C84;
    return;
L_088B1C84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_088B1CA0;
      }
      goto L_088B1C8C;
    }
L_088B1C8C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B1C98u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 552u, 0x08AEDFC0u>(ctx, &aot_mem) && ctx.pc == 0x088B1C98u) goto L_088B1C98;
    return;
L_088B1C98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1CBC;
      }
      goto L_088B1CA0;
    }
L_088B1CA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B1CACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BDACu;
    return;
L_088B1CAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088B1C68;
      }
      goto L_088B1CB4;
    }
L_088B1CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1CCC;
      }
      goto L_088B1CBC;
    }
L_088B1CBC:
    ctx.gpr[31] = (0x088B1CC4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BDB4u;
    return;
L_088B1CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B1CD8;
      }
      goto L_088B1CCC;
    }
L_088B1CCC:
    ctx.gpr[31] = (0x088B1CD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BDB4u;
    return;
L_088B1CD4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B1CD8;
L_088B1CD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(752)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(756)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(760)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(764)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(8708));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1D3Cu);
    ctx.gpr[6] = (0u | 580u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1D3Cu) goto L_088B1D3C;
    return;
L_088B1D3C:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088B1D50u);
    ctx.gpr[4] = (0u | 8u);
    ctx.pc = 0x08B0B864u;
    return;
L_088B1D50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 580u);
    ctx.gpr[31] = (0x088B1D64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B1D64u) goto L_088B1D64;
    return;
L_088B1D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8708), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B1DC4u);
    ctx.gpr[16] = (0u | 1u);
    ctx.pc = 0x08B0B85Cu;
    return;
L_088B1DC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E9C;
      }
      goto L_088B1DD4;
    }
L_088B1DD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B1E8C;
      }
      goto L_088B1DDC;
    }
L_088B1DDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B1DFC;
      }
      goto L_088B1DE4;
    }
L_088B1DE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B1E20;
      }
      goto L_088B1DEC;
    }
L_088B1DEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B1E7C;
      }
      goto L_088B1DF4;
    }
L_088B1DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1EB8;
      }
      goto L_088B1DFC;
    }
L_088B1DFC:
    ctx.gpr[31] = (0x088B1E04u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B854u;
    return;
L_088B1E04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E18;
      }
      goto L_088B1E10;
    }
L_088B1E10:
    ctx.gpr[31] = (0x088B1E18u);
    // nop
    goto L_088B0F6C;
L_088B1E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1EB8;
      }
      goto L_088B1E20;
    }
L_088B1E20:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16540), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_088B1E50;
      }
      goto L_088B1E3C;
    }
L_088B1E3C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088B1E58;
      }
      goto L_088B1E44;
    }
L_088B1E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E58;
      }
      goto L_088B1E50;
    }
L_088B1E50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16540), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B1E58;
L_088B1E58:
    ctx.gpr[31] = (0x088B1E60u);
    // nop
    ctx.pc = 0x08B0B84Cu;
    return;
L_088B1E60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1E74;
      }
      goto L_088B1E6C;
    }
L_088B1E6C:
    ctx.gpr[31] = (0x088B1E74u);
    // nop
    goto L_088B0F6C;
L_088B1E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1EB8;
      }
      goto L_088B1E7C;
    }
L_088B1E7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B1EB8;
      }
      goto L_088B1E8C;
    }
L_088B1E8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B1EB8;
      }
      goto L_088B1E9C;
    }
L_088B1E9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B1EB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7316));
    goto L_088B077C;
L_088B1EB0:
    ctx.gpr[31] = (0x088B1EB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088B0F6C;
L_088B1EB8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088B1EC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26892)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 658u, 0x08AB3A30u>(ctx, &aot_mem) && ctx.pc == 0x088B1EC4u) goto L_088B1EC4;
    return;
L_088B1EC4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5688)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F00;
      }
      goto L_088B1EF0;
    }
L_088B1EF0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26464));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B1F00;
L_088B1F00:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6912));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[31] = (0x088B1F20u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    goto L_088B077C;
L_088B1F20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16540), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_088B1F40;
L_088B1F40:
    ctx.gpr[31] = (0x088B1F48u);
    // nop
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B1F48:
    ctx.gpr[31] = (0x088B1F50u);
    // nop
    goto L_088B1DB0;
L_088B1F50:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_088B1F54;
L_088B1F54:
    ctx.gpr[31] = (0x088B1F5Cu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B9E4u;
    return;
L_088B1F5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F74;
      }
      goto L_088B1F64;
    }
L_088B1F64:
    ctx.gpr[31] = (0x088B1F6Cu);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08B0BC14u;
    return;
L_088B1F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F54;
      }
      goto L_088B1F74;
    }
L_088B1F74:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B1F40;
      }
      goto L_088B1F7C;
    }
L_088B1F7C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16504), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B1F90u);
    // nop
    goto L_088B1ED8;
L_088B1F90:
    ctx.gpr[31] = (0x088B1F98u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBBCu;
    return;
L_088B1F98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B1FA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B1FFC;
      }
      goto L_088B1FD8;
    }
L_088B1FD8:
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5688), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2010;
      }
      goto L_088B1FF4;
    }
L_088B1FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2028;
      }
      goto L_088B1FFC;
    }
L_088B1FFC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2008u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6956));
    goto L_088B077C;
L_088B2008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2114;
      }
      goto L_088B2010;
    }
L_088B2010:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B201Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 146u, 0x089D5578u>(ctx, &aot_mem) && ctx.pc == 0x088B201Cu) goto L_088B201C;
    return;
L_088B201C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2010;
      }
      goto L_088B2028;
    }
L_088B2028:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7364));
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7980));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[7] = (0u | 8192u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[31] = (0x088B204Cu);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088B204C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16504), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B2080;
      }
      goto L_088B205C;
    }
L_088B205C:
    ctx.gpr[31] = (0x088B2064u);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_088B1D08;
L_088B2064:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8708));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B2098;
      }
      goto L_088B2078;
    }
L_088B2078:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B20A0;
      }
      goto L_088B2080;
    }
L_088B2080:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7032));
    ctx.gpr[31] = (0x088B2090u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    goto L_088B077C;
L_088B2090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2114;
      }
      goto L_088B2098;
    }
L_088B2098:
    ctx.gpr[4] = (0u | 273u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(572), ctx.gpr[4]);
    goto L_088B20A0;
L_088B20A0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B20ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B20ACu) goto L_088B20AC;
    return;
L_088B20AC:
    ctx.gpr[31] = (0x088B20B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B844u;
    return;
L_088B20B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B20D0;
      }
      goto L_088B20C0;
    }
L_088B20C0:
    ctx.gpr[31] = (0x088B20C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B0F6C;
L_088B20C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B20DC;
      }
      goto L_088B20D0;
    }
L_088B20D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B20DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7372));
    goto L_088B077C;
L_088B20DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16504)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B20ECu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088B20EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B2110;
      }
      goto L_088B20F8;
    }
L_088B20F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7072));
    goto L_088B077C;
L_088B2108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B2114;
      }
      goto L_088B2110;
    }
L_088B2110:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B2114;
L_088B2114:
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
L_088B2130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7340), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29520), ctx.gpr[4]);
    lcs::lcs_restore_lang(rt, aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27328), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-31204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-7316), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(58))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-7314), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-7184), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7220), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22640)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11232), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22640)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(11236), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22640)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25816), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25846), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(109)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25812), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21984), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-25796), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25791), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(129)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25792), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B22B0u);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x088B22B0u) goto L_088B22B0;
    return;
L_088B22B0:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(174)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25331), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(175)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(177)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15921), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25330), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B235C;
      }
      goto L_088B22F4;
    }
L_088B22F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7176));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088B2338u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 837u, 0x08967FC8u>(ctx, &aot_mem) && ctx.pc == 0x088B2338u) goto L_088B2338;
    return;
L_088B2338:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25820), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
      if (branch_taken) {
          goto L_088B2354;
      }
      goto L_088B2348;
    }
L_088B2348:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088B2354;
L_088B2354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
      if (branch_taken) {
          goto L_088B236C;
      }
      goto L_088B235C;
    }
L_088B235C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25824), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088B236C;
L_088B236C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B23BC;
      }
      goto L_088B2374;
    }
L_088B2374:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2388;
      }
      goto L_088B237C;
    }
L_088B237C:
    ctx.gpr[31] = (0x088B2384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B2384u) goto L_088B2384;
    return;
L_088B2384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088B2388;
L_088B2388:
    ctx.gpr[31] = (0x088B2390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 157u, 0x08838A28u>(ctx, &aot_mem) && ctx.pc == 0x088B2390u) goto L_088B2390;
    return;
L_088B2390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
      if (branch_taken) {
          goto L_088B23BC;
      }
      goto L_088B2398;
    }
L_088B2398:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B23AC;
      }
      goto L_088B23A0;
    }
L_088B23A0:
    ctx.gpr[31] = (0x088B23A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B23A8u) goto L_088B23A8;
    return;
L_088B23A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088B23AC;
L_088B23AC:
    ctx.gpr[31] = (0x088B23B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088B23B4u) goto L_088B23B4;
    return;
L_088B23B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088B23DC;
      }
      goto L_088B23BC;
    }
L_088B23BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B23D0;
      }
      goto L_088B23C4;
    }
L_088B23C4:
    ctx.gpr[31] = (0x088B23CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B23CCu) goto L_088B23CC;
    return;
L_088B23CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20904)));
    goto L_088B23D0;
L_088B23D0:
    ctx.gpr[31] = (0x088B23D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 38u, 0x0883822Cu>(ctx, &aot_mem) && ctx.pc == 0x088B23D8u) goto L_088B23D8;
    return;
L_088B23D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_088B23DC;
L_088B23DC:
    ctx.gpr[31] = (0x088B23E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 54u, 0x0883C330u>(ctx, &aot_mem) && ctx.pc == 0x088B23E4u) goto L_088B23E4;
    return;
L_088B23E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088B23F0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x088B23F0u) goto L_088B23F0;
    return;
L_088B23F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (2u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B2470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B2470u) goto L_088B2470;
    return;
L_088B2470:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B2480u) goto L_088B2480;
    return;
L_088B2480:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B248Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B07A8;
L_088B248C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088B2498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B0AB0;
L_088B2498:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 188u);
    ctx.gpr[31] = (0x088B24ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5944));
    goto L_088B0838;
L_088B24AC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088B24B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 470u, 0x088821DCu>(ctx, &aot_mem) && ctx.pc == 0x088B24B8u) goto L_088B24B8;
    return;
L_088B24B8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088B24C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7416));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B24C8u) goto L_088B24C8;
    return;
L_088B24C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B24DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5952));
    goto L_088B0838;
L_088B24DC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088B24E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 132u, 0x0893C948u>(ctx, &aot_mem) && ctx.pc == 0x088B24E8u) goto L_088B24E8;
    return;
L_088B24E8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x088B24F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7436));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B24F8u) goto L_088B24F8;
    return;
L_088B24F8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B250Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5984));
    goto L_088B0838;
L_088B250C:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x088B2540u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 383u, 0x089D674Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2540u) goto L_088B2540;
    return;
L_088B2540:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088B2550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7456));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2550u) goto L_088B2550;
    return;
L_088B2550:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B2564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7480));
    goto L_088B0838;
L_088B2564:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B2570u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 890u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2570u) goto L_088B2570;
    return;
L_088B2570:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x088B2580u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B2580u) goto L_088B2580;
    return;
L_088B2580:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B2594u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7508));
    goto L_088B0838;
L_088B2594:
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[31] = (0x088B25A0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12888), 0u);
    goto L_088B0814;
L_088B25A0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12888));
    ctx.gpr[31] = (0x088B25ACu);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_088B0820;
L_088B25AC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7552));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(572));
      if (branch_taken) {
          goto L_088B2604;
      }
      goto L_088B25DC;
    }
L_088B25DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B25E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B25E8u) goto L_088B25E8;
    return;
L_088B25E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2600;
      }
      goto L_088B25F4;
    }
L_088B25F4:
    ctx.gpr[31] = (0x088B25FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B25FCu) goto L_088B25FC;
    return;
L_088B25FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2600;
L_088B2600:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_088B2604;
L_088B2604:
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088B2618u);
    ctx.gpr[7] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2618u) goto L_088B2618;
    return;
L_088B2618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[4]);
    ctx.gpr[31] = (0x088B264Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x088B264Cu) goto L_088B264C;
    return;
L_088B264C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B2674;
      }
      goto L_088B2664;
    }
L_088B2664:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B278C;
      }
      goto L_088B266C;
    }
L_088B266C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2690;
      }
      goto L_088B2674;
    }
L_088B2674:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B26E4;
      }
      goto L_088B2680;
    }
L_088B2680:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2738;
      }
      goto L_088B2688;
    }
L_088B2688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B278C;
      }
      goto L_088B2690;
    }
L_088B2690:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B26C8;
      }
      goto L_088B269C;
    }
L_088B269C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B26A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B26A8u) goto L_088B26A8;
    return;
L_088B26A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B26C0;
      }
      goto L_088B26B4;
    }
L_088B26B4:
    ctx.gpr[31] = (0x088B26BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B26BCu) goto L_088B26BC;
    return;
L_088B26BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B26C0;
L_088B26C0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B26C8;
L_088B26C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B26DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7516));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B26DCu) goto L_088B26DC;
    return;
L_088B26DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_088B27A8;
      }
      goto L_088B26E4;
    }
L_088B26E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B271C;
      }
      goto L_088B26F0;
    }
L_088B26F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B26FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B26FCu) goto L_088B26FC;
    return;
L_088B26FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2714;
      }
      goto L_088B2708;
    }
L_088B2708:
    ctx.gpr[31] = (0x088B2710u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2710u) goto L_088B2710;
    return;
L_088B2710:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2714;
L_088B2714:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B271C;
L_088B271C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B2730u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7524));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2730u) goto L_088B2730;
    return;
L_088B2730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_088B27A8;
      }
      goto L_088B2738;
    }
L_088B2738:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B2770;
      }
      goto L_088B2744;
    }
L_088B2744:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2750u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B2750u) goto L_088B2750;
    return;
L_088B2750:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2768;
      }
      goto L_088B275C;
    }
L_088B275C:
    ctx.gpr[31] = (0x088B2764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2764u) goto L_088B2764;
    return;
L_088B2764:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2768;
L_088B2768:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B2770;
L_088B2770:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x088B2784u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7532));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2784u) goto L_088B2784;
    return;
L_088B2784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
      if (branch_taken) {
          goto L_088B27A8;
      }
      goto L_088B278C;
    }
L_088B278C:
    ctx.gpr[4] = (28267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28245));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (110u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30575));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    goto L_088B27A8;
L_088B27A8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
      if (branch_taken) {
          goto L_088B27DC;
      }
      goto L_088B27B0;
    }
L_088B27B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B27BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B27BCu) goto L_088B27BC;
    return;
L_088B27BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B27D4;
      }
      goto L_088B27C8;
    }
L_088B27C8:
    ctx.gpr[31] = (0x088B27D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B27D0u) goto L_088B27D0;
    return;
L_088B27D0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B27D4;
L_088B27D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
    goto L_088B27DC;
L_088B27DC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[31] = (0x088B27F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7540));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B27F4u) goto L_088B27F4;
    return;
L_088B27F4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_088B282C;
      }
      goto L_088B2800;
    }
L_088B2800:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B280Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B280Cu) goto L_088B280C;
    return;
L_088B280C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2824;
      }
      goto L_088B2818;
    }
L_088B2818:
    ctx.gpr[31] = (0x088B2820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2820u) goto L_088B2820;
    return;
L_088B2820:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2824;
L_088B2824:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2225u << 16u);
    goto L_088B282C;
L_088B282C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[31] = (0x088B2840u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7548));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2840u) goto L_088B2840;
    return;
L_088B2840:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
      if (branch_taken) {
          goto L_088B2878;
      }
      goto L_088B284C;
    }
L_088B284C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B2858u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B2858u) goto L_088B2858;
    return;
L_088B2858:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2870;
      }
      goto L_088B2864;
    }
L_088B2864:
    ctx.gpr[31] = (0x088B286Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B286Cu) goto L_088B286C;
    return;
L_088B286C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_088B2870;
L_088B2870:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    goto L_088B2878;
L_088B2878:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[31] = (0x088B2890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7556));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B2890u) goto L_088B2890;
    return;
L_088B2890:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(176));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x088B28C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7564));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088B28C0u) goto L_088B28C0;
    return;
L_088B28C0:
    ctx.gpr[31] = (0x088B28C8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_088B15E4;
L_088B28C8:
    ctx.gpr[31] = (0x088B28D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 535u, 0x08A96544u>(ctx, &aot_mem) && ctx.pc == 0x088B28D0u) goto L_088B28D0;
    return;
L_088B28D0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B2920u);
    ctx.gpr[16] = (0u | 1u);
    ctx.pc = 0x08B0B83Cu;
    return;
L_088B2920:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2CB4;
      }
      goto L_088B2930;
    }
L_088B2930:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B2C94;
      }
      goto L_088B2938;
    }
L_088B2938:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B2968;
      }
      goto L_088B2940;
    }
L_088B2940:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B29A0;
      }
      goto L_088B2948;
    }
L_088B2948:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B2C74;
      }
      goto L_088B2950;
    }
L_088B2950:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2960u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7592));
    goto L_088B077C;
L_088B2960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2CD0;
      }
      goto L_088B2968;
    }
L_088B2968:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088B297Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7632));
    goto L_088B077C;
L_088B297C:
    ctx.gpr[31] = (0x088B2984u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B834u;
    return;
L_088B2984:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2998;
      }
      goto L_088B2990;
    }
L_088B2990:
    ctx.gpr[31] = (0x088B2998u);
    // nop
    goto L_088B0F6C;
L_088B2998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2CD0;
      }
      goto L_088B29A0;
    }
L_088B29A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B29B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7676));
    goto L_088B077C;
L_088B29B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16540), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B29F0;
      }
      goto L_088B29CC;
    }
L_088B29CC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B29FC;
      }
      goto L_088B29E0;
    }
L_088B29E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1484)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B29FC;
      }
      goto L_088B29F0;
    }
L_088B29F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16540), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B29FC;
L_088B29FC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C50;
      }
      goto L_088B2A14;
    }
L_088B2A14:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B2A60;
      }
      goto L_088B2A20;
    }
L_088B2A20:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B2AA0;
      }
      goto L_088B2A28;
    }
L_088B2A28:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2C08;
      }
      goto L_088B2A30;
    }
L_088B2A30:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B2AD8;
      }
      goto L_088B2A38;
    }
L_088B2A38:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16540)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2A50;
      }
      goto L_088B2A48;
    }
L_088B2A48:
    ctx.gpr[31] = (0x088B2A50u);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C5E0u>(ctx, &aot_mem) && ctx.pc == 0x088B2A50u) goto L_088B2A50;
    return;
L_088B2A50:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-25837), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088B2C50;
      }
      goto L_088B2A60;
    }
L_088B2A60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16540)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2A8C;
      }
      goto L_088B2A70;
    }
L_088B2A70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2A8C;
      }
      goto L_088B2A80;
    }
L_088B2A80:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2A94;
      }
      goto L_088B2A8C;
    }
L_088B2A8C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
    goto L_088B2A94;
L_088B2A94:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2C50;
      }
      goto L_088B2AA0;
    }
L_088B2AA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16540)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2ACC;
      }
      goto L_088B2AB0;
    }
L_088B2AB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2ACC;
      }
      goto L_088B2AC0;
    }
L_088B2AC0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28728), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088B2ACC;
L_088B2ACC:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2C50;
      }
      goto L_088B2AD8;
    }
L_088B2AD8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7708));
    goto L_088B077C;
L_088B2AE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B2B08;
      }
      goto L_088B2AFC;
    }
L_088B2AFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1484)));
    goto L_088B2B08;
L_088B2B08:
    ctx.gpr[5] = (32785u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(961));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_088B2B24;
      }
      goto L_088B2B18;
    }
L_088B2B18:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(962));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B2B58;
      }
      goto L_088B2B24;
    }
L_088B2B24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7460));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088B2B40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B2B40u) goto L_088B2B40;
    return;
L_088B2B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B2BFC;
      }
      goto L_088B2B58;
    }
L_088B2B58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7376));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7460));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2BE0;
      }
      goto L_088B2B7C;
    }
L_088B2B7C:
    ctx.gpr[31] = (0x088B2B84u);
    // nop
    goto L_088B1BB4;
L_088B2B84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2BA0;
      }
      goto L_088B2B8C;
    }
L_088B2B8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B2BFC;
      }
      goto L_088B2BA0;
    }
L_088B2BA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7460));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x088B2BBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B2BBCu) goto L_088B2BBC;
    return;
L_088B2BBC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7376));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088B2BD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B2BD0u) goto L_088B2BD0;
    return;
L_088B2BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B2BFC;
      }
      goto L_088B2BE0;
    }
L_088B2BE0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B2BFC;
L_088B2BFC:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2C50;
      }
      goto L_088B2C08;
    }
L_088B2C08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C20;
      }
      goto L_088B2C18;
    }
L_088B2C18:
    ctx.gpr[31] = (0x088B2C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x088B2C20u) goto L_088B2C20;
    return;
L_088B2C20:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20904)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-25839), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088B2C48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 435u, 0x08AD9CFCu>(ctx, &aot_mem) && ctx.pc == 0x088B2C48u) goto L_088B2C48;
    return;
L_088B2C48:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16469), static_cast<std::uint8_t>(0u));
    goto L_088B2C50;
L_088B2C50:
    ctx.gpr[31] = (0x088B2C58u);
    // nop
    ctx.pc = 0x08B0B82Cu;
    return;
L_088B2C58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2C6C;
      }
      goto L_088B2C64;
    }
L_088B2C64:
    ctx.gpr[31] = (0x088B2C6Cu);
    // nop
    goto L_088B0F6C;
L_088B2C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2CD0;
      }
      goto L_088B2C74;
    }
L_088B2C74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2C84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7724));
    goto L_088B077C;
L_088B2C84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2CD0;
      }
      goto L_088B2C94;
    }
L_088B2C94:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2CA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7756));
    goto L_088B077C;
L_088B2CA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B2CD0;
      }
      goto L_088B2CB4;
    }
L_088B2CB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B2CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7792));
    goto L_088B077C;
L_088B2CC8:
    ctx.gpr[31] = (0x088B2CD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088B0F6C;
L_088B2CD0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x088B2CDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26892)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 658u, 0x08AB3A30u>(ctx, &aot_mem) && ctx.pc == 0x088B2CDCu) goto L_088B2CDC;
    return;
L_088B2CDC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B2CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B2D2Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B2D2Cu) goto L_088B2D2C;
    return;
L_088B2D2C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25837), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25760)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B2D98;
      }
      goto L_088B2D48;
    }
L_088B2D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25760)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B2D78;
      }
      goto L_088B2D58;
    }
L_088B2D58:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B2D80;
      }
      goto L_088B2D60;
    }
L_088B2D60:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B2D88;
      }
      goto L_088B2D68;
    }
L_088B2D68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B2D90;
      }
      goto L_088B2D70;
    }
L_088B2D70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088B2D9C;
      }
      goto L_088B2D78;
    }
L_088B2D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088B2D9C;
      }
      goto L_088B2D80;
    }
L_088B2D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_088B2D9C;
      }
      goto L_088B2D88;
    }
L_088B2D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 5u);
      if (branch_taken) {
          goto L_088B2D9C;
      }
      goto L_088B2D90;
    }
L_088B2D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_088B2D9C;
      }
      goto L_088B2D98;
    }
L_088B2D98:
    ctx.gpr[17] = (0u | 1u);
    goto L_088B2D9C;
L_088B2D9C:
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(5820));
    ctx.gpr[21] = (0u | 1536u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B2DB8u);
    ctx.gpr[6] = (0u | 1536u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B2DB8u) goto L_088B2DB8;
    return;
L_088B2DB8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(5820), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B2E08;
      }
      goto L_088B2DEC;
    }
L_088B2DEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1200u);
    ctx.gpr[31] = (0x088B2E00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B2E00u) goto L_088B2E00;
    return;
L_088B2E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B2E1C;
      }
      goto L_088B2E08;
    }
L_088B2E08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1200u);
    ctx.gpr[31] = (0x088B2E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7488));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B2E1Cu) goto L_088B2E1C;
    return;
L_088B2E1C:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3D50;
      }
      goto L_088B2E28;
    }
L_088B2E28:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B39AC;
      }
      goto L_088B2E34;
    }
L_088B2E34:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088B3AB4;
      }
      goto L_088B2E3C;
    }
L_088B2E3C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B3BBC;
      }
      goto L_088B2E44;
    }
L_088B2E44:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088B3BFC;
      }
      goto L_088B2E4C;
    }
L_088B2E4C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7228));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B2E80u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B2E80u) goto L_088B2E80;
    return;
L_088B2E80:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B2E90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B2E90u) goto L_088B2E90;
    return;
L_088B2E90:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7836));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B2EA4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B2EA4u) goto L_088B2EA4;
    return;
L_088B2EA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B2EB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B2EB4u) goto L_088B2EB4;
    return;
L_088B2EB4:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B2EC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B2EC8u) goto L_088B2EC8;
    return;
L_088B2EC8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B2ED8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B2ED8u) goto L_088B2ED8;
    return;
L_088B2ED8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16541));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B2F14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B2F14u) goto L_088B2F14;
    return;
L_088B2F14:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 127u);
    ctx.gpr[31] = (0x088B2F28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7852));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B2F28u) goto L_088B2F28;
    return;
L_088B2F28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x088B2F38u);
    ctx.gpr[6] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B2F38u) goto L_088B2F38;
    return;
L_088B2F38:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x088B2F48u);
    ctx.gpr[6] = (0u | 1023u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B2F48u) goto L_088B2F48;
    return;
L_088B2F48:
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1408), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x088B2F58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7880));
    goto L_088B077C;
L_088B2F58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B2FEC;
      }
      goto L_088B2F68;
    }
L_088B2F68:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (18735u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (21326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20291));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2FD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16721));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2FD4u) goto L_088B2FD4;
    return;
L_088B2FD4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B2FE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7912));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B2FE4u) goto L_088B2FE4;
    return;
L_088B2FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3004;
      }
      goto L_088B2FEC;
    }
L_088B2FEC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7920));
    ctx.gpr[31] = (0x088B3004u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16721));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3004u) goto L_088B3004;
    return;
L_088B3004:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B3018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7940));
    goto L_088B077C;
L_088B3018:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B302Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7968));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 499u, 0x08966278u>(ctx, &aot_mem) && ctx.pc == 0x088B302Cu) goto L_088B302C;
    return;
L_088B302C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088B3064;
    }
    goto L_088B3044;
L_088B3044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B305Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B305Cu) goto L_088B305C;
    return;
L_088B305C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3078;
      }
      goto L_088B3064;
    }
L_088B3064:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3078u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3078u) goto L_088B3078;
    return;
L_088B3078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3090u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3090u) goto L_088B3090;
    return;
L_088B3090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B30C4;
      }
      goto L_088B30A4;
    }
L_088B30A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B30BCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B30BCu) goto L_088B30BC;
    return;
L_088B30BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B30DC;
      }
      goto L_088B30C4;
    }
L_088B30C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B30DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B30DCu) goto L_088B30DC;
    return;
L_088B30DC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16532)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3100;
      }
      goto L_088B30EC;
    }
L_088B30EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16532)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B3100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3100u) goto L_088B3100;
    return;
L_088B3100:
    ctx.gpr[31] = (0x088B3108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B3108u) goto L_088B3108;
    return;
L_088B3108:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B3118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B3118u) goto L_088B3118;
    return;
L_088B3118:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16532), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088B3150;
    }
    goto L_088B3134;
L_088B3134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16532)));
    ctx.gpr[31] = (0x088B3148u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 415u, 0x08935E40u>(ctx, &aot_mem) && ctx.pc == 0x088B3148u) goto L_088B3148;
    return;
L_088B3148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3160;
      }
      goto L_088B3150;
    }
L_088B3150:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16532)));
    ctx.gpr[31] = (0x088B3160u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 469u, 0x08936160u>(ctx, &aot_mem) && ctx.pc == 0x088B3160u) goto L_088B3160;
    return;
L_088B3160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3188;
      }
      goto L_088B3174;
    }
L_088B3174:
    ctx.gpr[31] = (0x088B317Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDECu;
    return;
L_088B317C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B3190;
      }
      goto L_088B3188;
    }
L_088B3188:
    ctx.gpr[31] = (0x088B3190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDF4u;
    return;
L_088B3190:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B31D0;
      }
      goto L_088B31A0;
    }
L_088B31A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088B31ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B31ACu) goto L_088B31AC;
    return;
L_088B31AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B31C4;
      }
      goto L_088B31B8;
    }
L_088B31B8:
    ctx.gpr[31] = (0x088B31C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x088B31C0u) goto L_088B31C0;
    return;
L_088B31C0:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_088B31C4;
L_088B31C4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_088B31D0;
L_088B31D0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[7] = (0u | 127u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7972));
    ctx.gpr[31] = (0x088B31ECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5689));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 421u, 0x08913BE8u>(ctx, &aot_mem) && ctx.pc == 0x088B31ECu) goto L_088B31EC;
    return;
L_088B31EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B31F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7980));
    goto L_088B077C;
L_088B31F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B3298;
      }
      goto L_088B3208;
    }
L_088B3208:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (18735u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (21326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20291));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16721));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B3280u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B3280u) goto L_088B3280;
    return;
L_088B3280:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B3290u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7912));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B3290u) goto L_088B3290;
    return;
L_088B3290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B32BC;
      }
      goto L_088B3298;
    }
L_088B3298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16721));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x088B32BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7920));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088B32BCu) goto L_088B32BC;
    return;
L_088B32BC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B32D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8012));
    goto L_088B077C;
L_088B32D0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B32E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7968));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 499u, 0x08966278u>(ctx, &aot_mem) && ctx.pc == 0x088B32E4u) goto L_088B32E4;
    return;
L_088B32E4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B32F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8040));
    goto L_088B077C;
L_088B32F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B332C;
    }
    goto L_088B330C;
L_088B330C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3324u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3324u) goto L_088B3324;
    return;
L_088B3324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3340;
      }
      goto L_088B332C;
    }
L_088B332C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3340u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3340u) goto L_088B3340;
    return;
L_088B3340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3358u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3358u) goto L_088B3358;
    return;
L_088B3358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B338C;
      }
      goto L_088B336C;
    }
L_088B336C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3384u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3384u) goto L_088B3384;
    return;
L_088B3384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B33A4;
      }
      goto L_088B338C;
    }
L_088B338C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B33A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B33A4u) goto L_088B33A4;
    return;
L_088B33A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16524)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B33C8;
      }
      goto L_088B33B4;
    }
L_088B33B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16524)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B33C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B33C8u) goto L_088B33C8;
    return;
L_088B33C8:
    ctx.gpr[31] = (0x088B33D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B33D0u) goto L_088B33D0;
    return;
L_088B33D0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B33E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B33E0u) goto L_088B33E0;
    return;
L_088B33E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16524), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B3418;
    }
    goto L_088B33FC;
L_088B33FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16524)));
    ctx.gpr[31] = (0x088B3410u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 415u, 0x08935E40u>(ctx, &aot_mem) && ctx.pc == 0x088B3410u) goto L_088B3410;
    return;
L_088B3410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3428;
      }
      goto L_088B3418;
    }
L_088B3418:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16524)));
    ctx.gpr[31] = (0x088B3428u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 469u, 0x08936160u>(ctx, &aot_mem) && ctx.pc == 0x088B3428u) goto L_088B3428;
    return;
L_088B3428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3450;
      }
      goto L_088B343C;
    }
L_088B343C:
    ctx.gpr[31] = (0x088B3444u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDECu;
    return;
L_088B3444:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B3458;
      }
      goto L_088B3450;
    }
L_088B3450:
    ctx.gpr[31] = (0x088B3458u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDF4u;
    return;
L_088B3458:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3464u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8064));
    goto L_088B077C;
L_088B3464:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3470u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7980));
    goto L_088B077C;
L_088B3470:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B3510;
      }
      goto L_088B3480;
    }
L_088B3480:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (20527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (18271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (12101u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (18735u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (21326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20291));
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16721));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B34F8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B34F8u) goto L_088B34F8;
    return;
L_088B34F8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3508u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8076));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x088B3508u) goto L_088B3508;
    return;
L_088B3508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3534;
      }
      goto L_088B3510;
    }
L_088B3510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16721));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3534u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8084));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3534u) goto L_088B3534;
    return;
L_088B3534:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B3548u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8012));
    goto L_088B077C;
L_088B3548:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B355Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7968));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 499u, 0x08966278u>(ctx, &aot_mem) && ctx.pc == 0x088B355Cu) goto L_088B355C;
    return;
L_088B355C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8040));
    goto L_088B077C;
L_088B3570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B35A4;
    }
    goto L_088B3584;
L_088B3584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B359Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B359Cu) goto L_088B359C;
    return;
L_088B359C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B35B8;
      }
      goto L_088B35A4;
    }
L_088B35A4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B35B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B35B8u) goto L_088B35B8;
    return;
L_088B35B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B35D0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B35D0u) goto L_088B35D0;
    return;
L_088B35D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B3604;
      }
      goto L_088B35E4;
    }
L_088B35E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B35FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B35FCu) goto L_088B35FC;
    return;
L_088B35FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B361C;
      }
      goto L_088B3604;
    }
L_088B3604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B361Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B361Cu) goto L_088B361C;
    return;
L_088B361C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16528)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3640;
      }
      goto L_088B362C;
    }
L_088B362C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16528)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B3640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3640u) goto L_088B3640;
    return;
L_088B3640:
    ctx.gpr[31] = (0x088B3648u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B3648u) goto L_088B3648;
    return;
L_088B3648:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B3658u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B3658u) goto L_088B3658;
    return;
L_088B3658:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16528), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B3690;
    }
    goto L_088B3674;
L_088B3674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16528)));
    ctx.gpr[31] = (0x088B3688u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 415u, 0x08935E40u>(ctx, &aot_mem) && ctx.pc == 0x088B3688u) goto L_088B3688;
    return;
L_088B3688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B36A0;
      }
      goto L_088B3690;
    }
L_088B3690:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16528)));
    ctx.gpr[31] = (0x088B36A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 469u, 0x08936160u>(ctx, &aot_mem) && ctx.pc == 0x088B36A0u) goto L_088B36A0;
    return;
L_088B36A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B36C8;
      }
      goto L_088B36B4;
    }
L_088B36B4:
    ctx.gpr[31] = (0x088B36BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDECu;
    return;
L_088B36BC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B36D0;
      }
      goto L_088B36C8;
    }
L_088B36C8:
    ctx.gpr[31] = (0x088B36D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDF4u;
    return;
L_088B36D0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B36DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8064));
    goto L_088B077C;
L_088B36DC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B36E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8104));
    goto L_088B077C;
L_088B36E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (25459u << 16u);
      if (branch_taken) {
          goto L_088B3774;
      }
      goto L_088B36F8;
    }
L_088B36F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26980));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (20527u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (18271u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (12101u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (17490u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (18735u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (21326u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20291));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (22081u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21295));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (11847u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16965));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (71u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20048));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B3784;
      }
      goto L_088B3774;
    }
L_088B3774:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088B3784u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8136));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3784u) goto L_088B3784;
    return;
L_088B3784:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8160));
    goto L_088B077C;
L_088B3798:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088B37ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7968));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 499u, 0x08966278u>(ctx, &aot_mem) && ctx.pc == 0x088B37ACu) goto L_088B37AC;
    return;
L_088B37AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B37C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8040));
    goto L_088B077C;
L_088B37C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B37F4;
    }
    goto L_088B37D4;
L_088B37D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B37ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B37ECu) goto L_088B37EC;
    return;
L_088B37EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3808;
      }
      goto L_088B37F4;
    }
L_088B37F4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3808u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3808u) goto L_088B3808;
    return;
L_088B3808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B3820u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B3820u) goto L_088B3820;
    return;
L_088B3820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B3854;
      }
      goto L_088B3834;
    }
L_088B3834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B384Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 460u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x088B384Cu) goto L_088B384C;
    return;
L_088B384C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B386C;
      }
      goto L_088B3854;
    }
L_088B3854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[31] = (0x088B386Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 515u, 0x089363C0u>(ctx, &aot_mem) && ctx.pc == 0x088B386Cu) goto L_088B386C;
    return;
L_088B386C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3890;
      }
      goto L_088B387C;
    }
L_088B387C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16536)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x088B3890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B3890u) goto L_088B3890;
    return;
L_088B3890:
    ctx.gpr[31] = (0x088B3898u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B3898u) goto L_088B3898;
    return;
L_088B3898:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B38A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B38A8u) goto L_088B38A8;
    return;
L_088B38A8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16536), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_088B38E0;
    }
    goto L_088B38C4;
L_088B38C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16536)));
    ctx.gpr[31] = (0x088B38D8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 415u, 0x08935E40u>(ctx, &aot_mem) && ctx.pc == 0x088B38D8u) goto L_088B38D8;
    return;
L_088B38D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B38F0;
      }
      goto L_088B38E0;
    }
L_088B38E0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16536)));
    ctx.gpr[31] = (0x088B38F0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 469u, 0x08936160u>(ctx, &aot_mem) && ctx.pc == 0x088B38F0u) goto L_088B38F0;
    return;
L_088B38F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3918;
      }
      goto L_088B3904;
    }
L_088B3904:
    ctx.gpr[31] = (0x088B390Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDECu;
    return;
L_088B390C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B3920;
      }
      goto L_088B3918;
    }
L_088B3918:
    ctx.gpr[31] = (0x088B3920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BDF4u;
    return;
L_088B3920:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B392Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8064));
    goto L_088B077C;
L_088B392C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16524)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1412), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1416), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1420), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16528)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1428), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1436), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16536)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1448), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1444), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1452), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1460), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1464), 0u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1468), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16532)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(7356));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(5689));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(7356), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1476), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088B3D50;
      }
      goto L_088B39AC;
    }
L_088B39AC:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[31] = (0x088B39B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B39B8u) goto L_088B39B8;
    return;
L_088B39B8:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B39D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B39D0u) goto L_088B39D0;
    return;
L_088B39D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B39DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B07A8;
L_088B39DC:
    ctx.gpr[31] = (0x088B39E4u);
    // nop
    goto L_088B0814;
L_088B39E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B39F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B39F4u) goto L_088B39F4;
    return;
L_088B39F4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1520), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3A2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B3A2Cu) goto L_088B3A2C;
    return;
L_088B3A2C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7228));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B3A40u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3A40u) goto L_088B3A40;
    return;
L_088B3A40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3A50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3A50u) goto L_088B3A50;
    return;
L_088B3A50:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7836));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B3A64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3A64u) goto L_088B3A64;
    return;
L_088B3A64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3A74u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3A74u) goto L_088B3A74;
    return;
L_088B3A74:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B3A88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3A88u) goto L_088B3A88;
    return;
L_088B3A88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B3A98u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3A98u) goto L_088B3A98;
    return;
L_088B3A98:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16541));
    ctx.gpr[31] = (0x088B3AA8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_088B0814;
L_088B3AA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B3D50;
      }
      goto L_088B3AB4;
    }
L_088B3AB4:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[31] = (0x088B3AC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x088B3AC0u) goto L_088B3AC0;
    return;
L_088B3AC0:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088B3AD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x088B3AD8u) goto L_088B3AD8;
    return;
L_088B3AD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088B3AE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B07A8;
L_088B3AE4:
    ctx.gpr[31] = (0x088B3AECu);
    // nop
    goto L_088B0814;
L_088B3AEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3AFCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B3AFCu) goto L_088B3AFC;
    return;
L_088B3AFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1520), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3B30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B3B30u) goto L_088B3B30;
    return;
L_088B3B30:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7228));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B3B44u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3B44u) goto L_088B3B44;
    return;
L_088B3B44:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3B54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3B54u) goto L_088B3B54;
    return;
L_088B3B54:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7836));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B3B68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3B68u) goto L_088B3B68;
    return;
L_088B3B68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3B78u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3B78u) goto L_088B3B78;
    return;
L_088B3B78:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B3B8Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3B8Cu) goto L_088B3B8C;
    return;
L_088B3B8C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088B3B9Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3B9Cu) goto L_088B3B9C;
    return;
L_088B3B9C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088B3BA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x088B3BA8u) goto L_088B3BA8;
    return;
L_088B3BA8:
    ctx.gpr[31] = (0x088B3BB0u);
    // nop
    goto L_088B0814;
L_088B3BB0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B3D50;
      }
      goto L_088B3BBC;
    }
L_088B3BBC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1520), 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3BF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B3BF4u) goto L_088B3BF4;
    return;
L_088B3BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3D50;
      }
      goto L_088B3BFC;
    }
L_088B3BFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(7376));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3C14u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B3C14u) goto L_088B3C14;
    return;
L_088B3C14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x088B3C28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7396));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B3C28u) goto L_088B3C28;
    return;
L_088B3C28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7460));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B3C40u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x088B3C40u) goto L_088B3C40;
    return;
L_088B3C40:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1516), 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1520), 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1500));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x088B3C78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x088B3C78u) goto L_088B3C78;
    return;
L_088B3C78:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7228));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x088B3C8Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3C8Cu) goto L_088B3C8C;
    return;
L_088B3C8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3C9Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3C9Cu) goto L_088B3C9C;
    return;
L_088B3C9C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7836));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x088B3CB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3CB0u) goto L_088B3CB0;
    return;
L_088B3CB0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3CC0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3CC0u) goto L_088B3CC0;
    return;
L_088B3CC0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7840));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x088B3CD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x088B3CD4u) goto L_088B3CD4;
    return;
L_088B3CD4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B3CE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x088B3CE4u) goto L_088B3CE4;
    return;
L_088B3CE4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16541));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1488), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1492), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1496), ctx.gpr[17]);
    ctx.gpr[4] = (1024u << 16u);
    ctx.gpr[5] = (1u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7280));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 21751u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1416), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1420), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1428), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 51200u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1432), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1436), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1444), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40366u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1448), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1452), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1460), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1464), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1468), 0u);
    goto L_088B3D50;
L_088B3D50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x088B3D5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5820));
    ctx.pc = 0x08B0B824u;
    return;
L_088B3D5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B3D78;
      }
      goto L_088B3D68;
    }
L_088B3D68:
    ctx.gpr[31] = (0x088B3D70u);
    // nop
    goto L_088B0F6C;
L_088B3D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3D84;
      }
      goto L_088B3D78;
    }
L_088B3D78:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B3D84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8184));
    goto L_088B077C;
L_088B3D84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16412)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16408)));
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16416), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16436)));
    ctx.gpr[3] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16448)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16444)));
    ctx.gpr[24] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(16452), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16460), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2227u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16424), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(16420), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2227u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(16428), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(16440), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2227u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(16456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16464), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3E9C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B3F34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 16u, 0x088B4164u>(ctx, &aot_mem) && ctx.pc == 0x088B3F34u) goto L_088B3F34;
    return;
L_088B3F34:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B3FA8;
      }
      goto L_088B3F64;
    }
L_088B3F64:
    ctx.gpr[31] = (0x088B3F6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 27u, 0x088B42A4u>(ctx, &aot_mem) && ctx.pc == 0x088B3F6Cu) goto L_088B3F6C;
    return;
L_088B3F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B3F80;
      }
      goto L_088B3F78;
    }
L_088B3F78:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088B3F80;
L_088B3F80:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
        goto L_088B3F94;
    }
    goto L_088B3F88;
L_088B3F88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B3F94;
L_088B3F94:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_088B3FA8;
      }
      goto L_088B3FA0;
    }
L_088B3FA0:
    ctx.gpr[31] = (0x088B3FA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088B3FA8u) goto L_088B3FA8;
    return;
L_088B3FA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B3FE4;
      }
      goto L_088B3FD4;
    }
L_088B3FD4:
    ctx.gpr[31] = (0x088B3FDCu);
    ctx.gpr[5] = (0u | 3u);
    goto L_088B3F48;
L_088B3FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B3FEC;
      }
      goto L_088B3FE4;
    }
L_088B3FE4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088B3FEC;
L_088B3FEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B3FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.pc = 0x088B4000u; return;
}

void recomp_unit_0043(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0043_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_43(Runtime &runtime) {
    runtime.register_generated_unit(43u, 0x088B0000u, 16384u, &recomp_unit_0043, &recomp_unit_0043_entry);
    runtime.register_function(0x088B0000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0004u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B001Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0034u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B004Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0064u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B007Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0094u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B00DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0100u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0114u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0124u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B012Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0134u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0140u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B014Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0158u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B016Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0174u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B017Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0180u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0188u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B01FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B020Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0214u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B021Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0228u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0234u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0244u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B024Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0254u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0260u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B02FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0310u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0328u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0344u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B034Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0370u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B037Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0388u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0390u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B03A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0400u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0410u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B041Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0428u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B043Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0448u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B04F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0508u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0510u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0554u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0584u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B058Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0594u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B05FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B060Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0624u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B062Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0630u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0638u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B063Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0658u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0664u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B067Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0684u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0688u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0690u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0718u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0724u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0730u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0754u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0770u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B077Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B07E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0814u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0820u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0838u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B085Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0864u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B086Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B08F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0920u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0944u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0958u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0960u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0990u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B09F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0A98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0AA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0AB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0C88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0CFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0D9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0DF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E0Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0E9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0EF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0F8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B0FF8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1000u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1008u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1010u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1020u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1034u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1054u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1064u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1074u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1094u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B10F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1104u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B110Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1118u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1120u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B112Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1134u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1140u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1148u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1154u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B115Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1168u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1170u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B117Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1184u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1190u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1198u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B11F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1228u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1238u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B123Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1248u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1258u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B125Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1268u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1278u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B127Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1288u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1298u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B129Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B12B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1300u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1310u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1318u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1324u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1330u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1338u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1344u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1348u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1350u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B135Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1370u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B137Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1388u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1390u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1394u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B13F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1408u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1410u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1414u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B141Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1424u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B142Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1430u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1438u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1440u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1448u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1450u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1458u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B146Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1474u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1488u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B14F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1500u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1508u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1540u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1550u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1558u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1564u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1574u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B157Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B158Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1594u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B15F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B161Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B162Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1654u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1670u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1698u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B16F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1738u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1760u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B17F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1800u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1808u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1810u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1818u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1824u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1830u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1838u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B183Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1848u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1850u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1854u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1860u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1868u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B186Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1874u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1880u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B18E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1900u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1908u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1918u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1920u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1928u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1930u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1938u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1944u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B194Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1958u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1978u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B199Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B19FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1A8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1AD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1ADCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1B98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1BF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1C98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CCCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1CD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1D64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1DFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E04u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E10u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1E9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EC4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1ED8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1EF0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1F98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B1FFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2008u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2010u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B201Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2028u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B204Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B205Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2064u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2078u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2080u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2090u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2098u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B20F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2108u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2110u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2114u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2130u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B22F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2338u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2348u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2354u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B235Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B236Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2374u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B237Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2384u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2388u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2390u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2398u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B23F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2404u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2470u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2480u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B248Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2498u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B24F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B250Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2540u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2550u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2564u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2570u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2580u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2594u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B25FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2600u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2604u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2618u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B264Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2664u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B266Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2674u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2680u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2688u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2690u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B269Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B26FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2708u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2710u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2714u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B271Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2730u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2738u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2744u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2750u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B275Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2764u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2768u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2770u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2784u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B278Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B27F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2800u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B280Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2818u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2820u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2824u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B282Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2840u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B284Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2858u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2864u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B286Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2870u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2878u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2890u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B28D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2920u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2930u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2938u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2940u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2948u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2950u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2960u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2968u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B297Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2984u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2990u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2998u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29B0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29CCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B29FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2A94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2ACCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2AFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B24u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B7Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2B8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BE0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2BFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C18u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C20u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2C94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CD0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2CF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D60u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2D9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DB8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2DECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E00u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E08u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E1Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E3Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E4Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2E90u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EA4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2EC8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2ED8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F38u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F58u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2F68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B2FECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3004u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3018u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B302Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3044u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B305Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3064u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3078u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3090u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B30ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3100u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3108u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3118u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3134u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3148u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3150u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3160u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3174u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B317Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3188u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3190u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B31F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3208u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3280u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3290u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3298u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B32F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B330Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3324u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B332Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3340u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3358u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B336Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3384u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B338Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B33FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3410u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3418u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3428u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B343Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3444u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3450u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3458u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3464u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3470u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3480u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B34F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3508u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3510u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3534u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3548u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B355Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3570u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3584u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B359Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35A4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B35FCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3604u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B361Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B362Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3640u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3648u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3658u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3674u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3688u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3690u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36A0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36B4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36BCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36C8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36E8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B36F8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3774u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3784u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3798u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37C0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37D4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37ECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B37F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3808u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3820u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3834u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B384Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3854u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B386Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B387Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3890u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3898u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38A8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38C4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38D8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38E0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B38F0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3904u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B390Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3918u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3920u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B392Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39ACu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39B8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39D0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39DCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39E4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B39F4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A2Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A74u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3A98u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AB4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AD8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3AFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B30u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B44u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B54u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3B9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BF4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3BFCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C14u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C28u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C40u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C8Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3C9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CB0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CC0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3CE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D50u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D5Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D68u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D70u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3D84u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3DA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3E9Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3EE8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F34u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F48u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F64u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F6Cu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F78u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F80u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F88u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3F94u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FA0u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FA8u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FBCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FD4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FDCu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FE4u, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FECu, &recomp_unit_0043, "recomp_unit_0043");
    runtime.register_function(0x088B3FF8u, &recomp_unit_0043, "recomp_unit_0043");
}
} // namespace psprecomp
