﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/FindingStatisticsSortAttributeName.h>
#include <aws/macie2/model/OrderBy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies criteria for sorting the results of a query for information about
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FindingStatisticsSortCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API FindingStatisticsSortCriteria
  {
  public:
    FindingStatisticsSortCriteria();
    FindingStatisticsSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    FindingStatisticsSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The grouping to sort the results by. Valid values are: count, sort the
     * results by the number of findings in each group of results; and, groupKey, sort
     * the results by the name of each group of results.</p>
     */
    inline const FindingStatisticsSortAttributeName& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The grouping to sort the results by. Valid values are: count, sort the
     * results by the number of findings in each group of results; and, groupKey, sort
     * the results by the name of each group of results.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The grouping to sort the results by. Valid values are: count, sort the
     * results by the number of findings in each group of results; and, groupKey, sort
     * the results by the name of each group of results.</p>
     */
    inline void SetAttributeName(const FindingStatisticsSortAttributeName& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The grouping to sort the results by. Valid values are: count, sort the
     * results by the number of findings in each group of results; and, groupKey, sort
     * the results by the name of each group of results.</p>
     */
    inline void SetAttributeName(FindingStatisticsSortAttributeName&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The grouping to sort the results by. Valid values are: count, sort the
     * results by the number of findings in each group of results; and, groupKey, sort
     * the results by the name of each group of results.</p>
     */
    inline FindingStatisticsSortCriteria& WithAttributeName(const FindingStatisticsSortAttributeName& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The grouping to sort the results by. Valid values are: count, sort the
     * results by the number of findings in each group of results; and, groupKey, sort
     * the results by the name of each group of results.</p>
     */
    inline FindingStatisticsSortCriteria& WithAttributeName(FindingStatisticsSortAttributeName&& value) { SetAttributeName(std::move(value)); return *this;}


    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline FindingStatisticsSortCriteria& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline FindingStatisticsSortCriteria& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    FindingStatisticsSortAttributeName m_attributeName;
    bool m_attributeNameHasBeenSet;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
