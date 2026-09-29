#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "lcs_lang.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0183[4094] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0,
    0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 28, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0,
    48, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0,
    0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65,
    0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0,
    86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 93, 0, 94, 0, 95, 0,
    96, 0, 97, 0, 98, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 128, 0,
    0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0,
    152, 0, 0, 153, 0, 0, 154, 0, 155, 156, 0, 0, 157, 0, 0, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 170, 0, 0, 171,
    0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 180, 0, 0,
    181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 188, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0,
    192, 0, 0, 193, 0, 0, 194, 0, 195, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 203, 204,
    0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 212, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0,
    0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0,
    227, 228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 0, 237, 0, 0, 0, 238, 0,
    239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 244, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0,
    250, 0, 251, 252, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 260, 0, 0, 261, 0, 0, 0,
    262, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 267,
    0, 0, 268, 0, 269, 270, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 278, 0, 0, 279, 0,
    0, 0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 285, 0, 286,
    0, 287, 0, 0, 0, 288, 0, 289, 290, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 297, 0, 0, 298, 0, 0, 0,
    299, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 310,
    0, 0, 311, 0, 312, 313, 0, 0, 314, 0, 0, 0, 315, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 323, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0,
    0, 328, 0, 0, 329, 0, 330, 331, 0, 0, 332, 0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0,
    347, 348, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 356, 0, 0, 357, 0, 0, 0, 358, 0,
    359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 364, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0,
    370, 0, 371, 372, 0, 0, 373, 0, 0, 0, 374, 375, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0,
    0, 0, 378, 0, 379, 0, 380, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 388, 389, 0, 0, 390, 0, 0,
    0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 397, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0,
    402, 0, 0, 403, 0, 404, 405, 0, 0, 406, 0, 0, 0, 407, 408, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 416, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420,
    0, 0, 421, 0, 0, 422, 0, 423, 424, 0, 0, 425, 0, 0, 0, 426, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 433, 434, 0, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0,
    0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 442, 0, 0, 443, 0, 0, 0, 444, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455,
    0, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 459, 460, 0, 0, 461, 0, 0, 0, 462, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470,
    471, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 478, 479, 0, 0, 480, 0, 0, 0, 481, 482, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0,
    488, 489, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 497, 0, 0, 498, 0, 0, 0, 499, 500,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505,
    0, 506, 507, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 514, 515, 0, 0, 516, 0, 0, 0, 517,
    518, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 525, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0,
    529, 0, 0, 530, 0, 0, 531, 0, 532, 533, 0, 0, 534, 0, 0, 0, 535, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 540,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 544, 545, 0, 546, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 560, 0, 0,
    0, 0, 561, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 576, 0, 0, 577, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0,
    0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 602, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 605,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0,
    0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 0, 0,
    0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 628,
    0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0,
    639, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 645, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 656,
    0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0, 0, 0,
    0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 674, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    676, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 680,
    0, 0, 681, 0, 682, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0,
    0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0,
    0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0,
    0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709,
    0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0,
    713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0,
    0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0,
    0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0,
    0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0,
    0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 746, 0, 747, 0, 0,
    0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0,
    0, 756, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 763, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0,
    0, 0, 0, 768, 0, 769, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 779, 0, 780, 0, 0,
    0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0,
    0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0,
    0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0,
    0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806,
    0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0,
    816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 818, 819, 0, 0, 0, 820, 0, 821, 0, 822, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 825,
    0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0,
    835, 836, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 843, 844, 0, 845, 0, 846, 0,
    0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 853, 0, 854, 0, 0, 855, 0,
    0, 0, 0, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0,
    0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0,
    0, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 881,
};
void recomp_unit_0183_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE0000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0183[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE0000;
    case 2u: goto L_08AE0004;
    case 3u: goto L_08AE0014;
    case 4u: goto L_08AE002C;
    case 5u: goto L_08AE0034;
    case 6u: goto L_08AE003C;
    case 7u: goto L_08AE0044;
    case 8u: goto L_08AE004C;
    case 9u: goto L_08AE0068;
    case 10u: goto L_08AE0074;
    case 11u: goto L_08AE008C;
    case 12u: goto L_08AE0094;
    case 13u: goto L_08AE00A4;
    case 14u: goto L_08AE00B0;
    case 15u: goto L_08AE00BC;
    case 16u: goto L_08AE00C4;
    case 17u: goto L_08AE00C8;
    case 18u: goto L_08AE00D4;
    case 19u: goto L_08AE0104;
    case 20u: goto L_08AE0120;
    case 21u: goto L_08AE012C;
    case 22u: goto L_08AE0144;
    case 23u: goto L_08AE014C;
    case 24u: goto L_08AE0180;
    case 25u: goto L_08AE0190;
    case 26u: goto L_08AE019C;
    case 27u: goto L_08AE01A8;
    case 28u: goto L_08AE01B0;
    case 29u: goto L_08AE01B4;
    case 30u: goto L_08AE01C0;
    case 31u: goto L_08AE01F4;
    case 32u: goto L_08AE0220;
    case 33u: goto L_08AE0228;
    case 34u: goto L_08AE022C;
    case 35u: goto L_08AE0244;
    case 36u: goto L_08AE0254;
    case 37u: goto L_08AE025C;
    case 38u: goto L_08AE0274;
    case 39u: goto L_08AE0284;
    case 40u: goto L_08AE0294;
    case 41u: goto L_08AE02A0;
    case 42u: goto L_08AE02A8;
    case 43u: goto L_08AE02C4;
    case 44u: goto L_08AE02CC;
    case 45u: goto L_08AE02D4;
    case 46u: goto L_08AE02E0;
    case 47u: goto L_08AE02F8;
    case 48u: goto L_08AE0300;
    case 49u: goto L_08AE0308;
    case 50u: goto L_08AE0314;
    case 51u: goto L_08AE031C;
    case 52u: goto L_08AE0338;
    case 53u: goto L_08AE0340;
    case 54u: goto L_08AE0348;
    case 55u: goto L_08AE0354;
    case 56u: goto L_08AE036C;
    case 57u: goto L_08AE0378;
    case 58u: goto L_08AE038C;
    case 59u: goto L_08AE039C;
    case 60u: goto L_08AE03AC;
    case 61u: goto L_08AE03B4;
    case 62u: goto L_08AE03BC;
    case 63u: goto L_08AE03C0;
    case 64u: goto L_08AE03F0;
    case 65u: goto L_08AE03FC;
    case 66u: goto L_08AE0404;
    case 67u: goto L_08AE040C;
    case 68u: goto L_08AE0414;
    case 69u: goto L_08AE0454;
    case 70u: goto L_08AE0498;
    case 71u: goto L_08AE04A4;
    case 72u: goto L_08AE04BC;
    case 73u: goto L_08AE04C4;
    case 74u: goto L_08AE04CC;
    case 75u: goto L_08AE04E8;
    case 76u: goto L_08AE04F0;
    case 77u: goto L_08AE04F8;
    case 78u: goto L_08AE0500;
    case 79u: goto L_08AE051C;
    case 80u: goto L_08AE0524;
    case 81u: goto L_08AE0534;
    case 82u: goto L_08AE054C;
    case 83u: goto L_08AE0554;
    case 84u: goto L_08AE0560;
    case 85u: goto L_08AE0578;
    case 86u: goto L_08AE0580;
    case 87u: goto L_08AE0584;
    case 88u: goto L_08AE05C4;
    case 89u: goto L_08AE05CC;
    case 90u: goto L_08AE05D4;
    case 91u: goto L_08AE05DC;
    case 92u: goto L_08AE05E4;
    case 93u: goto L_08AE05E8;
    case 94u: goto L_08AE05F0;
    case 95u: goto L_08AE05F8;
    case 96u: goto L_08AE0600;
    case 97u: goto L_08AE0608;
    case 98u: goto L_08AE0610;
    case 99u: goto L_08AE0618;
    case 100u: goto L_08AE061C;
    case 101u: goto L_08AE0658;
    case 102u: goto L_08AE0698;
    case 103u: goto L_08AE06A0;
    case 104u: goto L_08AE06A8;
    case 105u: goto L_08AE06B8;
    case 106u: goto L_08AE0720;
    case 107u: goto L_08AE0784;
    case 108u: goto L_08AE0788;
    case 109u: goto L_08AE07C8;
    case 110u: goto L_08AE0808;
    case 111u: goto L_08AE084C;
    case 112u: goto L_08AE0890;
    case 113u: goto L_08AE08D4;
    case 114u: goto L_08AE08D8;
    case 115u: goto L_08AE08E0;
    case 116u: goto L_08AE0904;
    case 117u: goto L_08AE0910;
    case 118u: goto L_08AE0928;
    case 119u: goto L_08AE0940;
    case 120u: goto L_08AE0990;
    case 121u: goto L_08AE0998;
    case 122u: goto L_08AE09A4;
    case 123u: goto L_08AE09C4;
    case 124u: goto L_08AE09D4;
    case 125u: goto L_08AE09E0;
    case 126u: goto L_08AE09EC;
    case 127u: goto L_08AE09F4;
    case 128u: goto L_08AE09F8;
    case 129u: goto L_08AE0A04;
    case 130u: goto L_08AE0A14;
    case 131u: goto L_08AE0A1C;
    case 132u: goto L_08AE0A2C;
    case 133u: goto L_08AE0A38;
    case 134u: goto L_08AE0A44;
    case 135u: goto L_08AE0A4C;
    case 136u: goto L_08AE0A50;
    case 137u: goto L_08AE0A5C;
    case 138u: goto L_08AE0AA0;
    case 139u: goto L_08AE0AA4;
    case 140u: goto L_08AE0AA8;
    case 141u: goto L_08AE0AF0;
    case 142u: goto L_08AE0B08;
    case 143u: goto L_08AE0B18;
    case 144u: goto L_08AE0B28;
    case 145u: goto L_08AE0B34;
    case 146u: goto L_08AE0B40;
    case 147u: goto L_08AE0B48;
    case 148u: goto L_08AE0B4C;
    case 149u: goto L_08AE0B58;
    case 150u: goto L_08AE0B68;
    case 151u: goto L_08AE0B70;
    case 152u: goto L_08AE0B80;
    case 153u: goto L_08AE0B8C;
    case 154u: goto L_08AE0B98;
    case 155u: goto L_08AE0BA0;
    case 156u: goto L_08AE0BA4;
    case 157u: goto L_08AE0BB0;
    case 158u: goto L_08AE0BC0;
    case 159u: goto L_08AE0BC4;
    case 160u: goto L_08AE0C10;
    case 161u: goto L_08AE0C20;
    case 162u: goto L_08AE0C28;
    case 163u: goto L_08AE0C2C;
    case 164u: goto L_08AE0C34;
    case 165u: goto L_08AE0C3C;
    case 166u: goto L_08AE0C4C;
    case 167u: goto L_08AE0C58;
    case 168u: goto L_08AE0C64;
    case 169u: goto L_08AE0C6C;
    case 170u: goto L_08AE0C70;
    case 171u: goto L_08AE0C7C;
    case 172u: goto L_08AE0C8C;
    case 173u: goto L_08AE0C94;
    case 174u: goto L_08AE0CA8;
    case 175u: goto L_08AE0CC0;
    case 176u: goto L_08AE0CD0;
    case 177u: goto L_08AE0CDC;
    case 178u: goto L_08AE0CE8;
    case 179u: goto L_08AE0CF0;
    case 180u: goto L_08AE0CF4;
    case 181u: goto L_08AE0D00;
    case 182u: goto L_08AE0D10;
    case 183u: goto L_08AE0D18;
    case 184u: goto L_08AE0D28;
    case 185u: goto L_08AE0D34;
    case 186u: goto L_08AE0D40;
    case 187u: goto L_08AE0D48;
    case 188u: goto L_08AE0D4C;
    case 189u: goto L_08AE0D58;
    case 190u: goto L_08AE0D68;
    case 191u: goto L_08AE0D70;
    case 192u: goto L_08AE0D80;
    case 193u: goto L_08AE0D8C;
    case 194u: goto L_08AE0D98;
    case 195u: goto L_08AE0DA0;
    case 196u: goto L_08AE0DA4;
    case 197u: goto L_08AE0DB0;
    case 198u: goto L_08AE0DC0;
    case 199u: goto L_08AE0DC8;
    case 200u: goto L_08AE0DD8;
    case 201u: goto L_08AE0DE4;
    case 202u: goto L_08AE0DF0;
    case 203u: goto L_08AE0DF8;
    case 204u: goto L_08AE0DFC;
    case 205u: goto L_08AE0E08;
    case 206u: goto L_08AE0E18;
    case 207u: goto L_08AE0E20;
    case 208u: goto L_08AE0E30;
    case 209u: goto L_08AE0E3C;
    case 210u: goto L_08AE0E48;
    case 211u: goto L_08AE0E50;
    case 212u: goto L_08AE0E54;
    case 213u: goto L_08AE0E60;
    case 214u: goto L_08AE0E70;
    case 215u: goto L_08AE0E78;
    case 216u: goto L_08AE0E88;
    case 217u: goto L_08AE0E94;
    case 218u: goto L_08AE0EA0;
    case 219u: goto L_08AE0EA8;
    case 220u: goto L_08AE0EAC;
    case 221u: goto L_08AE0EB8;
    case 222u: goto L_08AE0EC8;
    case 223u: goto L_08AE0ED0;
    case 224u: goto L_08AE0EE0;
    case 225u: goto L_08AE0EEC;
    case 226u: goto L_08AE0EF8;
    case 227u: goto L_08AE0F00;
    case 228u: goto L_08AE0F04;
    case 229u: goto L_08AE0F10;
    case 230u: goto L_08AE0F20;
    case 231u: goto L_08AE0F28;
    case 232u: goto L_08AE0F38;
    case 233u: goto L_08AE0F44;
    case 234u: goto L_08AE0F50;
    case 235u: goto L_08AE0F58;
    case 236u: goto L_08AE0F5C;
    case 237u: goto L_08AE0F68;
    case 238u: goto L_08AE0F78;
    case 239u: goto L_08AE0F80;
    case 240u: goto L_08AE0F90;
    case 241u: goto L_08AE0F9C;
    case 242u: goto L_08AE0FA8;
    case 243u: goto L_08AE0FB0;
    case 244u: goto L_08AE0FB4;
    case 245u: goto L_08AE0FC0;
    case 246u: goto L_08AE0FD0;
    case 247u: goto L_08AE0FD8;
    case 248u: goto L_08AE0FE8;
    case 249u: goto L_08AE0FF4;
    case 250u: goto L_08AE1000;
    case 251u: goto L_08AE1008;
    case 252u: goto L_08AE100C;
    case 253u: goto L_08AE1018;
    case 254u: goto L_08AE1028;
    case 255u: goto L_08AE1030;
    case 256u: goto L_08AE1040;
    case 257u: goto L_08AE104C;
    case 258u: goto L_08AE1058;
    case 259u: goto L_08AE1060;
    case 260u: goto L_08AE1064;
    case 261u: goto L_08AE1070;
    case 262u: goto L_08AE1080;
    case 263u: goto L_08AE1084;
    case 264u: goto L_08AE10D0;
    case 265u: goto L_08AE10E0;
    case 266u: goto L_08AE10F0;
    case 267u: goto L_08AE10FC;
    case 268u: goto L_08AE1108;
    case 269u: goto L_08AE1110;
    case 270u: goto L_08AE1114;
    case 271u: goto L_08AE1120;
    case 272u: goto L_08AE1130;
    case 273u: goto L_08AE1138;
    case 274u: goto L_08AE1148;
    case 275u: goto L_08AE1154;
    case 276u: goto L_08AE1160;
    case 277u: goto L_08AE1168;
    case 278u: goto L_08AE116C;
    case 279u: goto L_08AE1178;
    case 280u: goto L_08AE1188;
    case 281u: goto L_08AE118C;
    case 282u: goto L_08AE11D8;
    case 283u: goto L_08AE11E8;
    case 284u: goto L_08AE11F0;
    case 285u: goto L_08AE11F4;
    case 286u: goto L_08AE11FC;
    case 287u: goto L_08AE1204;
    case 288u: goto L_08AE1214;
    case 289u: goto L_08AE121C;
    case 290u: goto L_08AE1220;
    case 291u: goto L_08AE1228;
    case 292u: goto L_08AE1230;
    case 293u: goto L_08AE1240;
    case 294u: goto L_08AE124C;
    case 295u: goto L_08AE1258;
    case 296u: goto L_08AE1260;
    case 297u: goto L_08AE1264;
    case 298u: goto L_08AE1270;
    case 299u: goto L_08AE1280;
    case 300u: goto L_08AE1288;
    case 301u: goto L_08AE1298;
    case 302u: goto L_08AE12A4;
    case 303u: goto L_08AE12B0;
    case 304u: goto L_08AE12B8;
    case 305u: goto L_08AE12BC;
    case 306u: goto L_08AE12C8;
    case 307u: goto L_08AE12D8;
    case 308u: goto L_08AE12E0;
    case 309u: goto L_08AE12F0;
    case 310u: goto L_08AE12FC;
    case 311u: goto L_08AE1308;
    case 312u: goto L_08AE1310;
    case 313u: goto L_08AE1314;
    case 314u: goto L_08AE1320;
    case 315u: goto L_08AE1330;
    case 316u: goto L_08AE1334;
    case 317u: goto L_08AE1380;
    case 318u: goto L_08AE1390;
    case 319u: goto L_08AE13A0;
    case 320u: goto L_08AE13AC;
    case 321u: goto L_08AE13B8;
    case 322u: goto L_08AE13C0;
    case 323u: goto L_08AE13C4;
    case 324u: goto L_08AE13D0;
    case 325u: goto L_08AE13E0;
    case 326u: goto L_08AE13E8;
    case 327u: goto L_08AE13F8;
    case 328u: goto L_08AE1404;
    case 329u: goto L_08AE1410;
    case 330u: goto L_08AE1418;
    case 331u: goto L_08AE141C;
    case 332u: goto L_08AE1428;
    case 333u: goto L_08AE1438;
    case 334u: goto L_08AE143C;
    case 335u: goto L_08AE1488;
    case 336u: goto L_08AE1490;
    case 337u: goto L_08AE14A0;
    case 338u: goto L_08AE14A8;
    case 339u: goto L_08AE14B0;
    case 340u: goto L_08AE14B8;
    case 341u: goto L_08AE14C0;
    case 342u: goto L_08AE14C8;
    case 343u: goto L_08AE14D0;
    case 344u: goto L_08AE14E0;
    case 345u: goto L_08AE14EC;
    case 346u: goto L_08AE14F8;
    case 347u: goto L_08AE1500;
    case 348u: goto L_08AE1504;
    case 349u: goto L_08AE1510;
    case 350u: goto L_08AE1520;
    case 351u: goto L_08AE1528;
    case 352u: goto L_08AE1538;
    case 353u: goto L_08AE1544;
    case 354u: goto L_08AE1550;
    case 355u: goto L_08AE1558;
    case 356u: goto L_08AE155C;
    case 357u: goto L_08AE1568;
    case 358u: goto L_08AE1578;
    case 359u: goto L_08AE1580;
    case 360u: goto L_08AE1590;
    case 361u: goto L_08AE159C;
    case 362u: goto L_08AE15A8;
    case 363u: goto L_08AE15B0;
    case 364u: goto L_08AE15B4;
    case 365u: goto L_08AE15C0;
    case 366u: goto L_08AE15D0;
    case 367u: goto L_08AE15D8;
    case 368u: goto L_08AE15E8;
    case 369u: goto L_08AE15F4;
    case 370u: goto L_08AE1600;
    case 371u: goto L_08AE1608;
    case 372u: goto L_08AE160C;
    case 373u: goto L_08AE1618;
    case 374u: goto L_08AE1628;
    case 375u: goto L_08AE162C;
    case 376u: goto L_08AE1630;
    case 377u: goto L_08AE1678;
    case 378u: goto L_08AE1688;
    case 379u: goto L_08AE1690;
    case 380u: goto L_08AE1698;
    case 381u: goto L_08AE169C;
    case 382u: goto L_08AE16A4;
    case 383u: goto L_08AE16AC;
    case 384u: goto L_08AE16B4;
    case 385u: goto L_08AE16C4;
    case 386u: goto L_08AE16D0;
    case 387u: goto L_08AE16DC;
    case 388u: goto L_08AE16E4;
    case 389u: goto L_08AE16E8;
    case 390u: goto L_08AE16F4;
    case 391u: goto L_08AE1704;
    case 392u: goto L_08AE170C;
    case 393u: goto L_08AE171C;
    case 394u: goto L_08AE1728;
    case 395u: goto L_08AE1734;
    case 396u: goto L_08AE173C;
    case 397u: goto L_08AE1740;
    case 398u: goto L_08AE174C;
    case 399u: goto L_08AE175C;
    case 400u: goto L_08AE1764;
    case 401u: goto L_08AE1774;
    case 402u: goto L_08AE1780;
    case 403u: goto L_08AE178C;
    case 404u: goto L_08AE1794;
    case 405u: goto L_08AE1798;
    case 406u: goto L_08AE17A4;
    case 407u: goto L_08AE17B4;
    case 408u: goto L_08AE17B8;
    case 409u: goto L_08AE17BC;
    case 410u: goto L_08AE1804;
    case 411u: goto L_08AE1814;
    case 412u: goto L_08AE1824;
    case 413u: goto L_08AE1830;
    case 414u: goto L_08AE183C;
    case 415u: goto L_08AE1844;
    case 416u: goto L_08AE1848;
    case 417u: goto L_08AE1854;
    case 418u: goto L_08AE1864;
    case 419u: goto L_08AE186C;
    case 420u: goto L_08AE187C;
    case 421u: goto L_08AE1888;
    case 422u: goto L_08AE1894;
    case 423u: goto L_08AE189C;
    case 424u: goto L_08AE18A0;
    case 425u: goto L_08AE18AC;
    case 426u: goto L_08AE18BC;
    case 427u: goto L_08AE18C0;
    case 428u: goto L_08AE190C;
    case 429u: goto L_08AE191C;
    case 430u: goto L_08AE192C;
    case 431u: goto L_08AE1938;
    case 432u: goto L_08AE1944;
    case 433u: goto L_08AE194C;
    case 434u: goto L_08AE1950;
    case 435u: goto L_08AE195C;
    case 436u: goto L_08AE196C;
    case 437u: goto L_08AE1974;
    case 438u: goto L_08AE1984;
    case 439u: goto L_08AE1990;
    case 440u: goto L_08AE199C;
    case 441u: goto L_08AE19A4;
    case 442u: goto L_08AE19A8;
    case 443u: goto L_08AE19B4;
    case 444u: goto L_08AE19C4;
    case 445u: goto L_08AE19C8;
    case 446u: goto L_08AE1A14;
    case 447u: goto L_08AE1A24;
    case 448u: goto L_08AE1A34;
    case 449u: goto L_08AE1A40;
    case 450u: goto L_08AE1A4C;
    case 451u: goto L_08AE1A54;
    case 452u: goto L_08AE1A58;
    case 453u: goto L_08AE1A64;
    case 454u: goto L_08AE1A74;
    case 455u: goto L_08AE1A7C;
    case 456u: goto L_08AE1A8C;
    case 457u: goto L_08AE1A98;
    case 458u: goto L_08AE1AA4;
    case 459u: goto L_08AE1AAC;
    case 460u: goto L_08AE1AB0;
    case 461u: goto L_08AE1ABC;
    case 462u: goto L_08AE1ACC;
    case 463u: goto L_08AE1AD0;
    case 464u: goto L_08AE1AE0;
    case 465u: goto L_08AE1B3C;
    case 466u: goto L_08AE1B4C;
    case 467u: goto L_08AE1B5C;
    case 468u: goto L_08AE1B68;
    case 469u: goto L_08AE1B74;
    case 470u: goto L_08AE1B7C;
    case 471u: goto L_08AE1B80;
    case 472u: goto L_08AE1B8C;
    case 473u: goto L_08AE1B9C;
    case 474u: goto L_08AE1BA4;
    case 475u: goto L_08AE1BB4;
    case 476u: goto L_08AE1BC0;
    case 477u: goto L_08AE1BCC;
    case 478u: goto L_08AE1BD4;
    case 479u: goto L_08AE1BD8;
    case 480u: goto L_08AE1BE4;
    case 481u: goto L_08AE1BF4;
    case 482u: goto L_08AE1BF8;
    case 483u: goto L_08AE1C40;
    case 484u: goto L_08AE1C50;
    case 485u: goto L_08AE1C60;
    case 486u: goto L_08AE1C6C;
    case 487u: goto L_08AE1C78;
    case 488u: goto L_08AE1C80;
    case 489u: goto L_08AE1C84;
    case 490u: goto L_08AE1C90;
    case 491u: goto L_08AE1CA0;
    case 492u: goto L_08AE1CA8;
    case 493u: goto L_08AE1CB8;
    case 494u: goto L_08AE1CC4;
    case 495u: goto L_08AE1CD0;
    case 496u: goto L_08AE1CD8;
    case 497u: goto L_08AE1CDC;
    case 498u: goto L_08AE1CE8;
    case 499u: goto L_08AE1CF8;
    case 500u: goto L_08AE1CFC;
    case 501u: goto L_08AE1D44;
    case 502u: goto L_08AE1D54;
    case 503u: goto L_08AE1D64;
    case 504u: goto L_08AE1D70;
    case 505u: goto L_08AE1D7C;
    case 506u: goto L_08AE1D84;
    case 507u: goto L_08AE1D88;
    case 508u: goto L_08AE1D94;
    case 509u: goto L_08AE1DA4;
    case 510u: goto L_08AE1DAC;
    case 511u: goto L_08AE1DBC;
    case 512u: goto L_08AE1DC8;
    case 513u: goto L_08AE1DD4;
    case 514u: goto L_08AE1DDC;
    case 515u: goto L_08AE1DE0;
    case 516u: goto L_08AE1DEC;
    case 517u: goto L_08AE1DFC;
    case 518u: goto L_08AE1E00;
    case 519u: goto L_08AE1E08;
    case 520u: goto L_08AE1E18;
    case 521u: goto L_08AE1E28;
    case 522u: goto L_08AE1E34;
    case 523u: goto L_08AE1E40;
    case 524u: goto L_08AE1E48;
    case 525u: goto L_08AE1E4C;
    case 526u: goto L_08AE1E58;
    case 527u: goto L_08AE1E68;
    case 528u: goto L_08AE1E70;
    case 529u: goto L_08AE1E80;
    case 530u: goto L_08AE1E8C;
    case 531u: goto L_08AE1E98;
    case 532u: goto L_08AE1EA0;
    case 533u: goto L_08AE1EA4;
    case 534u: goto L_08AE1EB0;
    case 535u: goto L_08AE1EC0;
    case 536u: goto L_08AE1EC4;
    case 537u: goto L_08AE1ED0;
    case 538u: goto L_08AE1EDC;
    case 539u: goto L_08AE1EE8;
    case 540u: goto L_08AE1EFC;
    case 541u: goto L_08AE1F4C;
    case 542u: goto L_08AE1F58;
    case 543u: goto L_08AE1F64;
    case 544u: goto L_08AE1F6C;
    case 545u: goto L_08AE1F70;
    case 546u: goto L_08AE1F78;
    case 547u: goto L_08AE1FC0;
    case 548u: goto L_08AE1FCC;
    case 549u: goto L_08AE2028;
    case 550u: goto L_08AE2034;
    case 551u: goto L_08AE2040;
    case 552u: goto L_08AE2048;
    case 553u: goto L_08AE204C;
    case 554u: goto L_08AE2054;
    case 555u: goto L_08AE20A0;
    case 556u: goto L_08AE20AC;
    case 557u: goto L_08AE20D8;
    case 558u: goto L_08AE20E0;
    case 559u: goto L_08AE20E8;
    case 560u: goto L_08AE20F4;
    case 561u: goto L_08AE2108;
    case 562u: goto L_08AE2118;
    case 563u: goto L_08AE2124;
    case 564u: goto L_08AE2130;
    case 565u: goto L_08AE2138;
    case 566u: goto L_08AE213C;
    case 567u: goto L_08AE2148;
    case 568u: goto L_08AE2190;
    case 569u: goto L_08AE219C;
    case 570u: goto L_08AE21EC;
    case 571u: goto L_08AE21F8;
    case 572u: goto L_08AE2240;
    case 573u: goto L_08AE224C;
    case 574u: goto L_08AE2258;
    case 575u: goto L_08AE2260;
    case 576u: goto L_08AE2264;
    case 577u: goto L_08AE2270;
    case 578u: goto L_08AE22B8;
    case 579u: goto L_08AE22C4;
    case 580u: goto L_08AE2320;
    case 581u: goto L_08AE232C;
    case 582u: goto L_08AE2330;
    case 583u: goto L_08AE2378;
    case 584u: goto L_08AE23C4;
    case 585u: goto L_08AE2408;
    case 586u: goto L_08AE2450;
    case 587u: goto L_08AE2468;
    case 588u: goto L_08AE2498;
    case 589u: goto L_08AE24C8;
    case 590u: goto L_08AE24F0;
    case 591u: goto L_08AE2520;
    case 592u: goto L_08AE254C;
    case 593u: goto L_08AE2560;
    case 594u: goto L_08AE258C;
    case 595u: goto L_08AE25B4;
    case 596u: goto L_08AE25C8;
    case 597u: goto L_08AE25F4;
    case 598u: goto L_08AE2608;
    case 599u: goto L_08AE2634;
    case 600u: goto L_08AE2648;
    case 601u: goto L_08AE2674;
    case 602u: goto L_08AE2678;
    case 603u: goto L_08AE26C0;
    case 604u: goto L_08AE26D8;
    case 605u: goto L_08AE26FC;
    case 606u: goto L_08AE2708;
    case 607u: goto L_08AE2728;
    case 608u: goto L_08AE2734;
    case 609u: goto L_08AE2764;
    case 610u: goto L_08AE276C;
    case 611u: goto L_08AE2788;
    case 612u: goto L_08AE27A4;
    case 613u: goto L_08AE27BC;
    case 614u: goto L_08AE27D4;
    case 615u: goto L_08AE27EC;
    case 616u: goto L_08AE2808;
    case 617u: goto L_08AE2820;
    case 618u: goto L_08AE2858;
    case 619u: goto L_08AE2860;
    case 620u: goto L_08AE286C;
    case 621u: goto L_08AE2890;
    case 622u: goto L_08AE28A0;
    case 623u: goto L_08AE28B8;
    case 624u: goto L_08AE28C0;
    case 625u: goto L_08AE28D4;
    case 626u: goto L_08AE28E4;
    case 627u: goto L_08AE28F0;
    case 628u: goto L_08AE28FC;
    case 629u: goto L_08AE290C;
    case 630u: goto L_08AE2918;
    case 631u: goto L_08AE295C;
    case 632u: goto L_08AE29A0;
    case 633u: goto L_08AE29AC;
    case 634u: goto L_08AE29B8;
    case 635u: goto L_08AE29D0;
    case 636u: goto L_08AE29D8;
    case 637u: goto L_08AE29E0;
    case 638u: goto L_08AE29F8;
    case 639u: goto L_08AE2A00;
    case 640u: goto L_08AE2A04;
    case 641u: goto L_08AE2A60;
    case 642u: goto L_08AE2A68;
    case 643u: goto L_08AE2AB0;
    case 644u: goto L_08AE2AB8;
    case 645u: goto L_08AE2ABC;
    case 646u: goto L_08AE2AC4;
    case 647u: goto L_08AE2AE0;
    case 648u: goto L_08AE2AF0;
    case 649u: goto L_08AE2B40;
    case 650u: goto L_08AE2B48;
    case 651u: goto L_08AE2B58;
    case 652u: goto L_08AE2B60;
    case 653u: goto L_08AE2B68;
    case 654u: goto L_08AE2B70;
    case 655u: goto L_08AE2B78;
    case 656u: goto L_08AE2B7C;
    case 657u: goto L_08AE2B84;
    case 658u: goto L_08AE2B8C;
    case 659u: goto L_08AE2B94;
    case 660u: goto L_08AE2B9C;
    case 661u: goto L_08AE2BA4;
    case 662u: goto L_08AE2BAC;
    case 663u: goto L_08AE2BB0;
    case 664u: goto L_08AE2BF0;
    case 665u: goto L_08AE2C34;
    case 666u: goto L_08AE2C3C;
    case 667u: goto L_08AE2C58;
    case 668u: goto L_08AE2C60;
    case 669u: goto L_08AE2C68;
    case 670u: goto L_08AE2C84;
    case 671u: goto L_08AE2CA0;
    case 672u: goto L_08AE2CAC;
    case 673u: goto L_08AE2CB8;
    case 674u: goto L_08AE2CBC;
    case 675u: goto L_08AE2CC0;
    case 676u: goto L_08AE2D00;
    case 677u: goto L_08AE2D0C;
    case 678u: goto L_08AE2D68;
    case 679u: goto L_08AE2D70;
    case 680u: goto L_08AE2D7C;
    case 681u: goto L_08AE2D88;
    case 682u: goto L_08AE2D90;
    case 683u: goto L_08AE2D94;
    case 684u: goto L_08AE2DE4;
    case 685u: goto L_08AE2DEC;
    case 686u: goto L_08AE2E3C;
    case 687u: goto L_08AE2E50;
    case 688u: goto L_08AE2E6C;
    case 689u: goto L_08AE2E78;
    case 690u: goto L_08AE2E88;
    case 691u: goto L_08AE2E94;
    case 692u: goto L_08AE2EAC;
    case 693u: goto L_08AE2EB8;
    case 694u: goto L_08AE2ED0;
    case 695u: goto L_08AE2F08;
    case 696u: goto L_08AE2F10;
    case 697u: goto L_08AE2F1C;
    case 698u: goto L_08AE2F24;
    case 699u: goto L_08AE2F44;
    case 700u: goto L_08AE2F54;
    case 701u: goto L_08AE2F78;
    case 702u: goto L_08AE2F94;
    case 703u: goto L_08AE2FB8;
    case 704u: goto L_08AE2FD4;
    case 705u: goto L_08AE2FF8;
    case 706u: goto L_08AE3018;
    case 707u: goto L_08AE303C;
    case 708u: goto L_08AE3058;
    case 709u: goto L_08AE307C;
    case 710u: goto L_08AE309C;
    case 711u: goto L_08AE30C0;
    case 712u: goto L_08AE30DC;
    case 713u: goto L_08AE3100;
    case 714u: goto L_08AE3120;
    case 715u: goto L_08AE3144;
    case 716u: goto L_08AE3160;
    case 717u: goto L_08AE3184;
    case 718u: goto L_08AE31A4;
    case 719u: goto L_08AE31C8;
    case 720u: goto L_08AE3204;
    case 721u: goto L_08AE3228;
    case 722u: goto L_08AE3248;
    case 723u: goto L_08AE326C;
    case 724u: goto L_08AE3288;
    case 725u: goto L_08AE32AC;
    case 726u: goto L_08AE32CC;
    case 727u: goto L_08AE32F0;
    case 728u: goto L_08AE330C;
    case 729u: goto L_08AE3330;
    case 730u: goto L_08AE3350;
    case 731u: goto L_08AE3374;
    case 732u: goto L_08AE3390;
    case 733u: goto L_08AE33B4;
    case 734u: goto L_08AE33D4;
    case 735u: goto L_08AE33F8;
    case 736u: goto L_08AE3414;
    case 737u: goto L_08AE3438;
    case 738u: goto L_08AE3458;
    case 739u: goto L_08AE347C;
    case 740u: goto L_08AE3488;
    case 741u: goto L_08AE3498;
    case 742u: goto L_08AE34B4;
    case 743u: goto L_08AE34C4;
    case 744u: goto L_08AE34CC;
    case 745u: goto L_08AE34E4;
    case 746u: goto L_08AE34EC;
    case 747u: goto L_08AE34F4;
    case 748u: goto L_08AE3514;
    case 749u: goto L_08AE351C;
    case 750u: goto L_08AE3534;
    case 751u: goto L_08AE353C;
    case 752u: goto L_08AE3544;
    case 753u: goto L_08AE354C;
    case 754u: goto L_08AE3568;
    case 755u: goto L_08AE3578;
    case 756u: goto L_08AE3584;
    case 757u: goto L_08AE3590;
    case 758u: goto L_08AE35A0;
    case 759u: goto L_08AE35B0;
    case 760u: goto L_08AE35BC;
    case 761u: goto L_08AE35D0;
    case 762u: goto L_08AE35E4;
    case 763u: goto L_08AE35E8;
    case 764u: goto L_08AE3614;
    case 765u: goto L_08AE3634;
    case 766u: goto L_08AE3640;
    case 767u: goto L_08AE366C;
    case 768u: goto L_08AE368C;
    case 769u: goto L_08AE3694;
    case 770u: goto L_08AE3698;
    case 771u: goto L_08AE36C4;
    case 772u: goto L_08AE36E4;
    case 773u: goto L_08AE36F0;
    case 774u: goto L_08AE371C;
    case 775u: goto L_08AE373C;
    case 776u: goto L_08AE3784;
    case 777u: goto L_08AE37D8;
    case 778u: goto L_08AE37E4;
    case 779u: goto L_08AE37EC;
    case 780u: goto L_08AE37F4;
    case 781u: goto L_08AE3810;
    case 782u: goto L_08AE3840;
    case 783u: goto L_08AE385C;
    case 784u: goto L_08AE386C;
    case 785u: goto L_08AE3878;
    case 786u: goto L_08AE3888;
    case 787u: goto L_08AE38D0;
    case 788u: goto L_08AE3904;
    case 789u: goto L_08AE3918;
    case 790u: goto L_08AE3928;
    case 791u: goto L_08AE393C;
    case 792u: goto L_08AE3954;
    case 793u: goto L_08AE3968;
    case 794u: goto L_08AE3974;
    case 795u: goto L_08AE3998;
    case 796u: goto L_08AE39B8;
    case 797u: goto L_08AE39C8;
    case 798u: goto L_08AE39E0;
    case 799u: goto L_08AE39F8;
    case 800u: goto L_08AE3A10;
    case 801u: goto L_08AE3A20;
    case 802u: goto L_08AE3A38;
    case 803u: goto L_08AE3A48;
    case 804u: goto L_08AE3A4C;
    case 805u: goto L_08AE3A64;
    case 806u: goto L_08AE3A7C;
    case 807u: goto L_08AE3A84;
    case 808u: goto L_08AE3A8C;
    case 809u: goto L_08AE3A94;
    case 810u: goto L_08AE3AAC;
    case 811u: goto L_08AE3AB4;
    case 812u: goto L_08AE3ACC;
    case 813u: goto L_08AE3AD4;
    case 814u: goto L_08AE3ADC;
    case 815u: goto L_08AE3AE8;
    case 816u: goto L_08AE3B00;
    case 817u: goto L_08AE3B08;
    case 818u: goto L_08AE3B28;
    case 819u: goto L_08AE3B2C;
    case 820u: goto L_08AE3B3C;
    case 821u: goto L_08AE3B44;
    case 822u: goto L_08AE3B4C;
    case 823u: goto L_08AE3B58;
    case 824u: goto L_08AE3B74;
    case 825u: goto L_08AE3B7C;
    case 826u: goto L_08AE3B84;
    case 827u: goto L_08AE3B90;
    case 828u: goto L_08AE3BA8;
    case 829u: goto L_08AE3BB0;
    case 830u: goto L_08AE3BB8;
    case 831u: goto L_08AE3BD4;
    case 832u: goto L_08AE3BE0;
    case 833u: goto L_08AE3BEC;
    case 834u: goto L_08AE3BF8;
    case 835u: goto L_08AE3C00;
    case 836u: goto L_08AE3C04;
    case 837u: goto L_08AE3C0C;
    case 838u: goto L_08AE3C18;
    case 839u: goto L_08AE3C38;
    case 840u: goto L_08AE3C44;
    case 841u: goto L_08AE3C50;
    case 842u: goto L_08AE3C5C;
    case 843u: goto L_08AE3C64;
    case 844u: goto L_08AE3C68;
    case 845u: goto L_08AE3C70;
    case 846u: goto L_08AE3C78;
    case 847u: goto L_08AE3C84;
    case 848u: goto L_08AE3C98;
    case 849u: goto L_08AE3CA8;
    case 850u: goto L_08AE3CB8;
    case 851u: goto L_08AE3CC4;
    case 852u: goto L_08AE3CDC;
    case 853u: goto L_08AE3CE4;
    case 854u: goto L_08AE3CEC;
    case 855u: goto L_08AE3CF8;
    case 856u: goto L_08AE3D10;
    case 857u: goto L_08AE3D18;
    case 858u: goto L_08AE3D20;
    case 859u: goto L_08AE3D28;
    case 860u: goto L_08AE3D34;
    case 861u: goto L_08AE3D40;
    case 862u: goto L_08AE3D68;
    case 863u: goto L_08AE3D8C;
    case 864u: goto L_08AE3DD4;
    case 865u: goto L_08AE3E48;
    case 866u: goto L_08AE3E54;
    case 867u: goto L_08AE3E60;
    case 868u: goto L_08AE3E9C;
    case 869u: goto L_08AE3EBC;
    case 870u: goto L_08AE3ECC;
    case 871u: goto L_08AE3EF4;
    case 872u: goto L_08AE3F14;
    case 873u: goto L_08AE3F24;
    case 874u: goto L_08AE3F34;
    case 875u: goto L_08AE3F4C;
    case 876u: goto L_08AE3F90;
    case 877u: goto L_08AE3FA0;
    case 878u: goto L_08AE3FBC;
    case 879u: goto L_08AE3FCC;
    case 880u: goto L_08AE3FE4;
    case 881u: goto L_08AE3FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE0000:
    // nop
    goto L_08AE0004;
L_08AE0004:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE0014u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0014u) goto L_08AE0014;
    return;
