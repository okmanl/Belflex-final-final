Action()
{
 
	web_set_sockets_option("SSL_VERSION", "2&3");
 

	lr_start_transaction("1_Navigate To Position Search Tab");

	web_url("position", 
		"URL=https://staff.belflex.com//Search/position/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com/Recruiter/", 
		"Snapshot=t334.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/amd-base-url-marker.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/koBindings.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/cooltipKoBridge.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/bundles-config.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout-3.1.0.debug.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/tableSorter.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/common.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/LocalizationService.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchPage.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Tipped.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.time.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.dom.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Rx/rx.binding.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/main.js", ENDITEM, 
		"Url=/Mvc/Content/js/Utils/internationalization.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/requirejs-plugins/json.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/moment/moment.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/LinqJS/linq.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/api.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/accounting/accounting.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/seq.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/keys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dynamic.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/userSettings.js", ENDITEM, 
		"Url=/Mvc/Content/require/css.min.js", ENDITEM, 
		"Url=/Mvc/Content/js/Frame/container.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SearchResults.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize.js", ENDITEM, 
		"Url=/Mvc/Content/css/Library/library.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.common.min.css", ENDITEM, 
		"Url=/Mvc/Content/css/erecruit.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/styles/kendo.uniform.min.css", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/number.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/currency.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/plural.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/globalize/date.js", ENDITEM, 
		"Url=/Mvc/Content/require/text.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/autobind.js", ENDITEM, 
		"Url=/Mvc/Localization/LocalizationModel", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/InfoBox.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Help.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/LiveFilterService.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Criterion.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/event.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/globalization/cldr/supplemental.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Base.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Kendo/js-debug/kendo.web.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/stylesheet.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Popup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Select.js", ENDITEM, 
		"Url=/Mvc/Content/js/Base/dataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SidebarButtonsTab.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/Columns.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FtsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Status.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/Filter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/TextFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Location.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AdSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Templates/Location.SearchFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Candidate/Candidate.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Position/Position.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/PositionType.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CheckboxFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/DateRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Recruiter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Department.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SemanticSearchFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Industry.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/NotesFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ScheduledItemsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/FolderGroupsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Attachment.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ComplexRecruiterFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/Company.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Contact/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/Templates/ComplexRecruiterFilter.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Opportunity/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ClientProject.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/MoneyRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/SelectFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/PastStatusFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/SkillsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ShiftsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/CommunicationMethodsFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ParentCompany.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/CompanyDepartmentFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Company/DivisionMarketFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/DropDownFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/TimeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/common.js", ENDITEM, 
		"Url=/Mvc/Position/Statuses-all", ENDITEM, 
		"Url=/Mvc/adSource/list-all?aboutType=4", ENDITEM, 
		"Url=/Mvc/industry/list-all", ENDITEM, 
		"Url=/Mvc/adsource/allCategories", ENDITEM, 
		"Url=/Mvc/department/all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagView.js", ENDITEM, 
		"Url=//Mvc/List/GenericList_no?key=entity:Division", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedSearchButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/FolderGroup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Localization/ResourceKeys.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Search/sidebarButton.js", ENDITEM, 
		"Url=/Mvc/location/states-all", ENDITEM, 
		"Url=/Mvc/location/regions-all", ENDITEM, 
		"Url=/api/tags/getVisibleTags?aboutType=4", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/LegacyCooltipButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ExportButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Requirement/AddRequirementSidebarButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/MailingListButton.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/ScheduledItemButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Base/DeclareDataSource.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/SimpleLinkSidebarButtons.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Knockout/knockout.mapping-latest.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/DateTimePicker.js", ENDITEM, 
		"Url=/Mvc/position/CloseReasons-all", ENDITEM, 
		"Url=/Mvc/ClientProject/all", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Slider.js", ENDITEM, 
		"Url=/Mvc/positionType/AllForEntities", ENDITEM, 
		"Url=/Mvc/Content/js/BL/NoteAction.js", ENDITEM, 
		"Url=/Mvc/candidate/ClearanceLevels-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/User.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Filters/ListRangeFilter.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItem.js", ENDITEM, 
		"Url=/Mvc/Content/js/Currency/CurrencyService.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/Templates/ManageScheduledItem.css", ENDITEM, 
		"Url=/Mvc/noteaction/List-all", ENDITEM, 
		"Url=/Mvc/Currency/CurrencyModel", ENDITEM, 
		"Url=/Mvc/Company/DivisionMarkets-all", ENDITEM, 
		"Url=/Mvc/company/Types-all", ENDITEM, 
		"Url=/Mvc/currency/forLookup-all", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Skill/Skill.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Shift.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/FlagListControl.js", ENDITEM, 
		"Url=/Mvc/skill/all", ENDITEM, 
		"Url=/Mvc/shift/Statuses-all", ENDITEM, 
		"Url=/Mvc/shift/CancellationReasons-all", ENDITEM, 
		"Url=/Mvc/shift/TravelStatuses-all", ENDITEM, 
		"Url=/Mvc/shift/FolderGroups-all", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/SavedShareableItemList.js", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationCategories", ENDITEM, 
		"Url=/Mvc/CommunicationMethods/AllCommunicationtypes", ENDITEM, 
		"Url=/Mvc/Content/js/Search/Components/PopupSidebarButtonBase.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Styles/SavedShareableItemList.css", ENDITEM, 
		"Url=/Mvc/folderGroup/all", ENDITEM, 
		"Url=/Mvc/folderGroup/allCategories", ENDITEM, 
		"Url=/Mvc/folderGroup/getStatuses?aboutType=4", ENDITEM, 
		"Url=/Mvc/folderGroup/allSubcategories", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/sendSurveyDialog.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ScheduledItemModels.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/sendSurveyDialog.css", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tags/TagsSelector.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Editor.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Tasks/Sharing.js", ENDITEM, 
		"Url=/Mvc/Content/js/Search/SavedShareableItemList/Actions.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/ScheduledItem/ChoosePeople.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Sharing/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/SharedPopup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/designer.js", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/Templates/designer.css", ENDITEM, 
		"Url=/Mvc/candidate/Statuses-all", ENDITEM, 
		"Url=/Mvc/Content/js/Forms/interfaces.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/Email/Template.js", ENDITEM, 
		"Url=/Mvc/Content/js/BL/AboutTypeLookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/MultiSelect.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/ReorderableList.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Ace.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/mode-less.js", ENDITEM, 
		"Url=/Mvc/Content/js/Controls/Lookup.js", ENDITEM, 
		"Url=/Mvc/Content/js/External/Ace/ace.js", ENDITEM, 
		"Url=/Mvc/scheduledItem/AllTypes", ENDITEM, 
		"Url=/Mvc/forms/list-all", ENDITEM, 
		"Url=/Mvc/Email/Templates-all", ENDITEM, 
		"Url=/Mvc/Content/Images/icons/matches_open_disabled.png", ENDITEM, 
		LAST);
 
	web_url("Tip", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=FullTextSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t344.inf", 
		"Mode=HTML", 
		LAST); 
	web_custom_request("set", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t348.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);
 
	web_url("Tip_2", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=PrimaryDepartmentSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t373.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/Mvc/Content/images/bits/ddl.png", "Referer=https://staff.belflex.com/Mvc/Content/css/erecruit.css", ENDITEM, 
		LAST);

	web_custom_request("set_2", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t374.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);
 

	web_custom_request("set_3", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t380.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);
 

	web_custom_request("set_4", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t393.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);

	web_url("Tip_4", 
		"URL=https://staff.belflex.com/Mvc/Help/Tip/?value=CommunicationMethodSearch.FilterUI", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t394.inf", 
		"Mode=HTML", 
		EXTRARES, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZ-iXOYDUAe-wjLZFhlU4kIy2RYZVOJCMtBu27_yQjLZSQkvokIy2RYZVOJBQ=", "Referer=", ENDITEM, 
		//"Url=https://clients1.google.com/tbproxy/af/query?q=Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRMZWr0W7XUFtJcjLZFhlU4kIy2RYZVOJCMtBu27_yQjLSV6YoQkIy2RYZVOJCMtkWGVTiQjLZFhlU4kIy2RYZVOJCMtlJCS-iQjLZFhlU4kIy2RYZVOJCMtkWGVTiQU", "Referer=", ENDITEM, 
		LAST);
 
	web_custom_request("set_5", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t396.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);
 

	web_custom_request("DesignerModel", 
		"URL=https://staff.belflex.com/Mvc/Forms/DesignerModel", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t404.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=null", 
		LAST);

	web_custom_request("set_6", 
		"URL=https://staff.belflex.com/Mvc/userSettings/set", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t405.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"BucketPath\":\"Search.Position.FullPage\",\"ContainerID\":\"Search.ParameterHistory\",\"Container\":{\"LastUsedParameters\":[\"Fts\",\"Status\",\"Tags\",\"Semantic\"],\"RecentParameters\":[]}}", 
		LAST);
 
	lr_end_transaction("1_Navigate To Position Search Tab",LR_AUTO);

	lr_start_transaction("1_Search Position");
	web_reg_find("Text=Financial Services", LAST);

	web_custom_request("Search-FetchData", 
		"URL=https://staff.belflex.com/Search/position/Search-FetchData", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://staff.belflex.com//Search/position/", 
		"Snapshot=t407.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"PageSize\":20,\"Page\":0,\"Criterion\":{\"IncludeDataSources\":null,\"Arguments\":[{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Fts\",\"Value\":{\"Query\":\"Software Developer\",\"SearchIndexes\":[],\"SearchRecord\":true,\"Stemming\":false,\"Thesaurus\":false}},{\"DataSource\":\"erecruit Internal Database\",\"Parameter\":\"Status\",\"Value\":{\"Statuses\":[0,1,3,18],\"DimensionValueID\":null,\"DimensionStatuses\":null}},{\"DataSource\":\"erecruit Internal Database\",\""
		"Parameter\":\"Industry\",\"Value\":{\"IndustryIds\":[]}}]},\"GridLayout\":{\"Columns\":[{\"ID\":\"Position\"},{\"ID\":\"Company\"},{\"ID\":\"OpenMatchCount\"},{\"ID\":\"SubmittalMatchCount\"},{\"ID\":\"FullPlacementMatchCount\"},{\"ID\":\"Status\"}],\"Groups\":null,\"Sorters\":[{\"ID\":\"Position\",\"Direction\":0}],\"PageSize\":20,\"PageSizes\":[20,50,100,500,1000]}}", 
	 
		LAST);

	lr_end_transaction("1_Search Position",LR_AUTO);
 
 

	return 0;
}