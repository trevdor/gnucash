
FILE(COPY .
  DESTINATION ${DATADIR_BUILD}/gnucash/gtkbuilder
  PATTERN Makefile.* EXCLUDE
  PATTERN CMakeLists.txt EXCLUDE)


INSTALL(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DESTINATION share/gnucash
    PATTERN Makefile.* EXCLUDE
    PATTERN CMakeLists.txt EXCLUDE)

SET_DIST_LIST(bi_import_glade_DIST CMakeLists.txt Makefile.am dialog-bi-import-gui.glade)