L_08AE0014:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE002Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE002Cu) goto L_08AE002C;
    return;
L_08AE002C:
    ctx.gpr[31] = (0x08AE0034u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 236u, 0x08A55248u>(ctx, &aot_mem) && ctx.pc == 0x08AE0034u) goto L_08AE0034;
    return;
L_08AE0034:
    ctx.gpr[31] = (0x08AE003Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE003Cu) goto L_08AE003C;
    return;
L_08AE003C:
    ctx.gpr[31] = (0x08AE0044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE0044u) goto L_08AE0044;
    return;
L_08AE0044:
    ctx.gpr[31] = (0x08AE004Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE004Cu) goto L_08AE004C;
    return;
L_08AE004C:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08AE0068u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE0068u) goto L_08AE0068;
    return;
L_08AE0068:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE0074u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0074u) goto L_08AE0074;
    return;
L_08AE0074:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE008Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE008Cu) goto L_08AE008C;
    return;
L_08AE008C:
    ctx.gpr[31] = (0x08AE0094u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE0094u) goto L_08AE0094;
    return;
L_08AE0094:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE00D4;
    }
    goto L_08AE00A4;
L_08AE00A4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE00B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE00B0u) goto L_08AE00B0;
    return;
L_08AE00B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE00C8;
      }
      goto L_08AE00BC;
    }
