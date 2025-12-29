#ifndef EXPORT_API_VIO_SCENE_DATA_H_
#define EXPORT_API_VIO_SCENE_DATA_H_

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  PIX_FMT_BGR888,      /// BGR  8:8:8   24bpp
  PIX_FMT_RGB888,      /// RGB  8:8:8   24bpp
  PIX_FMT_RGBA,        /// RGBA 8:8:8:8 32bpp
  PIX_FMT_YUV420P,     /// YUV  4:2:0   12bpp
  PIX_FMT_GRAY,        /// GRAY
  PIX_FMT_YUVNV21      ///
} DMImageFormat;

typedef struct DMImage {
  unsigned char* data = nullptr;
  DMImageFormat format;
  int width;
  int height;
  int stride;
  uint64_t time_stamp;
  double exposure_time;
} DMImage;

typedef enum {
  VERTEX_3D_POSITION = 0,  // 3 float for position
  VERTEX_3D_POSITION_NORMAL,  // 3 float for position, 3 float for normal
  VERTEX_3D_POSITION_NORMAL_RGB,  // 3 float for position, 3 float for normal, 3 float for color
  VERTEX_3D_POSITION_NORMAL_RGBA,  // 3 float for position, 3 float for normal, 4 float for color
  VERTEX_3D_POSITION_RGB  // 3 float for position, 3 float for color
} DMVertexFormat;

typedef struct DMRawMesh {
  DMVertexFormat vertex_format;
  int vertex_size = 0;
  int face_size = 0;
  // length is vertex_size * size corresponding to vertex_format
  // for example, VERTEX_3D_POSITION: vertex_size * 3; VERTEX_3D_POSITION_NORMAL: vertex_size * 6
  //  sort order as x1 y1 z1 (nx1 ny1 nz1), x2 y2 z2 (nx2 ny2 nz2) ...
  float* mesh_v = nullptr;
  // length is face_size * 3,
  // sort order face[i][0] face[i][1] face[i][2]; face[i+1][0] face[i+1][1] face[i+1][2] ...
  int* mesh_f = nullptr;
} DMRawMesh;

typedef struct DMTextureMesh {
  DMRawMesh raw_mesh;
  DMImage texture_image;
  float* texture_uv = nullptr;
  int uv_size = 0;
  int* texture_uv_index = nullptr;
  int uv_index_size = 0;
} DMTextureMesh;

#ifdef __cplusplus
}
#endif

#endif  // EXPORT_API_VIO_SCENE_DATA_H_
