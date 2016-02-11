set(SZIP_NAME szip)

if(NOT ENABLE_SZIP)
  return()
endif()

tpl_dowload_path( URL ${SZIP_URL} ${TPL_DOWNLOAD_PATH} )

ExternalProject_Add(${SZIP_NAME}
  DEPENDS ${SZIP_DEPS}
  URL ${URL}/${SZIP_TGZ}
  URL_MD5 ${SZIP_MD5}
  UPDATE_COMMAND ""
  PATCH_COMMAND ${CMAKE_COMMAND} -E touch <SOURCE_DIR>/HISTORY.txt <SOURCE_DIR>/INSTALL
  PATCH COMMAND patch -p0 < ${THIRDPARTY_PATCH_DIR}/szip.patch
  CMAKE_ARGS
    -DCMAKE_BUILD_TYPE:STRING=${CMAKE_BUILD_TYPE}
    -DCMAKE_C_COMPILER:FILEPATH=${CMAKE_C_COMPILER}
    -DCMAKE_C_FLAGS:STRING=${CMAKE_C_FLAGS}
    -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_INSTALL_PREFIX}
)

set(SZIP_INCLUDE_DIR ${CMAKE_INSTALL_PREFIX}/include)
set(SZIP_LIBRARIES ${CMAKE_INSTALL_PREFIX}/lib/libszip.a)