L_08AE00BC:
    ctx.gpr[31] = (0x08AE00C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE00C4u) goto L_08AE00C4;
    return;
L_08AE00C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE00C8;
L_08AE00C8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE00D4;
L_08AE00D4:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0104u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0104u) goto L_08AE0104;
    return;
L_08AE0104:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (16544u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0120u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE0120u) goto L_08AE0120;
    return;
L_08AE0120:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE012Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE012Cu) goto L_08AE012C;
    return;
L_08AE012C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE0144u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0144u) goto L_08AE0144;
    return;
L_08AE0144:
    ctx.gpr[31] = (0x08AE014Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE014Cu) goto L_08AE014C;
    return;
L_08AE014C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE0378;
      }
      goto L_08AE0180;
    }
L_08AE0180:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE01C0;
    }
    goto L_08AE0190;
L_08AE0190:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE019Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE019Cu) goto L_08AE019C;
    return;
L_08AE019C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE01B4;
      }
      goto L_08AE01A8;
    }
L_08AE01A8:
    ctx.gpr[31] = (0x08AE01B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE01B0u) goto L_08AE01B0;
    return;
L_08AE01B0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE01B4;
L_08AE01B4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE01C0;
L_08AE01C0:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE01F4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE01F4u) goto L_08AE01F4;
    return;
