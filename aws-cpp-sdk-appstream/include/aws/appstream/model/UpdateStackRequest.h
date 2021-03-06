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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/StorageConnector.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class AWS_APPSTREAM_API UpdateStackRequest : public AppStreamRequest
  {
  public:
    UpdateStackRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStack"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline UpdateStackRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline UpdateStackRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The stack name displayed to end users.</p>
     */
    inline UpdateStackRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The description displayed to end users.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description displayed to end users.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description displayed to end users.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description displayed to end users.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description displayed to end users.</p>
     */
    inline UpdateStackRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description displayed to end users.</p>
     */
    inline UpdateStackRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description displayed to end users.</p>
     */
    inline UpdateStackRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline UpdateStackRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline UpdateStackRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline UpdateStackRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The storage connectors to enable.</p>
     */
    inline const Aws::Vector<StorageConnector>& GetStorageConnectors() const{ return m_storageConnectors; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline void SetStorageConnectors(const Aws::Vector<StorageConnector>& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = value; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline void SetStorageConnectors(Aws::Vector<StorageConnector>&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors = std::move(value); }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& WithStorageConnectors(const Aws::Vector<StorageConnector>& value) { SetStorageConnectors(value); return *this;}

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& WithStorageConnectors(Aws::Vector<StorageConnector>&& value) { SetStorageConnectors(std::move(value)); return *this;}

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& AddStorageConnectors(const StorageConnector& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(value); return *this; }

    /**
     * <p>The storage connectors to enable.</p>
     */
    inline UpdateStackRequest& AddStorageConnectors(StorageConnector&& value) { m_storageConnectorsHasBeenSet = true; m_storageConnectors.push_back(std::move(value)); return *this; }


    /**
     * <p>Deletes the storage connectors currently enabled for the stack.</p>
     */
    inline bool GetDeleteStorageConnectors() const{ return m_deleteStorageConnectors; }

    /**
     * <p>Deletes the storage connectors currently enabled for the stack.</p>
     */
    inline void SetDeleteStorageConnectors(bool value) { m_deleteStorageConnectorsHasBeenSet = true; m_deleteStorageConnectors = value; }

    /**
     * <p>Deletes the storage connectors currently enabled for the stack.</p>
     */
    inline UpdateStackRequest& WithDeleteStorageConnectors(bool value) { SetDeleteStorageConnectors(value); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Vector<StorageConnector> m_storageConnectors;
    bool m_storageConnectorsHasBeenSet;

    bool m_deleteStorageConnectors;
    bool m_deleteStorageConnectorsHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
