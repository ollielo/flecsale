set(METIS_NAME metis)

if(NOT ENABLE_METIS)
  return()
endif()

tpl_dowload_path( URL ${METIS_URL} ${TPL_DOWNLOAD_PATH} )

ExternalProject_Add(${METIS_NAME}
 URL ${URL}/${METIS_TGZ}
 URL_MD5 ${METIS_MD5}
 UPDATE_COMMAND ""
 CMAKE_ARGS
   -DCMAKE_BUILD_TYPE:STRING=${CMAKE_BUILD_TYPE}
   -DCMAKE_CXX_COMPILER:FILEPATH=${CMAKE_CXX_COMPILER}
   -DCMAKE_CXX_FLAGS:STRING=${CMAKE_CXX_FLAGS}
   -DCMAKE_C_COMPILER:FILEPATH=${CMAKE_C_COMPILER}
   -DCMAKE_C_FLAGS:STRING=${CMAKE_C_FLAGS}
   -DGKLIB_PATH=<SOURCE_DIR>/GKlib/
   -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_INSTALL_PREFIX}
)