L_08AE01F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AE0220u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8644));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x08AE0220u) goto L_08AE0220;
    return;
L_08AE0220:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0284;
      }
      goto L_08AE0228;
    }
L_08AE0228:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AE022C;
L_08AE022C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE025C;
      }
      goto L_08AE0244;
    }
L_08AE0244:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE025C;
      }
      goto L_08AE0254;
    }
L_08AE0254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE022C;
      }
      goto L_08AE025C;
    }
L_08AE025C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE0284;
      }
      goto L_08AE0274;
    }
L_08AE0274:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AE0284;
L_08AE0284:
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[31] = (0x08AE0294u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0294u) goto L_08AE0294;
    return;
L_08AE0294:
    ctx.gpr[4] = (16720u << 16u);
    ctx.gpr[31] = (0x08AE02A0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE02A0u) goto L_08AE02A0;
    return;
L_08AE02A0:
    ctx.gpr[31] = (0x08AE02A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE02A8u) goto L_08AE02A8;
    return;
L_08AE02A8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE02C4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE02C4u) goto L_08AE02C4;
    return;
L_08AE02C4:
    ctx.gpr[31] = (0x08AE02CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE02CCu) goto L_08AE02CC;
    return;
L_08AE02CC:
    ctx.gpr[31] = (0x08AE02D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE02D4u) goto L_08AE02D4;
    return;
L_08AE02D4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE02E0u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE02E0u) goto L_08AE02E0;
    return;
L_08AE02E0:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x08AE02F8u);
    ctx.gpr[7] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE02F8u) goto L_08AE02F8;
    return;
L_08AE02F8:
    ctx.gpr[31] = (0x08AE0300u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0300u) goto L_08AE0300;
    return;
L_08AE0300:
    ctx.gpr[31] = (0x08AE0308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0308u) goto L_08AE0308;
    return;
L_08AE0308:
    ctx.gpr[4] = (17254u << 16u);
    ctx.gpr[31] = (0x08AE0314u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0314u) goto L_08AE0314;
    return;
L_08AE0314:
    ctx.gpr[31] = (0x08AE031Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 240u, 0x08A552C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE031Cu) goto L_08AE031C;
    return;
L_08AE031C:
    ctx.gpr[6] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17008u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0338u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE0338u) goto L_08AE0338;
    return;
L_08AE0338:
    ctx.gpr[31] = (0x08AE0340u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 240u, 0x08A552C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0340u) goto L_08AE0340;
    return;
L_08AE0340:
    ctx.gpr[31] = (0x08AE0348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE0348u) goto L_08AE0348;
    return;
L_08AE0348:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x08AE0354u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0354u) goto L_08AE0354;
    return;
L_08AE0354:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE036Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE036Cu) goto L_08AE036C;
    return;
L_08AE036C:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE0378u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0378u) goto L_08AE0378;
    return;
L_08AE0378:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE038Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE038Cu) goto L_08AE038C;
    return;
L_08AE038C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE03BC;
      }
      goto L_08AE039C;
    }
L_08AE039C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE03B4;
      }
      goto L_08AE03AC;
    }
L_08AE03AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE03C0;
      }
      goto L_08AE03B4;
    }
L_08AE03B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE03C0;
      }
      goto L_08AE03BC;
    }
L_08AE03BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE03C0;
L_08AE03C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE03FC;
      }
      goto L_08AE03F0;
    }
L_08AE03F0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE0404;
      }
      goto L_08AE03FC;
    }
L_08AE03FC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08AE0404;
L_08AE0404:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE040C;
L_08AE040C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0414;
L_08AE0414:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE04F8;
      }
      goto L_08AE0454;
    }
L_08AE0454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE04F8;
      }
      goto L_08AE0498;
    }
L_08AE0498:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE04A4u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE04A4u) goto L_08AE04A4;
    return;
L_08AE04A4:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE04BCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE04BCu) goto L_08AE04BC;
    return;
L_08AE04BC:
    ctx.gpr[31] = (0x08AE04C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE04C4u) goto L_08AE04C4;
    return;
L_08AE04C4:
    ctx.gpr[31] = (0x08AE04CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE04CCu) goto L_08AE04CC;
    return;
L_08AE04CC:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE04E8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE04E8u) goto L_08AE04E8;
    return;
L_08AE04E8:
    ctx.gpr[31] = (0x08AE04F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE04F0u) goto L_08AE04F0;
    return;
L_08AE04F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE0584;
      }
      goto L_08AE04F8;
    }
L_08AE04F8:
    ctx.gpr[31] = (0x08AE0500u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE0500u) goto L_08AE0500;
    return;
L_08AE0500:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE051Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE051Cu) goto L_08AE051C;
    return;
L_08AE051C:
    ctx.gpr[31] = (0x08AE0524u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0524u) goto L_08AE0524;
    return;
L_08AE0524:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE0534u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0534u) goto L_08AE0534;
    return;
L_08AE0534:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE054Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE054Cu) goto L_08AE054C;
    return;
L_08AE054C:
    ctx.gpr[31] = (0x08AE0554u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0554u) goto L_08AE0554;
    return;
L_08AE0554:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE0560u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0560u) goto L_08AE0560;
    return;
L_08AE0560:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE0578u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0578u) goto L_08AE0578;
    return;
L_08AE0578:
    ctx.gpr[31] = (0x08AE0580u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE0580u) goto L_08AE0580;
    return;
L_08AE0580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0584;
L_08AE0584:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_08AE05E8;
    }
    goto L_08AE05C4;
L_08AE05C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE0608;
      }
      goto L_08AE05CC;
    }
L_08AE05CC:
    ctx.gpr[31] = (0x08AE05D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE05D4u) goto L_08AE05D4;
    return;
L_08AE05D4:
    ctx.gpr[31] = (0x08AE05DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE05DCu) goto L_08AE05DC;
    return;
L_08AE05DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE061C;
      }
      goto L_08AE05E4;
    }
L_08AE05E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08AE05E8;
L_08AE05E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0608;
      }
      goto L_08AE05F0;
    }
L_08AE05F0:
    ctx.gpr[31] = (0x08AE05F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE05F8u) goto L_08AE05F8;
    return;
L_08AE05F8:
    ctx.gpr[31] = (0x08AE0600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x08AE0600u) goto L_08AE0600;
    return;
L_08AE0600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE061C;
      }
      goto L_08AE0608;
    }
L_08AE0608:
    ctx.gpr[31] = (0x08AE0610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE0610u) goto L_08AE0610;
    return;
L_08AE0610:
    ctx.gpr[31] = (0x08AE0618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0618u) goto L_08AE0618;
    return;
L_08AE0618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE061C;
L_08AE061C:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0788;
    }
    goto L_08AE0658;
L_08AE0658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0788;
    }
    goto L_08AE0698;
L_08AE0698:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE06B8;
      }
      goto L_08AE06A0;
    }
L_08AE06A0:
    if (ctx.gpr[22] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0720;
    }
    goto L_08AE06A8;
L_08AE06A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0720;
    }
    goto L_08AE06B8;
L_08AE06B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (0u | 320u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE0784;
      }
      goto L_08AE0720;
    }
L_08AE0720:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08AE0784;
L_08AE0784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0788;
L_08AE0788:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE3488;
      }
      goto L_08AE07C8;
    }
L_08AE07C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3488;
      }
      goto L_08AE0808;
    }
L_08AE0808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE0A1C;
      }
      goto L_08AE084C;
    }
L_08AE084C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A1C;
      }
      goto L_08AE0890;
    }
L_08AE0890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE08D8;
      }
      goto L_08AE08D4;
    }
L_08AE08D4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    goto L_08AE08D8;
L_08AE08D8:
    ctx.gpr[31] = (0x08AE08E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE08E0u) goto L_08AE08E0;
    return;
L_08AE08E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE0990;
      }
      goto L_08AE0904;
    }
L_08AE0904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AE0910u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 176u, 0x088B0F40u>(ctx, &aot_mem) && ctx.pc == 0x08AE0910u) goto L_08AE0910;
    return;
L_08AE0910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    ctx.gpr[31] = (0x08AE0928u);
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 250u, 0x089F9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0928u) goto L_08AE0928;
    return;
L_08AE0928:
    ctx.gpr[5] = (16752u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 560u);
    ctx.gpr[31] = (0x08AE0940u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 431u, 0x08AD9CB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0940u) goto L_08AE0940;
    return;
L_08AE0940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[23] = (0u | 2u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE0990;
L_08AE0990:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE09A4;
      }
      goto L_08AE0998;
    }
L_08AE0998:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0AA8;
    }
    goto L_08AE09A4;
L_08AE09A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9176));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AE09C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8636));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE09C4u) goto L_08AE09C4;
    return;
L_08AE09C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0A04;
      }
      goto L_08AE09D4;
    }
L_08AE09D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE09E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE09E0u) goto L_08AE09E0;
    return;
L_08AE09E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE09F8;
      }
      goto L_08AE09EC;
    }
L_08AE09EC:
    ctx.gpr[31] = (0x08AE09F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE09F4u) goto L_08AE09F4;
    return;
L_08AE09F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE09F8;
L_08AE09F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0A04;
L_08AE0A04:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0A14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9176));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A14u) goto L_08AE0A14;
    return;
L_08AE0A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0AA4;
      }
      goto L_08AE0A1C;
    }
L_08AE0A1C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0A5C;
    }
    goto L_08AE0A2C;
L_08AE0A2C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0A38u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A38u) goto L_08AE0A38;
    return;
L_08AE0A38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A50;
      }
      goto L_08AE0A44;
    }
L_08AE0A44:
    ctx.gpr[31] = (0x08AE0A4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0A4Cu) goto L_08AE0A4C;
    return;
L_08AE0A4C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE0A50;
L_08AE0A50:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0A5C;
L_08AE0A5C:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0AA0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0AA0u) goto L_08AE0AA0;
    return;
L_08AE0AA0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AE0AA4;
L_08AE0AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE0AA8;
L_08AE0AA8:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE0AF0;
    }
L_08AE0AF0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7520)));
    jump_target = ctx.gpr[1];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0B08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25792)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0B70;
      }
      goto L_08AE0B18;
    }
L_08AE0B18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0B58;
      }
      goto L_08AE0B28;
    }
L_08AE0B28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0B34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B34u) goto L_08AE0B34;
    return;
L_08AE0B34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0B4C;
      }
      goto L_08AE0B40;
    }
L_08AE0B40:
    ctx.gpr[31] = (0x08AE0B48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0B48u) goto L_08AE0B48;
    return;
L_08AE0B48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0B4C;
L_08AE0B4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0B58;
L_08AE0B58:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0B68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8624));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B68u) goto L_08AE0B68;
    return;
L_08AE0B68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE0BC4;
      }
      goto L_08AE0B70;
    }
L_08AE0B70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0BB0;
      }
      goto L_08AE0B80;
    }
L_08AE0B80:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0B8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B8Cu) goto L_08AE0B8C;
    return;
L_08AE0B8C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0BA4;
      }
      goto L_08AE0B98;
    }
L_08AE0B98:
    ctx.gpr[31] = (0x08AE0BA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0BA0u) goto L_08AE0BA0;
    return;
L_08AE0BA0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0BA4;
L_08AE0BA4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0BB0;
L_08AE0BB0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0BC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8616));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BC0u) goto L_08AE0BC0;
    return;
L_08AE0BC0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE0BC4;
L_08AE0BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE0C10;
    }
L_08AE0C10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE0C2C;
      }
      goto L_08AE0C20;
    }
L_08AE0C20:
    ctx.gpr[31] = (0x08AE0C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C28u) goto L_08AE0C28;
    return;
L_08AE0C28:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE0C2C;
L_08AE0C2C:
    ctx.gpr[31] = (0x08AE0C34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C34u) goto L_08AE0C34;
    return;
L_08AE0C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0C94;
      }
      goto L_08AE0C3C;
    }
L_08AE0C3C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0C7C;
      }
      goto L_08AE0C4C;
    }
L_08AE0C4C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0C58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C58u) goto L_08AE0C58;
    return;
L_08AE0C58:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0C70;
      }
      goto L_08AE0C64;
    }
L_08AE0C64:
    ctx.gpr[31] = (0x08AE0C6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0C6Cu) goto L_08AE0C6C;
    return;
L_08AE0C6C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0C70;
L_08AE0C70:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0C7C;
L_08AE0C7C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0C8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C8Cu) goto L_08AE0C8C;
    return;
L_08AE0C8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0C94;
    }
L_08AE0C94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1030;
      }
      goto L_08AE0CA8;
    }
L_08AE0CA8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0CC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0D00;
      }
      goto L_08AE0CD0;
    }
L_08AE0CD0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0CDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CDCu) goto L_08AE0CDC;
    return;
L_08AE0CDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0CF4;
      }
      goto L_08AE0CE8;
    }
L_08AE0CE8:
    ctx.gpr[31] = (0x08AE0CF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0CF0u) goto L_08AE0CF0;
    return;
L_08AE0CF0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0CF4;
L_08AE0CF4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0D00;
L_08AE0D00:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0D10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8600));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D10u) goto L_08AE0D10;
    return;
L_08AE0D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0D18;
    }
L_08AE0D18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0D58;
      }
      goto L_08AE0D28;
    }
L_08AE0D28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0D34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D34u) goto L_08AE0D34;
    return;
L_08AE0D34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0D4C;
      }
      goto L_08AE0D40;
    }
L_08AE0D40:
    ctx.gpr[31] = (0x08AE0D48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0D48u) goto L_08AE0D48;
    return;
L_08AE0D48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0D4C;
L_08AE0D4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0D58;
L_08AE0D58:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0D68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8592));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D68u) goto L_08AE0D68;
    return;
L_08AE0D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0D70;
    }
L_08AE0D70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0DB0;
      }
      goto L_08AE0D80;
    }
L_08AE0D80:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0D8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D8Cu) goto L_08AE0D8C;
    return;
L_08AE0D8C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0DA4;
      }
      goto L_08AE0D98;
    }
L_08AE0D98:
    ctx.gpr[31] = (0x08AE0DA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0DA0u) goto L_08AE0DA0;
    return;
L_08AE0DA0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0DA4;
L_08AE0DA4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0DB0;
L_08AE0DB0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0DC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8584));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DC0u) goto L_08AE0DC0;
    return;
L_08AE0DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0DC8;
    }
L_08AE0DC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0E08;
      }
      goto L_08AE0DD8;
    }
L_08AE0DD8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0DE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DE4u) goto L_08AE0DE4;
    return;
L_08AE0DE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0DFC;
      }
      goto L_08AE0DF0;
    }
L_08AE0DF0:
    ctx.gpr[31] = (0x08AE0DF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0DF8u) goto L_08AE0DF8;
    return;
