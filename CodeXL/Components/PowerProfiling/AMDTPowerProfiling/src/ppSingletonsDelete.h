//==================================================================================
// Copyright (c) 2016 , Advanced Micro Devices, Inc.  All rights reserved.
//
/// \author AMD Developer Tools Team
/// \file ppSingletonsDelete.h
///
//==================================================================================

//------------------------------ ppSingletonsDelete.h ------------------------------

#ifndef __PPSINGLETONSDELETE_H
#define __PPSINGLETONSDELETE_H

// ----------------------------------------------------------------------------------
// Class Name           ppSingletonsDelete
// General Description:
//  Deletes all the singleton objects.
//  Thus removes redundant memory leak reports.
//
//  Implementation notes:
//    We hold a single instance of this class. Its destructor is called when the
//    process that holds it terminates. This is an excellent timing to delete all the
//    existing singleton objects.
//
// Author:              Gilad Yarnitzky
// Creation Date:       11/24/2014
// ----------------------------------------------------------------------------------
class ppSingletonsDelete
{
public:
    ~ppSingletonsDelete();
};


#endif  // __PPSINGLETONSDELETE_H
