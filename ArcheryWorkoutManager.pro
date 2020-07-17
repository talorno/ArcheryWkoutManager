QT       += core gui charts sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 static

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    editor_athlete.cpp \
    editor_exercise.cpp \
    editor_meso.cpp \
    list_athletes.cpp \
    list_exercises.cpp \
    main.cpp \
    mainwindow.cpp \
    manager_workout.cpp \
    new_macro.cpp \
    new_plan.cpp \
    workout_manager.cpp

HEADERS += \
    about.h \
    editor_athlete.h \
    editor_exercise.h \
    editor_meso.h \
    list_athletes.h \
    list_exercises.h \
    mainwindow.h \
    manager_workout.h \
    new_macro.h \
    new_plan.h \
    workout_manager.h

FORMS += \
    about.ui \
    editor_athlete.ui \
    editor_exercise.ui \
    editor_meso.ui \
    list_athletes.ui \
    list_exercises.ui \
    mainwindow.ui \
    manager_workout.ui \
    new_macro.ui \
    new_plan.ui \
    workout_manager.ui

TRANSLATIONS += \
    ArcheryWorkoutManager_it_IT.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