L_08AE0DF8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0DFC;
L_08AE0DFC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0E08;
L_08AE0E08:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0E18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8576));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E18u) goto L_08AE0E18;
    return;
L_08AE0E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0E20;
    }
L_08AE0E20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0E60;
      }
      goto L_08AE0E30;
    }
L_08AE0E30:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0E3Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E3Cu) goto L_08AE0E3C;
    return;
L_08AE0E3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E54;
      }
      goto L_08AE0E48;
    }
L_08AE0E48:
    ctx.gpr[31] = (0x08AE0E50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0E50u) goto L_08AE0E50;
    return;
L_08AE0E50:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0E54;
L_08AE0E54:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0E60;
L_08AE0E60:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0E70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8568));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E70u) goto L_08AE0E70;
    return;
L_08AE0E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0E78;
    }
L_08AE0E78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0EB8;
      }
      goto L_08AE0E88;
    }
L_08AE0E88:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0E94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E94u) goto L_08AE0E94;
    return;
L_08AE0E94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EAC;
      }
      goto L_08AE0EA0;
    }
L_08AE0EA0:
    ctx.gpr[31] = (0x08AE0EA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0EA8u) goto L_08AE0EA8;
    return;
L_08AE0EA8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0EAC;
L_08AE0EAC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0EB8;
L_08AE0EB8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0EC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8560));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EC8u) goto L_08AE0EC8;
    return;
L_08AE0EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0ED0;
    }
L_08AE0ED0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0F10;
      }
      goto L_08AE0EE0;
    }
L_08AE0EE0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0EECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EECu) goto L_08AE0EEC;
    return;
L_08AE0EEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F04;
      }
      goto L_08AE0EF8;
    }
L_08AE0EF8:
    ctx.gpr[31] = (0x08AE0F00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0F00u) goto L_08AE0F00;
    return;
L_08AE0F00:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0F04;
L_08AE0F04:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0F10;
L_08AE0F10:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0F20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8552));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F20u) goto L_08AE0F20;
    return;
L_08AE0F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0F28;
    }
L_08AE0F28:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0F68;
      }
      goto L_08AE0F38;
    }
L_08AE0F38:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0F44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F44u) goto L_08AE0F44;
    return;
L_08AE0F44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F5C;
      }
      goto L_08AE0F50;
    }
L_08AE0F50:
    ctx.gpr[31] = (0x08AE0F58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0F58u) goto L_08AE0F58;
    return;
L_08AE0F58:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0F5C;
L_08AE0F5C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0F68;
L_08AE0F68:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0F78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F78u) goto L_08AE0F78;
    return;
L_08AE0F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0F80;
    }
L_08AE0F80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE0FC0;
      }
      goto L_08AE0F90;
    }
L_08AE0F90:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0F9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F9Cu) goto L_08AE0F9C;
    return;
L_08AE0F9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0FB4;
      }
      goto L_08AE0FA8;
    }
L_08AE0FA8:
    ctx.gpr[31] = (0x08AE0FB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0FB0u) goto L_08AE0FB0;
    return;
L_08AE0FB0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE0FB4;
L_08AE0FB4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE0FC0;
L_08AE0FC0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE0FD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8536));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FD0u) goto L_08AE0FD0;
    return;
L_08AE0FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE0FD8;
    }
L_08AE0FD8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1018;
      }
      goto L_08AE0FE8;
    }
L_08AE0FE8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0FF4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FF4u) goto L_08AE0FF4;
    return;
L_08AE0FF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE100C;
      }
      goto L_08AE1000;
    }
L_08AE1000:
    ctx.gpr[31] = (0x08AE1008u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1008u) goto L_08AE1008;
    return;
L_08AE1008:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE100C;
L_08AE100C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1018;
L_08AE1018:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8528));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1028u) goto L_08AE1028;
    return;
L_08AE1028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1084;
      }
      goto L_08AE1030;
    }
L_08AE1030:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1070;
      }
      goto L_08AE1040;
    }
L_08AE1040:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE104Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE104Cu) goto L_08AE104C;
    return;
L_08AE104C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1064;
      }
      goto L_08AE1058;
    }
L_08AE1058:
    ctx.gpr[31] = (0x08AE1060u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1060u) goto L_08AE1060;
    return;
L_08AE1060:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1064;
L_08AE1064:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1070;
L_08AE1070:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1080u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1080u) goto L_08AE1080;
    return;
L_08AE1080:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1084;
L_08AE1084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE10D0;
    }
L_08AE10D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25812)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1138;
      }
      goto L_08AE10E0;
    }
L_08AE10E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1120;
      }
      goto L_08AE10F0;
    }
L_08AE10F0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE10FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE10FCu) goto L_08AE10FC;
    return;
L_08AE10FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1114;
      }
      goto L_08AE1108;
    }
L_08AE1108:
    ctx.gpr[31] = (0x08AE1110u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1110u) goto L_08AE1110;
    return;
L_08AE1110:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1114;
L_08AE1114:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1120;
L_08AE1120:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1130u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1130u) goto L_08AE1130;
    return;
L_08AE1130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE118C;
      }
      goto L_08AE1138;
    }
L_08AE1138:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1178;
      }
      goto L_08AE1148;
    }
L_08AE1148:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1154u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1154u) goto L_08AE1154;
    return;
L_08AE1154:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE1160;
    }
L_08AE1160:
    ctx.gpr[31] = (0x08AE1168u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1168u) goto L_08AE1168;
    return;
L_08AE1168:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE116C;
L_08AE116C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1178;
L_08AE1178:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1188u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1188u) goto L_08AE1188;
    return;
L_08AE1188:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE118C;
L_08AE118C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE11D8;
    }
L_08AE11D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE11F4;
      }
      goto L_08AE11E8;
    }
L_08AE11E8:
    ctx.gpr[31] = (0x08AE11F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08AE11F0u) goto L_08AE11F0;
    return;
L_08AE11F0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE11F4;
L_08AE11F4:
    ctx.gpr[31] = (0x08AE11FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 157u, 0x08838A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE11FCu) goto L_08AE11FC;
    return;
L_08AE11FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12E0;
      }
      goto L_08AE1204;
    }
L_08AE1204:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE1220;
      }
      goto L_08AE1214;
    }
L_08AE1214:
    ctx.gpr[31] = (0x08AE121Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08AE121Cu) goto L_08AE121C;
    return;
L_08AE121C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE1220;
L_08AE1220:
    ctx.gpr[31] = (0x08AE1228u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08AE1228u) goto L_08AE1228;
    return;
L_08AE1228:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1288;
      }
      goto L_08AE1230;
    }
L_08AE1230:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1270;
      }
      goto L_08AE1240;
    }
L_08AE1240:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE124Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE124Cu) goto L_08AE124C;
    return;
L_08AE124C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1264;
      }
      goto L_08AE1258;
    }
L_08AE1258:
    ctx.gpr[31] = (0x08AE1260u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1260u) goto L_08AE1260;
    return;
L_08AE1260:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1264;
L_08AE1264:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1270;
L_08AE1270:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1280u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1280u) goto L_08AE1280;
    return;
L_08AE1280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1334;
      }
      goto L_08AE1288;
    }
L_08AE1288:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE12C8;
      }
      goto L_08AE1298;
    }
L_08AE1298:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE12A4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE12A4u) goto L_08AE12A4;
    return;
L_08AE12A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12BC;
      }
      goto L_08AE12B0;
    }
L_08AE12B0:
    ctx.gpr[31] = (0x08AE12B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE12B8u) goto L_08AE12B8;
    return;
L_08AE12B8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE12BC;
L_08AE12BC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE12C8;
L_08AE12C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE12D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE12D8u) goto L_08AE12D8;
    return;
L_08AE12D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1334;
      }
      goto L_08AE12E0;
    }
L_08AE12E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE12F0;
    }
L_08AE12F0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE12FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE12FCu) goto L_08AE12FC;
    return;
L_08AE12FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1314;
      }
      goto L_08AE1308;
    }
L_08AE1308:
    ctx.gpr[31] = (0x08AE1310u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1310u) goto L_08AE1310;
    return;
L_08AE1310:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1314;
L_08AE1314:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1320;
L_08AE1320:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1330u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1330u) goto L_08AE1330;
    return;
L_08AE1330:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1334;
L_08AE1334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1380;
    }
L_08AE1380:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25810)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE13E8;
      }
      goto L_08AE1390;
    }
L_08AE1390:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE13D0;
      }
      goto L_08AE13A0;
    }
L_08AE13A0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE13ACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE13ACu) goto L_08AE13AC;
    return;
L_08AE13AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE13C4;
      }
      goto L_08AE13B8;
    }
L_08AE13B8:
    ctx.gpr[31] = (0x08AE13C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE13C0u) goto L_08AE13C0;
    return;
L_08AE13C0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE13C4;
L_08AE13C4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE13D0;
L_08AE13D0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE13E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE13E0u) goto L_08AE13E0;
    return;
L_08AE13E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE143C;
      }
      goto L_08AE13E8;
    }
L_08AE13E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1428;
      }
      goto L_08AE13F8;
    }
L_08AE13F8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1404u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1404u) goto L_08AE1404;
    return;
L_08AE1404:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE141C;
      }
      goto L_08AE1410;
    }
L_08AE1410:
    ctx.gpr[31] = (0x08AE1418u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1418u) goto L_08AE1418;
    return;
L_08AE1418:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE141C;
L_08AE141C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1428;
L_08AE1428:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1438u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1438u) goto L_08AE1438;
    return;
L_08AE1438:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE143C;
L_08AE143C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1488;
    }
L_08AE1488:
    ctx.gpr[31] = (0x08AE1490u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE1490u) goto L_08AE1490;
    return;
L_08AE1490:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE14B8;
      }
      goto L_08AE14A0;
    }
L_08AE14A0:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE1630;
    }
    goto L_08AE14A8;
L_08AE14A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE14D0;
      }
      goto L_08AE14B0;
    }
L_08AE14B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1528;
      }
      goto L_08AE14B8;
    }
L_08AE14B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE14C0;
    }
L_08AE14C0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE15D8;
      }
      goto L_08AE14C8;
    }
L_08AE14C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE1630;
      }
      goto L_08AE14D0;
    }
L_08AE14D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1510;
      }
      goto L_08AE14E0;
    }
L_08AE14E0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE14ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE14ECu) goto L_08AE14EC;
    return;
L_08AE14EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1504;
      }
      goto L_08AE14F8;
    }
L_08AE14F8:
    ctx.gpr[31] = (0x08AE1500u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1500u) goto L_08AE1500;
    return;
L_08AE1500:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1504;
L_08AE1504:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1510;
L_08AE1510:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1520u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8504));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1520u) goto L_08AE1520;
    return;
L_08AE1520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE162C;
      }
      goto L_08AE1528;
    }
L_08AE1528:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1568;
      }
      goto L_08AE1538;
    }
L_08AE1538:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1544u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1544u) goto L_08AE1544;
    return;
L_08AE1544:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE1550;
    }
L_08AE1550:
    ctx.gpr[31] = (0x08AE1558u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1558u) goto L_08AE1558;
    return;
L_08AE1558:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE155C;
L_08AE155C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1568;
L_08AE1568:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1578u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8504));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1578u) goto L_08AE1578;
    return;
L_08AE1578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE162C;
      }
      goto L_08AE1580;
    }
L_08AE1580:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE15C0;
      }
      goto L_08AE1590;
    }
L_08AE1590:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE159Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE159Cu) goto L_08AE159C;
    return;
L_08AE159C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE15B4;
      }
      goto L_08AE15A8;
    }
L_08AE15A8:
    ctx.gpr[31] = (0x08AE15B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE15B0u) goto L_08AE15B0;
    return;
L_08AE15B0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE15B4;
L_08AE15B4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE15C0;
L_08AE15C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE15D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE15D0u) goto L_08AE15D0;
    return;
L_08AE15D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE162C;
      }
      goto L_08AE15D8;
    }
L_08AE15D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1618;
      }
      goto L_08AE15E8;
    }
L_08AE15E8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE15F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE15F4u) goto L_08AE15F4;
    return;
L_08AE15F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE160C;
      }
      goto L_08AE1600;
    }
L_08AE1600:
    ctx.gpr[31] = (0x08AE1608u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1608u) goto L_08AE1608;
    return;
L_08AE1608:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE160C;
L_08AE160C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1618;
L_08AE1618:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1628u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8496));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1628u) goto L_08AE1628;
    return;
L_08AE1628:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE162C;
L_08AE162C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE1630;
L_08AE1630:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1678;
    }
L_08AE1678:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25844)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE169C;
      }
      goto L_08AE1688;
    }
L_08AE1688:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE17BC;
    }
    goto L_08AE1690;
L_08AE1690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16B4;
      }
      goto L_08AE1698;
    }
L_08AE1698:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08AE169C;
L_08AE169C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE170C;
      }
      goto L_08AE16A4;
    }
L_08AE16A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1764;
      }
      goto L_08AE16AC;
    }
L_08AE16AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE17BC;
      }
      goto L_08AE16B4;
    }
L_08AE16B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE16F4;
      }
      goto L_08AE16C4;
    }
L_08AE16C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE16D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE16D0u) goto L_08AE16D0;
    return;
L_08AE16D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16E8;
      }
      goto L_08AE16DC;
    }
L_08AE16DC:
    ctx.gpr[31] = (0x08AE16E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE16E4u) goto L_08AE16E4;
    return;
L_08AE16E4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE16E8;
L_08AE16E8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE16F4;
L_08AE16F4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1704u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8488));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1704u) goto L_08AE1704;
    return;
L_08AE1704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE17B8;
      }
      goto L_08AE170C;
    }
L_08AE170C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE174C;
      }
      goto L_08AE171C;
    }
L_08AE171C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1728u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1728u) goto L_08AE1728;
    return;
L_08AE1728:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1740;
      }
      goto L_08AE1734;
    }
L_08AE1734:
    ctx.gpr[31] = (0x08AE173Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE173Cu) goto L_08AE173C;
    return;
L_08AE173C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1740;
L_08AE1740:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE174C;
L_08AE174C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE175Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8480));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE175Cu) goto L_08AE175C;
    return;
L_08AE175C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE17B8;
      }
      goto L_08AE1764;
    }
L_08AE1764:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE17A4;
      }
      goto L_08AE1774;
    }
L_08AE1774:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1780u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1780u) goto L_08AE1780;
    return;
L_08AE1780:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1798;
      }
      goto L_08AE178C;
    }
L_08AE178C:
    ctx.gpr[31] = (0x08AE1794u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1794u) goto L_08AE1794;
    return;
L_08AE1794:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1798;
L_08AE1798:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE17A4;
L_08AE17A4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE17B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE17B4u) goto L_08AE17B4;
    return;
L_08AE17B4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE17B8;
L_08AE17B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE17BC;
L_08AE17BC:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1804;
    }
L_08AE1804:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25846)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE186C;
      }
      goto L_08AE1814;
    }
L_08AE1814:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1854;
      }
      goto L_08AE1824;
    }
