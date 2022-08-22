/******************************************************************************
*
* Copyright (C) 2012 Ittiam Systems Pvt Ltd, Bangalore
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at:
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
******************************************************************************/
/**
 *******************************************************************************
 * @file
 *  ihevcd_intra_pred_mode_prediction.h
 *
 * @brief
 *  Contains functions for intra pred mode prediction
 *
 * @author
 *  Ittiam
 *
 * @par List of Functions:
 * - ihevcd_intra_pred_mode_prediction()
 *
 * @remarks
 *  None
 *
 *******************************************************************************
 */

#ifndef _IHEVCD_INTRA_PRED_MODE_PREDICTION_H_
#define _IHEVCD_INTRA_PRED_MODE_PREDICTION_H_
void ihevcd_intra_pred_mode_prediction(codec_t *ps_codec,
                                       WORD32 log2_cb_size,
                                       WORD32 x0,
                                       WORD32 y0);

#endif /* _IHEVCD_INTRA_PRED_MODE_PREDICTION_H_ */
