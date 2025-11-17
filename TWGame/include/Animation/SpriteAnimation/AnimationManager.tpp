template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getWalkAnimationPointer(const SoldierColor color, const SoldierDirection direction)
{
	constexpr int offSetPerColor{ 4 };
	int index{ static_cast<int>(color) * offSetPerColor };
	index += static_cast<int>(direction);

	return allWalkingAnimations[index];
}

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getIdleAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 constexpr int offSetPerColor{ 4 };
	 int index{ static_cast<int>(color) * offSetPerColor };
	 index += static_cast<int>(direction);

	 return allIdleAnimations[index];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getSitAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 constexpr int offSetPerColor{ 4 };
	 int index{ static_cast<int>(color) * offSetPerColor };
	 index += static_cast<int>(direction);

	 return allSittingAnimations[index];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getPunchAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 constexpr int offSetPerColor{ 4 };
	 int index{ static_cast<int>(color) * offSetPerColor };
	 index += static_cast<int>(direction);

	 return allPunchingAnimations[index];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getGetHitAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 constexpr int offSetPerColor{ 4 };
	 int index{ static_cast<int>(color) * offSetPerColor };
	 index += static_cast<int>(direction);

	 return allGettingHitAnimations[index];
 }

 template <size_t N>
 constexpr const std::array<DataStructures::FrameData, N>* AnimationManager<N>::getDieAnimationPointer(const SoldierColor color, const SoldierDirection direction)
 {
	 constexpr int offSetPerColor{ 4 };
	 int index{ static_cast<int>(color) * offSetPerColor };
	 index += static_cast<int>(direction);

	 return allDyingAnimations[index];
 }