L_08AE1824:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1830u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1830u) goto L_08AE1830;
    return;
L_08AE1830:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1848;
      }
      goto L_08AE183C;
    }
L_08AE183C:
    ctx.gpr[31] = (0x08AE1844u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1844u) goto L_08AE1844;
    return;
L_08AE1844:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1848;
L_08AE1848:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1854;
L_08AE1854:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1864u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1864u) goto L_08AE1864;
    return;
L_08AE1864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE18C0;
      }
      goto L_08AE186C;
    }
L_08AE186C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE18AC;
      }
      goto L_08AE187C;
    }
L_08AE187C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1888u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1888u) goto L_08AE1888;
    return;
L_08AE1888:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE18A0;
      }
      goto L_08AE1894;
    }
L_08AE1894:
    ctx.gpr[31] = (0x08AE189Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE189Cu) goto L_08AE189C;
    return;
L_08AE189C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE18A0;
L_08AE18A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE18AC;
L_08AE18AC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE18BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE18BCu) goto L_08AE18BC;
    return;
L_08AE18BC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE18C0;
L_08AE18C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE190C;
    }
L_08AE190C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1974;
      }
      goto L_08AE191C;
    }
L_08AE191C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE195C;
      }
      goto L_08AE192C;
    }
L_08AE192C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1938u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1938u) goto L_08AE1938;
    return;
L_08AE1938:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1950;
      }
      goto L_08AE1944;
    }
L_08AE1944:
    ctx.gpr[31] = (0x08AE194Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE194Cu) goto L_08AE194C;
    return;
L_08AE194C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1950;
L_08AE1950:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE195C;
L_08AE195C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE196Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8472));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE196Cu) goto L_08AE196C;
    return;
L_08AE196C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE19C8;
      }
      goto L_08AE1974;
    }
L_08AE1974:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE19B4;
      }
      goto L_08AE1984;
    }
L_08AE1984:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1990u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1990u) goto L_08AE1990;
    return;
L_08AE1990:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE19A8;
      }
      goto L_08AE199C;
    }
L_08AE199C:
    ctx.gpr[31] = (0x08AE19A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE19A4u) goto L_08AE19A4;
    return;
L_08AE19A4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE19A8;
L_08AE19A8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE19B4;
L_08AE19B4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE19C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8464));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE19C4u) goto L_08AE19C4;
    return;
L_08AE19C4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE19C8;
L_08AE19C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1A14;
    }
L_08AE1A14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25847)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1A7C;
      }
      goto L_08AE1A24;
    }
L_08AE1A24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1A64;
      }
      goto L_08AE1A34;
    }
L_08AE1A34:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1A40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A40u) goto L_08AE1A40;
    return;
L_08AE1A40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1A58;
      }
      goto L_08AE1A4C;
    }
L_08AE1A4C:
    ctx.gpr[31] = (0x08AE1A54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1A54u) goto L_08AE1A54;
    return;
L_08AE1A54:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1A58;
L_08AE1A58:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1A64;
L_08AE1A64:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1A74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A74u) goto L_08AE1A74;
    return;
L_08AE1A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1AD0;
      }
      goto L_08AE1A7C;
    }
L_08AE1A7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1ABC;
      }
      goto L_08AE1A8C;
    }
L_08AE1A8C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1A98u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A98u) goto L_08AE1A98;
    return;
L_08AE1A98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1AB0;
      }
      goto L_08AE1AA4;
    }
L_08AE1AA4:
    ctx.gpr[31] = (0x08AE1AACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1AACu) goto L_08AE1AAC;
    return;
L_08AE1AAC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1AB0;
L_08AE1AB0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1ABC;
L_08AE1ABC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1ACCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1ACCu) goto L_08AE1ACC;
    return;
L_08AE1ACC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1AD0;
L_08AE1AD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE1AE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE1AE0u) goto L_08AE1AE0;
    return;
L_08AE1AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[23] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1B3C;
    }
L_08AE1B3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25331)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1BA4;
      }
      goto L_08AE1B4C;
    }
L_08AE1B4C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1B8C;
      }
      goto L_08AE1B5C;
    }
L_08AE1B5C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1B68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B68u) goto L_08AE1B68;
    return;
L_08AE1B68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1B80;
      }
      goto L_08AE1B74;
    }
L_08AE1B74:
    ctx.gpr[31] = (0x08AE1B7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1B7Cu) goto L_08AE1B7C;
    return;
L_08AE1B7C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1B80;
L_08AE1B80:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1B8C;
L_08AE1B8C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1B9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B9Cu) goto L_08AE1B9C;
    return;
L_08AE1B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1BF8;
      }
      goto L_08AE1BA4;
    }
L_08AE1BA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1BE4;
      }
      goto L_08AE1BB4;
    }
L_08AE1BB4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1BC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BC0u) goto L_08AE1BC0;
    return;
L_08AE1BC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1BD8;
      }
      goto L_08AE1BCC;
    }
L_08AE1BCC:
    ctx.gpr[31] = (0x08AE1BD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1BD4u) goto L_08AE1BD4;
    return;
L_08AE1BD4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1BD8;
L_08AE1BD8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1BE4;
L_08AE1BE4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1BF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BF4u) goto L_08AE1BF4;
    return;
L_08AE1BF4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1BF8;
L_08AE1BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1C40;
    }
L_08AE1C40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1CA8;
      }
      goto L_08AE1C50;
    }
L_08AE1C50:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1C90;
      }
      goto L_08AE1C60;
    }
L_08AE1C60:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1C6Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C6Cu) goto L_08AE1C6C;
    return;
L_08AE1C6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1C84;
      }
      goto L_08AE1C78;
    }
L_08AE1C78:
    ctx.gpr[31] = (0x08AE1C80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1C80u) goto L_08AE1C80;
    return;
L_08AE1C80:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1C84;
L_08AE1C84:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1C90;
L_08AE1C90:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8456));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CA0u) goto L_08AE1CA0;
    return;
L_08AE1CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1CFC;
      }
      goto L_08AE1CA8;
    }
L_08AE1CA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1CE8;
      }
      goto L_08AE1CB8;
    }
L_08AE1CB8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1CC4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CC4u) goto L_08AE1CC4;
    return;
L_08AE1CC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1CDC;
      }
      goto L_08AE1CD0;
    }
L_08AE1CD0:
    ctx.gpr[31] = (0x08AE1CD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1CD8u) goto L_08AE1CD8;
    return;
L_08AE1CD8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE1CDC;
L_08AE1CDC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1CE8;
L_08AE1CE8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1CF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8448));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CF8u) goto L_08AE1CF8;
    return;
L_08AE1CF8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1CFC;
L_08AE1CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1D44;
    }
L_08AE1D44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25808)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DAC;
      }
      goto L_08AE1D54;
    }
L_08AE1D54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1D94;
      }
      goto L_08AE1D64;
    }
L_08AE1D64:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1D70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D70u) goto L_08AE1D70;
    return;
L_08AE1D70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1D88;
      }
      goto L_08AE1D7C;
    }
L_08AE1D7C:
    ctx.gpr[31] = (0x08AE1D84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1D84u) goto L_08AE1D84;
    return;
L_08AE1D84:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1D88;
L_08AE1D88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1D94;
L_08AE1D94:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1DA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1DA4u) goto L_08AE1DA4;
    return;
L_08AE1DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1E00;
      }
      goto L_08AE1DAC;
    }
L_08AE1DAC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1DEC;
      }
      goto L_08AE1DBC;
    }
L_08AE1DBC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1DC8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1DC8u) goto L_08AE1DC8;
    return;
L_08AE1DC8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DE0;
      }
      goto L_08AE1DD4;
    }
L_08AE1DD4:
    ctx.gpr[31] = (0x08AE1DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1DDCu) goto L_08AE1DDC;
    return;
L_08AE1DDC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1DE0;
L_08AE1DE0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1DEC;
L_08AE1DEC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1DFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1DFCu) goto L_08AE1DFC;
    return;
L_08AE1DFC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1E00;
L_08AE1E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1E08;
    }
L_08AE1E08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25807)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1E70;
      }
      goto L_08AE1E18;
    }
L_08AE1E18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1E58;
      }
      goto L_08AE1E28;
    }
L_08AE1E28:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1E34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E34u) goto L_08AE1E34;
    return;
L_08AE1E34:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1E4C;
      }
      goto L_08AE1E40;
    }
L_08AE1E40:
    ctx.gpr[31] = (0x08AE1E48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1E48u) goto L_08AE1E48;
    return;
L_08AE1E48:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1E4C;
L_08AE1E4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1E58;
L_08AE1E58:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1E68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E68u) goto L_08AE1E68;
    return;
L_08AE1E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE1EC4;
      }
      goto L_08AE1E70;
    }
L_08AE1E70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE1EB0;
      }
      goto L_08AE1E80;
    }
L_08AE1E80:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1E8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E8Cu) goto L_08AE1E8C;
    return;
L_08AE1E8C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1EA4;
      }
      goto L_08AE1E98;
    }
L_08AE1E98:
    ctx.gpr[31] = (0x08AE1EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1EA0u) goto L_08AE1EA0;
    return;
L_08AE1EA0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1EA4;
L_08AE1EA4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AE1EB0;
L_08AE1EB0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1EC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8608));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EC0u) goto L_08AE1EC0;
    return;
L_08AE1EC0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1EC4;
L_08AE1EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE28F0;
      }
      goto L_08AE1ED0;
    }
L_08AE1ED0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE28F0;
      }
      goto L_08AE1EDC;
    }
L_08AE1EDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE28F0;
      }
      goto L_08AE1EE8;
    }
L_08AE1EE8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE20F4;
      }
      goto L_08AE1EFC;
    }
L_08AE1EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08AE1F78;
      }
      goto L_08AE1F4C;
    }
L_08AE1F4C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1F58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F58u) goto L_08AE1F58;
    return;
L_08AE1F58:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1F70;
      }
      goto L_08AE1F64;
    }
L_08AE1F64:
    ctx.gpr[31] = (0x08AE1F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1F6Cu) goto L_08AE1F6C;
    return;
L_08AE1F6C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE1F70;
L_08AE1F70:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08AE1F78;
L_08AE1F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE1FC0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1FC0u) goto L_08AE1FC0;
    return;
L_08AE1FC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE1FCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE1FCCu) goto L_08AE1FCC;
    return;
L_08AE1FCC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08AE2054;
      }
      goto L_08AE2028;
    }
L_08AE2028:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2034u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE2034u) goto L_08AE2034;
    return;
L_08AE2034:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE204C;
      }
      goto L_08AE2040;
    }
L_08AE2040:
    ctx.gpr[31] = (0x08AE2048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2048u) goto L_08AE2048;
    return;
L_08AE2048:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE204C;
L_08AE204C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08AE2054;
L_08AE2054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE20A0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE20A0u) goto L_08AE20A0;
    return;
L_08AE20A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE20ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE20ACu) goto L_08AE20AC;
    return;
L_08AE20AC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE20E0;
      }
      goto L_08AE20D8;
    }
L_08AE20D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    goto L_08AE20E0;
L_08AE20E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE232C;
      }
      goto L_08AE20E8;
    }
L_08AE20E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE232C;
      }
      goto L_08AE20F4;
    }
L_08AE20F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE21F8;
    }
    goto L_08AE2108;
L_08AE2108:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2148;
    }
    goto L_08AE2118;
L_08AE2118:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2124u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE2124u) goto L_08AE2124;
    return;
L_08AE2124:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE213C;
      }
      goto L_08AE2130;
    }
L_08AE2130:
    ctx.gpr[31] = (0x08AE2138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2138u) goto L_08AE2138;
    return;
L_08AE2138:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE213C;
L_08AE213C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2148;
L_08AE2148:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE2190u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE2190u) goto L_08AE2190;
    return;
L_08AE2190:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE219Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE219Cu) goto L_08AE219C;
    return;
L_08AE219C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (static_cast<std::int32_t>(ctx.gpr[19]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2330;
    }
    goto L_08AE21EC;
L_08AE21EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE232C;
      }
      goto L_08AE21F8;
    }
L_08AE21F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2270;
    }
    goto L_08AE2240;
L_08AE2240:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE224Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE224Cu) goto L_08AE224C;
    return;
L_08AE224C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2264;
      }
      goto L_08AE2258;
    }
L_08AE2258:
    ctx.gpr[31] = (0x08AE2260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2260u) goto L_08AE2260;
    return;
L_08AE2260:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2264;
L_08AE2264:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2270;
L_08AE2270:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AE22B8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE22B8u) goto L_08AE22B8;
    return;
L_08AE22B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE22C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE22C4u) goto L_08AE22C4;
    return;
L_08AE22C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2330;
    }
    goto L_08AE2320;
L_08AE2320:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    goto L_08AE232C;
L_08AE232C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2330;
L_08AE2330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08AE23C4;
      }
      goto L_08AE2378;
    }
L_08AE2378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[17] = (0u | 550u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE2408;
      }
      goto L_08AE23C4;
    }
L_08AE23C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-7));
    goto L_08AE2408;
L_08AE2408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE2450;
    }
L_08AE2450:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2468:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE2498;
    }
L_08AE2498:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE24C8;
    }
L_08AE24C8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(30));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE24F0;
    }
L_08AE24F0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-15));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(30));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE2520;
    }
L_08AE2520:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(130));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-18));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE254C;
    }
L_08AE254C:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE2560u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE2560u) goto L_08AE2560;
    return;
L_08AE2560:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE258C;
    }
L_08AE258C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(65));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE25B4;
    }
L_08AE25B4:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE25C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE25C8u) goto L_08AE25C8;
    return;
L_08AE25C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE25F4;
    }
L_08AE25F4:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE2608u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE2608u) goto L_08AE2608;
    return;
L_08AE2608:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE2634;
    }
L_08AE2634:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[31] = (0x08AE2648u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE2648u) goto L_08AE2648;
    return;
L_08AE2648:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
      if (branch_taken) {
          goto L_08AE2678;
      }
      goto L_08AE2674;
    }
L_08AE2674:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15));
    goto L_08AE2678;
L_08AE2678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08AE26FC;
      }
      goto L_08AE26C0;
    }
L_08AE26C0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE26D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE2728;
      }
      goto L_08AE26FC;
    }
L_08AE26FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1388)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2728;
      }
      goto L_08AE2708;
    }
L_08AE2708:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[30]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08AE2728;
L_08AE2728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2890;
      }
      goto L_08AE2734;
    }
L_08AE2734:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6496));
    ctx.gpr[31] = (0x08AE2764u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 719u, 0x08ADADBCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2764u) goto L_08AE2764;
    return;
L_08AE2764:
    ctx.gpr[31] = (0x08AE276Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE276Cu) goto L_08AE276C;
    return;
L_08AE276C:
    ctx.gpr[30] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2788u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2788u) goto L_08AE2788;
    return;
L_08AE2788:
    ctx.gpr[20] = (0u | 7u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE27A4u);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE27A4u) goto L_08AE27A4;
    return;
