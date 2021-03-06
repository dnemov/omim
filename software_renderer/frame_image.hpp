#pragma once

#include "geometry/point2d.hpp"

#include <cstdint>
#include <vector>

namespace software_renderer
{
struct FrameSymbols
{
  m2::PointD m_searchResult;
  bool m_showSearchResult = false;
  int m_bottomZoom = -1;
};

struct FrameImage
{
  // image data.
  // TopLeft-to-RightBottom order
  // Format - png
  std::vector<uint8_t> m_data;
  uint32_t m_width = 0;       // pixel width of image
  uint32_t m_height = 0;      // pixel height of image
  uint32_t m_stride = 0;      // row stride in bytes
};
}  // namespace software_renderer
