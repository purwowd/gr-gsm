/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(misc_utils/extract_immediate_assignment.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(6d039be3f9b96ad6c087401633d54764)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/misc_utils/extract_immediate_assignment.h>
// pydoc.h is automatically generated in the build directory
#include <extract_immediate_assignment_pydoc.h>

void bind_extract_immediate_assignment(py::module& m)
{

    using extract_immediate_assignment    = ::gr::gsm::extract_immediate_assignment;


    py::class_<extract_immediate_assignment, gr::block, gr::basic_block,
        std::shared_ptr<extract_immediate_assignment>>(m, "extract_immediate_assignment", D(extract_immediate_assignment))

        .def(py::init(&extract_immediate_assignment::make),
           py::arg("print_immediate_assignments") = false,
           py::arg("ignore_gprs") = false,
           py::arg("unique_references") = false,
           D(extract_immediate_assignment,make)
        )
        




        
        .def("get_frame_numbers",&extract_immediate_assignment::get_frame_numbers,       
            D(extract_immediate_assignment,get_frame_numbers)
        )


        
        .def("get_channel_types",&extract_immediate_assignment::get_channel_types,       
            D(extract_immediate_assignment,get_channel_types)
        )


        
        .def("get_timeslots",&extract_immediate_assignment::get_timeslots,       
            D(extract_immediate_assignment,get_timeslots)
        )


        
        .def("get_subchannels",&extract_immediate_assignment::get_subchannels,       
            D(extract_immediate_assignment,get_subchannels)
        )


        
        .def("get_hopping",&extract_immediate_assignment::get_hopping,       
            D(extract_immediate_assignment,get_hopping)
        )


        
        .def("get_maios",&extract_immediate_assignment::get_maios,       
            D(extract_immediate_assignment,get_maios)
        )


        
        .def("get_hsns",&extract_immediate_assignment::get_hsns,       
            D(extract_immediate_assignment,get_hsns)
        )


        
        .def("get_arfcns",&extract_immediate_assignment::get_arfcns,       
            D(extract_immediate_assignment,get_arfcns)
        )


        
        .def("get_timing_advances",&extract_immediate_assignment::get_timing_advances,       
            D(extract_immediate_assignment,get_timing_advances)
        )


        
        .def("get_mobile_allocations",&extract_immediate_assignment::get_mobile_allocations,       
            D(extract_immediate_assignment,get_mobile_allocations)
        )

        ;




}








