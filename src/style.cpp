#include "style.h"

fmt::text_style eStyle =
    ( fg( fmt::color::red ) ) | ( fmt::emphasis::bold ) |
    ( bg( fmt::color::black ) | ( fmt::emphasis::underline ) );

fmt::text_style wStyle =
    ( fg( fmt::color::yellow ) ) | ( fmt::emphasis::bold ) |
    ( bg( fmt::color::black ) | ( fmt::emphasis::underline ) );
fmt::text_style okStyle = fg( fmt::color::steel_blue ) | fmt::emphasis::bold;

fmt::text_style liStyle = fg( fmt::color::floral_white) | fmt::emphasis::bold;

