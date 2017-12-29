
if(CPACK_GENERATOR MATCHES "NSIS")

  # set the package header icon for MUI
  set(CPACK_PACKAGE_ICON "C:/MITK/src\\mitk.bmp")
  # set the install/unistall icon used for the installer itself
  # There is a bug in NSIS that does not handle full unix paths properly. 
  set(CPACK_NSIS_MUI_ICON "C:/MITK/src\\mitk.ico")
  set(CPACK_NSIS_MUI_UNIICON "C:/MITK/src\\mitk.ico")

  set(CPACK_NSIS_DISPLAY_NAME "MITK - Medical Imaging and Interaction Toolkit")
  
  # tell cpack to create links to the doc files
  set(CPACK_NSIS_MENU_LINKS
    "http://www.mitk.org" "MITK Web Site"
    )

  # tell cpack the executables you want in the start menu as links
  set(CPACK_PACKAGE_EXECUTABLES "ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application;ZhiHuangApp;MITK - ZhiHuangApp Application")
     
  # tell cpack to create a desktop link to MainApp
  set(CPACK_CREATE_DESKTOP_LINKS "ZhiHuangApp;ZhiHuangApp")
  set(CPACK_NSIS_INSTALLED_ICON_NAME "bin\\\\mitk.ico")
  set(CPACK_NSIS_HELP_LINK "http:\\\\www.mitk.org")
  set(CPACK_NSIS_URL_INFO_ABOUT "http:\\\\www.mitk.org")
  set(CPACK_NSIS_CONTACT mitk@mitk.org)
  set(CPACK_NSIS_MODIFY_PATH ON)
  
endif(CPACK_GENERATOR MATCHES "NSIS")