L_08AE27A4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE27BCu);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE27BCu) goto L_08AE27BC;
    return;
L_08AE27BC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE27D4u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE27D4u) goto L_08AE27D4;
    return;
L_08AE27D4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE27ECu);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE27ECu) goto L_08AE27EC;
    return;
L_08AE27EC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08AE2808u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2808u) goto L_08AE2808;
    return;
L_08AE2808:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2820u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 340u, 0x08AED32Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2820u) goto L_08AE2820;
    return;
L_08AE2820:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE2858u);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 720u, 0x08ADAE00u>(ctx, &aot_mem) && ctx.pc == 0x08AE2858u) goto L_08AE2858;
    return;
L_08AE2858:
    ctx.gpr[31] = (0x08AE2860u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 721u, 0x08ADAE24u>(ctx, &aot_mem) && ctx.pc == 0x08AE2860u) goto L_08AE2860;
    return;
L_08AE2860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[31] = (0x08AE286Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 722u, 0x08ADAED0u>(ctx, &aot_mem) && ctx.pc == 0x08AE286Cu) goto L_08AE286C;
    return;
L_08AE286C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08AE28D4;
      }
      goto L_08AE2890;
    }
L_08AE2890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AE28C0;
      }
      goto L_08AE28A0;
    }
L_08AE28A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1416), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE28B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6496));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 722u, 0x08ADAED0u>(ctx, &aot_mem) && ctx.pc == 0x08AE28B8u) goto L_08AE28B8;
    return;
L_08AE28B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE28D4;
      }
      goto L_08AE28C0;
    }
L_08AE28C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[31] = (0x08AE28D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6496));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 722u, 0x08ADAED0u>(ctx, &aot_mem) && ctx.pc == 0x08AE28D4u) goto L_08AE28D4;
    return;
L_08AE28D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08AE28F0;
      }
      goto L_08AE28E4;
    }
L_08AE28E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1416)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1416), ctx.gpr[4]);
    goto L_08AE28F0;
L_08AE28F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3488;
      }
      goto L_08AE28FC;
    }
L_08AE28FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE29A0;
      }
      goto L_08AE290C;
    }
L_08AE290C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE29A0;
      }
      goto L_08AE2918;
    }
L_08AE2918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE29A0;
      }
      goto L_08AE295C;
    }
L_08AE295C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2B40;
      }
      goto L_08AE29A0;
    }
L_08AE29A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE29E0;
      }
      goto L_08AE29AC;
    }
L_08AE29AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE29E0;
      }
      goto L_08AE29B8;
    }
L_08AE29B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AE29D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE29D0u) goto L_08AE29D0;
    return;
L_08AE29D0:
    ctx.gpr[31] = (0x08AE29D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE29D8u) goto L_08AE29D8;
    return;
L_08AE29D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE2A04;
      }
      goto L_08AE29E0;
    }
L_08AE29E0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08AE29F8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE29F8u) goto L_08AE29F8;
    return;
L_08AE29F8:
    ctx.gpr[31] = (0x08AE2A00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A00u) goto L_08AE2A00;
    return;
L_08AE2A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2A04;
L_08AE2A04:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5556));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE2A60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8440));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A60u) goto L_08AE2A60;
    return;
L_08AE2A60:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
        goto L_08AE2ABC;
    }
    goto L_08AE2A68;
L_08AE2A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE2AB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8432));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x08AE2AB0u) goto L_08AE2AB0;
    return;
L_08AE2AB0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2AF0;
    }
    goto L_08AE2AB8;
L_08AE2AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    goto L_08AE2ABC;
L_08AE2ABC:
    if (ctx.gpr[22] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2AF0;
    }
    goto L_08AE2AC4;
L_08AE2AC4:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x08AE2AE0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE2AE0u) goto L_08AE2AE0;
    return;
L_08AE2AE0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2AF0;
L_08AE2AF0:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2B40u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B40u) goto L_08AE2B40;
    return;
L_08AE2B40:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2CA0;
      }
      goto L_08AE2B48;
    }
L_08AE2B48:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_08AE2B7C;
    }
    goto L_08AE2B58;
L_08AE2B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE2B9C;
      }
      goto L_08AE2B60;
    }
L_08AE2B60:
    ctx.gpr[31] = (0x08AE2B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B68u) goto L_08AE2B68;
    return;
L_08AE2B68:
    ctx.gpr[31] = (0x08AE2B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B70u) goto L_08AE2B70;
    return;
L_08AE2B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE2BB0;
      }
      goto L_08AE2B78;
    }
L_08AE2B78:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_08AE2B7C;
L_08AE2B7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2B9C;
      }
      goto L_08AE2B84;
    }
L_08AE2B84:
    ctx.gpr[31] = (0x08AE2B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B8Cu) goto L_08AE2B8C;
    return;
L_08AE2B8C:
    ctx.gpr[31] = (0x08AE2B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B94u) goto L_08AE2B94;
    return;
L_08AE2B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
      if (branch_taken) {
          goto L_08AE2BB0;
      }
      goto L_08AE2B9C;
    }
L_08AE2B9C:
    ctx.gpr[31] = (0x08AE2BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE2BA4u) goto L_08AE2BA4;
    return;
L_08AE2BA4:
    ctx.gpr[31] = (0x08AE2BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2BACu) goto L_08AE2BAC;
    return;
L_08AE2BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2BB0;
L_08AE2BB0:
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2C60;
      }
      goto L_08AE2BF0;
    }
L_08AE2BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5556));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2C60;
      }
      goto L_08AE2C34;
    }
L_08AE2C34:
    ctx.gpr[31] = (0x08AE2C3Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C3Cu) goto L_08AE2C3C;
    return;
L_08AE2C3C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE2C58u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C58u) goto L_08AE2C58;
    return;
L_08AE2C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2C84;
      }
      goto L_08AE2C60;
    }
L_08AE2C60:
    ctx.gpr[31] = (0x08AE2C68u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C68u) goto L_08AE2C68;
    return;
L_08AE2C68:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE2C84u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C84u) goto L_08AE2C84;
    return;
L_08AE2C84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AE2CA0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE2CA0u) goto L_08AE2CA0;
    return;
L_08AE2CA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1384)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2CBC;
      }
      goto L_08AE2CAC;
    }
L_08AE2CAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE2CC0;
    }
    goto L_08AE2CB8;
L_08AE2CB8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AE2CBC;
L_08AE2CBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    goto L_08AE2CC0;
L_08AE2CC0:
    ctx.gpr[6] = (ctx.gpr[22] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5556));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AE2D70;
      }
      goto L_08AE2D00;
    }
L_08AE2D00:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2E3C;
      }
      goto L_08AE2D0C;
    }
L_08AE2D0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25816)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17276u << 16u);
    ctx.gpr[5] = (17152u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (15232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17000u << 16u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2D68u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 642u, 0x08AD70C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D68u) goto L_08AE2D68;
    return;
L_08AE2D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E3C;
      }
      goto L_08AE2D70;
    }
L_08AE2D70:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2D94;
      }
      goto L_08AE2D7C;
    }
L_08AE2D7C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2DEC;
      }
      goto L_08AE2D88;
    }
L_08AE2D88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E3C;
      }
      goto L_08AE2D90;
    }
L_08AE2D90:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08AE2D94;
L_08AE2D94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25796)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (15360u << 16u);
    ctx.gpr[4] = (17276u << 16u);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.gpr[4] = (16920u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16752u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2DE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 642u, 0x08AD70C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DE4u) goto L_08AE2DE4;
    return;
L_08AE2DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E3C;
      }
      goto L_08AE2DEC;
    }
L_08AE2DEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25800)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (15360u << 16u);
    ctx.gpr[4] = (17276u << 16u);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.gpr[4] = (17000u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16752u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2E3Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 642u, 0x08AD70C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E3Cu) goto L_08AE2E3C;
    return;
L_08AE2E3C:
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AE2E50u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 637u, 0x08A57550u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E50u) goto L_08AE2E50;
    return;
L_08AE2E50:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AE2E78;
      }
      goto L_08AE2E6C;
    }
L_08AE2E6C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AE2E78;
L_08AE2E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE347C;
      }
      goto L_08AE2E88;
    }
L_08AE2E88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE2E94u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2E94u) goto L_08AE2E94;
    return;
L_08AE2E94:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE2EACu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2EACu) goto L_08AE2EAC;
    return;
L_08AE2EAC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE2EB8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2EB8u) goto L_08AE2EB8;
    return;
L_08AE2EB8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AE2ED0u);
    ctx.gpr[7] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2ED0u) goto L_08AE2ED0;
    return;
L_08AE2ED0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE2F10;
      }
      goto L_08AE2F08;
    }
L_08AE2F08:
    ctx.gpr[31] = (0x08AE2F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 706u, 0x08AFB030u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F10u) goto L_08AE2F10;
    return;
L_08AE2F10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE2F1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20904)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 39u, 0x08838234u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F1Cu) goto L_08AE2F1C;
    return;
L_08AE2F1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2F44;
      }
      goto L_08AE2F24;
    }
L_08AE2F24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE2F44;
L_08AE2F44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AE2F78;
    }
    goto L_08AE2F54;
L_08AE2F54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE2F94;
      }
      goto L_08AE2F78;
    }
L_08AE2F78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE2F94;
L_08AE2F94:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1176));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE2FB8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FB8u) goto L_08AE2FB8;
    return;
L_08AE2FB8:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE2FF8;
      }
      goto L_08AE2FD4;
    }
L_08AE2FD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3018;
      }
      goto L_08AE2FF8;
    }
L_08AE2FF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3018;
L_08AE3018:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1180));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE303Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE303Cu) goto L_08AE303C;
    return;
L_08AE303C:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE307C;
      }
      goto L_08AE3058;
    }
L_08AE3058:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE309C;
      }
      goto L_08AE307C;
    }
L_08AE307C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE309C;
L_08AE309C:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE30C0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE30C0u) goto L_08AE30C0;
    return;
L_08AE30C0:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3100;
      }
      goto L_08AE30DC;
    }
L_08AE30DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3120;
      }
      goto L_08AE3100;
    }
L_08AE3100:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3120;
L_08AE3120:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1188));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE3144u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3144u) goto L_08AE3144;
    return;
L_08AE3144:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3184;
      }
      goto L_08AE3160;
    }
L_08AE3160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE31A4;
      }
      goto L_08AE3184;
    }
L_08AE3184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE31A4;
L_08AE31A4:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1192));
    ctx.gpr[6] = (17152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE31C8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE31C8u) goto L_08AE31C8;
    return;
L_08AE31C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25791))))));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE3228;
      }
      goto L_08AE3204;
    }
L_08AE3204:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3248;
      }
      goto L_08AE3228;
    }
L_08AE3228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3248;
L_08AE3248:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1196));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE326Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE326Cu) goto L_08AE326C;
    return;
L_08AE326C:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE32AC;
      }
      goto L_08AE3288;
    }
L_08AE3288:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE32CC;
      }
      goto L_08AE32AC;
    }
L_08AE32AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE32CC;
L_08AE32CC:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1200));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE32F0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE32F0u) goto L_08AE32F0;
    return;
L_08AE32F0:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3330;
      }
      goto L_08AE330C;
    }
L_08AE330C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3350;
      }
      goto L_08AE3330;
    }
L_08AE3330:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3350;
L_08AE3350:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1204));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE3374u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3374u) goto L_08AE3374;
    return;
L_08AE3374:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE33B4;
      }
      goto L_08AE3390;
    }
L_08AE3390:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE33D4;
      }
      goto L_08AE33B4;
    }
L_08AE33B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE33D4;
L_08AE33D4:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1208));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE33F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE33F8u) goto L_08AE33F8;
    return;
L_08AE33F8:
    ctx.gpr[4] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25791))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AE3438;
      }
      goto L_08AE3414;
    }
L_08AE3414:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3458;
      }
      goto L_08AE3438;
    }
L_08AE3438:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(93)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(95)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3458;
L_08AE3458:
    ctx.gpr[6] = (16944u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1212));
    ctx.gpr[6] = (17196u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08AE347Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE347Cu) goto L_08AE347C;
    return;
L_08AE347C:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AE3488;
L_08AE3488:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 15 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
        goto L_08AE0414;
    }
    goto L_08AE3498;
L_08AE3498:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE040C;
      }
      goto L_08AE34B4;
    }
L_08AE34B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE34E4;
      }
      goto L_08AE34C4;
    }
L_08AE34C4:
    ctx.gpr[31] = (0x08AE34CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 76u, 0x08AE4700u>(ctx, &aot_mem) && ctx.pc == 0x08AE34CCu) goto L_08AE34CC;
    return;
L_08AE34CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25840)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08AE34E4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 666u, 0x08ADAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE34E4u) goto L_08AE34E4;
    return;
L_08AE34E4:
    ctx.gpr[31] = (0x08AE34ECu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE34ECu) goto L_08AE34EC;
    return;
L_08AE34EC:
    ctx.gpr[31] = (0x08AE34F4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE34F4u) goto L_08AE34F4;
    return;
L_08AE34F4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3514u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3514u) goto L_08AE3514;
    return;
L_08AE3514:
    ctx.gpr[31] = (0x08AE351Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE351Cu) goto L_08AE351C;
    return;
L_08AE351C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 253u);
    ctx.gpr[6] = (0u | 179u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[31] = (0x08AE3534u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3534u) goto L_08AE3534;
    return;
L_08AE3534:
    ctx.gpr[31] = (0x08AE353Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE353Cu) goto L_08AE353C;
    return;
L_08AE353C:
    ctx.gpr[31] = (0x08AE3544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE3544u) goto L_08AE3544;
    return;
L_08AE3544:
    ctx.gpr[31] = (0x08AE354Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE354Cu) goto L_08AE354C;
    return;
L_08AE354C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE3568u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE3568u) goto L_08AE3568;
    return;
L_08AE3568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3584;
      }
      goto L_08AE3578;
    }
L_08AE3578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1420), ctx.gpr[4]);
    goto L_08AE3584;
L_08AE3584:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(310)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE373C;
      }
      goto L_08AE3590;
    }
L_08AE3590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE373C;
      }
      goto L_08AE35A0;
    }
L_08AE35A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE373C;
      }
      goto L_08AE35B0;
    }
L_08AE35B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE373C;
      }
      goto L_08AE35BC;
    }
L_08AE35BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 15u);
    ctx.gpr[18] = (0u | 232u);
    ctx.gpr[31] = (0x08AE35D0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 220u, 0x08AD914Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE35D0u) goto L_08AE35D0;
    return;
L_08AE35D0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25764)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE3694;
      }
      goto L_08AE35E4;
    }
L_08AE35E4:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE35E8;
L_08AE35E8:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28668));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE3614u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 235u, 0x08AD9224u>(ctx, &aot_mem) && ctx.pc == 0x08AE3614u) goto L_08AE3614;
    return;
L_08AE3614:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < lcs::kTabEntrySpanish ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE35E8;
      }
      goto L_08AE3634;
    }
L_08AE3634:
    ctx.gpr[18] = (0u | 249u);
    ctx.gpr[19] = (0u | 15u);
    ctx.gpr[17] = static_cast<std::uint32_t>(lcs::kTabEntrySpanish);
    goto L_08AE3640;
L_08AE3640:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28668));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE366Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 235u, 0x08AD9224u>(ctx, &aot_mem) && ctx.pc == 0x08AE366Cu) goto L_08AE366C;
    return;
L_08AE366C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < lcs::kTabCount ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3640;
      }
      goto L_08AE368C;
    }
L_08AE368C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE373C;
      }
      goto L_08AE3694;
    }
L_08AE3694:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE3698;
L_08AE3698:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28884));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE36C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 235u, 0x08AD9224u>(ctx, &aot_mem) && ctx.pc == 0x08AE36C4u) goto L_08AE36C4;
    return;
L_08AE36C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3698;
      }
      goto L_08AE36E4;
    }
L_08AE36E4:
    ctx.gpr[18] = (0u | 249u);
    ctx.gpr[17] = (0u | 15u);
    ctx.gpr[19] = (0u | 5u);
    goto L_08AE36F0;
L_08AE36F0:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28884));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE371Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 235u, 0x08AD9224u>(ctx, &aot_mem) && ctx.pc == 0x08AE371Cu) goto L_08AE371C;
    return;
L_08AE371C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < lcs::kTabCount ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE36F0;
      }
      goto L_08AE373C;
    }
L_08AE373C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE37D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31073));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 153u, 0x08848DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE37D8u) goto L_08AE37D8;
    return;
L_08AE37D8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE37E4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE37E4u) goto L_08AE37E4;
    return;
L_08AE37E4:
    ctx.gpr[31] = (0x08AE37ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08AE37ECu) goto L_08AE37EC;
    return;
L_08AE37EC:
    ctx.gpr[31] = (0x08AE37F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE37F4u) goto L_08AE37F4;
    return;
L_08AE37F4:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x08AE3810u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE3810u) goto L_08AE3810;
    return;
L_08AE3810:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25868)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8424));
    ctx.gpr[23] = (2269u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5392));
    ctx.gpr[22] = (2229u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AE3878;
      }
      goto L_08AE3840;
    }
L_08AE3840:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25872)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25740)));
      if (branch_taken) {
          goto L_08AE386C;
      }
      goto L_08AE385C;
    }
L_08AE385C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3878;
      }
      goto L_08AE386C;
    }
L_08AE386C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25740), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE3878;
L_08AE3878:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_08AE3B3C;
      }
      goto L_08AE3888;
    }
L_08AE3888:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17235u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16916u << 16u);
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2269u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    goto L_08AE38D0;
L_08AE38D0:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-25740)));
    ctx.gpr[4] = (17220u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3918;
      }
      goto L_08AE3904;
    }
L_08AE3904:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3904;
      }
      goto L_08AE3918;
    }
L_08AE3918:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE393C;
      }
      goto L_08AE3928;
    }
L_08AE3928:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3928;
      }
      goto L_08AE393C;
    }
L_08AE393C:
    ctx.gpr[4] = (16976u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17220u << 16u);
      if (branch_taken) {
          goto L_08AE3B2C;
      }
      goto L_08AE3954;
    }
L_08AE3954:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3B2C;
      }
      goto L_08AE3968;
    }
L_08AE3968:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3974u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 153u, 0x08848DFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3974u) goto L_08AE3974;
    return;
L_08AE3974:
    ctx.gpr[4] = (17040u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE39E0;
      }
      goto L_08AE3998;
    }
L_08AE3998:
    ctx.gpr[4] = (16976u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE39C8;
      }
      goto L_08AE39B8;
    }
L_08AE39B8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE39C8;
      }
      goto L_08AE39C8;
    }
L_08AE39C8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08AE39E0;
L_08AE39E0:
    ctx.gpr[4] = (17200u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3A38;
      }
      goto L_08AE39F8;
    }
L_08AE39F8:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3A38;
      }
      goto L_08AE3A10;
    }
L_08AE3A10:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3A38;
      }
      goto L_08AE3A20;
    }
L_08AE3A20:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08AE3A38;
L_08AE3A38:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3A4C;
      }
      goto L_08AE3A48;
    }
L_08AE3A48:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AE3A4C;
L_08AE3A4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE3A64u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A64u) goto L_08AE3A64;
    return;
L_08AE3A64:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE3A7Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A7Cu) goto L_08AE3A7C;
    return;
L_08AE3A7C:
    ctx.gpr[31] = (0x08AE3A84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A84u) goto L_08AE3A84;
    return;
L_08AE3A84:
    ctx.gpr[31] = (0x08AE3A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A8Cu) goto L_08AE3A8C;
    return;
L_08AE3A8C:
    ctx.gpr[31] = (0x08AE3A94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3A94u) goto L_08AE3A94;
    return;
L_08AE3A94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3AACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AACu) goto L_08AE3AAC;
    return;
L_08AE3AAC:
    ctx.gpr[31] = (0x08AE3AB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AB4u) goto L_08AE3AB4;
    return;
L_08AE3AB4:
    ctx.gpr[6] = (16736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE3ACCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE3ACCu) goto L_08AE3ACC;
    return;
L_08AE3ACC:
    ctx.gpr[31] = (0x08AE3AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x08AE3AD4u) goto L_08AE3AD4;
    return;
L_08AE3AD4:
    ctx.gpr[31] = (0x08AE3ADCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3ADCu) goto L_08AE3ADC;
    return;
L_08AE3ADC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3AE8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AE8u) goto L_08AE3AE8;
    return;
L_08AE3AE8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3B00u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B00u) goto L_08AE3B00;
    return;
L_08AE3B00:
    ctx.gpr[31] = (0x08AE3B08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B08u) goto L_08AE3B08;
    return;
L_08AE3B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3B28u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B28u) goto L_08AE3B28;
    return;
L_08AE3B28:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08AE3B2C;
L_08AE3B2C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
        goto L_08AE38D0;
    }
    goto L_08AE3B3C;
L_08AE3B3C:
    ctx.gpr[31] = (0x08AE3B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B44u) goto L_08AE3B44;
    return;
L_08AE3B44:
    ctx.gpr[31] = (0x08AE3B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B4Cu) goto L_08AE3B4C;
    return;
L_08AE3B4C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3B58u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B58u) goto L_08AE3B58;
    return;
L_08AE3B58:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE3B74u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B74u) goto L_08AE3B74;
    return;
L_08AE3B74:
    ctx.gpr[31] = (0x08AE3B7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B7Cu) goto L_08AE3B7C;
    return;
L_08AE3B7C:
    ctx.gpr[31] = (0x08AE3B84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B84u) goto L_08AE3B84;
    return;
L_08AE3B84:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3B90u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B90u) goto L_08AE3B90;
    return;
L_08AE3B90:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3BA8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BA8u) goto L_08AE3BA8;
    return;
L_08AE3BA8:
    ctx.gpr[31] = (0x08AE3BB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BB0u) goto L_08AE3BB0;
    return;
L_08AE3BB0:
    ctx.gpr[31] = (0x08AE3BB8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BB8u) goto L_08AE3BB8;
    return;
L_08AE3BB8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AE3BD4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BD4u) goto L_08AE3BD4;
    return;
L_08AE3BD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
        goto L_08AE3C0C;
    }
    goto L_08AE3BE0;
L_08AE3BE0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3BECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BECu) goto L_08AE3BEC;
    return;
L_08AE3BEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C04;
      }
      goto L_08AE3BF8;
    }
L_08AE3BF8:
    ctx.gpr[31] = (0x08AE3C00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C00u) goto L_08AE3C00;
    return;
L_08AE3C00:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE3C04;
L_08AE3C04:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    goto L_08AE3C0C;
L_08AE3C0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE3C18u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C18u) goto L_08AE3C18;
    return;
L_08AE3C18:
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3C38u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C38u) goto L_08AE3C38;
    return;
L_08AE3C38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AE3C70;
      }
      goto L_08AE3C44;
    }
L_08AE3C44:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3C50u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C50u) goto L_08AE3C50;
    return;
L_08AE3C50:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C68;
      }
      goto L_08AE3C5C;
    }
L_08AE3C5C:
    ctx.gpr[31] = (0x08AE3C64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C64u) goto L_08AE3C64;
    return;
L_08AE3C64:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AE3C68;
L_08AE3C68:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AE3C70;
L_08AE3C70:
    ctx.gpr[31] = (0x08AE3C78u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C78u) goto L_08AE3C78;
    return;
L_08AE3C78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE3C84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C84u) goto L_08AE3C84;
    return;
L_08AE3C84:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(9176));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE3C98u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8416));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 166u, 0x08844D28u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C98u) goto L_08AE3C98;
    return;
L_08AE3C98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3CA8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CA8u) goto L_08AE3CA8;
    return;
L_08AE3CA8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE3CB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3CB8u) goto L_08AE3CB8;
    return;
L_08AE3CB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3CC4u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CC4u) goto L_08AE3CC4;
    return;
L_08AE3CC4:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE3CDCu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CDCu) goto L_08AE3CDC;
    return;
L_08AE3CDC:
    ctx.gpr[31] = (0x08AE3CE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE3CE4u) goto L_08AE3CE4;
    return;
L_08AE3CE4:
    ctx.gpr[31] = (0x08AE3CECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CECu) goto L_08AE3CEC;
    return;
L_08AE3CEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3CF8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CF8u) goto L_08AE3CF8;
    return;
L_08AE3CF8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3D10u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3D10u) goto L_08AE3D10;
    return;
L_08AE3D10:
    ctx.gpr[31] = (0x08AE3D18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3D18u) goto L_08AE3D18;
    return;
L_08AE3D18:
    ctx.gpr[31] = (0x08AE3D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D20u) goto L_08AE3D20;
    return;
L_08AE3D20:
    ctx.gpr[31] = (0x08AE3D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 350u, 0x08845C60u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D28u) goto L_08AE3D28;
    return;
L_08AE3D28:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE3D34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D34u) goto L_08AE3D34;
    return;
L_08AE3D34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3D40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D40u) goto L_08AE3D40;
    return;
L_08AE3D40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3D68u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D68u) goto L_08AE3D68;
    return;
L_08AE3D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE3D8Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D8Cu) goto L_08AE3D8C;
    return;
L_08AE3D8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (50944u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE3E48u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 725u, 0x089673C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E48u) goto L_08AE3E48;
    return;
L_08AE3E48:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AE3E54u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E54u) goto L_08AE3E54;
    return;
L_08AE3E54:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08AE3E60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E60u) goto L_08AE3E60;
    return;
L_08AE3E60:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x08AE3E9Cu);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E9Cu) goto L_08AE3E9C;
    return;
L_08AE3E9C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3EBCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3EBCu) goto L_08AE3EBC;
    return;
L_08AE3EBC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE3ECCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3ECCu) goto L_08AE3ECC;
    return;
L_08AE3ECC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1144)));
    ctx.gpr[20] = (ctx.gpr[30] + static_cast<std::uint32_t>(1172));
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x08AE3EF4u);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EF4u) goto L_08AE3EF4;
    return;
L_08AE3EF4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1412)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE3F14u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F14u) goto L_08AE3F14;
    return;
L_08AE3F14:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3F24u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F24u) goto L_08AE3F24;
    return;
L_08AE3F24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7540)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 23u, 0x08AE4254u>(ctx, &aot_mem); return;
      }
      goto L_08AE3F34;
    }
L_08AE3F34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (50413u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 16u, 0x08AE41ACu>(ctx, &aot_mem); return;
      }
      goto L_08AE3F4C;
    }
L_08AE3F4C:
    ctx.gpr[4] = (50104u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 7537u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    ctx.gpr[4] = (49758u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE3F90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F90u) goto L_08AE3F90;
    return;
L_08AE3F90:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE3FA0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FA0u) goto L_08AE3FA0;
    return;
L_08AE3FA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE3FBCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FBCu) goto L_08AE3FBC;
    return;
L_08AE3FBC:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE3FCCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FCCu) goto L_08AE3FCC;
    return;
L_08AE3FCC:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE3FE4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FE4u) goto L_08AE3FE4;
    return;
L_08AE3FE4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3FF4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FF4u) goto L_08AE3FF4;
    return;
L_08AE3FF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.pc = 0x08AE4000u; return;
}

void recomp_unit_0183(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0183_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_183(Runtime &runtime) {
    runtime.register_generated_unit(183u, 0x08AE0000u, 16384u, &recomp_unit_0183, &recomp_unit_0183_entry);
    runtime.register_function(0x08AE0000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0014u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE002Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE003Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0044u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE004Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0068u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0074u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE008Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0094u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0104u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0120u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE012Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE014Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0180u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE019Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0220u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE022Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0244u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0254u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE025Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0274u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0314u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE031Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0340u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0348u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0354u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE036Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE038Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE039Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE040Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0414u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0454u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE051Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0524u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0534u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE054Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0554u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0560u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0584u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0610u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0618u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE061Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0658u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0720u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0788u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0808u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE084Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0890u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0910u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0928u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0940u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0990u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE100Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1028u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1040u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE104Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1058u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1060u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1064u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1080u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1108u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1114u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1120u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1138u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1148u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1154u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1160u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1168u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE116Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1178u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1188u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE118Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1204u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1214u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE121Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1220u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1230u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1240u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE124Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1258u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1260u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1264u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1280u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1288u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1298u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1310u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1314u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1334u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1390u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1418u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE141Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1428u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE143Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1488u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1490u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1504u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1520u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1538u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1544u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1550u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1558u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE155Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1568u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1590u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE159Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE160Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1618u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE162Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1630u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1678u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1688u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1690u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE169Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1704u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE170Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE171Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1728u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1734u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE173Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1740u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE174Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE175Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1774u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1780u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE178Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1794u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1798u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1804u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1814u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1824u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1830u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE183Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1844u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1848u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1864u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE186Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE187Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1894u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE189Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE190Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE191Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE192Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1938u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1944u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE194Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1950u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE195Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE196Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1974u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1984u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1990u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE199Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ACCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2028u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2040u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE204Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2054u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2108u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2118u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2124u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2138u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE213Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2148u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE219Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2240u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE224Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2258u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2260u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2264u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE232Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2520u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE254Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2560u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE258Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2648u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2674u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2678u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2708u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2728u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2734u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE276Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2788u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2808u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2820u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2858u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2860u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE286Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2890u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE290Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2918u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE295Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE303Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3058u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE307Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE309Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3100u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3120u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3160u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3184u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3204u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE326Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3288u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE330Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3374u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3390u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3414u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3458u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE347Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3488u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3514u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE351Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3534u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE353Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3544u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE354Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3568u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3584u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3590u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3614u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3640u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE366Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE368Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3694u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE371Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE373Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3840u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE385Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE386Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3878u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3918u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3928u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE393Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3954u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3968u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3974u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ACCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ADCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ECCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FF4u, &recomp_unit_0183, "recomp_unit_0183");
}
} // namespace psprecomp
